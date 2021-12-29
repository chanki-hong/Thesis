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
struc struct_var_4;

static const int STATIC_CONST_TRUE = 1; /* true */
static const int STATIC_CONST_FALSE = 0; /* false */


void main_Test_case_09_04(void) {
    if (STATIC_CONST_TRUE)
	{
		for (int i = 0; i < 20; i++) {
			struct_var_4.int_arr[i]++;
		}
	}
	else{
	assert(0);
	}
}

void Test_case_09_initialize_04(void)
{
    (void)memset((void *)&struct_var_4, 0,
        sizeof(struc));

    for (int i = 0; i < 20; i++) {
        struct_var_4.int_arr[i]= 0;
    }
}
