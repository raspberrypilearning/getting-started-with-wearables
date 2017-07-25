## Controlling the NeoPixel with code

We are going to write some code to control the NeoPixel. This is slightly more complicated than controlling the on-board LED: we need to use the NeoPixel library to communicate with the NeoPixel itself as it can do many more things than a normal LED.

- In the Arduino IDE, select `File > New` to create a new program  (called a 'sketch').

- Keep the code that is automatically inserted and add this line of code at the very start of your sketch. This will import the Adafruit NeoPixel library:

  ```cpp
  #include <Adafruit_NeoPixel.h>
  ```

- Next we will set up the NeoPixel object. Add the following two lines of code straight after your `#include` statement
  ```cpp
  int pin = 6;
  Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, pin, NEO_GRB + NEO_KHZ800);
  ```
  The first line specifies the pin to which the NeoPixel is connected. Remember when we put the crocodile clip on pin D6 earlier? We can refer to this pin just by the number `6` in the program. Other pins can be referred to by number in the same way.

  The second line sets up a "strip" of NeoPixels, with some setup information:
  - `1` - how many NeoPixels we are controlling. We are only using one in this project, but if you make a project with more NeoPixels, increase this number.
  - `pin` - the pin number to which the NeoPixels are connected (from the variable `pin` we just set up).
  - `NEO_GRB + NEO_KHZ800` - this is config information for the NeoPixel RGB v2 we are using. You may need to change these values if you are using a different version of the NeoPixel. More information on other settings is available on the [Adafruit website](https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library).

- Now find the **setup** method which was created for you when you opened a new sketch. Change the code so that it looks like this:

  ```cpp
  void setup() {
    strip.begin();
    strip.show();
  }
  ```

  The `begin()` method allows us to start talking to the NeoPixel and the `show()` method tells the NeoPixel to update its colour. Since we haven't yet told it to be any particular colour, it will show as blank or 'off'.

- Now to set the colour. Find the **loop** method which was also created for you in the blank sketch. Add the following code:
  ```cpp
  void loop() {

    // Blank
    strip.setPixelColor(0, 0,0,0);
    strip.show();
    delay(1000);

    // Blue
    strip.setPixelColor(0, 0,0,255);
    strip.show();
    delay(1000);

  }
  ```

  This method is called `loop()` because the code inside it will run continuously on the FLORA. Here's what this code does:

  - `strip.setPixelColor(0, 0,0,255);` - sets the pixel colour. The first number is which NeoPixel to set to this colour. Since we only have one NeoPixel in this project, it is pixel `0`. The last three numbers are a RGB colour value, so `0, 0, 255` is blue. There are lots of websites (e.g. [Adobe Color Wheel](https://color.adobe.com)) where you can find out the RGB values of particular colours.  
  - `strip.show()` - updates the colour display.
  - `delay(1000)` - waits for one second (1000 milliseconds).

- Click on the tick to compile the program, and if there are no errors, click on the arrow to upload it to your FLORA. You should see the NeoPixel flash on and off in blue. The full code can be found [here](https://raw.githubusercontent.com/raspberrypilearning/getting-started-with-wearables/master/code/test_neopixel.ino).

  Can you change the colour and the speed at which the NeoPixel flashes?

Now move on to [worksheet 2](worksheet2.md) to find out how to sew your FLORA circuit into an item of clothing.

