/* SPDX-License-Identifier: GPL-2.0-only */

/* This file applies to AMD64 products.
 * The definitions come from the AMD64 Programmers Manual vol2
 * Revision 3.30 and/or the device's BKDG.
 */

#ifndef CPU_AMD_MSR_H
#define CPU_AMD_MSR_H

#include <cpu/x86/msr.h>

#define MC4_MISC0			0x00000413
#define MC4_MISC1			0xC0000408
#define MC4_MISC2			0xC0000409
#define FS_Base				0xC0000100
#define HWCR_MSR			0xC0010015
#define  SMM_LOCK			(1 << 0)
#define NB_CFG_MSR			0xC001001f
#define FidVidStatus			0xC0010042
#define MC0_CTL_MASK			0xC0010044
#define MC_CTL_MASK(bank)		(MC0_CTL_MASK + (bank))
#define MSR_INTPEND			0xC0010055
#define MMIO_CONF_BASE			0xC0010058
#define  MMIO_RANGE_EN			(1 << 0)
#define  MMIO_BUS_RANGE_SHIFT		2
	/* P-state Current Limit Register */
#define PS_LIM_REG			0xC0010061
	 /* P-state Maximum Value shift position */
#define  PS_MAX_VAL_SHFT		4
#define  PS_LIM_MAX_VAL_MASK		(0x7 << PS_MAX_VAL_SHFT)
#define  MAX_PSTATES			8

	/* P-state Control Register */
#define PS_CTL_REG			0xC0010062
	 /* P-state Control Register CMD Mask OFF */
#define  PS_CMD_MASK_OFF		~(7)
	 /* P-state Status Mask */
#define  PS_STS_MASK			7
	/* P-state Status Register */
#define PS_STS_REG			0xC0010063
#define PSTATE_0_MSR			0xC0010064
#define PSTATE_MSR(pstate)		(PSTATE_0_MSR + (pstate))
#define PSTATE_MSR_COUNT		8

#define MSR_PATCH_LOADER		0xC0010020

#define MSR_COFVID_STS			0xC0010071
#define MSR_CSTATE_ADDRESS		0xC0010073
#define  MSR_CSTATE_ADDRESS_MASK	0xFFFF

#define OSVW_ID_Length			0xC0010140
#define OSVW_Status			0xC0010141

#define SMM_BASE_MSR			0xC0010111
#define SMM_ADDR_MSR			0xC0010112
#define SMM_MASK_MSR			0xC0010113
#define  SMM_TSEG_VALID			(1 << 1)
#define  SMM_TSEG_WB			(6 << 12)

#define CPU_ID_FEATURES_MSR		0xC0011004
#define CPU_ID_EXT_FEATURES_MSR		0xC0011005
#define CPU_ID_HYPER_EXT_FEATURES	0xC001100d
#define LOGICAL_CPUS_NUM_MSR		0xC001100d
#define LS_CFG_MSR			0xC0011020
#define IC_CFG_MSR			0xC0011021
#define DC_CFG_MSR			0xC0011022
#define BU_CFG_MSR			0xC0011023
#define FP_CFG_MSR			0xC0011028
#define DE_CFG_MSR			0xC0011029
#define BU_CFG2_MSR			0xC001102A
#define BU_CFG3_MSR			0xC001102B
#define EX_CFG_MSR			0xC001102C
#define LS_CFG2_MSR			0xC001102D
#define IBS_OP_DATA3_MSR		0xC0011037
#define S3_RESUME_EIP_MSR		0xC00110E0
#define PSP_ADDR_MSR			0xc00110a2

#define CORE_PERF_BOOST_CTRL		0x15c

/* Value defined in Serial VID Interface 3.0 spec (#56413, NDA only) */
#define MSR_CPPC_CAPABILITY_1				0xc00102b0
#define SHIFT_CPPC_CAPABILITY_1_HIGHEST_PERF		24
#define SHIFT_CPPC_CAPABILITY_1_NOMINAL_PERF		16
#define SHIFT_CPPC_CAPABILITY_1_LOW_NON_LIN_PERF	8
#define SHIFT_CPPC_CAPABILITY_1_LOWEST_PERF		0

#define MSR_CPPC_ENABLE				0xc00102b1
#define MSR_CPPC_REQUEST			0xc00102b3
#define SHIFT_CPPC_REQUEST_ENERGY_PERF_PREF	24
#define SHIFT_CPPC_REQUEST_DES_PERF		16
#define SHIFT_CPPC_REQUEST_MIN_PERF		8
#define SHIFT_CPPC_REQUEST_MAX_PERF		0

#define MSR_CPPC_STATUS		0xc00102b4

#define MSR_MAX_PERFORMANCE_FREQUENCY_CLOCK_COUNT	0xe7
#define MSR_ACTUAL_PERFORMANCE_FREQUENCY_CLOCK_COUNT	0xe8

#endif /* CPU_AMD_MSR_H */
