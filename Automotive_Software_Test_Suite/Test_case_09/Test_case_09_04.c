#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Test_case_09.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;


static
struc struct_var_8;

static int staticReturnsTrue()
{
	return 1;
}


void main_Test_case_09_08(void) {
    
	if (staticReturnsTrue())
	{
		for (int i = 0; i < 20; i++) {
			struct_var_8.int_arr[i]++;
		}
	}		
	else{
	assert(0);
	}
}

void Test_case_09_initialize_08(void)
{
    (void)memset((void *)&struct_var_8, 0,
        sizeof(struc));

    for (int i = 0; i < 20; i++) {
        struct_var_8.int_arr[i]= 0;
    }
}
