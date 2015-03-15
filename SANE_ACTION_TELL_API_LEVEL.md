May be used only if SANE version is >= 1.1.0 . See QuickDevGuide.


## frontend use ##

The frontend must not make any assumption about the capabilities
of the backend unless otherwise noted. See [sane\_tell\_api\_level](sane_tell_api_level.md) and [sane\_get\_api\_level](sane_get_api_level.md).

## backend implementation ##

A backend should use the level given by the frontend to determine
if API level related features should be used.

```
        ...

        switch (action) {
        case SANE_ACTION_TELL_API_LEVEL:
                s->compat_level = *(SANE_Word *) value; /* frontend level */
                *(SANE_Word *) value = SANE_EVOLUTION_MAGIC /* protection cookie */
                break;

        ...

        if (s->compat_level >= SANE_API_LEVEL(1, 1, 0))
                ... 
```