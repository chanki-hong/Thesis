#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;





int main_Test_case_20_31(rReal_T input0,rReal_T input1)
{
	rReal_T tmp;
	rReal_T dataCopy;
	
	dataCopy = input0;
	input0 = dataCopy;
	if (fabs(input0) >= 1.0) {


		tmp = input1 / input0;
	}
    return 0;
}