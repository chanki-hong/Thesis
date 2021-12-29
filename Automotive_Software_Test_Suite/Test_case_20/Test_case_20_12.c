#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;




static int goodStatic = 0;

 static rReal_T Test_case_20_21(float input1, float input0 ){
	 rReal_T tmp;
	 if (goodStatic == 0) {
		 input0 =0;
	 }
	
	 tmp = input1 / input0;
	return tmp;
 }

int main_Test_case_20_21(rReal_T input0,rReal_T input1)
{
	float ret;
goodStatic =1;
	if (fabs(input0) >= 1.0) {

	ret =	Test_case_20_21(input1, input0);
		
	}
	else{
		ret = 0.0f;
	}
	ret += 1.0f;
	return 0;
	
}