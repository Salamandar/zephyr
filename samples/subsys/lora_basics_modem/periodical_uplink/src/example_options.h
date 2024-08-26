/*
 * Copyright (c) 2024 Semtech Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef EXAMPLE_OPTIONS_H
#define EXAMPLE_OPTIONS_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * -----------------------------------------------------------------------------
 * --- DEPENDENCIES ------------------------------------------------------------
 */

#include <stdint.h>
#include <stdbool.h>

#include "smtc_modem_api.h"

/*
 * -----------------------------------------------------------------------------
 * --- PUBLIC CONSTANTS --------------------------------------------------------
 */

/**
 * @brief LoRaWAN User credentials
 */
#define USER_LORAWAN_DEVICE_EUI {0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x06, 0x7E, 0xDC}
#define USER_LORAWAN_JOIN_EUI   {0x01, 0x02, 0x03, 0x04, 0x05, 0x0F, 0xFF, 0x06}
#define USER_LORAWAN_GEN_APP_KEY                                                                   \
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                           \
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
#define USER_LORAWAN_APP_KEY                                                                       \
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                           \
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}

/**
 * @brief Modem Region define
 */
#ifndef MODEM_EXAMPLE_REGION
#if !defined(SX128X)
#define MODEM_EXAMPLE_REGION SMTC_MODEM_REGION_EU_868
#else
#define MODEM_EXAMPLE_REGION SMTC_MODEM_REGION_WW2G4
#endif
#endif /* MODEM_EXAMPLE_REGION */

#ifdef __cplusplus
}
#endif

#endif /* EXAMPLE_OPTIONS_H */

/* --- EOF ------------------------------------------------------------------ */
