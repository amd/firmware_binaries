# Turin firmware

The PSP directory contains the PI 1.0.0.11 firmware used by the AMD
Purico and Titanite coreboot ports. Files use the directory type,
instance and subprogram naming convention used by Genoa.

The binaries are unchanged from the `Firmwares/Turin` directory at
openSIL/amd_firmwares commit
`f010ed961818adfbe3567d4b7a1fd433c83c6c10`. That revision's merge and
component commit identify version 1.0.0.11; its top-level README still
names the preceding 1.0.0.9 release.

`EarlyVga.bin` is unchanged from `EarlyVgaProg.bin` in the public
AMD TurinBoard platform at openSIL/amd-edk2-platforms commit
`22fd00b811a39116f46e7fd41c9922b3ebaf2f98`.

Sources:

- https://github.com/openSIL/amd_firmwares/tree/f010ed961818adfbe3567d4b7a1fd433c83c6c10/Firmwares/Turin
- https://github.com/openSIL/amd-edk2-platforms/blob/22fd00b811a39116f46e7fd41c9922b3ebaf2f98/Platform/AMD/TurinBoard/Binaries/EarlyVgaProg.bin
