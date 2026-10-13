# Contributing to test-idnet-agn934xni 

Contributions to test-idnet-agn934xni are welcome from all!

test-idnet-agn934xni is managed via [git](https://git-scm.com), with the canonical upstream
repository hosted on [GitHub](https://github.com/aagrahar-ni/test-idnet-agn934xni/).

test-idnet-agn934xni follows a pull-request model for development.  If you wish to
contribute, you will need to create a GitHub account, fork this project, push a
branch with your changes to your project, and then submit a pull request.

Please remember to sign off your commits (e.g., by using `git commit -s` if you
are using the command line client). This amends your git commit message with a line
of the form `Signed-off-by: Name Lastname <name.lastmail@emailaddress.com>`. Please
include all authors of any given commit into the commit message with a
`Signed-off-by` line. This indicates that you have read and signed the Developer
Certificate of Origin (see below) and are able to legally submit your code to
this repository.

See [GitHub's official documentation](https://help.github.com/articles/using-pull-requests/) for more details.

# Getting Started

To contribute to this project, it is recommended that you follow these steps:

1. Install the prerequisites:
   - LabWindows/CVI (used to build IVI-C drivers and edit function panels).
   - [IVI Shared Components](https://www.ivifoundation.org/) and the IVI class
     specification for the driver's instrument class (e.g. IviDmm, IviScope, IviDCPwr).
   - [NI-VISA](https://www.ni.com/en/support/downloads/drivers/download.ni-visa.html)
     and NI Measurement & Automation Explorer (NI MAX).
   - LabVIEW (oldest version supported by the driver) if you need to update the LabVIEW
     wrapper.
   - [Uncrustify](https://github.com/uncrustify/uncrustify) for source formatting.
2. Fork this repository on GitHub and clone your fork locally.
3. Create a topic branch for your change, e.g. `git checkout -b users/<name>/<prefix>-<change>`.
4. The IVI-C driver source is in the `<prefix>/` folder at the root of this repository.
   A driver typically contains `<prefix>.c`, `<prefix>.h`, `<prefix>.fp`, `<prefix>.sub`,
   `<prefix>.prj`, and the folders `config/` (driver configuration XML), `documentation/`,
   `example/`, `labview/` (LabVIEW wrapper), and `test/` (unit tests).
5. Open `<prefix>.prj` in LabWindows/CVI and build it to confirm a clean starting point.
6. Make your changes following the IVI specifications (IVI-3.1, IVI-3.2 inherent
   capabilities, and the relevant class specification):
   - Implement new settings as IVI attributes with range tables and read/write/check
     callbacks, and expose them through high-level functions where appropriate.
   - Support simulation for every new attribute and function.
   - Mark public functions `_VI_FUNC` and private functions `static`; do not use unsigned
     types in the public API.
   - Build channel tables after the ID query, with model-specific tables where channel
     sets differ between models.
   - Use bounded string operations and check every VISA/IVI return status.
7. Update the function panels (`.fp`) and `.sub` file for every new or changed function or
   attribute, documenting valid values, ranges, and defaults.
8. If the API or attributes changed, update the LabVIEW wrapper in `labview/` (`.rc` file,
   `.mnu` palette files, VI tree, and icons) and save it in the oldest supported LabVIEW
   version.
9. Preserve backwards compatibility: do not rename existing functions, attributes,
   parameters, or wrapper VIs, do not reorder parameter lists, and do not change existing
   LabVIEW wrapper connector pane assignments.
10. Update the copyright year, version macros, `*_SUPPORTED_INSTRUMENT_MODELS`,
    modification history, `config/<prefix>.xml` (supported instrument models), the readme,
    and the compliance document.
11. Run Uncrustify on all modified `.c`/`.h` files, commit with sign-off (`git commit -s`),
    push to your fork, and open a pull request.

# Testing

Before submitting a pull request, verify your changes with the following steps and
summarize the results in the pull request description (instrument model, installed
options, firmware version, interfaces tested, and CVI/LabVIEW versions).

- **Build check:** Build the driver in LabWindows/CVI for both **32-bit and 64-bit**
  targets with no errors and no warnings.
- **Unit tests:** Build and run the CppUnit tests in the driver's `test/` folder and add
  tests covering new attributes and functions.
- **Hardware testing:** Test all new and existing attributes and functions against a
  real instrument, using the latest available firmware.
- **Simulation testing:** Repeat the tests with simulation enabled (e.g. option string
  `"Simulate=1"`) and confirm every new attribute and function behaves correctly without
  hardware.
- **Class driver testing:** Exercise the driver through the IVI class driver API (e.g.
  IviDmm, IviScope) to confirm interchangeability, and note supported and unsupported
  class functionality in the compliance document.
- **Option and configuration testing:** Test the instrument with and without installed
  options (check with `*OPT?`) and across different model configurations.
- **Interface testing:** Test all interfaces the instrument supports (GPIB, USB, Ethernet,
  serial). For Ethernet, test both local and remote connections and verify there are no
  timeout issues.
- **Compliance testing:** If available, run the IVI driver validation tools (Software
  Development Tools / IVI compliance tests) for both 32-bit and 64-bit and resolve all
  reported issues.
- **Examples and wrapper:** Build and run all C examples, and run the LabVIEW wrapper
  examples if the wrapper was modified.
- **Known issues:** Document any unresolved test failures in the compliance document and
  the readme under Known Issues.

# Developer Certificate of Origin (DCO)

   Developer's Certificate of Origin 1.1

   By making a contribution to this project, I certify that:

   (a) The contribution was created in whole or in part by me and I
       have the right to submit it under the open source license
       indicated in the file; or

   (b) The contribution is based upon previous work that, to the best
       of my knowledge, is covered under an appropriate open source
       license and I have the right under that license to submit that
       work with modifications, whether created in whole or in part
       by me, under the same open source license (unless I am
       permitted to submit under a different license), as indicated
       in the file; or

   (c) The contribution was provided directly to me by some other
       person who certified (a), (b) or (c) and I have not modified
       it.

   (d) I understand and agree that this project and the contribution
       are public and that a record of the contribution (including all
       personal information I submit with it, including my sign-off) is
       maintained indefinitely and may be redistributed consistent with
       this project or the open source license(s) involved.

(taken from [developercertificate.org](https://developercertificate.org/))

See [LICENSE](https://github.com/aagrahar-ni/test-idnet-agn934xni/blob/main/LICENSE.md)
for details about how test-idnet-agn934xni is licensed.
