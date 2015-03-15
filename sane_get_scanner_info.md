Used by a frontend to fetch scanner information.
It's an interface to [SANE\_ACTION\_GET\_SCANNER\_INFO](SANE_ACTION_GET_SCANNER_INFO.md).

```
#include <sane/helper.h>

        SANE_Scanner_Info si;

        sane_init(&sane_version, NULL);
        ...
        sane_open(..., &handle);
        ....

        if(sane_has_evolved(handle, sane_version))
                sane_get_scanner_info(handle, &si);
```