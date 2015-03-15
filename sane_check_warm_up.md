If the returned code is [SANE\_STATUS\_WARMING\_UP](SANE_STATUS_WARMING_UP.md) the frontend
should repoll after a reasonable interval. In the event of any other
result code, the [flow](SaneFlow.md) should proceed as usual. A frontend MAY differentiate between an error condition and [SANE\_STATUS\_UNSUPPORTED](SANE_STATUS_UNSUPPORTED.md).

```
#include <sane/helper.h>

        ...

warmup:
        if (sane_has_evolved(handle, sane_version)) {
                SANE_Int interval = 2; /* default interval is two seconds */

                result = sane_check_warm_up(handle, &interval);

                if (result == SANE_STATUS_WARMING_UP)
                        ... scanner not ready, might wait and repoll
                        after the suggested interval ...
                        goto warmup;

                if (result == SANE_STATUS_GOOD || result == SANE_STATUS_UNSUPPORTED)
                        goto start;

                return result;
        }

start:

        sane_start(handle);
```

An helper function will be provided in sane/helper.h which properly implements
this and can be used in place of sane\_start() in the frontend's code. This
can be used to quickly add a functionality. An advanced frontend might want
to implement things differently in order to make sure the user is aware of the warmup
condition.

```
#include <sane/helper.h>

        ...
        sane_warm_and_start(h);
```

It should be noted that not every scanner is capable to tell that
it is warming up until the scan command is issued, so a fronted should
always be prepared to receive [SANE\_STATUS\_WARMING\_UP](SANE_STATUS_WARMING_UP.md) from sane\_start().