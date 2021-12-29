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

int main_Test_case_22_34(rReal_T input0,boolean_T input2)
{
	rReal_T float_var;
	Union myUnion;

	if(input0 >= 1.0f){

		float_var = (1.0 / input0) * tan(0.7857);

		if (input2) {
			float_var = 1.0E-5;
		}
	
		myUnion.unionFirst = float_var;
	
		rReal_T float_var = myUnion.unionSecond;
	
		float_var = 1.0 / float_var;
	}

    return 0;
}