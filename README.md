# agn934xni IVI-C Instrument Driver

IVI-C specific instrument driver for the agn934xni.

| | |
|---|---|
| **Driver type** | IVI-C |
| **Source folder** | [`agn934xni/`](agn934xni/) |
| **Manufacturer** | TODO |
| **IVI instrument class** | TODO: e.g. IviDmm, IviScope, IviDCPwr |
| **Driver version** | TODO |
| **Certification** | NI Certified |

## Supported Instruments

- TODO: list supported models.

## Supported Interfaces

- TODO: e.g. GPIB, USB, Ethernet (LAN/LXI), Serial.

## Requirements

- LabWindows/CVI TODO: minimum version or later
- [IVI Compliance Package / IVI Shared Components](https://www.ivifoundation.org/)
- [NI-VISA](https://www.ni.com/en/support/downloads/drivers/download.ni-visa.html)
- Windows (32-bit and 64-bit)
- LabVIEW TODO: minimum version or later (only for the LabVIEW wrapper)

## Repository Layout

```
agn934xni/
├── <prefix>.c / .h / .fp / .sub / .prj   Driver source, function panels, project
├── config/          Driver configuration (supported models)
├── documentation/   Help and compliance documents
├── example/         Example programs
├── labview/         LabVIEW wrapper
└── test/            Unit tests
```

## Getting Started

1. Install LabWindows/CVI, the IVI Shared Components, and NI-VISA.
2. Clone this repository, or download it as a ZIP from the latest release.
3. Open `<prefix>.prj` from [`agn934xni/`](agn934xni/) in LabWindows/CVI and build it.
4. Create a logical name or driver session in NI MAX (or pass a VISA resource name
   directly to `<prefix>_InitWithOptions`). Use `Simulate=1` in the option string to try
   the driver without hardware. See the example programs in `example/`.

## Known Issues

- TODO: list known issues, or "None".

## Support

Report driver bugs and feature requests through [GitHub Issues](https://github.com/aagrahar-ni/test-idnet-agn934xni/issues).

## Contributing

Contributions are welcome. See [CONTRIBUTING.md](CONTRIBUTING.md).

## Security

See [SECURITY.md](SECURITY.md). Do not report security vulnerabilities through public GitHub issues.

## License

See [LICENSE.md](LICENSE.md).
