#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;






int main_Test_case_21_31(uint32_T input0)
{
	uint32_T uint_var;
	rReal_T float_var;
	rReal_T dataCopy;
	rReal_T tmp;
	
	int i;
	if((input0 >= 1) && (input0 <= 16)){
		float_var = pow(2.0, (rReal_T)((uint32_T)input0)) - 1.0;
		dataCopy =  float_var;
		float_var = dataCopy;
		
		if (float_var < 4.294967296E+9) {
			uint_var = (uint32_T)float_var;
		}
		else{
			tmp= float_var;
		}
	}

    return 0;
}