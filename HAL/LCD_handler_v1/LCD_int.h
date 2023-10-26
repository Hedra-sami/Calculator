/*
 * LCD_int.h
 *
 *  Created on: Aug 12, 2023
 *      Author: hedra
 */

#ifndef HAL_LCD_HANDLER_V1_LCD_INT_H_
#define HAL_LCD_HANDLER_V1_LCD_INT_H_

#include "../../lib/stdtypes.h"

void LCD_vidinit();
void LCD_vidsendCommand(u8 Copy_u8cmd);
void LCD_vidwriteCharacter(u8 Copy_u8char);

#endif /* HAL_LCD_HANDLER_V1_LCD_INT_H_ */
