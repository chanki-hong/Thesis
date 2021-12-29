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
struc struct_var_1;

void main_Test_case_09_01(void) {
    
    for (int i = 0; i < 20; i++) {
        struct_var_1.int_arr[i]++;
    }
}

void Test_case_09_initialize_01(void)
{
    (void)memset((void *)&struct_var_1, 0,
        sizeof(struc));

    for (int i = 0; i < 20; i++) {
        struct_var_1.int_arr[i]= 0;
    }
}
