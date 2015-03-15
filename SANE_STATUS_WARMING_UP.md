This return code might be used by a backend to inform
any [1.1.0](APIOneOneZero.md) compliant frontend that the scanner
is warming up. It might be returned by

  * [sane\_start](sane_start.md)
  * [sane\_check\_warm\_up](SANE_ACTION_CHECK_WARM_UP.md)

A compliant frontend must inform the user of the warming
up condition and retry scanning after a while.

This code must be returned only if the fronted has told
the backend that it supports [1.1.0](APIOneOneZero.md) via
[sane\_tell\_api\_level](sane_tell_api_level.md) or [sane\_exchange\_api\_level](sane_exchange_api_level.md) .