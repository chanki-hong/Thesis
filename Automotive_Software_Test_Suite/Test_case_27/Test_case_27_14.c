#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;




typedef union
{
	float unionFirst;
	float unionSecond;
} Union;

int main_Test_case_27_34(rReal_T input0)
{
		Union myUnion;

		input0 = fmod(input0, 46340.9);

	myUnion.unionFirst = input0;
	
	rReal_T input = myUnion.unionSecond;	
	
	
	input = input * input;
	
	input = (int32_T)((input < 0.0) ? ((int32_T)(-((int32_T)
		((uint32_T)((rReal_T)(-input)))))) : ((int32_T)((uint32_T)input)));
	
    return 0;
}