_This list is automatically generated. Do not edit._

# hs2p (1.00) #
http://www.ricoh.com/
This backend has been tested with the IS450DE (Duplex/Endorser). All major functions necessary for scanning are supported. This backend should work with all Ricoh scanners in the IS450 family as well as the IS420 series, but the IS420 has not yet been tested. Features provided by the optional Image Processing Unit (IPU) are not yet integrated into the backend, as my scanner lacks the IPU.

| **Manufacturer** | **Model** | **Interfaces** | **USB ids** | **Status** | **Comment** | **URL** |
|:-----------------|:----------|:---------------|:------------|:-----------|:------------|:--------|
|Ricoh|[IS-420](Hs2pIS420.md)|SCSI|  |untested|  |Untested, please report!|
|Ricoh|[IS-410](Hs2pIS410.md)|SCSI|  |untested|  |Untested, please report!|
|Ricoh|[IS-430](Hs2pIS430.md)|SCSI|  |untested|  |Untested, please report!|
|Ricoh|[IS450](Hs2pIS450.md)|SCSI|  |complete|  |All major scanning-related features are supported (except for IPU). Certain non-scanning features, such as those related to scanner maintenance, are not supported. Such features would be better implemented in a separate stand-alone tool. For instance, if you replace the ADF Unit, you must recalibrate the scanner optics using a Ricoh Test Sheet and reset the E^2PROM registers. Reports are welcome.|