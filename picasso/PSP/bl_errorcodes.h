/*****************************************************************************
 *
 * Copyright 2016 - 2018 ADVANCED MICRO DEVICES, INC.  All Rights Reserved.
 *
 * AMD is granting you permission to use this software and documentation (if
 * any) (collectively, the "Materials") pursuant to the terms and conditions of
 * the Software License Agreement included with the Materials.  If you do not
 * have a copy of the Software License Agreement, contact your AMD
 * representative for a copy.
 *
 * You agree that you will not reverse engineer or decompile the Materials, in
 * whole or in part, except as allowed by applicable law.
 *
 * WARRANTY DISCLAIMER:  THE MATERIALS ARE PROVIDED "AS IS" WITHOUT WARRANTY OF
 * ANY KIND.  AMD DISCLAIMS ALL WARRANTIES, EXPRESS, IMPLIED, OR STATUTORY,
 * INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE, NON-INFRINGEMENT, THAT THE
 * MATERIALS WILL RUN UNINTERRUPTED OR ERROR-FREE OR WARRANTIES ARISING FROM
 * CUSTOM OF TRADE OR COURSE OF USAGE.  THE ENTIRE RISK ASSOCIATED WITH THE USE
 * OF THE MATERIAL IS ASSUMED BY YOU.  Some jurisdictions do not allow the
 * exclusion of implied warranties, so the above exclusion may not apply to
 * You.
 *
 * LIMITATION OF LIABILITY AND INDEMNIFICATION:  AMD AND ITS LICENSORS WILL
 * NOT, UNDER ANY CIRCUMSTANCES BE LIABLE TO YOU FOR ANY PUNITIVE, DIRECT,
 * INCIDENTAL, INDIRECT, SPECIAL OR CONSEQUENTIAL DAMAGES ARISING FROM USE OF
 * THE MATERIALS OR THIS AGREEMENT EVEN IF AMD AND ITS LICENSORS HAVE BEEN
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.  In no event shall AMD's total
 * liability to You for all damages, losses, and causes of action (whether in
 * contract, tort (including negligence) or otherwise) exceed the amount of
 * $100 USD. You agree to defend, indemnify and hold harmless AMD and its
 * licensors, and any of their directors, officers, employees, affiliates or
 * agents from and against any and all loss, damage, liability and other
 * expenses (including reasonable attorneys' fees), resulting from Your use of
 * the Materials or violation of the terms and conditions of this Agreement.
 *
 * U.S. GOVERNMENT RESTRICTED RIGHTS:  The Materials are provided with
 * "RESTRICTED RIGHTS." Use, duplication, or disclosure by the Government is
 * subject to the restrictions as set forth in FAR 52.227-14 and
 * DFAR252.227-7013, et seq., or its successor.  Use of the Materials by the
 * Government constitutes acknowledgment of AMD's proprietary rights in them.
 *
 * EXPORT RESTRICTIONS: The Materials may be subject to export restrictions as
 * stated in the Software License Agreement.
 *******************************************************************************
 */

#ifndef _BL_ERRORCODES_H_
#define _BL_ERRORCODES_H_

// Bootloader Return Codes, Error only (0x00 through 0x9F)
typedef enum BL_RETCODE_T
{
    BL_OK                               = 0x00,  // General - Success

    BL_ERR_GENERIC                      = 0x01,  // Generic Error Code
    BL_ERR_MEMORY                       = 0x02,  // Generic Memory Error
    BL_ERR_BUFFER_OVERFLOW              = 0x03,  // Buffer Overflow
    BL_ERR_INVALID_PARAMETER            = 0x04,  // Invalid Parameter(s)
    BL_ERR_DATA_LENGTH                  = 0x05,  // Invalid Data Length
    BL_ERR_DATA_ALIGNMENT               = 0x06,  // Data Alignment Error
    BL_ERR_NULL_PTR                     = 0x07,  // Null Pointer Error
    BL_ERR_FUNCTION_NOT_SUPPORTED       = 0x08,  // Unsupported Function
    BL_ERR_INVALID_SERVICE_ID           = 0x09,  // Invalid Service ID
    BL_ERR_INVALID_ADDRESS              = 0x0A,  // Invalid Address
    BL_ERR_OUT_OF_RESOURCES             = 0x0B,  // Out of Resource Error
    BL_ERR_TIMEOUT                      = 0x0C,  // Timeout
    BL_ERR_DATA_ABORT                   = 0x0D,  // data abort exception
    BL_ERR_PREFETCH_ABORT               = 0x0E,  // prefetch abort exception
    BL_ERR_BOUNDARY_CHECK               = 0x0F,  // Out of Boundary Condition Reached
    BL_ERR_DATA_CORRUPTION              = 0x10, // Data corruption
    BL_ERR_INVALID_COMMAND              = 0x11, // Invalid command
    BL_ERR_INCORRECT_PACKAGE_TYPE		= 0x12, // The package type provided by BR is incorrect
    BL_ERR_GET_FW_HEADER              	= 0x13, // Failed to retrieve FW header during FW validation
    BL_ERR_KEY_SIZE                   	= 0x14, // Key size not supported
    BL_ERR_AGESA0                     	= 0x15, // Agesa0 verification error
    BL_ERR_SMUFW                      	= 0x16, // SMU FW verification error
    BL_ERR_OEMSIGNING                 	= 0x17, // OEM SINGING KEY verification error
    BL_ERR_FWVALIDATION               	= 0x18, // Generic FW Validation error
    BL_ERR_CCP_RSA                    	= 0x19, // RSA operation fail - bootloader
    BL_ERR_CCP_PASSTHR                	= 0x1A, // CCP Passthrough operation failed - internal status
    BL_ERR_CCP_AES                    	= 0x1B, // AES operation fail
	BL_ERR_STATE_SAVE				    = 0x1C, // CCP state save failed
	BL_ERR_STATE_RESTORE			    = 0x1D, // CCP state restore failed
    BL_ERR_SHA256                     	= 0x1E, // SHA256 operation fail - internal status
    BL_ERR_ZLIB                       	= 0x1F, // ZLib Decompression operation fail
    BL_ERR_HMAC_SHA256                	= 0x20, // HMAC-SHA256 operation fail - internal status
    BL_ERR_INVALID_BOOT_SOURCE        	= 0x21, // Booted from boot source not recognized by PSP
    BL_ERR_DIR_ENTRY_NOT_FOUND        	= 0x22, // PSP directory entry not found
    BL_ERR_SPIROM_WRITE_FAIL          	= 0x23, // PSP failed to set the write enable latch
    BL_ERR_SPIROM_BUSY_TIMEOUT        	= 0x24, // PSP timed out because spirom took too long
    BL_ERR_CANNOT_FIND_BIOS_DIR       	= 0x25, // Cannot find BIOS directory
    BL_ERR_SPIROM_SIZE                	= 0x26, // SpiRom is not valid
    BL_ERR_SECURITY_STATE_DIFF        	= 0x27, // slave die has different security state from master
    BL_ERR_SMI_INIT_ERROR             	= 0x28, // SMI interface init failure
    BL_ERR_SMI_GENERIC                	= 0x29, // SMI interface generic error
    BL_ERR_INVALID_DIE_ID             	= 0x2A, // invalid die ID executes MCM related function
	BL_ERR_INVALID_MCM_CONFIG			= 0x2B, // invalid MCM configuration table read from bootrom
	BL_ERR_DETECT_BOOT_MODE				= 0x2C,	// Valid boot mode wasn't detected
    BL_ERR_NVSTORAGE_INIT_FAILURE     	= 0x2D, // NVStorage init failure
    BL_ERR_NVSTORAGE_GENERIC          	= 0x2E, // NVStorage generic error
    BL_ERR_MCM_MORE_DATA				= 0x2F, // MCM 'error' to indicate slave has more data to send
    BL_ERR_MCM_DATA_LENGTH				= 0x30, // MCM error if data size exceeds 32B
    BL_ERR_MCM_INVALID_ID				= 0x31, // Invalid client id for SVC MCM call
    BL_ERR_MCM_INVALID_STATE			= 0x32, // MCM slave status register contains bad bits
    BL_ERR_MCM_NO_SLAVES				= 0x33, // MCM call was made in a single die environment
    BL_ERR_PSP_SECURE_MAP				= 0x34, // PSP secure mapped to invalid segment (should be 0x400_0000)
    BL_ERR_NO_PHY_CORES_PRESENT			= 0x35, // No physical x86 cores were found on die
    BL_ERR_SECURE_OS_INSUF_SRAM			= 0x36, // Insufficient space for secure OS (range of free SRAM to SVC stack base)
    BL_ERR_UNSUP_SYSHUB_TARGET_TYPE 	= 0x37, // SYSHUB mapping memory target type is not supported
    BL_ERR_UNMAP_PSP_SECURE_REGION		= 0x38, // Attempt to unmap permanently mapped TLB to PSP secure region
    BL_ERR_SMNMAP_FAILED				= 0x39, // Unable to map an SMN address to AXI space
    BL_ERR_SYSHUBMAP_FAILED				= 0x3A, // Unable to map a SYSHUB address to AXI space
    BL_ERR_CORECONFIG_COUNT_MISMATCH	= 0x3B, // The count of CCXs or cores provided by bootrom is not consistent
    BL_ERR_UNCOMP_IMAGE_SIZE_MISMATCH	= 0x3C, // Uncompressed image size doesn't match value in compressed header
	BL_ERR_UNSUPPORTED_COMP_OPTION		= 0x3D, // Compressed option used in case where not supported
	BL_ERR_FUSE_INFO                    = 0x3E, // Fuse info on all dies don't match
    BL_ERR_PSP_SMU_MSG_FAIL             = 0x3F, // PSP sent message to SMU; SMU reported an error
    BL_ERR_POST_X86_RELEASE_TEST_FAIL   = 0x40, // Function RunPostX86ReleaseUnitTests failed in memcmp()
    BL_ERR_PSP_SMU_INTERFACE            = 0x41, // Interface between PSP to SMU not available.
    BL_ERR_TIMER_PARAM_OVERFLOW			= 0x42, // Timer wait parameter too large
    BL_ERR_TEST_HARNESS_MODULE          = 0x43, // Test harness module reported an error
    BL_ERR_VMG_INVALID_COMMAND 		    = 0x44, // x86 wrote C2PMSG_0 interrupting PSP, but the command has an
                                                // invalid format
	BL_ERR_L3CT_BLOCK_WRITE_FAILED		= 0x45, // A write to an L3 register failed, as read-back did not match
    BL_ERR_WARM_SRAMHMAC_FAIL           = 0x46, // validation of the PSP SRAM image failed on HMAC
                                                // compare
    BL_ERR_MINI_BL_HMAC_UNIT_TEST_FAIL  = 0x47, // Mini-BL CCP HMAC Unit-test failed
    BL_ERR_JUMP_MINI_BL_STACK_OVERFLOW  = 0x48, // Potential stack corruption in jump to Mini BL
    BL_ERR_LOAD_VALIDATE_APOB           = 0x49, // Error in Validate and Loading AGESA APOB SVC call
    BL_ERR_DIAG_BL_FUSES                = 0x4A, // Correct fuse bits for DIAG_BL loading not set
    BL_ERR_UMC_NOT_INIT_BY_AGESA        = 0x4B, // The UmcProgramKeys() function was not called by AGESA
    BL_ERR_SECURE_UNLOCK_FAIL           = 0x4C, // Secure unlock error
    BL_ERR_SYSHUBIF_REG_MISMATCH		= 0x4D, // Syshub register programming mismatch during readback
    BL_ERR_SECURE_FUSE_FAMILY_ID        = 0x4E, // Family ID in MP0_SFUSE_SEC[7:3] not correct
    BL_ERR_NOT_GLOBAL_MASTER			= 0x4F, // An operation was invoked that can only be performed by the GM
    BL_ERR_SMB_TIMEOUT_ACQR_HOST_SEMA	= 0x50, // Failed to acquire host controller semaphore to claim ownership of SMB
	BL_ERR_SMB_TIMEOUT_WAIT_HOST_IDLE	= 0x51, // Timed out waiting for host to complete pending transactions
	BL_ERR_SMB_TIMEOUT_WAIT_SLAVE_IDLE	= 0x52, // Timed out waiting for slave to complete pending transactions
	BL_ERR_SMB_HOST_BUSY				= 0x53, // Unable to kill current transaction on host, to force idle
	BL_ERR_SMB_DEVICE_ERROR           	= 0x54, // One of: Illegal command, Unclaimed cycle, or Host time out
	BL_ERR_SMB_BUS_COLLISION			= 0x55, // An smbus transaction collision detected, operation restarted
	BL_ERR_SMB_TRANSACTION_FAILED		= 0x56,	// Transaction failed to be started or processed by host, or not completed
	BL_ERR_SMB_UNSOLICITED_INTR_RX		= 0x57,	// An unsolicited smbus interrupt was received
	BL_ERR_PSP_SMU_UNSUPPORTED_MSG		= 0x58, // An attempt to send an unsupported PSP-SMU message was made
	BL_ERR_PSP_SMU_CORRUPTED_TXFR		= 0x59, // An error/data corruption detected on response from SMU for sent msg
    BL_ERR_MCM_STEADY_UNIT_TEST_FAILED  = 0x5A, // MCM Steady-state unit test failed
    BL_ERR_S3_ENTER_FAILED              = 0x5B, // S3 Enter failed
    BL_ERR_PSP_SMU_RESERVED_NOT_SET     = 0x5C, // AGESA BL did not set PSP SMU reserved addresses via SVC call
    BL_ERR_PSP_SMU_RESERVED_INVALID     = 0x5D,
    BL_ERR_UNFUSED_PART                 = 0x5E, // CcxSecBisiEn not set in fuse RAM
    BL_ERR_UNIT_TEST_UNEXPECTED_RESULT  = 0x5F, // Received an unexpected result
    BL_ERR_SECURITY_GASKET              = 0x60, // Error with applying security gasket
    BL_ERR_MP2_FW_RESPONSE              = 0x61, // MP2 FW provides error response in the message register
    BL_ERR_FUSE_SMN_MAPPING_FAILED      = 0x62, // An error occured whilst attempting to SMN map a fuse register
    BL_ERR_FUSE_BURN_FAILED_SOC         = 0x63, // Fuse burn sequence/operation failed due to internal SOC error
    BL_ERR_FUSE_SENSE_TIMEOUT           = 0x64, // Fuse sense operation timed out
    BL_ERR_FUSE_BURN_FAILED_TIMEOUT     = 0x65, // Fuse burn sequence/operation timed out waiting for burn done
    BL_ERR_SECURE_OS_REVOKED            = 0x66, // Failure status indicating that the given SecureOS has been
                                                // revoked by the current PSP BL.
    BL_ERR_FUSE_FW_ID_REVOKED           = 0x67, // This PSP FW was revoked
    BL_ERR_PLATFORM_ID                  = 0x68, // The platform model/vendor id fuse is not matching the BIOS public key token
    BL_ERR_BIOS_KEY_REV_ID              = 0x69, // The BIOS OEM public key of the BIOS was revoked for this platform

    BL_ERR_DIAGBL_NOT_PRESENT           = 0X6A, // The Diag Bootloader is not present in SPI-ROM
    BL_ERR_DIAG_BL_SEQUENCE             = 0x6B, // Failed to load PSP Diag BL

	BL_ERR_POSTCODE_MAX_VALUE			= 0x9F, // The maximum allowable error post code
} BL_RETCODE;

// Bootloader Return Codes, Success only (0xA0 through 0xFF)
typedef enum BL_TRACECODE_T
{
    BL_SUCCESS_C_MAIN                   = 0xA0, // Bootloader successfully entered C Main
    BL_SUCCESS_MCM_INIT                 = 0xA1, // Master initialized C2P / slave waited for master to init C2P
    BL_SUCCESS_DERIVE_HMAC_KEY          = 0xA2, // HMAC key successfully derived
    BL_SUCCESS_DETECT_BOOT_MODE         = 0xA3, // Master got Boot Mode and sent boot mode to all slaves
    BL_SUCCESS_SPI_INIT                 = 0xA4, // SpiRom successfully initialized
    BL_SUCCESS_COPY_BIOS_DIRECTORY      = 0xA5, // BIOS Directory successfully read from SPI to SRAM
    BL_SUCCESS_CHECK_EARLY_UNLOCK       = 0xA6, // Early unlock check
    BL_SUCCESS_DERIVE_INLINE_AES_KEY    = 0xA7, // Inline Aes key successfully derived
    BL_SUCCESS_INLINE_AES_KEY_PROGRAM   = 0xA8, // Inline-AES key programming is done
    BL_SUCCESS_INLINE_AES_KEY_WRAPPER   = 0xA9, // Inline-AES key wrapper derivation is done
    BL_SUCCESS_IP_CONFIG                = 0xAA, // Bootloader successfully loaded HW IP configuration values
    BL_SUCCESS_MBAT_PROGRAMMING         = 0xAB, // Bootloader successfully programmed MBAT table
    BL_SUCCESS_SECURITY_GASKET          = 0xAC, // Bootloader successfully configured security gasket
    BL_SUCCESS_LOAD_SMU                 = 0xAD, // Bootloader successfully loaded SMU FW
    BL_SUCCESS_PSP_SMU_CONFIG_WAFL      = 0xAE, // PSP and SMU configured WAFL
    BL_SUCCESS_LOAD_MP2                 = 0xAF, // Bootloader successfully loaded MP2 FW
    BL_SUCCESS_START_AGESA              = 0xB0, // Bootloader loaded Agesa0 from SpiRom
    BL_SUCCESS_FINISHED_AGESA           = 0xB1, // AGESA phase has completed
    BL_SUCCESS_POST_DRAM_TESTS          = 0xB2, // RunPostDramTrainingTests() completed successfully
    BL_SUCCESS_LOAD_SMU_FW_TO_DRAM      = 0xB3, // SMU FW Successfully loaded to SMU Secure DRAM
    BL_SUCCESS_PSP_SMU_SENT_ALL_CMDS  	= 0xB4, // Sent all required boot time messages to SMU
    BL_SUCCESS_RUN_SECURITY_GASKET      = 0xB5, // Validated and ran Security Gasket binary
    BL_SUCCESS_UMC_SECURITY_INIT        = 0xB6, // UMC Keys generated and programmed
    BL_SUCCESS_STORE_WRAPPED_KEY        = 0xB7, // Inline AES key wrapper stored in DRAM
    BL_SUCCESS_VALIDATED_OEM_KEY        = 0xB8, // Completed FW Validation step
    BL_SUCCESS_VALIDATED_BIOS_RST       = 0xB9, // Completed FW Validation step
    BL_SUCCESS_LOADING_BIOS_COMPONENTS  = 0xBA, // BIOS copy from SPI to DRAM complete
    BL_SUCCESS_VALIDATED_BIOS           = 0xBB, // Completed FW Validation step
	BL_SUCCESS_BIOS_LOAD_COMPLETE		= 0xBC, // BIOS load process fully complete
    BL_SUCCESS_RELEASE_X86              = 0xBD, // Bootloader successfully release x86
    BL_SUCCESS_NORMAL_UNLOCK            = 0xBE, // Early Secure Debug completed
	BL_SUCCESS_GET_VERSION_COMMAND		= 0xBF,	// GetFWVersion command received from BIOS is completed
	BL_SUCCESS_SMI_INFO_COMMAND		    = 0xC0,	// SMIInfo command received from BIOS is completed
	BL_SUCCESS_ENTER_WARM_BOOT		    = 0xC1,	// Successfully entered WarmBootResume()
	BL_SUCCESS_COPIED_SECURE_OS_SRAM	= 0xC2,	// Successfully copied SecureOS image to SRAM
	BL_SUCCESS_COPIED_TRUSTLETS_DRAM	= 0xC3,	// Successfully copied trustlets to PSP Secure Memory
	BL_SUCCESS_JUMPING_TO_SECURE_OS	    = 0xC4,	// About to jump to Secure OS (SBL about to copy and jump)
    BL_SUCCESS_RESTORED_CCP_STATE       = 0xC5, // Successfully restored CCP and UMC state on S3 resume
    BL_SUCCESS_WARM_MB_SRAMHMAC_PASS    = 0xC6, // PSP SRAM HMAC validated by Mini BL
    BL_SUCCESS_WARM_MB_TRANSFER2OS      = 0xC7, // About to jump to <t-base in Mini BL
    BL_SUCCESS_VMG_ECDH_UNIT_TEST_START = 0xC8, // VMG ECDH unit test started
    BL_SUCCESS_VMG_ECDH_UNIT_TEST_PASS  = 0xC9, // VMG ECDH unit test passed
    BL_SUCCESS_VMG_ECC_CDH_TEST_START   = 0xCA, // VMG ECC CDH primitive unit test started
    BL_SUCCESS_VMG_ECC_CDH_TEST_PASS    = 0xCB, // VMG ECC CDH primitive unit test passed
    BL_SUCCESS_VMG_KDF_TEST_START       = 0xCC, // VMG SP800-108 KDF-CTR HMAC unit test started
    BL_SUCCESS_VMG_KDF_TEST_PASS        = 0xCD, // VMG SP800-108 KDF-CTR HMAC unit test passed
    BL_SUCCESS_VMG_LAUNCH_TEST_START    = 0xCE, // VMG LAUNCH_* test started
    BL_SUCCESS_VMG_LAUNCH_TEST_PASS     = 0xCF, // VMG LAUNCH_* test passed
    BL_SUCCESS_MP1_RESET_COMPLETE		= 0xD0, // MP1 has been taken out of reset, and executing SMUFW
    BL_SUCCESS_PSP_SMU_RESERVED_PROG    = 0xD1, // PSP and SMU Reserved Addresses correct
    BL_SUCCESS_NAPLES_STEADY_STATE      = 0xD2, // Reached Naples steady-state WFI loop

    //TODO: INQUIRE TO SMU TEAM IF THEY WILL HANDLE MILESTONE_CTR ON RV LIKE THEY DO ON ZP
    BL_SUCCESS_MILESTONE_CTR_START      = 0xD3, // Reached Naples steady-state WFI loop
    BL_SUCCESS_MILESTONE_CTR_COMPLETE   = 0xD4, // Reached Naples steady-state WFI loop

    //Diag Bootloader
    BL_SUCCESS_COPIED_DIAG_BL_DRAM      = 0xD5, //Successfully load Diag Bootloader into DRAM

    //
    BL_CHECKED_MP2_DISABLED             = 0xE0, // MP2 Block is disabled in MP2_RSMU_FUSESTRAPS

    BL_SUCCESS_BOOT_DONE                = 0xFF, // Bootloader sequence finished
} BL_TRACECODE;

#endif // _BL_ERRORCODES_H_

