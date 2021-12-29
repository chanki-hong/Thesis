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
struc struc_var15;

void main_Test_case_24_15(void) {

	static rReal_T tmp;
	
		switch (6)
	{
	case 6:
			tmp =  struc_var15.float_var + 0.08;
		break;
	default:
		assert(0);
		break;
	}

}

void Test_case_24_initialize_15(void)
{

	(void)memset((void *)&struc_var15, 0,
		sizeof(struc));
	struc_var15.float_var = 0.0;

}
