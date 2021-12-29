#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;




static rReal_T Test_case_20_44(float input1, float input0 ){
	 rReal_T tmp;

		 tmp = input1 / input0;
	 
	
	return tmp;
 }

int main_Test_case_20_44(rReal_T input0,rReal_T input1)
{
	rReal_T tmp;
	rReal_T ret;
rReal_T(*funcPtr) (float, float) = Test_case_20_44;
	if (fabs(input0) >= 1.0) {


		ret =	funcPtr(input1, input0);
	}
	else{
		ret = 0.0f;
	}
	
		ret += 1.0f;
	return 0;

}