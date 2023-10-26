/*
 * Calculator_Operations.c
 *
 *  Created on: Aug 12, 2023
 *      Author: hedra
 */
#include "../lib/stdtypes.h"

//Add two numbers
s32 CALC_u32Sum(s32 num_1,s32 num_2)
{
	s32 result = num_1+num_2;
	return result;
}
//Subtract two numbers
s32 CALC_u32Sub(s32 num_1,s32 num_2)
{
	s32 result = num_1-num_2;
	return result;
}
//Multiply two numbers
s32 CALC_u32Mul(s32 num_1,s32 num_2)
{
	s32 result = num_1*num_2;
	return result;
}
//Divide two numbers
s32 CALC_u32Div(s32 num_1,s32 num_2)
{
	s32 result = num_1/num_2;
	return result;
}
