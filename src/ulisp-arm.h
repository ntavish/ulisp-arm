#ifndef __ULISP_ARM__
#define __ULISP_ARM__

#include <zephyr.h>
#include <console.h>

// these are the REPL read/write routines
#define console_read() console_getchar()
#define console_write(x) console_putchar(x)

#define seed_random() // not needed with zephyr
#define random() sys_rand32_get()
#define delay(x) k_sleep(x)

// digital/analog I/O
// TODO fix
#define INPUT 0
#define OUTPUT 1
#define INPUT_PULLDOWN 2
#define INPUT_PULLUP 3
static int digitalRead(int pin){return 0;}
static void digitalWrite(int pin, int val){}
static int analogRead(int pin){return 0;}
static void analogWrite(int pin, int val){}
static void pinMode(int pin, int dir){};

void setup();
void loop();

#endif