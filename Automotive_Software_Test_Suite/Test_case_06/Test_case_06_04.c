#include <stdio.h>
#include <math.h>

#include <string.h>

typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;



static int staticReturnsTrue()
{
	return 1;
}

static int staticReturnsFalse()
{
	return 0;
}

int main_Test_case_06_08(rReal_T input1, rReal_T input2, rReal_T input3)
{
    rReal_T float_var1;
    if (input1 > input2) {
		if(fabs(input1 - input2) < 4294967295.0f){
				
				if (staticReturnsTrue())
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

