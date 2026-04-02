/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

#define WAIT_TIME_MS 500 
DigitalOut led1(LED1);

int main() {
    srand(time(NULL));
    while (1) {
        float v = (float)rand()/RAND_MAX;
        led1 = (v < 0.1f) ? 1:0;
        wait_us(100.0);
        printf("random\n");
    }
}