#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float float32;
typedef unsigned char boolean;
typedef unsigned char uint8;
typedef unsigned char uint8_T;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef int sint32;
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;




static const int STATIC_CONST_TRUE = 1; /* true */

void Test_case_39_04(uint32_T uint_var)
{
	
	uint8_T uchar_var;

	
	uchar_var = ((uint32_T)((uint8_T)((int32_T)(((int32_T)((uint8_T)uint_var)) * 16)-1)));
}

int main_Test_case_39_4(uint32_T uint_var) {
	
if((uint_var== 1)||(uint_var== 8) || (uint_var== 16)){
		if (STATIC_CONST_TRUE)
		{
			Test_case_39_04(uint_var);
		}
		else{
			Test_case_39_04(100);
		}
}
	return 0;
}