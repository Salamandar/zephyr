.. _HW_MODEM_sample:

LoRa Basics Modem Hardware Modem
#################################

Overview
********

This example shows an implementation of an all integrated modem that can be
addressed using UART RX/TX and 3 gpios for commands handling (command and busy)
and events notification (event).

A bridge is usually used to forward the UART and GPIO events to a host commander.

All functions included in lora basics modem api can be called using commands.


Board support
*************

The sample is tested on the `nrf52840dk/nrf52840` and the `nucleo_l476rg` boards, and
DTS overlay are provided for these boards.

If any other board is used, a new DTS overlay should be created for it.

UART configuration
******************

As configured, uart0 is used as the debug console (e.g to USB), and uart1 (`smtc-hal-uart`)
is used for the modem communication.

The pins used for `smtc-hal-uart` are routed through the LR112x shield to pins that are
not used by the shield.

Other GPIOs
***********

The `hw-modem-command-gpios`, `hw-modem-busy-gpios`, `hw-modem-event-gpios`, and
`hw-modem-led-scan-gpios` are used to communicate with the Bridge and are routed
through the LR112x shield to pins that are not used by the shield.

Sending commands
****************

Send commands to the device by connecting the `hw-modem-command-gpios` to the transmission
line of your UART Serial Port Module (example CP2102).

A list of all available commands can be found here: [cmd_parser.c](src/cmd_parser.c).

Commands should be passed to the modem following the format:

.. code-block:: shell

    <command id> <command size> <command data (optional)> <crc>
    # For example:
    0x5d 0x00 0x5d


Example using python serial to send commands:

.. code-block:: python

    import serial
    ser = serial.Serial('/dev/ttyUSB0',115200,timeout = 0.5)
    ser.write("\x5d".encode()); ser.write("\x00".encode()); ser.write("\x5d".encode())
