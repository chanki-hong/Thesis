#include <stdio.h>
#include <math.h>

#include <string.h>

typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;


const int GLOBAL_CONST_TRUE = 1; /* true */
const int GLOBAL_CONST_FALSE = 0; /* false */


int main_Test_case_06_09(rReal_T input1, rReal_T input2, rReal_T input3)
{
    rReal_T float_var1;
    if (input1 > input2) {
		if(fabs(input1 - input2) < 4294967295.0f){
				
				if (GLOBAL_CONST_TRUE)
				{
					float_var1 = input1 - input2;
				}
			 	
			
			if(input3 >= 1.0){
				rReal_T float_var2 = float_var1 / input3;
				uint32_T iLeft = (uint32_T)float_var2;
			}
		}
    }
    return 0;
}
