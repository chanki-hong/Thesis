#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Test_case_24.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;



static
struc struc_var1;
static rReal_T tmp;

void main_Test_case_24_01(void) {

	
	tmp =  struc_var1.float_var + 0.08;
}

void Test_case_24_initialize_01(void)
{
	
	(void)memset((void *)&struc_var1, 0,
		sizeof(struc));
	struc_var1.float_var = 0.0;

}
