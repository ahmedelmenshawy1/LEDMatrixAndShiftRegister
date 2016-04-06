/*
 * ShiftRegisterLeds_Interface.h
 *
 *  Created on: ??�/??�/????
 *      Author: ahmed
 */

#ifndef SHIFTREGISTERLEDS_INTERFACE_H_
#define SHIFTREGISTERLEDS_INTERFACE_H_
/******************************************************/
/*Comment!:Pins   */
/*Range!  :from DIO_u8Pin0 ~ DIO_u8Pin31  */

#define  SRL_u8Clk		DIO_u8Pin0
#define  SRL_u8DATA		DIO_u8Pin1
#define  SRL_u8Latch	DIO_u8Pin2
/******************************************************/
/*Comment!:Pin Initial Value  */
/*Range!  :DIO_u8LOW OR DIO_u8HIGH in Copy_u8Val with SRL_u8Pin
SRL_u8Port in Copy_u8PinOrPort*/
extern u8 shift_int(u8 Copy_u8Val,u8 Copy_u8PinOrPort);
/******************************************************/

#endif /* SHIFTREGISTERLEDS_INTERFACE_H_ */
