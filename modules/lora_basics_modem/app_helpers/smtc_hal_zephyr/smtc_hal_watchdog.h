/*
 * Copyright (c) 2024 Semtech Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __SMTC_HAL_WATCHDOG_H__
#define __SMTC_HAL_WATCHDOG_H__

#ifdef __cplusplus
extern "C" {
#endif

/*
 * -----------------------------------------------------------------------------
 * --- DEPENDENCIES ------------------------------------------------------------
 */

#include <stdint.h>
#include <stdbool.h>

/*
 * -----------------------------------------------------------------------------
 * --- PUBLIC MACROS -----------------------------------------------------------
 */

/*
 * -----------------------------------------------------------------------------
 * --- PUBLIC CONSTANTS --------------------------------------------------------
 */

/*
 * -----------------------------------------------------------------------------
 * --- PUBLIC TYPES ------------------------------------------------------------
 */

/*
 * -----------------------------------------------------------------------------
 * --- PUBLIC FUNCTIONS PROTOTYPES ---------------------------------------------
 */

/*!
 * Initializes the MCU watchdog peripheral
 */

void hal_watchdog_init(void);

/*!
 * Reloads watchdog counter
 */

void hal_watchdog_reload(void);

#ifdef __cplusplus
}
#endif

#endif /* __SMTC_HAL_WATCHDOG_H__ */

/* --- EOF ------------------------------------------------------------------ */
