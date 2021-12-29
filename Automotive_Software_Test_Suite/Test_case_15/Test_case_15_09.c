#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Test_case_15.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;



/*BEGIN:STATIC*/
static
struc struc_var_16;

void Test_case_15_16(uint32_T input1) {
    
	while (1)
	{
		if (!(input1 > 0U)) {
			struc_var_16.int_var = 0;
		}
		else {
		   
				struc_var_16.int_var++;    
		}
		break;
		assert(0);
	}
	
}

void Test_case_15_initialize_16(void)
{
    (void)memset((void *)&struc_var_16, 0,
        sizeof(struc));

}
