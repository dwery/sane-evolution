# User visible changes #

## Handling of warming up condition ##

The backend can now tell to the frontend that the scanner is warming
up. This is currently supported by the epson2 backend.

## More scanner information to frontends ##

A frontend can retrieve information about the scanner,
i.e. vendor, model, revision and serial number. Supported by
tiffscan and epson2 and coolscan3 backends.

## Infrared support ##

Given that new frame types are available, tiffscan can
use the coolscan3 driver to scan in RGB+infrared.

# Details for developers #

API details [here](APIOneOneZero.md).

## API protection ##

Incompatible features will be developed around a protection framework
that allows existing frontends to work nicely with the new, improved,
1.1 backends.

Newer frontends can choice to support the 1.1 API and benefit from
the new features we are going to introduce.

## Frame types ##

Newer frame times have been introduced and protected by the API level
framework. [SANE\_FRAME\_TEXT](SANE_FRAME_TEXT.md) has been obsoleted and replaced by
[SANE\_FRAME\_XML](SANE_FRAME_XML.md) which will be fully doumented in this wiki. Other
new frame types will be documented as well.

## Coding style and rules ##

A few coding guidelines and rules have been set in place. You
can give them a look at CodingGuidelines .