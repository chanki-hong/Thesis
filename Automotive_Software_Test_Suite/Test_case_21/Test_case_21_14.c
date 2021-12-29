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

int main_Test_case_21_34(uint32_T input0)
{
	uint32_T uint_var;
	rReal_T float_var;
	Union myUnion;
	rReal_T tmp;
	
	int i;
	if((input0 >= 1) && (input0 <= 16)){
		float_var = pow(2.0, (rReal_T)((uint32_T)input0)) - 1.0;
		myUnion.unionFirst = float_var;
	
		rReal_T float_var = myUnion.unionSecond;
		
		if (float_var < 4.294967296E+9) {
			uint_var = (uint32_T)float_var;
		}
		else{
			tmp= float_var;
		}
	}

    return 0;
}