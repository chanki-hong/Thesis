#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Test_case_12.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;


static
struc_1 struc_1_var_4;


static const int STATIC_CONST_TRUE = 1; /* true */
static const int STATIC_CONST_FALSE = 0; /* false */

void main_Test_case_12_04(boolean_T input1) {
    int32_T i;
    rReal_T float_arr[40];
    rReal_T tmp[40];
    rReal_T float_var;

    if(STATIC_CONST_TRUE){
		if (input1) {
			float_var = 2.0;
		}
		else {
			float_var = 0.0;
		}
	}

   
    for (i = 0; i < 40; i++) {
        float_arr[i] =
            struc_1_var_4.struc_2_var.float_arr[i] -
            float_var;
    }
    for (i = 0; i < 40; i++) {
        tmp[i] = float_arr[i]; ////////////////////////Warning
    }
}

void Test_case_12_initialize_04(void)
{
   
    (void)memset((void *)&struc_1_var_4, 0,
        sizeof(struc_1));
  
}
