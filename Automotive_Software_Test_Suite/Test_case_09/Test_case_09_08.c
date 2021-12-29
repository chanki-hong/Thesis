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
struc struct_var_15;

void main_Test_case_09_15(void) {
    
	switch (6)
	{
	case 6:
		for (int i = 0; i < 20; i++) {
        struct_var_15.int_arr[i]++;
		}
		break;
	default:
		printf("Dead Code");
		break;
	}

}

void Test_case_09_initialize_15(void)
{
    (void)memset((void *)&struct_var_15, 0,
        sizeof(struc));

    for (int i = 0; i < 20; i++) {
        struct_var_15.int_arr[i]= 0;
    }
}
