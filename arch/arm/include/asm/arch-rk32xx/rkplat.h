/*
 * (C) Copyright 2008-2015 Fuzhou Rockchip Electronics Co., Ltd
 * Peter, Software Engineering, <superpeter.cai@gmail.com>.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */
#ifndef __RKPLAT_H
#define __RKPLAT_H


/********************************************************************
**                      common head files                           *
********************************************************************/
#include <config.h>
#include <common.h>
#include <command.h>
#include <malloc.h>
#include <fdtdec.h>
#include <asm/io.h>
#include <asm/errno.h>

#include "typedef.h"
#include "cpu.h"
#include "io.h"
#include "pmu.h"
#include "grf.h"
#include "cru.h"
#include "irqs.h"
#include "gpio.h"
#include "iomux.h"

#include "clock.h"
#include "uart.h"
#include "rk_i2c.h"
#include "pm.h"

#ifdef CONFIG_RK_PL330_DMAC
#include "pl330.h"
#include "dma.h"
#endif

#ifdef CONFIG_RK_PSCI
#include "psci.h"
#endif

#ifdef CONFIG_RK_DCF
void dram_freq_init(void);
#endif

int rk_get_chiptype(void);
int rk_get_bootrom_chip_version(unsigned int chip_info[]);
void rk_module_deinit(void);

#endif /* __RKPLAT_H */