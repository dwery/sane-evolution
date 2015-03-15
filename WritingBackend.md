(Slowly being compiled from doc/backend-writing.txt)

## Getting started ##

## Configuration and build system ##

## Directory overview ##

## Programming ##

  * A backend library is always only one file (libsane-backendname.so). Please do not use multiple libraries e.g. for lower and higher level code. You are, however, encouraged to use multiple source files if appropriate.

  * To add the backend to the existing SANE code, the following must be done at least:
```
    - add the backend name to BACKENDS in configure.in (and rerun autogen.sh)
    - add any parts of SANE that are used in the backend in
      backend/Makefile.in. E.g., for the backend "newbackend" that uses
      sanei_usb code:
           libsane-newbackend.la: ../sanei/sanei_usb.lo
      See the lines near the end of Makefile.in for examples.
    - Add the source code files to the backend/ directories. All file names must
      start with the backend name (e.g. newbackend.c, newbackend.h and
      newbackend-usb.c). 
```

  * Include sanei\_backend.h after the other includes.
  * Declare the BACKEND\_XXX defines as the example:
```
#define BACKEND_NAME epson2
#define BACKEND_VERSION "1.1.16"
#define BACKEND_VERSION_MAJOR 1
#define BACKEND_VERSION_MINOR 1
#define BACKEND_VERSION_REVISION 16
#define BACKEND_CONFIG_FILE "epson2.conf"
```
  * The version number has no particular meaning.

## Testing ##

## Documentation ##

## Submitting ##

## Including into SVN ##