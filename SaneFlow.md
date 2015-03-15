_taken from backend/rts8891.c_

```
   - sane_init() : initialize backend, attach scanners
   . - sane_get_devices() : query list of scanner devices
   . - sane_open() : open a particular scanner device, adding a handle
                    to the opened device
   . . - sane_set_io_mode : set blocking mode
   . . - sane_get_select_fd : get scanner fd
   . . - sane_get_option_descriptor() : get option information
   . . - sane_control_option() : change option values
   . .
   . . - sane_start() : start image acquisition
   . .   - sane_get_parameters() : returns actual scan parameters
   . .   - sane_read() : read image data
   . .
   . . - sane_cancel() : cancel operation
   . - sane_close() : close opened scanner device, freeing scanner handle
   - sane_exit() : terminate use of backend, freeing all resources for attached
                  devices
```