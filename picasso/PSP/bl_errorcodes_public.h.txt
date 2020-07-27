/*****************************************************************************
 *
 * Copyright (c) 2020, Advanced Micro Devices, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Advanced Micro Devices, Inc. nor the names of
 *       its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ADVANCED MICRO DEVICES, INC. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ***************************************************************************/

#ifndef BL_ERRORCODES_H
#define BL_ERRORCODES_H

// Bootloader Return Codes, Error only (0x00 through 0x9F)
typedef enum BL_RETCODE_T
{
    BL_OK                                   = 0x00, // General - Success

    BL_ERR_GENERIC                          = 0x01, // Generic Error Code
    BL_ERR_MEMORY                           = 0x02, // Generic Memory Error
    BL_ERR_BUFFER_OVERFLOW                  = 0x03, // Buffer Overflow
    BL_ERR_INVALID_PARAMETER                = 0x04, // Invalid Parameter(s)
    BL_ERR_DATA_LENGTH                      = 0x05, // Invalid Data Length
    BL_ERR_DATA_ALIGNMENT                   = 0x06, // Data Alignment Error
    BL_ERR_NULL_PTR                         = 0x07, // Null Pointer Error
    BL_ERR_FUNCTION_NOT_SUPPORTED           = 0x08, // Unsupported Function
    BL_ERR_INVALID_SERVICE_ID               = 0x09, // Invalid Service ID
    BL_ERR_INVALID_ADDRESS                  = 0x0A, // Invalid Address
    BL_ERR_OUT_OF_RESOURCES                 = 0x0B, // Out of Resource Error
    BL_ERR_TIMEOUT                          = 0x0C, // Timeout
    BL_ERR_DATA_ABORT                       = 0x0D, // Data Abort exception
    BL_ERR_PREFETCH_ABORT                   = 0x0E, // Prefetch Abort exception
    BL_ERR_BOUNDARY_CHECK                   = 0x0F, // Out of boundary condition reached
    BL_ERR_DATA_CORRUPTION                  = 0x10, // Data corruption
    BL_ERR_UNKNOWN_ASIC                     = 0x11, // Unknown ASIC type
    BL_ERR_RESERVED_12		                = 0x12,
    BL_ERR_GET_FW_HEADER              	    = 0x13, // Failure in retrieving firmware header
    BL_ERR_KEY_SIZE                   	    = 0x14, // Key size not supported
    BL_ERR_ENTRY_NOT_FOUND                  = 0x15, // Entry not found at requested location
    BL_ERR_UNSUPPORTED_PLATFORM             = 0x16, // Error when feature is not enabled on a given platform.
    BL_ERR_RESERVED_17                 	    = 0x17,
    BL_ERR_FWVALIDATION               	    = 0x18, // Generic FW Validation error
    BL_ERR_CCP_RSA                    	    = 0x19, // RSA operation fail - bootloader
    BL_ERR_CCP_PASSTHR                	    = 0x1A, // CCP Passthrough operation failed
    BL_ERR_CCP_AES                    	    = 0x1B, // AES operation failed
	BL_ERR_RESERVED_1C				        = 0x1C,
	BL_ERR_STATE_RESTORE			        = 0x1D, // CCP state restore failed
    BL_ERR_SHA                     	        = 0x1E, // SHA256/SHA384 operation failed
    BL_ERR_ZLIB                       	    = 0x1F, // ZLib Decompression operation fail
    BL_ERR_HMAC_SHA256                	    = 0x20, // HMAC-SHA256 operation fail - internal status
    BL_ERR_INVALID_BOOT_SOURCE        	    = 0x21, // Booted from boot source not recognized by PSP
    BL_ERR_DIR_ENTRY_NOT_FOUND        	    = 0x22, // PSP directory entry not found
    BL_ERR_SPIROM_WRITE_FAIL          	    = 0x23, // PSP failed to set the write enable latch
    BL_ERR_SPIROM_BUSY_TIMEOUT        	    = 0x24, // PSP timed out because spirom took too long
    BL_ERR_HMAC_VALIDATION    	            = 0x25, // General - Hmac validation failed
    BL_ERR_MISMATCH_SEC_POL_BIN    	        = 0x26, // Security_Policy binary does not match to ASIC
    BL_ERR_RESERVED_27        	            = 0x27,
    BL_ERR_RESERVED_28             	        = 0x28,
    BL_ERR_RESERVED_29                	    = 0x29,
    BL_ERR_RESERVED_2A             	        = 0x2A,
	BL_ERR_RESERVED_2B			            = 0x2B,
	BL_ERR_DETECT_BOOT_MODE				    = 0x2C,	// Valid boot mode wasn't detected
    BL_ERR_WHITE_LISTING                    = 0x2D, // Unconditional unlock based on serial numbers failed
    BL_ERR_RESERVED_2E         	            = 0x2E,
    BL_ERR_RESERVED_2F				        = 0x2F,
    BL_ERR_RESERVED_30				        = 0x30,
    BL_ERR_RESERVED_31				        = 0x31,
    BL_ERR_RESERVED_32			            = 0x32,
    BL_ERR_RESERVED_33				        = 0x33,
    BL_ERR_RESERVED_34				        = 0x34,
    BL_ERR_NO_PHY_CORES_PRESENT			    = 0x35, // No physical x86 cores were found on die
    BL_ERR_RESERVED_36			            = 0x36,
    BL_ERR_UNSUP_SYSHUB_TARGET_TYPE 	    = 0x37, // SYSHUB mapping memory target type is not supported
    BL_ERR_UNMAP_PSP_SECURE_REGION		    = 0x38, // Attempt to unmap permanently mapped TLB to PSP secure region
    BL_ERR_SMNMAP_FAILED				    = 0x39, // Unable to map an SMN address to AXI space
    BL_ERR_SYSHUBMAP_FAILED				    = 0x3A, // Unable to map a SYSHUB address to AXI space
    BL_ERR_RESERVED_3B	                    = 0x3B,
    BL_ERR_RESERVED_3C	                    = 0x3C,
	BL_ERR_RESERVED_3D		                = 0x3D,
	BL_ERR_FUSE_INFO                        = 0x3E, // Fuse info on all dies don't match
    BL_ERR_PSP_SMU_MSG_FAIL                 = 0x3F, // PSP sent message to SMU; SMU reported an error
    BL_ERR_RESERVED_40                      = 0x40,
    BL_ERR_RPMC_UNITITIALIZED               = 0x41, // RPMC Root Key needs to be programmed first
    BL_ERR_RPMC_SIGNATURE_MISMATCH          = 0x42, // RPMC Signature mismatch
    BL_ERR_RESERVED_43                      = 0x43,
    BL_ERR_RESERVED_44 		                = 0x44,
	BL_ERR_RESERVED_45		                = 0x45,
    BL_ERR_WARM_SRAMHMAC_FAIL               = 0x46, // validation of the PSP SRAM image failed on HMAC compare
    BL_ERR_RESERVED_47                      = 0x47,
    BL_ERR_RESERVED_48                      = 0x48,
    BL_ERR_LOAD_VALIDATE_APOB               = 0x49, // Error in Validate and Loading AGESA APOB SVC call
    BL_ERR_RESERVED_4A                      = 0x4A,
    BL_ERR_RESERVED_4B                      = 0x4B,
    BL_ERR_SECURE_UNLOCK_FAIL               = 0x4C, // Secure unlock error
    BL_ERR_RESERVED_4D		                = 0x4D,
    BL_ERR_RESERVED_4E                      = 0x4E,
    BL_ERR_RESERVED_4F			            = 0x4F,
    BL_ERR_RESERVED_50	                    = 0x50,
	BL_ERR_RESERVED_51	                    = 0x51,
	BL_ERR_RESERVED_52	                    = 0x52,
	BL_ERR_RESERVED_53				        = 0x53,
	BL_ERR_RESERVED_54           	        = 0x54,
	BL_ERR_RESERVED_55			            = 0x55,
	BL_ERR_RESERVED_56		                = 0x56,
	BL_ERR_RESERVED_57		                = 0x57,
	BL_ERR_RESERVED_58		                = 0x58,
	BL_ERR_RESERVED_59		                = 0x59,
    BL_ERR_RESERVED_5A                      = 0x5A,
    BL_ERR_RESERVED_5B                      = 0x5B,
    BL_ERR_RESERVED_5C                      = 0x5C,
    BL_ERR_RESERVED_5D                      = 0x5D,
    BL_ERR_RESERVED_5E                      = 0x5E,
    BL_ERR_RESERVED_5F                      = 0x5F,
    BL_ERR_SECURITY_GASKET                  = 0x60, // Error with applying security gasket
    BL_ERR_RESERVED_61                      = 0x61,
    BL_ERR_FUSE_READ_ERROR                  = 0x62, // Reading fuse failed
    BL_ERR_FUSE_ALREADY_BLOWN               = 0x63, // The BIOS OEM public key of the BIOS was revoked for this platform
    BL_ERR_FUSE_ERR_TIMEOUT_1               = 0x64, //Fuse sense operation timed out
    BL_ERR_FUSE_ERR_TIMEOUT_2               = 0x65, // Fuse burn sequence/operation timed out waiting for burn done
    BL_ERR_FUSE_ERR_TIMEOUT_3               = 0x66, // Fuse burn sequence/operation timed out waiting for burn done
    BL_ERR_FUSE_ERR_INVALID                 = 0x67, // Fuse invalid operation
    BL_ERR_FUSE_ERR_BURN_FAILED             = 0x68, //Fuse burn sequence/operation failed due to internal SOC error
    BL_ERR_AGESA_DRV_SIZE                   = 0x69, // AGESA driver binary size is exceeded limit allocated in DRAM, need to increase limit
    BL_ERR_DIAGBL_NOT_PRESENT               = 0x6A, // The Diag Bootloader is not present in SPI-ROM
    BL_ERR_DIAG_BL_SEQUENCE                 = 0x6B, // Failed to load PSP Diag BL
    BL_ERR_CS_SEED_VERIFICATION             = 0x6C, // Failed to verify CS_SEED
    BL_ERR_CS_SEED_BOOTROM_VERIFICATION     = 0x6D, // Failed to verify CS_SEED, BootRom portion
    BL_ERR_CS_SEED_LOWER_VERIFICATION       = 0x6E, // Failed to verify CS_SEED, Lower portion
	BL_ERR_RESERVED_6F					    = 0x6F,
	BL_ERR_PSP_LV2_HEADER_NOT_MATCH         = 0x70, // PSP level 2 directory not match expected value.
	BL_ERR_BIOS_LV2_HEADER_NOT_MATCH        = 0x71, // BIOS level 2 directory not match expected value.
    BL_ERR_FCH_PROGRAM                      = 0x72, // FCH programming error
    BL_ERR_DISABLE_BOOT_TIMER               = 0x73, //Failed while disabling boot timer
    BL_ERR_MAP_SYSHUB_WITH_INLINE_AES       = 0x74, //Failure in mapping syshub with inline AES
    BL_ERR_RESERVED_75                      = 0x75,
    BL_ERR_DEBUG_UNLOCK_DISABLED            = 0x76, // Debug unlock disabled by fuses
    BL_ERR_MISSING_SEC_UNLOCK_PUB_KEY       = 0x77, // Missing binary at PSP Entry 0x9 in SPI-ROM
    BL_ERR_RSMU_TIMEOUT_ENABLE              = 0x78, // Programming RSMU timeout failed
    BL_ERR_MISSING_SEC_UNLOCK_BIN           = 0x79, // Missing binary at PSP Entry 0x13 in SPI-ROM
    BL_ERR_UAPP_PSP_HEADER_NOT_MATCH        = 0x7A, // PSP level directory from OEM user-app not match expected value.
    BL_ERR_UAPP_BIOS_HEADER_NOT_MATCH       = 0x7B, // BIOS level directory from OEM user-app not match expected value.
    BL_ERR_UAPP_PSP_DIR_OFFSET_NOT_SET      = 0x7C, // PSP Directory offset is not set by OEM user-app.
    BL_ERR_UAPP_BIOS_DIR_OFFSET_NOT_SET     = 0x7D, // BIOS Directory offset is not set by OEM user-app.
    BL_ERR_RESERVED_7E                      = 0x7E,
    BL_ERR_RESERVED_7F                      = 0x7F,
    BL_ERR_FTPMSIZE_EXCEED_LIMIT            = 0x80, // fTPM binary size exceeds limit allocated in Private DRAM, need to increase the limit
	BL_ERR_INVALID_KEY_USAGE_FLAG           = 0x81, // Invalid key usage flag
    BL_ERR_BIOS_RTM_SIG_MISSING             = 0x82, // Bootloader failed to find OEM signature
    BL_ERR_BIOS_COPY                        = 0x83, // Error copying BIOS to DRAM
    BL_ERR_BIOS_VALIDATION                  = 0x84, // Error validating BIOS image signature
    BL_ERR_OEM_KEY_INVALID                  = 0x85, // The validation of the OEM public key token failed
    BL_ERR_PLATFORM_BINDING                 = 0x86, // The BIOS binding to the fused vendor/model id failed
    BL_ERR_BIOS_BOOT_FROM_SPI               = 0x87, // Bootloader detects BIOS request boot from SPI-ROM, which is unsupported for PSB.
	BL_ERR_RESET_IMAGE_NOT_FOUND            = 0x88, // Reset image not found
    BL_ERR_CUSTOM_MICROCODE_LOAD_FAILED     = 0x89, // Found Custom microcode but had an error loading it
    BL_ERR_BIXBY_DETECT_FAILED              = 0x8A, // Bixby - Bixby chipset not detected
    BL_ERR_BIXBY_AUTH_FAILED                = 0x8B, // Bixby - Bixby chipset authentication failed
    BL_ERR_BIXBY_WRAP_CHECKSUM              = 0x8C, // Bixby - Bixby chipset checksum failed
    BL_ERR_BIXBY_PCIE_LINK_NOT_TRAINED      = 0x8D, // Bixby - Bixby chipset PCIe link is not trained by ABL/DXIO FW
    BL_ERR_BIXBY_MP1_RESET                  = 0x8E, // Bixby - Failded to reset Bixby MP1
    BL_ERR_BIXBY_BOOTLOADER                 = 0x8F,
    BL_ERR_RESERVED_90                      = 0x90,
    BL_ERR_FWTYPE_MISMATCH                  = 0x91, //FW type mismatch between the requested FW type and the FW type embedded in the FW binary header
    BL_ERR_SECURE_LOCKING                   = 0x92,
    BL_ERR_SET_VC1_CHANNEL                  = 0x93,

	BL_ERR_POSTCODE_MAX_VALUE			    = 0x9F, // The maximum allowable error post code
} BL_RETCODE;

// Bootloader Return Codes, Success only (0xA0 through 0xFF)
typedef enum BL_TRACECODE_T
{
    BL_SUCCESS_C_MAIN                       = 0xA0, // Bootloader successfully entered C Main
    BL_SUCCESS_RESERVED_A1                  = 0xA1,
    BL_SUCCESS_DERIVE_HMAC_KEY              = 0xA2, // HMAC key successfully derived
    BL_SUCCESS_DETECT_BOOT_MODE             = 0xA3, // Master got Boot Mode and sent boot mode to all slaves
    BL_SUCCESS_SPI_INIT                     = 0xA4, // SpiRom successfully initialized
    BL_SUCCESS_COPY_BIOS_DIRECTORY          = 0xA5, // BIOS Directory successfully read from SPI to SRAM
    BL_SUCCESS_CHECK_EARLY_UNLOCK           = 0xA6, // Early unlock check
    BL_SUCCESS_RESERVED_A7                  = 0xA7,
    BL_SUCCESS_INLINE_AES_KEY_PROGRAM       = 0xA8, // Inline-AES key programming is done
    BL_SUCCESS_RESERVED_A9                  = 0xA9,
    BL_SUCCESS_RESERVED_AA                  = 0xAA,
    BL_SUCCESS_MBAT_PROGRAMMING             = 0xAB, // Bootloader successfully programmed MBAT table
    BL_SUCCESS_SECURITY_GASKET              = 0xAC, // Bootloader successfully configured security gasket
    BL_SUCCESS_LOAD_SMU                     = 0xAD, // Bootloader successfully loaded SMU FW
    BL_SUCCESS_WAIT_SMU_INTERRUPT           = 0xAE, // BL_SUCCESS_WAIT_SMU_INTERRUPT
    BL_SUCCESS_LOAD_MP2                     = 0xAF, // Bootloader successfully loaded MP2 FW
    BL_SUCCESS_START_AGESA                  = 0xB0, // Bootloader loaded Agesa0 from SpiRom
    BL_SUCCESS_FINISHED_AGESA               = 0xB1, // AGESA phase has completed
    BL_SUCCESS_SEC_POLICY                   = 0xB2, // Indicates security policy loaded in DRAM from SPI-ROM
    BL_SUCCESS_LOAD_SMU_FW_TO_DRAM          = 0xB3, // SMU FW Successfully loaded to SMU Secure DRAM
    BL_SUCCESS_MP2FW_NOT_LOADED_S4          = 0xB4, // MP2 FW not loaded on S4 resume as requested by MP2 team
    BL_SUCCESS_RESERVED_B5                  = 0xB5,
    BL_SUCCESS_UMC_SECURITY_INIT            = 0xB6, // UMC Keys generated and programmed
    BL_SUCCESS_STORE_WRAPPED_KEY            = 0xB7, // Inline AES key wrapper stored in DRAM
    BL_SUCCESS_VALIDATED_OEM_KEY            = 0xB8, // Completed FW Validation step
    BL_SUCCESS_RESERVED_B9                  = 0xB9,
    BL_SUCCESS_RESERVED_BA                  = 0xBA,
    BL_SUCCESS_RESERVED_BB                  = 0xBB,
	BL_SUCCESS_BIOS_LOAD_COMPLETE		    = 0xBC, // BIOS load process fully complete
    BL_SUCCESS_RELEASE_X86                  = 0xBD, // Bootloader successfully release x86
    BL_SUCCESS_RESERVED_BE                  = 0xBE,
	BL_SUCCESS_RESERVED_BF		            = 0xBF,
	BL_SUCCESS_RESERVED_C0		            = 0xC0,
	BL_SUCCESS_ENTER_WARM_BOOT		        = 0xC1,	// Successfully entered WarmBootResume()
	BL_SUCCESS_RESERVED_C2                  = 0xC2,
	BL_SUCCESS_BIXBY_PCIE_LINK_TRAINED	    = 0xC3, // Bixby - PCIe link not trained by Bixby MP0 Boot Rom
	BL_SUCCESS_BIXBY_DETECTED	            = 0xC4, // Bixby - Bixby chipset detected on board
    BL_SUCCESS_BIXBY_BOOTROM_READY          = 0xC5, // Bixby - Bixby Boot Rom ready
    BL_SUCCESS_BIXBY_COPIED_PSPBL           = 0xC6, // Bixby - Bixby PSPBL image copied successfully by SoC MP0 to Bixby MP1 SRAM
    BL_SUCCESS_BIXBY_INTERRUPT_BIXBY        = 0xC7, // Bixby - Send notificaiton to Bixby MP0
    BL_SUCCESS_BIXBY_PSPBL_READY            = 0xC8, // Bixby - Received status from Bixby MP0 PSPBL about its ready state
    BL_SUCCESS_BIXBY_AUTHENTICATION         = 0xC9, // Bixby - Bixby chipset authenticated
    BL_SUCCESS_BIXBY_COPIED_SECPOLICY       = 0xCA, // Bixby - Bixby Security Policy validated and copied to Bixby MP1 SRAM
    BL_SUCCESS_BIXBY_APPLIED_SECPOLICY      = 0xCB, // Bixby - Received status from Bixby about Security Policy applied
    BL_SUCCESS_BIXBY_COPIED_SDU_BIN         = 0xCC, // Bixby - Bixby SDU binary validated and copied to Bixby MP1 SRAM
    BL_SUCCESS_BIXBY_LOADED_SDU_BIN         = 0xCD, // Bixby - Received status from Bixby MP0 about its ready state after loading SDU
    BL_SUCCESS_BIXBY_COPIED_SMU_FW          = 0xCE, // Bixby - Bixby SMU firmware validated and copied to Bixby Mp1 SRAM
    BL_SUCCESS_BIXBY_LOADED_SMU_FW          = 0xCF, // Bixby - Received status from Bixby that MP1 is out of reset and functional
    BL_SUCCESS_RESERVED_D0		            = 0xD0,
    BL_SUCCESS_RESERVED_D1                  = 0xD1,
    BL_SUCCESS_ESPI_INIT_START              = 0xD2,
    BL_SUCCESS_LPC_INIT_START               = 0xD3,
    BL_SUCCESS_RESERVED_D4                  = 0xD4,
    BL_SUCCESS_COPIED_DIAG_BL_DRAM          = 0xD5, //Successfully load Diag Bootloader into DRAM
	BL_SUCCESS_CS_SEED_VERIFICATION         = 0xD6, // Successfully verified CS-SEED
    BL_RECOVERY_FW_VALIDATION_FAIL          = 0xD7, // Entered recovery mode due to failure in fw validation of any component binary
	BL_SPECIAL_IDLE_LOOP					= 0xD8,	// Entered idle loop defined for special bootloader versions
    BL_SUCCESS_TEST_MSG_WITH_SMU            = 0xD9, // SendMessage to SMUFW successful
    BL_SUCCESS_RESERVED_DA                  = 0xDA,
    BL_SUCCESS_RESERVED_DB                  = 0xDB,
    BL_SUCCESS_RESERVED_DC                  = 0xDC,
    BL_SUCCESS_RESERVED_DD                  = 0xDD,
    BL_SUCCESS_RESERVED_DE                  = 0xDE,
    BL_SUCCESS_RESERVED_DF                  = 0xDF,
    BL_CHECKED_MP2_DISABLED                 = 0xE0, // MP2 Block is disabled in MP2_RSMU_FUSESTRAPS or soft fuse in PSP entry 0xB
    BL_SUCCESS_IN_BL_ENTRY                  = 0xE1, // Updated only PSPFW Status when enetered in BL
    BL_SUCCESS_FCH_PROGRAM                  = 0xE2, // Updated only PSPFW Status when FCH programmed
    BL_SUCCESS_DISABLE_BOOT_TIMER           = 0xE3, // Updated only PSPFW Status when boot timer disabled
    BL_SUCCESS_MAP_SYSHUB_WITH_INLINE_AES   = 0xE4, // Updated only PSPFW Status when derived and programmed syshub inline AES
    BL_SUCCESS_ENABLE_LOGGING               = 0xE5, // Updated only PSPFW Status when enabled logging
    BL_SUCCESS_RSMU_TIMEOUT_ENABLE          = 0xE6, // Updated only PSPFW Status when RSMU timeout enabled registers programmed
    BL_SUCCESS_SST_RESET                    = 0xE7, // Updated only PSPFW Status when SST reset registers programmed
    BL_SUCCESS_SS3                          = 0xE8, // Updated only PSPFW Status when passed SS3 loading
    BL_SUCCESS_FTPM                         = 0xE9, // Updated only PSPFW Status when passed fTPM loading
    BL_SUCCESS_SYS_DRV                      = 0xEA, // Updated only PSPFW Status when passed loading sys_drv
    BL_SUCCESS_SOS                          = 0xEB, // Updated only PSPFW Status when passed loading secure OS
    BL_SUCCESS_RESUMED_SOS                  = 0xEC, // Updated only PSPFW Status when passed validation of S3 suspend data on resume
    BL_SUCCESS_CONTROL_TO_SOS               = 0xED, // Updated only PSPFW Status when it is about to transfer control to secureOS
    BL_SUCCESS_S0i3_RESUME                  = 0xF1, // PSP BL identified resuming from S0i3
    BL_SUCCESS_S3_RESUME                    = 0xF2, // PSP BL identified resuming from S3
    BL_SUCCESS_S4_RESUME                    = 0xF3, // PSP BL identified resuming from S4
    BL_SUCCESS_S5_COLD                      = 0xF4, // PSP BL identified previous reset S5 - Cold boot
    BL_SUCCESS_S5_WARM                      = 0xF5, // PSP BL identified previious reset S5 - Warm boot
    BL_SUCCESS_SET_VC1_CHANNEL              = 0xF6, // Updated only PSPFW Status when all IPs are set to static VC1 Channel
    BL_SUCCESS_USERMODE_OEM_APP             = 0xF7, // Updated only PSPFW Status when OEM PSP BL user app runs and returns successfully.
    BL_SUCCESS_PSP_BIOS_DIRECTORY_UPDATE    = 0xF8, // PSP and BIOS directories are loaded into SRAM form the offset provided by OEM user app.

    BL_SUCCESS_LAST_CODE                    = 0xFF, // Bootloader sequence finished
} BL_TRACECODE;

#endif // BL_ERRORCODES_H
