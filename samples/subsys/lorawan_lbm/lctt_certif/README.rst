.. _lorawan_lctt_certif:

LoRaWAN LCTT Certification
###########

Overview
********

This sample provides testing for the LoRaWAN Certification Test Tool (LCTT).

Please see <https://resources.lora-alliance.org/home/getting-started-with-the-lorawan-certification-test-tool-lctt-2> for more information.

Requirements
************

* A LoRa transceiver supported by Zephyr.
* A LoRaWAN network

Building and Running
********************

You first need to provision your network keys in `boards/user_keys.overlay`.

This application can be built and executed as follows:

.. zephyr-app-commands::
   :zephyr-app: samples/subsys/lorawan_lbm/lctt_certif
   :board: nrf52840dk/nrf52840
   :shield: [semtech_lr1110mb1xxs | semtech_lr1120mb1xxs | semtech_lr1121mb1xxs | semtech_sx1261mb1bas ]
   :goals: build flash
   :compact:
