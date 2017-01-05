# Getting started with wearables

In this resource you will learn how to create a basic piece of wearable technology using an Adafruit FLORA and a NeoPixel LED.

1. Firstly you need to install the Arduino software which required to program your FLORA. Instructions for this can be found via the link on the [software](software.md) page.

## Testing the circuit
Before sewing anything, it is a good idea to test circuits with crocodile clips to check that the FLORA and the NeoPixel are working correctly and can be programmed. For this you will need the FLORA board, the NeoPixel, three crocodile clips and your USB cable. We have chosen to use red, yellow and black crocodile clips for clarity, but the colour of the wires does not matter.

![Circuit with crocodile clips](images/crocodile-clip-circuit.png)

1. Connect a crocodile clip from GND on the FLORA to negative (-) on the NeoPixel. This provides your ground connection.

1. Connect a crocodile clip from VBATT on the FLORA to positive (+) on the NeoPixel. This provides power to the NeoPixel.

1. Connect a crocodile clip from D6 on the FLORA to the connector next to the arrow pointing **towards** the NeoPixel. D6 is a pin (just like the pins on the Raspberry Pi) which we can use to send signals to the NeoPixel.

![FLORA with crocodile clips](images/flora-croc-clips.png)

![NeoPixel with crocodile clips](images/neopixel-croc-clips.png)
