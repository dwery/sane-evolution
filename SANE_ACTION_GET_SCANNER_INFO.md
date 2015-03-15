## frontend use ##

See [sane\_get\_scanner\_info](sane_get_scanner_info.md).

## backend implementation ##

```
        switch (action) {
        case SANE_ACTION_GET_SCANNER_INFO:

                SANE_Scanner_Info *si = (SANE_Scanner_Info *) value;

                strcpy(si->vendor, "Epson");
                strncpy(si->model, s->hw->model, sizeof(si->model) - 1);

                ... fill other fields ...

                return SANE_STATUS_GOOD;
```