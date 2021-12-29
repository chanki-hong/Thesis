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
struc struct_var_18;

void main_Test_case_09_18(void) {
    goto source;
	source:
    for (int i = 0; i < 20; i++) {
        struct_var_18.int_arr[i]++;
    }
}

void Test_case_09_initialize_18(void)
{
    (void)memset((void *)&struct_var_18, 0,
        sizeof(struc));

    for (int i = 0; i < 20; i++) {
        struct_var_18.int_arr[i]= 0;
    }
}
