# Getting started with wearables

In this resource you will learn how to create a basic piece of wearable technology using an Adafruit FLORA and a NeoPixel LED.

1. Firstly you need to install the Arduino software which required to program your FLORA. Instructions for this can be found via the link on the [software](software.md) page.

1. Make sure you have installed the [Adafruit NeoPixel library](https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-installation#manually-install-adafruit-neopixel-library).

## Testing the FLORA board

Firstly we will test whether we can upload a program successfully to the FLORA board, before connecting any components.

1. Connect your FLORA board to the computer via the USB cable.

1. Open the Arduino IDE and check that on the Tools menu you have selected the board **Adafruit Flora**. On the 'Serial Port' menu you will need to select the port. On Windows this will be COM and then a number greater than 2 (e.g. COM3). On Mac, select a port containing the phrase "usbmodem".

1. We will use a test program to flash the on board LED. If you look closely at the board you will see a small LED labelled "D7". Type in the following code:

  ```cpp
  int led = 7;

  void setup() {
    pinMode(led, OUTPUT);
  }

  void loop() {
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
  }
  ```

1. Click on the tick symbol in the top left of the window. This will **compile** your code, which includes checking it for errors. Any errors which you need to correct will appear at the bottom, and the line will often be highlighted in the code to help you.

  ![Check for errors](images/compile-program.png)

1. If there were any errors, fix them and press the tick button again until you see "Done compiling" in green at the bottom and no errors.

1. Now click on the arrow symbol in the top left of the window. This will upload your code to the FLORA. When the code has finished uploading, you should see the red LED blinking if your code has been successfully uploaded.

## Testing the circuit
Before sewing anything, it is a good idea to test circuits with crocodile clips to check that the FLORA and the NeoPixel are working correctly and can be programmed. For this you will need:

- a FLORA board
- a NeoPixel
- three crocodile clips
- USB cable

We have chosen to use red, yellow and black crocodile clips for clarity, but the colour of the wires does not matter.

1. Before you continue, **disconnect the USB cable from your FLORA** to remove the power. This is important to avoid accidentally causing permanent damage to your NeoPixel.

![Circuit with crocodile clips](images/crocodile-clip-circuit.png)

1. Connect a crocodile clip from GND on the FLORA to negative (-) on the NeoPixel. This provides your ground connection.

1. Connect a crocodile clip from VBATT on the FLORA to positive (+) on the NeoPixel. This provides power to the NeoPixel.

1. Connect a crocodile clip from D6 on the FLORA to the connector next to the arrow pointing **towards** the NeoPixel. D6 is a pin (just like the pins on the Raspberry Pi) which we can use to send signals to the NeoPixel.

  ![FLORA with crocodile clips](images/flora-croc-clips.png)

  ![NeoPixel with crocodile clips](images/neopixel-croc-clips.png)


1. Once all of the crocodile clips are in place, connect your FLORA to the computer using the USB cable.
