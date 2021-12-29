#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;




static float static_var0;
static float static_var1;


static rReal_T Test_case_20_45(){
	 rReal_T tmp;

		 tmp = static_var1 / static_var0;
	 
	
	return tmp;
 }

int main_Test_case_20_45(rReal_T input0,rReal_T input1)
{
	rReal_T ret;
	
	static_var0 = input0;
	static_var1 = input1;
	
	if (fabs(input0) >= 1.0) {


		ret = Test_case_20_45();
	}
	else{
		ret = 0.0f;
	}
	
	ret += 1.0f;
    return 0;
}