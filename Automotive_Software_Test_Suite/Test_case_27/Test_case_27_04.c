#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;



static int staticReturnsTrue()
{
	return 1;
}

int main_Test_case_27_08(rReal_T input)
{
	if (staticReturnsTrue())
	{
		input = fmod(input, 46340.9);
	}
	
	
	input = input * input;
	
	input = (int32_T)((input < 0.0) ? ((int32_T)(-((int32_T)
		((uint32_T)((rReal_T)(-input)))))) : ((int32_T)((uint32_T)input)));
	
    return 0;
}