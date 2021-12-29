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
struc struc_var5;

static int staticTrue = 1; /* true */
static int staticFalse = 0; /* false */

void main_Test_case_24_05(void) {

	static rReal_T tmp;
	
	if (staticTrue)
	{
			tmp =  struc_var5.float_var + 0.08;
	}
	else 
	{
		assert(0);
	}
}

void Test_case_24_initialize_05(void)
{
	
	(void)memset((void *)&struc_var5, 0,
		sizeof(struc));
	struc_var5.float_var = 0.0;

}
