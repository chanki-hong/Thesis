#include "Test_case_04.h"
#include <stdio.h>


/*BEGIN:STATIC*/
static struc struc_var;

typedef float rReal_T;
typedef int int32_T;



static int staticReturnsTrue()
{
	return 1;
}

static int staticReturnsFalse()
{
	return 0;
}



int main_Test_case_04_08()
{
    rReal_T float_var[64];
    int32_T i;
    
	for (i = 0; i < 64; i++) {
		struc_var.float_arr[i] = 0.0f;
	}
    
	if (staticReturnsTrue())
	{

		for (i = 0; i < 63; i++) {
			float_var[i] = struc_var.float_arr[(int32_T)(i + 1)];
		}

	}
	if (staticReturnsFalse())
	{
		/* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
		printf("Dead Code");
	}
	else
	{

		float_var[63] = 1.0f;

		for (i = 0; i < 64; i++) {
			struc_var.float_arr[i] = float_var[i];
		}
	}
    return 0;
}