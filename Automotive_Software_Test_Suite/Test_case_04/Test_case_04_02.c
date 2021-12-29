#include "Test_case_04.h"
#include <stdio.h>


/*BEGIN:STATIC*/
static struc struc_var;

typedef float rReal_T;
typedef int int32_T;



static const int STATIC_CONST_TRUE = 1; /* true */
static const int STATIC_CONST_FALSE = 0; /* false */


int main_Test_case_04_04()
{
    rReal_T float_var[64];
    int32_T i;
    
	for (i = 0; i < 64; i++) {
		struc_var.float_arr[i] = 0.0f;
	}
    
	if (STATIC_CONST_TRUE)
	{
		for (i = 0; i < 63; i++) {
			float_var[i] = struc_var.float_arr[(int32_T)(i + 1)];
		}
	}
	if (STATIC_CONST_FALSE)
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