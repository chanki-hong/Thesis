#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;


static int32_T tmp;

int main_Test_case_28_31(rReal_T input0)
{
	rReal_T float_var1 = input0;
	rReal_T float_var2;
	
	

	if (float_var1 < 0.0) {
		 
		float_var2 = -1.0;
	}
	else if (float_var1 > 0.0) {
		 
		float_var2 = 1.0;
	}
	else {
		 
		float_var2 = float_var1;
	}

	rReal_T dataCopy = float_var2;
	rReal_T float_var2_1 = dataCopy;


	if ((float_var2_1 < 2.147483648E+9)) {
		tmp = (int32_T)float_var2_1;
	}
	
	printf("%d",tmp);
	
    return tmp;
}