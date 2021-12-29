#include <stdio.h>
#include <math.h>

#include <string.h>



typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;

typedef union
{
	uint32_T unionFirst;
	uint32_T unionSecond;
} Union;



static const int STATIC_CONST_TRUE = 1; /* true */
static const int STATIC_CONST_FALSE = 0; /* false */

int main_Test_case_13_34(uint32_T input1)
{   
    uint32_T uint_var_1;
    rReal_T float_var;
    rReal_T tmp[40] = { 0, };
	Union myUnion;


		if (input1 <= 40U) {
			uint_var_1 = input1;
		}
		else {
			uint_var_1 = 40U;
		}
	myUnion.unionFirst = uint_var_1;
	
	uint32_T uint_var = myUnion.unionSecond;

    if (1U <= (uint_var)) {
        float_var = tmp[(int32_T)(((int32_T)(uint_var)) - 1)];
    }
    else {
        float_var = 0.0;
    }
     return 0;
}