#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;



rReal_T Test_case_34_31(rReal_T input0, rReal_T input1)
{
	rReal_T float_var1_1;
	rReal_T float_var2_1;
	
	
		float_var1_1= input0;
		float_var2_1= input1;
		
		rReal_T dataCopy = float_var1_1;
		rReal_T float_var1 = dataCopy;
	
		rReal_T dataCopy_1 = float_var2_1;
		rReal_T float_var2 = dataCopy_1;

	if (float_var2 < 0.0) {
		float_var2 = -(float)pow(-float_var2,
			0.33333333333333331);
	}
	else {
		float_var2 = (float)pow(float_var2, 0.33333333333333331);
	}

	if (float_var1 < 0.0) {
		float_var1 = -(float)pow(-float_var1, 0.33333333333333331);
	}
	else {
		float_var1 = (float)pow(float_var1, 0.33333333333333331);
	}


	return (float_var2 + float_var1);
}




int main_Test_case_34_31(rReal_T input0,rReal_T input1)
{
	rReal_T tmp;

	tmp= Test_case_34_31(input0, input1);
    return 0;
}