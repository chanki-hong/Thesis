#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;



const int GLOBAL_CONST_TRUE = 1; /* true */
const int GLOBAL_CONST_FALSE = 0; /* false */

int main_Test_case_27_09(rReal_T input)
{
	if (GLOBAL_CONST_TRUE)
	{
		input = fmod(input, 46340.9);
	}
	
	
	input = input * input;
	
	input = (int32_T)((input < 0.0) ? ((int32_T)(-((int32_T)
		((uint32_T)((rReal_T)(-input)))))) : ((int32_T)((uint32_T)input)));
	
    return 0;
}