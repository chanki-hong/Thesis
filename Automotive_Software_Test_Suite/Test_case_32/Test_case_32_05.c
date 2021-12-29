#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>
#include "Test_case_32.h"

typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;

static struc struc_var_05;
const struc* struc_func_05(void) {
	return (struc*) &(struc_var_05);
} 
#define def_func_05 (struc_func_05()->uint_arr)
 
void Init_05(void) {
	struc_var_05.uint_arr[0] = 1u;
	struc_var_05.uint_arr[1] = 2u;
	struc_var_05.uint_arr[2] = 3u;
	struc_var_05.uint_arr[3] = 4u;
	struc_var_05.uint_arr[4] = 5u;
	struc_var_05.uint_arr[5] = 6u;
	struc_var_05.uint_arr[6] = 7u;
	struc_var_05.uint_arr[7] = 8u;
	struc_var_05.uint_arr[8] = 9u;
	struc_var_05.uint_arr[9] = 10u;

}



const int GLOBAL_CONST_TRUE = 1; /* true */
const int GLOBAL_CONST_FALSE = 0; /* false */


int main_Test_case_32_09(boolean_T input1)
{
	uint32_T uint_arr[10];
	uint32_T uint_var;
	Init_05();

	
	if (GLOBAL_CONST_TRUE)
	{
		for (int i = 0; i < 10; i++) {
			if (input1) {
				uint_arr[i] = 1000U;
			}
			else {
				uint_arr[i] = ((uint32_T)def_func_05[(i)]);
			}
		}
	}

	uint_var = uint_arr[0];
	for (int i = 0; i < 9; i++) {
		if (!(uint_var <= uint_arr[(int32_T)(i + 1)])) {
			uint_var = uint_arr[(int32_T)(i + 1)];
		}
	}

    return 0;
}