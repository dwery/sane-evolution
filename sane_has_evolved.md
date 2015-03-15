Used by a frontend to check if the underlaying sane library
is indeed an avolved one.

```
#include <sane/helper.h>

        sane_init(&sane_version, NULL);
        ...
        sane_open(..., &handle);
        ....

        if(sane_has_evolved(handle, sane_version))
		evolved = 1;

	...

	if (evolved) {
		... do dirty things ...
	}
```