/*
 * cv6.h
 *
 *  Created on: Oct 26, 2016
 *      Author: Andrej
 */

#ifndef CV6_H_
#define CV6_H_
void init_adc(void);
void init_NVIC(void);
void ADC1_IRQHandler(void);
void initUSART2(void);
void PutcUART2(char);
void putC(char []);
void RegisterCallbackUART2(void *callback);
void USART2_IRQHandler(void);
double konverzia();
void stav(int);


#endif /* CV6_H_ */
