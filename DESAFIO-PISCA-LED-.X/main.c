/*
 * File:   main.c
 * Author: 19180077
 *
 * Created on 9 de Mar�o de 2020, 10:13
 */


#include <xc.h>
#include "config.h"
void main(void) 
{
    PORTDbits.RD0 = 0;      //led1
    PORTDbits.RD1 = 0;      //led2
    TRISDbits.TRISD0 = 1;   //configura��o de saida 
    TRISDbits.TRISD1 = 1;   // configuira��o de saida 
    PORTDbits.RD2 = 0;      // bot�o 1
    PORTDbits.RD3 = 0;      // bot�o 2
    
    while(1 )
        
    {
        PORTDbits.RD0 = 1; 
        __delay_ms(500);
        PORTDbits = 0;
        PORTDbits.RD1 = 1;
        __delay_ms(500);
        
    }
    
    return;
}
