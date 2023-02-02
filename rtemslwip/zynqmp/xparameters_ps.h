/*
 * Copyright (C) 2022 On-Line Applications Research Corporation (OAR)
 * Written by Kinsey Moore <kinsey.moore@oarcorp.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _XPARAMETERS_PS_H_
#define _XPARAMETERS_PS_H_

#define XPAR_XEMACPS_0_INTR   XPS_GEM0_INT_ID
#define XPAR_XEMACPS_0_WAKE_INTR  XPS_GEM0_WAKE_INT_ID
#define XPAR_XEMACPS_1_INTR   XPS_GEM1_INT_ID
#define XPAR_XEMACPS_1_WAKE_INTR  XPS_GEM1_WAKE_INT_ID
#define XPAR_XEMACPS_2_INTR   XPS_GEM2_INT_ID
#define XPAR_XEMACPS_2_WAKE_INTR  XPS_GEM2_WAKE_INT_ID
#define XPAR_XEMACPS_3_INTR   XPS_GEM3_INT_ID
#define XPAR_XEMACPS_3_WAKE_INTR  XPS_GEM3_WAKE_INT_ID

#define XPS_GEM0_INT_ID     ( 57U + 32U )
#define XPS_GEM0_WAKE_INT_ID    ( 58U + 32U )
#define XPS_GEM1_INT_ID     ( 59U + 32U )
#define XPS_GEM1_WAKE_INT_ID    ( 60U + 32U )
#define XPS_GEM2_INT_ID     ( 61U + 32U )
#define XPS_GEM2_WAKE_INT_ID    ( 62U + 32U )
#define XPS_GEM3_INT_ID     ( 63U + 32U )
#define XPS_GEM3_WAKE_INT_ID    ( 64U + 32U )

#define XPAR_PSU_ETHERNET_0_INTR    XPS_GEM0_INT_ID
#define XPAR_PSU_ETHERNET_0_WAKE_INTR   XPS_GEM0_WAKE_INT_ID
#define XPAR_PSU_ETHERNET_1_INTR    XPS_GEM1_INT_ID
#define XPAR_PSU_ETHERNET_1_WAKE_INTR   XPS_GEM1_WAKE_INT_ID
#define XPAR_PSU_ETHERNET_2_INTR    XPS_GEM2_INT_ID
#define XPAR_PSU_ETHERNET_2_WAKE_INTR   XPS_GEM2_WAKE_INT_ID
#define XPAR_PSU_ETHERNET_3_INTR    XPS_GEM3_INT_ID
#define XPAR_PSU_ETHERNET_3_WAKE_INTR   XPS_GEM3_WAKE_INT_ID

#define XPAR_PSU_ETHERNET_0_INTERRUPT_ID   0x4039U
#define XPAR_PSU_ETHERNET_0_WAKE_INTERRUPT_ID 0x4039U
#define XPAR_PSU_ETHERNET_1_INTERRUPT_ID   0x403BU
#define XPAR_PSU_ETHERNET_1_WAKE_INTERRUPT_ID 0x403BU
#define XPAR_PSU_ETHERNET_2_INTERRUPT_ID   0x403DU
#define XPAR_PSU_ETHERNET_2_WAKE_INTERRUPT_ID 0x403DU
#define XPAR_PSU_ETHERNET_3_INTERRUPT_ID   0x403FU
#define XPAR_PSU_ETHERNET_3_WAKE_INTERRUPT_ID 0x403FU

/* Platform specific definitions */
#define PLATFORM_ZYNQMP

/* Definitions for driver EMACPS */
#define XPAR_XEMACPS_NUM_INSTANCES 4

/* Definitions for peripheral PSU_ETHERNET_0 */
#define XPAR_PSU_ETHERNET_0_DEVICE_ID 0
#define XPAR_PSU_ETHERNET_0_BASEADDR 0xFF0B0000
#define XPAR_PSU_ETHERNET_0_ENET_CLK_FREQ_HZ 124998749
#define XPAR_PSU_ETHERNET_0_ENET_SLCR_1000MBPS_DIV0 12
#define XPAR_PSU_ETHERNET_0_ENET_SLCR_1000MBPS_DIV1 1
#define XPAR_PSU_ETHERNET_0_ENET_SLCR_100MBPS_DIV0 60
#define XPAR_PSU_ETHERNET_0_ENET_SLCR_100MBPS_DIV1 1
#define XPAR_PSU_ETHERNET_0_ENET_SLCR_10MBPS_DIV0 60
#define XPAR_PSU_ETHERNET_0_ENET_SLCR_10MBPS_DIV1 10
#define XPAR_PSU_ETHERNET_0_IS_CACHE_COHERENT 0
#define XPAR_PSU_ETHERNET_0_REF_CLK GEM0_REF
#define XPAR_XEMACPS_0_IS_CACHE_COHERENT 0
#define XPAR_XEMACPS_0_ENET_CLK_FREQ_HZ 124998749
#define XPAR_XEMACPS_0_ENET_SLCR_1000Mbps_DIV1 1
#define XPAR_XEMACPS_0_ENET_SLCR_100Mbps_DIV1 1
#define XPAR_XEMACPS_0_DEVICE_ID XPAR_PSU_ETHERNET_0_DEVICE_ID
#define XPAR_XEMACPS_0_BASEADDR 0xFF0B0000

/* Definitions for peripheral PSU_ETHERNET_1 */
#define XPAR_PSU_ETHERNET_1_DEVICE_ID 1
#define XPAR_PSU_ETHERNET_1_BASEADDR 0xFF0C0000
#define XPAR_PSU_ETHERNET_1_ENET_CLK_FREQ_HZ 124998749
#define XPAR_PSU_ETHERNET_1_ENET_SLCR_1000MBPS_DIV0 12
#define XPAR_PSU_ETHERNET_1_ENET_SLCR_1000MBPS_DIV1 1
#define XPAR_PSU_ETHERNET_1_ENET_SLCR_100MBPS_DIV0 60
#define XPAR_PSU_ETHERNET_1_ENET_SLCR_100MBPS_DIV1 1
#define XPAR_PSU_ETHERNET_1_ENET_SLCR_10MBPS_DIV0 60
#define XPAR_PSU_ETHERNET_1_ENET_SLCR_10MBPS_DIV1 10
#define XPAR_PSU_ETHERNET_1_IS_CACHE_COHERENT 0
#define XPAR_PSU_ETHERNET_1_REF_CLK GEM1_REF
#define XPAR_XEMACPS_1_IS_CACHE_COHERENT 0
#define XPAR_XEMACPS_1_DEVICE_ID XPAR_PSU_ETHERNET_1_DEVICE_ID
#define XPAR_XEMACPS_1_BASEADDR 0xFF0C0000

/* Definitions for peripheral PSU_ETHERNET_2 */
#define XPAR_PSU_ETHERNET_2_DEVICE_ID 1
#define XPAR_PSU_ETHERNET_2_BASEADDR 0xFF0D0000
#define XPAR_PSU_ETHERNET_2_ENET_CLK_FREQ_HZ 124998749
#define XPAR_PSU_ETHERNET_2_ENET_SLCR_1000MBPS_DIV0 12
#define XPAR_PSU_ETHERNET_2_ENET_SLCR_1000MBPS_DIV1 1
#define XPAR_PSU_ETHERNET_2_ENET_SLCR_100MBPS_DIV0 60
#define XPAR_PSU_ETHERNET_2_ENET_SLCR_100MBPS_DIV1 1
#define XPAR_PSU_ETHERNET_2_ENET_SLCR_10MBPS_DIV0 60
#define XPAR_PSU_ETHERNET_2_ENET_SLCR_10MBPS_DIV1 10
#define XPAR_PSU_ETHERNET_2_IS_CACHE_COHERENT 0
#define XPAR_PSU_ETHERNET_2_REF_CLK GEM2_REF
#define XPAR_XEMACPS_2_DEVICE_ID XPAR_PSU_ETHERNET_2_DEVICE_ID
#define XPAR_XEMACPS_2_BASEADDR 0xFF0D0000

/* Definitions for peripheral PSU_ETHERNET_3 */
#define XPAR_PSU_ETHERNET_3_DEVICE_ID 0
#define XPAR_PSU_ETHERNET_3_BASEADDR 0xFF0E0000
#define XPAR_PSU_ETHERNET_3_ENET_CLK_FREQ_HZ 124998749
#define XPAR_PSU_ETHERNET_3_ENET_SLCR_1000MBPS_DIV0 12
#define XPAR_PSU_ETHERNET_3_ENET_SLCR_1000MBPS_DIV1 1
#define XPAR_PSU_ETHERNET_3_ENET_SLCR_100MBPS_DIV0 60
#define XPAR_PSU_ETHERNET_3_ENET_SLCR_100MBPS_DIV1 1
#define XPAR_PSU_ETHERNET_3_ENET_SLCR_10MBPS_DIV0 60
#define XPAR_PSU_ETHERNET_3_ENET_SLCR_10MBPS_DIV1 10
#define XPAR_PSU_ETHERNET_3_IS_CACHE_COHERENT 0
#define XPAR_PSU_ETHERNET_3_REF_CLK GEM3_REF
#define XPAR_XEMACPS_3_DEVICE_ID XPAR_PSU_ETHERNET_3_DEVICE_ID
#define XPAR_XEMACPS_3_BASEADDR 0xFF0E0000

#define XPAR_SCUGIC_0_DIST_BASEADDR 0xF9010000U

#endif
