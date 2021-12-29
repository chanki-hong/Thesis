#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;




const int GLOBAL_CONST_TRUE = 1; /* true */
const int GLOBAL_CONST_FALSE = 0; /* false */

int main_Test_case_22_9(rReal_T input0,boolean_T input2)
{
	rReal_T float_var;

	
	if(input0 >= 1.0f){

		if (GLOBAL_CONST_TRUE)
		{
			float_var = (1.0 / input0) * tan(0.7857);

			if (input2) {
				float_var = 1.0E-5;
			}
		
		}
		if (GLOBAL_CONST_FALSE)
		{
			/* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
			printf("Dead Code");
		}

		float_var = 1.0 / float_var;
	}

    return 0;
}