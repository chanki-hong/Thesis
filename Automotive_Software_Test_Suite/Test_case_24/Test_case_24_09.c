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
struc struc_var16;

void main_Test_case_24_16(void) {

	static rReal_T tmp;
	while(1){
		tmp =  struc_var16.float_var + 0.08;
		break;
		assert(0);
	}
	
}

void Test_case_24_initialize_16(void)
{
	
	(void)memset((void *)&struc_var16, 0,
		sizeof(struc));
	struc_var16.float_var = 0.0;

}
