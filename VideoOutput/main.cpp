#include "mbed.h"

DigitalOut myled(LED1);

int main() {
    while(1) {
        myled = 1;
        wait(0.1333);
        myled = 0;
        wait(1.9);
    }
}
