#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Test_case_15.h"
typedef int int32_T;
typedef unsigned int uint32_T;


static struc struct_var;

void Test_case_15_01(uint32_T input1) {
    
    if (!(input1 > 0U)) {
        struct_var.int_var = 0;
    }
    else {
            struct_var.int_var++;    
    }
}

void Test_case_15_initialize_01(void)
{
    (void)memset((void *)&struct_var, 0,
        sizeof(struc));
}

