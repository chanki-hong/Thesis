#include <stdio.h>
#include <math.h>

#include <string.h>



typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;




static const int STATIC_CONST_TRUE = 1; /* true */
static const int STATIC_CONST_FALSE = 0; /* false */

int main_Test_case_13_04(uint32_T input1)
{   
    uint32_T uint_var;
    rReal_T float_var;
    rReal_T tmp[40] = { 0, };

	if (STATIC_CONST_TRUE)
	{
		if (input1 <= 40U) {
			uint_var = input1;
		}
		else {
			uint_var = 40U;
		}
	}

   
    if (1U <= (uint_var)) {
        float_var = tmp[(int32_T)(((int32_T)(uint_var)) - 1)];
    }
    else {
        float_var = 0.0;
    }
     return 0;
}