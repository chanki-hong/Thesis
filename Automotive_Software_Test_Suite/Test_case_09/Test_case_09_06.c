#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Test_case_09.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;

int globalTrue = 1; /* true */
int globalFalse = 0; /* false */

static
struc struct_var_10;

void main_Test_case_09_10(void) {
    
     if (globalTrue)
	{
		for (int i = 0; i < 20; i++) {
			struct_var_10.int_arr[i]++;
		}
	}
	else{
	assert(0);
	}
}

void Test_case_09_initialize_10(void)
{
    (void)memset((void *)&struct_var_10, 0,
        sizeof(struc));

    for (int i = 0; i < 20; i++) {
        struct_var_10.int_arr[i]= 0;
    }
}
