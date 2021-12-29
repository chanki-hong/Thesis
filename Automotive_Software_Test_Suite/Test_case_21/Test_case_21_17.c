#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;



static  uint32_T static_var;

 static rReal_T Test_case_21_45()
 {
	  
		return pow(2.0, (rReal_T)((uint32_T)static_var)) - 1.0;
 }

int main_Test_case_21_45(uint32_T input0)
{
	uint32_T uint_var;
	rReal_T float_var;
	rReal_T tmp;
	int i;
	static_var = input0;
	if((static_var >= 1) && (static_var <= 16)){
		float_var = Test_case_21_45();
		if (float_var < 4.294967296E+9) {
			uint_var = (uint32_T)float_var;
		}
		else{
			tmp= float_var;
		}
	}

    return 0;
}