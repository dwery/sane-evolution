
```
-i8 --no-space-after-function-call-names --braces-on-if-line --cuddle-else \
--honour-newlines --case-brace-indentation0
```

> You can place them in ~/.indent.pro

  * Do not use a plethora of #ifdef like in sanei/sanei\_scsi.c
  * Handle default condition appropriately in switch statements
  * [Linking](NoLink.md) against a single backend is deprecated. The dll layer should be used as it can provide support for further improvements to SANE
  * Use C99
  * Do not use alloca()
  * Use #include "xxx.h" instead of #include "../include/xxx.h"
  * Use sane\_unused to mark unused variables