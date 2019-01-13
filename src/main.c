#include <zephyr.h>
#include <console.h>
#include "ulisp-arm.h"

void main(void)
{
	console_init();

    setup();
    for(;;)
    {
        loop();
    }
}
