.. _lorawan_geolocation:

LoRaWAN Geolocation
###########

Overview
********

This sample shows how to get geolocation from a LR1110 Semtech transceiver and
send it to a LoRaWAN network.


Requirements
************

* A LR1110 or LR1120 LoRa transceiver
* A LoRaWAN network

Building and Running
********************

You first need to provision your network keys in `boards/user_keys.overlay`.

This application can be built and executed as follows:

.. zephyr-app-commands::
   :zephyr-app: samples/subsys/lorawan_lbm/geolocation
   :board: nrf52840dk/nrf52840
   :shield: [semtech_lr1110mb1xxs]
   :goals: build flash
   :compact:
