.. _lorawan_lbm_periodical_uplink:

LoRaWAN Periodical uplink
###########

Overview
********

This sample joins a LoRa network and periodically sends uplinks. It also sends
uplinks whenever the USER button is pressed.

Requirements
************

* A LoRa transceiver supported by Zephyr.
* A LoRaWAN network

Building and Running
********************

You first need to provision your network keys in `boards/user_keys.overlay`.

This application can be built and executed as follows:

.. zephyr-app-commands::
   :zephyr-app: samples/subsys/lorawan_lbm/periodical_uplink
   :board: nrf52840dk/nrf52840
   :shield: [semtech_lr1110mb1xxs | semtech_lr1120mb1xxs | semtech_lr1121mb1xxs | semtech_sx1261mb1bas ]
   :goals: build flash
   :compact:
