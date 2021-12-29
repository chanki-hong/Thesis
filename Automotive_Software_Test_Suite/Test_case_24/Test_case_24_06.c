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
struc struc_var10;

int globalTrue = 1; /* true */
int globalFalse = 0; /* false */


void main_Test_case_24_10(void) {

	static rReal_T tmp;
	
	if (globalTrue)
	{
	tmp =  struc_var10.float_var + 0.08;
	}
	else 
	{
		assert(0);
	}

}

void Test_case_24_initialize_10(void)
{
	
	(void)memset((void *)&struc_var10, 0,
		sizeof(struc));
	struc_var10.float_var = 0.0;

}
