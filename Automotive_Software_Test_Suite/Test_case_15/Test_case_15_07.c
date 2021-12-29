#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Test_case_15.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;


int globalReturnsTrue()
{
	return 1;
}


/*BEGIN:STATIC*/
static
struc struc_var_11;

void Test_case_15_11(uint32_T input1) {
    
	if (globalReturnsTrue())
	{
		if (!(input1 > 0U)) {
			struc_var_11.int_var = 0;
		}
		else {
		   
				struc_var_11.int_var++;    
		}
	}
	else{
		assert(0);
	}
}

void Test_case_15_initialize_11(void)
{
    (void)memset((void *)&struc_var_11, 0,
        sizeof(struc));

}
