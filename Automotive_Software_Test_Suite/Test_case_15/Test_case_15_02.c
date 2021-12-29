#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Test_case_15.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;

static const int STATIC_CONST_TRUE = 1; /* true */
static const int STATIC_CONST_FALSE = 0; /* false */


static
struc struc_var_4;

void Test_case_15_04(uint32_T input1) {
    
	if (STATIC_CONST_TRUE)
	{
		if (!(input1 > 0U)) {
			struc_var_4.int_var = 0;
		}
		else {
		   
				struc_var_4.int_var++;    
		}
	}
	else{
		assert(0);
	}
}

void Test_case_15_initialize_04(void)
{
    (void)memset((void *)&struc_var_4, 0,
        sizeof(struc));

}
