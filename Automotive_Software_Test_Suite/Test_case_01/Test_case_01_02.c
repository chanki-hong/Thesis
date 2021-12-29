#include <stdio.h>
#include <math.h>

#include <string.h>

typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;


static const int STATIC_CONST_TRUE = 1; /* true */
static const int STATIC_CONST_FALSE = 0; /* false */


int main_Test_case_01_4(rReal_T input1)
{
   
    rReal_T float_var;
    uint32_T uint_var;
   

   

	if (STATIC_CONST_TRUE)
	{
		
		float_var = input1;
	}
	if (STATIC_CONST_FALSE)
	{
		/* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
		printf("Dead Code");
	}
	else
	{

	
		if (float_var < 4.503599627370496E+15) {
			if (float_var >= 0.5) {
				float_var = floor(float_var + 0.5);
			}
			else {
				float_var = 0.0;
			}
		}

		if (float_var < 4.294967296E+9) {
			uint_var = (uint32_T)float_var;
		}
	}
    return 0;
}