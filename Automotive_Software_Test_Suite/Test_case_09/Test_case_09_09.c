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
struc struct_var_16;

void main_Test_case_09_16(void) {
    while(1){
		for (int i = 0; i < 20; i++) {
			struct_var_16.int_arr[i]++;
		}
		break;
	}
}

void Test_case_09_initialize_16(void)
{
    (void)memset((void *)&struct_var_16, 0,
        sizeof(struc));

    for (int i = 0; i < 20; i++) {
        struct_var_16.int_arr[i]= 0;
    }
}
