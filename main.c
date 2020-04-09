/*
 * File:   main.c
 * Author: nagay
 *
 * Created on April 10, 2020, 12:55 AM
 */


#include <avr/io.h>
#define RELAY 2

int main(void) {
    
    /* Replace with your application code */
    DDRA |= (1 << RELAY);     // set bit2 to be output
    PORTA |= (1 << RELAY);    //set bit 2 in portA HIGH
    while (1) {
    }
}
