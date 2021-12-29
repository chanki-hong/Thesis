#include <stdio.h>
#include <math.h>

#include <string.h>

typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;




int main_Test_case_06_31(rReal_T input1, rReal_T input2, rReal_T input3)
{
    rReal_T float_var1;
    if (input1 > input2) {
		if(fabs(input1 - input2) < 4294967295.0f){
				
				
					float_var1 = input1 - input2;
					
				rReal_T	dataCopy = float_var1;
				rReal_T float_var1 = dataCopy;
				
			
			if(input3 >= 1.0){
				rReal_T float_var2 = float_var1 / input3;
				uint32_T iLeft = (uint32_T)float_var2;
			}
		}
    }
    return 0;
}

