#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;

static int goodStatic = 0;
static rReal_T input;

static void Test_case_27_21(float input ){
	if (goodStatic) {
		input= fmod(input, 46340.9);
	}
}


int main_Test_case_27_21()
{
	goodStatic =1;
		Test_case_27_21(input);
	
	
	
	input = input * input;
	
	input = (int32_T)((input < 0.0) ? ((int32_T)(-((int32_T)
		((uint32_T)((rReal_T)(-input)))))) : ((int32_T)((uint32_T)input)));
	
    return 0;
}