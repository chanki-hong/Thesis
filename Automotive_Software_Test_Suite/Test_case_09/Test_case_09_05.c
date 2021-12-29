#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Test_case_09.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;

const int GLOBAL_CONST_TRUE = 1; /* true */
const int GLOBAL_CONST_FALSE = 0; /* false */

static
struc struct_var_9;

void main_Test_case_09_09(void) {
    
    if (GLOBAL_CONST_TRUE)
	{
		for (int i = 0; i < 20; i++) {
			struct_var_9.int_arr[i]++;
		}
	}
	else{
	assert(0);
	}
}

void Test_case_09_initialize_09(void)
{
    (void)memset((void *)&struct_var_9, 0,
        sizeof(struc));

    for (int i = 0; i < 20; i++) {
        struct_var_9.int_arr[i]= 0;
    }
}
