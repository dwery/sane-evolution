## frontend use ##

A frontend should be prepared to receive this code in response
to [sane\_start](sane_start.md) . Optionally, it can check the warm up condition before scanning
using [sane\_check\_warm\_up](sane_check_warm_up.md).

## backend implementation ##

A backend MAY check the warming up condition and return
[SANE\_STATUS\_WARMING\_UP](SANE_STATUS_WARMING_UP.md) if the scanner is warming up, [SANE\_STATUS\_GOOD](SANE_STATUS_GOOD.md)
if it is not or any error as appropriate.

```
        switch (action) {
        case SANE_ACTION_CHECK_WARM_UP:
                if (scanner_is_warming_up(...)) {
                        /* optionally suggest an poll interval if
                         * the frontend has provided a valid pointer
                         */
                        if (value)
                                *value = ... ;
                        return SANE_STATUS_WARMING_UP;
                }
                else
                        return SANE_STATUS_GOOD;
```