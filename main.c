    #include "ch.h"
    #include "hal.h"
     
    int main(void)
    {
     
    halInit();
    chSysInit();
    palSetPadMode(GPIOD, GPIOD_LED6, PAL_MODE_OUTPUT_PUSHPULL);
    while (TRUE) {
    palSetPad(GPIOD, GPIOD_LED6); /* Blue LED */
    chThdSleepMilliseconds(500);
    palClearPad(GPIOD, GPIOD_LED6);
    chThdSleepMilliseconds(500);
    }
    }
