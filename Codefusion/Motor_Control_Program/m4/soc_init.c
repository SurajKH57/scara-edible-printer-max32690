/**
 * Configuration for MAX32690-TQFN.
 *
 * This file was generated using Analog Devices CodeFusion Studio.
 * https://github.com/analogdevicesinc/codefusion-studio
 *
 * Generated at: 2026-11-27T13:01:11.017Z *
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (c) 2026 Analog Devices, Inc.
 */


#include <gpio.h>
#include <mxc_device.h>
#include <mxc_sys.h>
#include <stddef.h>
#include <uart.h>
#include "soc_init.h"

int PinInit(void) {
  int result;

  /* Initialize all the used GPIO Ports.
  */
  result = MXC_GPIO_Init(MXC_GPIO_PORT_0 | MXC_GPIO_PORT_1 | MXC_GPIO_PORT_2 | MXC_GPIO_PORT_4);
  if (result != E_NO_ERROR) {
    return result;
  }

  MXC_GPIO_SetConfigLock(MXC_GPIO_CONFIG_UNLOCKED);

  /* P0.7 (7): assigned to GPIO0_P0.7.
  */
  const mxc_gpio_cfg_t cfg_p0_7 = {
    .port = MXC_GPIO0,
    .mask = MXC_GPIO_PIN_7,
    .func = MXC_GPIO_FUNC_OUT,
    .pad = MXC_GPIO_PAD_NONE,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p0_7);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P0.8 (8): assigned to GPIO0_P0.8.
  */
  const mxc_gpio_cfg_t cfg_p0_8 = {
    .port = MXC_GPIO0,
    .mask = MXC_GPIO_PIN_8,
    .func = MXC_GPIO_FUNC_OUT,
    .pad = MXC_GPIO_PAD_NONE,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p0_8);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P0.9 (9): assigned to GPIO0_P0.9.
  */
  const mxc_gpio_cfg_t cfg_p0_9 = {
    .port = MXC_GPIO0,
    .mask = MXC_GPIO_PIN_9,
    .func = MXC_GPIO_FUNC_OUT,
    .pad = MXC_GPIO_PAD_NONE,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p0_9);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P0.14 (14): assigned to GPIO0_P0.14.
  */
  const mxc_gpio_cfg_t cfg_p0_14 = {
    .port = MXC_GPIO0,
    .mask = MXC_GPIO_PIN_14,
    .func = MXC_GPIO_FUNC_OUT,
    .pad = MXC_GPIO_PAD_NONE,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p0_14);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P1.9 (15): assigned to UART2_RX.
  */
  const mxc_gpio_cfg_t cfg_p1_9 = {
    .port = MXC_GPIO1,
    .mask = MXC_GPIO_PIN_9,
    .func = MXC_GPIO_FUNC_ALT1,
    .pad = MXC_GPIO_PAD_WEAK_PULL_UP,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p1_9);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P1.10 (16): assigned to UART2_TX.
  */
  const mxc_gpio_cfg_t cfg_p1_10 = {
    .port = MXC_GPIO1,
    .mask = MXC_GPIO_PIN_10,
    .func = MXC_GPIO_FUNC_ALT1,
    .pad = MXC_GPIO_PAD_NONE,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p1_10);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P2.11 (66): assigned to GPIO2_P2.11.
  */
  const mxc_gpio_cfg_t cfg_p2_11 = {
    .port = MXC_GPIO2,
    .mask = MXC_GPIO_PIN_11,
    .func = MXC_GPIO_FUNC_IN,
    .pad = MXC_GPIO_PAD_NONE,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p2_11);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P2.12 (67): assigned to GPIO2_P2.12.
  */
  const mxc_gpio_cfg_t cfg_p2_12 = {
    .port = MXC_GPIO2,
    .mask = MXC_GPIO_PIN_12,
    .func = MXC_GPIO_FUNC_OUT,
    .pad = MXC_GPIO_PAD_NONE,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p2_12);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P4.0 (60): assigned to GPIO4_P4.0.
  */
  const mxc_gpio_cfg_t cfg_p4_0 = {
    .port = MXC_GPIO4,
    .mask = MXC_GPIO_PIN_0,
    .func = MXC_GPIO_FUNC_IN,
    .pad = MXC_GPIO_PAD_PULL_UP,
    .vssel = MXC_GPIO_VSSEL_VDDIOH,
    .drvstr = MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p4_0);
  if (result != E_NO_ERROR) {
    return result;
  }

  MXC_GPIO_SetConfigLock(MXC_GPIO_CONFIG_LOCKED);

  return E_NO_ERROR;
}

int PeripheralInit(void) {
  int result = E_NO_ERROR;

  /* SYS_OSC Mux: Clock Source is set to IPO (Internal Primary Osc.). */
  result = MXC_SYS_Clock_Select(MXC_SYS_CLOCK_IPO);
  if (result != E_NO_ERROR) {
    return result;
  }

  { /* Configure UART2.
     */

    /* Initialize the peripheral. */
    result = MXC_UART_Init(MXC_UART2,
                           115200U,
                           MXC_UART_IBRO_CLK);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set Data Size. */
    result = MXC_UART_SetDataSize(MXC_UART2, 8);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set Stop Bits. */
    result = MXC_UART_SetStopBits(MXC_UART2, MXC_UART_STOP_1);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set Flow Control. */
    result = MXC_UART_SetFlowCtrl(MXC_UART2, MXC_UART_FLOW_DIS, 1);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set Parity. */
    result = MXC_UART_SetParity(MXC_UART2, MXC_UART_PARITY_DISABLE);
    if (result != E_NO_ERROR) {
      return result;
    }

  }


  return result;
}
