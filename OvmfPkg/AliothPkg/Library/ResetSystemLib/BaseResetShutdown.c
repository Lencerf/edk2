/** @file
  Base Reset System Library Shutdown API implementation for OVMF.
**/
#include <Base.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/IoLib.h>
#include <Library/PciLib.h>
#include <Library/ResetSystemLib.h>
#include <OvmfPlatforms.h>
#include <IndustryStandard/Alioth.h>

VOID
EFIAPI
ResetShutdown (
  VOID
  )
{
  IoWrite8 (ALIOTH_ACPI_SHUTDOWN_IO_ADDRESS, (1 << 5)|(5 << 2));
  CpuDeadLoop ();
}
