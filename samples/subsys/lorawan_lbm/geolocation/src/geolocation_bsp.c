/*
 * Copyright (c) 2024 Semtech Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>

#include <geolocation_bsp.h>

static const struct gpio_dt_spec scanning_led =
	GPIO_DT_SPEC_GET(DT_PATH(leds, lr11xx_scanning_led), gpios);
static const struct gpio_dt_spec lna_control =
	GPIO_DT_SPEC_GET(DT_PATH(leds, lr11xx_gnss_lna_control), gpios);

void geolocation_bsp_gnss_prescan_actions(void)
{
	gpio_pin_set_dt(&scanning_led, 1);
	gpio_pin_set_dt(&lna_control, 1); /* LNA on */
}

void geolocation_bsp_gnss_postscan_actions(void)
{
	gpio_pin_set_dt(&scanning_led, 0);
	gpio_pin_set_dt(&lna_control, 0); /* LNA off */
}

void geolocation_bsp_wifi_prescan_actions(void)
{
	gpio_pin_set_dt(&scanning_led, 1);
}

void geolocation_bsp_wifi_postscan_actions(void)
{
	gpio_pin_set_dt(&scanning_led, 0);
}

lr11xx_system_lfclk_cfg_t geolocation_bsp_get_lr11xx_lf_clock_cfg(void)
{
	return LR11XX_SYSTEM_LFCLK_XTAL;
}

void geolocation_bsp_get_lr11xx_reg_mode(const void *context, lr11xx_system_reg_mode_t *reg_mode)
{
	*reg_mode = LR11XX_SYSTEM_REG_MODE_DCDC;
}

void geolocation_bsp_gnss_get_consumption(
	lr11xx_gnss_instantaneous_power_consumption_ua_t *instantaneous_power_consumption_ua)
{
	/* These value are for EVK board in DC DC mode with Xtal 32KHz and a TCXO 32MHz*/
	instantaneous_power_consumption_ua->board_voltage_mv = 3300;
	instantaneous_power_consumption_ua->init_ua = 3150;
	instantaneous_power_consumption_ua->phase1_gps_capture_ua = 11900;
	instantaneous_power_consumption_ua->phase1_gps_process_ua = 3340;
	instantaneous_power_consumption_ua->multiscan_gps_capture_ua = 10700;
	instantaneous_power_consumption_ua->multiscan_gps_process_ua = 4180;
	instantaneous_power_consumption_ua->phase1_beidou_capture_ua = 13500;
	instantaneous_power_consumption_ua->phase1_beidou_process_ua = 3190;
	instantaneous_power_consumption_ua->multiscan_beidou_capture_ua = 12600;
	instantaneous_power_consumption_ua->multiscan_beidou_process_ua = 3430;
	instantaneous_power_consumption_ua->sleep_32k_ua = 1210;
	instantaneous_power_consumption_ua->demod_sleep_32m_ua = 2530;
}
