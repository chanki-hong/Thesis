#include "Test_case_04.h"
#include <stdio.h>


/*BEGIN:STATIC*/
static struc struc_var;

typedef float rReal_T;
typedef int int32_T;





int main_Test_case_04_17()
{
    rReal_T float_var[64];
    int32_T i,k;
    
	for (i = 0; i < 64; i++) {
		struc_var.float_arr[i] = 0.0f;
	}

	for (i = 0; i < 1; i++)
	{
		for (i = 0; i < 63; i++) {
			float_var[i] = struc_var.float_arr[(int32_T)(i + 1)];
		}

	}
	for (k = 0; k < 1; k++)
	{


		float_var[63] = 1.0f;

		for (i = 0; i < 64; i++) {
			struc_var.float_arr[i] = float_var[i];
		}
	}
    return 0;
}