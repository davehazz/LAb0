/*
 * File:   newmain.c
 * Author: joshua hzzard
 *
 * Created on September 19, 2024, 12:28 AM
 */


#include <xc.h>
#define _XTAL_FREQ   2000000

void main(void) {
    TRISB = 0;
    PORTBbits.RB0 = 1;
    
    while(1)
    {
        //set port for output
        PORTBbits.RB6 = 1;
        __delay_ms(500);
        
        PORTBbits.RB6 = 0;
        __delay_ms(500);
    }
    return;
}
