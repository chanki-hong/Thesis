#include "Test_case_04.h"
#include <stdio.h>


/*BEGIN:STATIC*/
static struc struc_var;

typedef float rReal_T;
typedef int int32_T;


static void Test_case_04_44(int i)
{
	static rReal_T float_var[64];
	
	for (i = 0; i < 63; i++) {
		float_var[i] = struc_var.float_arr[(int32_T)(i + 1)];
	}

	float_var[63] = 1.0f;

	for (i = 0; i < 64; i++) {
		struc_var.float_arr[i] = float_var[i];
	}
}

int main_Test_case_04_44()
{
    rReal_T float_var[64];
    int32_T i;
    
	void(*funcPtr) (int)  = Test_case_04_44;

	for (i = 0; i < 64; i++) {
		struc_var.float_arr[i] = 0.0f;
	}
    
	funcPtr(i);

    return 0;
}