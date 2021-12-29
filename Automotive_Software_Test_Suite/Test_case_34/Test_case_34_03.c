#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;

static int staticTrue = 1; /* true */
static int staticFalse = 0; /* false */


rReal_T Test_case_34_05(rReal_T input0, rReal_T input1)
{
	rReal_T float_var1;
	rReal_T float_var2;
	
	if (staticTrue)
	{
		float_var1= input0;
		float_var2= input1;
	}

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





int main_Test_case_34_05(rReal_T input0,rReal_T input1)
{
	rReal_T tmp;

	tmp= Test_case_34_05(input0, input1);
    return 0;
}