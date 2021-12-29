#include <stdio.h>
#include <math.h>

#include <string.h>



typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;




int main_Test_case_13_15(uint32_T input1)
{   
    uint32_T uint_var;
    rReal_T float_var;
    rReal_T tmp[40] = { 0, };

	switch (6)
	{
	case 6:
		if (input1 <= 40U) {
			uint_var = input1;
		}
		else {
			uint_var = 40U;
		}
		break;
	default:
		printf("Dead Code");
		break;
	}
		
	

   
    if (1U <= (uint_var)) {
        float_var = tmp[(int32_T)(((int32_T)(uint_var)) - 1)];
    }
    else {
        float_var = 0.0;
    }
     return 0;
}