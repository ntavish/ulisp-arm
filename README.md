# ulisp-arm

A version of the Lisp programming language for boards based on the ARM processor: the Arduino Due, Arduino Zero, Arduino MKRZero, Adafruit Metro M4, Adafruit ItsyBitsy M4, Adafruit Feather M4, and BBC Micro Bit.
For more information see:
http://www.ulisp.com/

# Description

This is a port of ulisp running on Electronut Labs Blip board and uses Zephyr.

Steps to build and flash:

```bash
mkdir build
cd build
cmake -GNinja -DBOARD=nrf52840_blip ..
ninja flash
```

Then open serial port (with picocom for e.g. `picocom -b 115200 /dev/ttyACM1`)

```
***** Booting Zephyr OS zephyr-v1.13.0-3169-gc885cb533e *****
uLisp 2.5 
{0}4095> (defun sq(x)(* x x))
sq

{4}4082> (sq 12)
144

{14}4082>
```
