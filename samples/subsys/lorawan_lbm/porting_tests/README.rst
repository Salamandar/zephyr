.. _lorawan_lbm_porting_tests:

LoRaWAN Porting Tests
###########

Overview
********

A simple sample that provides low level HAL testing for LBM.

Requirements
************

A LoRa transceiver supported by Zephyr.

Building and Running
********************

This application can be built and executed on  as follows:

.. zephyr-app-commands::
   :zephyr-app: samples/subsys/lorawan_lbm/porting_tests
   :board: nrf52840dk/nrf52840
   :shield: [semtech_lr1110mb1xxs | semtech_lr1120mb1xxs | semtech_lr1121mb1xxs ]
   :goals: build flash
   :compact:

You can build the flash tests by changing the test's config:

.. zephyr-app-commands::
   :zephyr-app: samples/subsys/lorawan_lbm/porting_tests
   :board: nrf52840dk/nrf52840
   :shield: [semtech_lr1110mb1xxs | semtech_lr1120mb1xxs | semtech_lr1121mb1xxs ]
   :goals: build flash
   :gen-args: -DTEST_FLASH_ONLY
   :compact:


Sample Output
=============

.. code-block:: console

    [00:00:00.000,000] <inf> lorawan_porting_tests: PORTING_TEST example is starting
    [00:00:00.000,000] <inf> lorawan_porting_tests:
    [00:00:00.000,000] <inf> lorawan_porting_tests:
    [00:00:00.000,000] <inf> lorawan_porting_tests: ---------------------------------------- porting_test_spi :
    [00:00:00.203,000] <inf> lorawan_porting_tests:  OK
    [00:00:00.203,000] <inf> lorawan_porting_tests: ---------------------------------------- porting_test_radio_irq :
    [00:00:01.447,000] <inf> lorawan_porting_tests:  OK
    [00:00:01.447,000] <inf> lorawan_porting_tests: ---------------------------------------- porting_test_get_time :
    [00:00:01.447,000] <inf> lorawan_porting_tests:  * Get time in second:
    [00:00:06.716,000] <inf> lorawan_porting_tests:  OK
    [00:00:06.716,000] <inf> lorawan_porting_tests:  Time expected 5s / get 5s (no margin)
    [00:00:06.716,000] <inf> lorawan_porting_tests:  * Get time in millisecond:
    [00:00:09.008,000] <err> lorawan_porting_tests:  OK
    [00:00:09.008,000] <inf> lorawan_porting_tests: ---------------------------------------- porting_test_timer_irq :
    [00:00:12.014,000] <inf> lorawan_porting_tests:  OK
    [00:00:12.014,000] <inf> lorawan_porting_tests:  Timer irq configured with 3000ms / get 3000ms (margin +2ms)
    [00:00:12.014,000] <inf> lorawan_porting_tests: ---------------------------------------- porting_test_stop_timer :
    [00:00:14.014,000] <inf> lorawan_porting_tests:  OK
    [00:00:14.014,000] <inf> lorawan_porting_tests: ---------------------------------------- porting_test_disable_enable_irq :
    [00:00:18.014,000] <inf> lorawan_porting_tests:  OK
    [00:00:18.014,000] <inf> lorawan_porting_tests: ---------------------------------------- porting_test_random :
    [00:00:18.014,000] <inf> lorawan_porting_tests:  * Get random nb :
    [00:00:18.014,000] <inf> lorawan_porting_tests:  OK
    [00:00:18.014,000] <inf> lorawan_porting_tests:  random1 = 750439106, random2 = 1406666879
    [00:00:18.014,000] <inf> lorawan_porting_tests:  * Get random nb in range :
    [00:00:18.014,000] <inf> lorawan_porting_tests:  OK
    [00:00:18.014,000] <inf> lorawan_porting_tests:  random1 = 14, random2 = 23 in range [1;42]
    [00:00:18.014,000] <inf> lorawan_porting_tests:  * Get random draw :
    [00:00:18.309,000] <inf> lorawan_porting_tests:  OK
    [00:00:18.309,000] <inf> lorawan_porting_tests:  Random draw of 100000 numbers between [1;10] range
    [00:00:18.309,000] <inf> lorawan_porting_tests: ---------------------------------------- porting_test_config_rx_radio :
    [00:00:19.055,000] <inf> lorawan_porting_tests:  OK
    [00:00:19.055,000] <inf> lorawan_porting_tests: ---------------------------------------- porting_test_config_tx_radio :
    [00:00:19.303,000] <inf> lorawan_porting_tests:  OK
    [00:00:19.303,000] <inf> lorawan_porting_tests: ---------------------------------------- porting_test_sleep_ms :
    [00:00:21.308,000] <inf> lorawan_porting_tests:  OK
    [00:00:21.308,000] <inf> lorawan_porting_tests:  Sleep time expected 2000ms / get 2000ms (margin +/-2ms)
    [00:00:21.308,000] <inf> lorawan_porting_tests: ---------------------------------------- porting_test_timer_irq_low_power :
    [00:00:29.313,000] <inf> lorawan_porting_tests:  OK
    [00:00:29.313,000] <inf> lorawan_porting_tests:  Timer irq configured with 3000ms / get 3000ms (margin +2ms)
    [00:00:29.313,000] <inf> lorawan_porting_tests: ----------------------------------------END
