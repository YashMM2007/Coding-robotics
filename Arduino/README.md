# BLINKING OF LED

## About

This project demonstrates blinking of an LED using Arduino, where a push button is used to toggle the LED blinking ON and OFF.

## Features

1. LED blinking using Arduino
2. Button Debouncing for Stable Operation

## Components Used

1. Arduino Board
2. Arduino IDE

## Concept

1. Digital Input and Digital Output
2. Toggle logic using a push button
3. Internal pull-up Resistor (INPUT_PULLUP)
4. Delay function for controlling Blinking speed

## Working Principle

1. The program initializes Variables { ledOn, button, lastButton } that store the LED state and the previous button state.
2. Each time the button is pressed, the LED blinking state is toggled between ON and OFF.
3. Once toggled ON, the LED continues blinking without the need to keep pressing the button.
4. A small delay is added to avoid Multiple Detections caused by button bouncing.
5. INPUT_PULLUP is used to prevent floating inputs and ensure stable button readings.

``` cpp
if (button == LOW && lastButton == HIGH) {
    ledOn = !ledOn;
    delay(100);
}
lastButton = button;
```
1. This block detects a new button press using edge detection.
2. A small delay is added for debouncing to avoid multiple toggles.
3. The previous button state is updated for the next loop cycle.



## Output

1. On the first button press, the LED starts blinking.
2. On the next button press, the LED stops blinking.
3. Each button press alternates the LED blinking state.

## Conclusion

This project shows how a single push button can be used to toggle LED blinking using Arduino. It helps in understanding digital input/output, toggle logic, and debouncing techniques, which are essential for basic embedded and robotics applications.
