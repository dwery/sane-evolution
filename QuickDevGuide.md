**If** a frontend wants to enable SANE Evolution features
in a backend, it will either call [sane\_tell\_api\_level](sane_tell_api_level.md) or [sane\_exchange\_api\_level](sane_exchange_api_level.md).

After that, the frontend can use the [APIHelpers](APIHelpers.md) to
access SANE Evolution features.

When in evolved mode, a frontend should make sure that it behaves
correctly if the backend returns something that was unexpected at
the time of writing, like a new SANE\_FRAME type.

You can take the coolscan3 and epson2 backends as an example.