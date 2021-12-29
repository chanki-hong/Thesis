#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;




int globalReturnsFalse()
{
	return 0;
}

int main_Test_case_20_11(rReal_T input0,rReal_T input1)
{
	rReal_T tmp;

	if (fabs(input0) >= 1.0) {

		if (globalReturnsFalse)
		{
			input0 =0;
		}
		tmp = input1 / input0;
		
	}
    return 0;
}