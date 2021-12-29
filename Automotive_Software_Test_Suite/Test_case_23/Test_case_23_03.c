#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;




static int staticTrue = 1; /* true */
static int staticFalse = 0; /* false */

int main_Test_case_23_5(rReal_T input0)
{
	rReal_T tmp;
	if ((input0 >= 1.0) && (input0 <= 5.0)) {
		
		if (staticFalse)
		{
			input0 = 3.4E+38;
		}
		tmp = 1.0986122886681096 / log(3.0 * input0);
	}
	
    return 0;
}