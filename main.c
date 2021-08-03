#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdint.h>

void USART_init();
void USART_send();
void USART_putstring();


char Data = 'H';
char String[] = "Hello World \n";

int main(){
	USART_init();
	while(1){
		USART_send(Data,0);
		_delay_ms(1000);
		USART_putstring(String,0);
		_delay_ms(1500);
	}
	return 0;
}
