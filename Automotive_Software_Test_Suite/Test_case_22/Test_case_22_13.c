#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;






int main_Test_case_22_31(rReal_T input0,boolean_T input2)
{
	rReal_T float_var;

	if(input0 >= 1.0f){

		float_var = (1.0 / input0) * tan(0.7857);
	
		if (input2) {
			float_var = 1.0E-5;
		}
		
		rReal_T dataCopy = float_var;
		float_var = dataCopy;
		
		float_var = 1.0 / float_var;
	}

    return 0;
}