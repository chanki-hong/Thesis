#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;

static rReal_T static_var ;

	static int32_T tmp;

static void Test_case_28_45()
 {
	 if ((static_var < 2.147483648E+9)) {
		tmp = (int32_T)static_var;
	}
 }

int main_Test_case_28_45(rReal_T input0)
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
	
	static_var = 	float_var2 ;

	Test_case_28_45();
	
	printf("%d",tmp);
	
    return tmp;
}