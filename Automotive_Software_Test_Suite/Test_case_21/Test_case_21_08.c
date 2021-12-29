#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;






int main_Test_case_21_15(uint32_T input0)
{
	uint32_T uint_var;
	rReal_T float_var;
	int i;
	rReal_T tmp;
	if((input0 >= 1) && (input0 <= 16)){
		
			switch (6)
			{
			case 6:
				float_var = pow(2.0, (rReal_T)((uint32_T)input0)) - 1.0;
				break;
			default:
				printf("Dead Code");
				break;
			}
			
		
		if (float_var < 4.294967296E+9) {
			uint_var = (uint32_T)float_var;
		}
		else{
			tmp= float_var;
		}
	}

    return 0;
}