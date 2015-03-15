Used by a frontend to tell a backend the supported API level.
It's an interface to [SANE\_ACTION\_TELL\_API\_LEVEL](SANE_ACTION_TELL_API_LEVEL.md).

```
#include <sane/helper.h>

        sane_init(&sane_version, NULL);
        ...
        sane_open(..., &handle);
        ....

        if(sane_has_evolved(handle, sane_version))
                sane_tell_api_level(handle, SANE_API(1, 1, 0));
```