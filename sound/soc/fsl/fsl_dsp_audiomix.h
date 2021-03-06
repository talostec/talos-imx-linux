/* SPDX-License-Identifier: (GPL-2.0+ OR MIT)*/
/*
 * Copyright (C) 2017 Cadence Design Systems, Inc.
 * Copyright 2018 NXP
 *
 */

#ifndef FSL_DSP_AUDMIX_H
#define FSL_DSP_AUDMIX_H

#define AudioDSP_REG0 0x100
#define AudioDSP_REG1 0x104
#define AudioDSP_REG2 0x108
#define AudioDSP_REG3 0x10c

struct imx_audiomix_dsp_data;
void imx_audiomix_dsp_start(struct imx_audiomix_dsp_data *data);

#endif
