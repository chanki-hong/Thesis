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
struc struc_var17;

void main_Test_case_24_17(void) {

	static rReal_T tmp;
	for(int i=0; i<1; i++){
		tmp =  struc_var17.float_var + 0.08;
	}
}

void Test_case_24_initialize_17(void)
{

	(void)memset((void *)&struc_var17, 0,
		sizeof(struc));
	struc_var17.float_var = 0.0;

}
