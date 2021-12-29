#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Test_case_15.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;

const int GLOBAL_CONST_TRUE = 1; /* true */
const int GLOBAL_CONST_FALSE = 0; /* false */


/*BEGIN:STATIC*/
static
struc struc_var_9;

void Test_case_15_09(uint32_T input1) {
    
	if (GLOBAL_CONST_TRUE)
	{
		if (!(input1 > 0U)) {
			struc_var_9.int_var = 0;
		}
		else {
		   
				struc_var_9.int_var++;    
		}
	}
	else{
		assert(0);
	}
}

void Test_case_15_initialize_09(void)
{
    (void)memset((void *)&struc_var_9, 0,
        sizeof(struc));

}
