/*
 * File:   main.c
 * Author: 19180077
 *
 * Created on 9 de Março de 2020, 10:13
 */


#include <xc.h>
#include "config.h"

void main(void) 
{
    PORTDbits.RD0 = 0;      //led1
    PORTDbits.RD1 = 0;      //led2
    TRISDbits.TRISD0 = 1;   //configuração de saida 
    TRISDbits.TRISD1 = 1;   // configuiração de saida 
    PORTDbits.RD2 = 0;      // botão 1
    PORTDbits.RD3 = 0;      // botão 2
    
    while(1 )
        
    {
        PORTDbits.RD0 = 1; 
        __delay_ms(500);
        PORTDbits.RD1 = 0;
        PORTDbits.RD1 = 1;
        __delay_ms(500);
        PORTDbits.RD1 = 0;
        
        {
         if(PORTDbits.RD2 == 1)
             
         PORTDbits.RD0 = 1; 
        __delay_ms( 1000);
        PORTDbits.RD0 = 0;
        PORTDbits.RD1 = 1;
        __delay_ms( 1000);
        PORTDbits.RD1 = 0;
        
        }
        {
         if(PORTDbits.RD3 == 1)
                
        PORTDbits.RD0 = 1; 
        __delay_ms( 1000);
        PORTDbits.RD0 = 0;
        PORTDbits.RD1 = 1;
        __delay_ms( 1000);
        PORTDbits.RD1 = 0;
                
        }
        {
            if (PORTDbits.RD2 == 1 && PORTDbits.RD3 == 1)
                
         PORTDbits.RD0 = 1; 
        __delay_ms( 2000);
        PORTDbits.RD0 = 0;
        PORTDbits.RD1 = 1;
        __delay_ms( 2000);
        PORTDbits.RD1 = 0;
        }
    }
    
    return;
}
