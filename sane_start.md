
```

scan:
        if (tries == 0) {
                ... warn the user ...
                return SANE_STATUS_IO_ERROR;
        }

        status = sane_start(handle);

        if (status == SANE_STATUS_WARMING_UP) {
                tries--;
                ... wait some 10/15 secs ...
                goto scan;
        }

        ...
```

Optionally an [Evolved](Evolved.md) frontend can use [sane\_check\_warm\_up](sane_check_warm_up.md) to test
the warm up condition.