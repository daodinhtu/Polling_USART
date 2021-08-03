/*
 * main.c
 *
 *  Created on: Apr 27, 2016
 *      Author: asus
 */


 #include <stdio.h>
 #include <stdint.h>


 #include <util/delay.h>
 #include <avr/io.h>
 #include <avr/pgmspace.h>


 #include "avr/Serialv2.h"


 int main()
 {
   USART_init();
   while (1)
   {
     /*Using function USART_send send one by one*/ 
     USART_send('T',0);
     USART_send('u',0);
     USART_send('\n',0);
     /*Using function USART_putstring*/
     USART_putstring("Helloworld",0);
     USART_putstring("\n",0);
     /*Delay 1s*/
     _delay_ms(1000);
   }

 }
