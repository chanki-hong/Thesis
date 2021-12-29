#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Test_case_24.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;

static const int STATIC_CONST_TRUE = 1; /* true */
static const int STATIC_CONST_FALSE = 0; /* false */


static
struc struc_var4;

void main_Test_case_24_04(void) {

	static rReal_T tmp;
	if (STATIC_CONST_TRUE)
	{
	tmp =  struc_var4.float_var + 0.08;
	}
	else 
	{
		assert(0);
	}

}

void Test_case_24_initialize_04(void)
{
	
	(void)memset((void *)&struc_var4, 0,
		sizeof(struc));
	struc_var4.float_var = 0.0;

}
