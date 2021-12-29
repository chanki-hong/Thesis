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
struc struc_var9;

const int GLOBAL_CONST_TRUE = 1; /* true */
const int GLOBAL_CONST_FALSE = 0; /* false */

void main_Test_case_24_09(void) {

	static rReal_T tmp;
	
	if (GLOBAL_CONST_TRUE)
	{
		tmp =  struc_var9.float_var + 0.08;
	}
	else 
	{
		assert(0);
	}

}

void Test_case_24_initialize_09(void)
{
	
	(void)memset((void *)&struc_var9, 0,
		sizeof(struc));
	struc_var9.float_var = 0.0;

}
