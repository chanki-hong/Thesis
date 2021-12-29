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
struc struc_var_18;

void Test_case_15_18(uint32_T input1) {
    
	goto source;
	source:
	
		if (!(input1 > 0U)) {
			struc_var_18.int_var = 0;
		}
		else {
		   
				struc_var_18.int_var++;    
		}
	
}

void Test_case_15_initialize_18(void)
{
    (void)memset((void *)&struc_var_18, 0,
        sizeof(struc));

}
