/*
 * EXTI_Interface.h
 *
 *  Created on: Jan 14, 2022
 *      Author: Ahmed Khaled Hammad
 */

#ifndef MEXTI_INTERFACE_H_
#define MEXTI_INTERFACE_H_

#define EXTI0  0
#define EXTI1  1
#define EXTI2  2

#define  MEXTI_LOW_LEVEL                0
#define  MEXTI_ANY_LOGICAL_CHANGE       1
#define  MEXTI_FALLING_EDGE             2
#define  MEXTI_RISING_EDGE              3


/* EXTI0 Initialization*/
void MEXTI0_VidInit(void);
/* EXTI1 Initialization*/
void MEXTI1_VidInit(void);
/* EXTI2 Initialization*/
void MEXTI2_VidInit(void);
/*select sense control Function*/
void MEXTI_VidSenseControl(u8 Copy_u8EXTI_ID,u8 Copy_u8SenseControl);
/*Call Back Function */
void MEXTI0_Set_CallBackFunction(void(*Copy_VidCallBack)(void));

#endif /* MEXTI_INTERFACE_H_ */
