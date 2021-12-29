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
struc struc_var18;

void main_Test_case_24_18(void) {

	static rReal_T tmp;
	goto source;
		assert(0);
	source:
	tmp =  struc_var18.float_var + 0.08;
}

void Test_case_24_initialize_18(void)
{
	
	(void)memset((void *)&struc_var18, 0,
		sizeof(struc));
	struc_var18.float_var = 0.0;

}
