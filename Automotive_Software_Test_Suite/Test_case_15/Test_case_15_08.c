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
struc struc_var_15;

void Test_case_15_15(uint32_T input1) {
    
	switch (6)
	{
	case 6:
		if (!(input1 > 0U)) {
			struc_var_15.int_var = 0;
		}
		else {
		   
				struc_var_15.int_var++;    
		}
		break;
	default:
		printf("Dead Code");
		assert(0);
		break;
	}
	
}

void Test_case_15_initialize_15(void)
{
    (void)memset((void *)&struc_var_15, 0,
        sizeof(struc));

}
