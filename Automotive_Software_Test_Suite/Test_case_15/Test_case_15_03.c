#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Test_case_15.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;


static int staticTrue = 1; /* true */
static int staticFalse = 0; /* false */


/*BEGIN:STATIC*/
static
struc struc_var_5;

void Test_case_15_05(uint32_T input1) {
    
	if (staticTrue)
	{
		if (!(input1 > 0U)) {
			struc_var_5.int_var = 0;
		}
		else {
		   
				struc_var_5.int_var++;    
		}
	}
	else{
		assert(0);
	}
}

void Test_case_15_initialize_05(void)
{
    (void)memset((void *)&struc_var_5, 0,
        sizeof(struc));

}
