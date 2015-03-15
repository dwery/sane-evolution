# Introduction #

SANE\_FRAME\_XML is a generic text based frame type that has a minimal
structure to handle things like barcodes and patchcodes.

Based on XML it can easily extended while maintaining compatibility.

# Elements #

## Barcodes ##
```
<barcode type="..." length="...">
<corner x="..." y="..." />
<data>.....</data>
</barcode>
```

Available barcode types are listed [here](BarcodeTypes.md)