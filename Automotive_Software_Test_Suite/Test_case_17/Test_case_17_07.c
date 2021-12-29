#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Test_case_17.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;


static
struc struc_var_11;




void Test_case_17_11(boolean_T input1, boolean_T input2) {
    uint32_T uint_var;
	switch (6)
	{
	case 6:
		if (input1) {
			struc_var_11.uint_var_1 = 1U;
		}
		else {
			if (input2) {
			   
				struc_var_11.uint_var_1++;

			   
				if (struc_var_11.uint_var_1 > 150U) {
					struc_var_11.uint_var_1 = 1U;
				}

			}
		}

	   
		if (input2) {    
			struc_var_11.uint_var_2++;

			if (!(struc_var_11.uint_var_2 <= 150U)) {
			  
				struc_var_11.uint_var_2 = 150U;
			}

		}

	   
		if (struc_var_11.uint_var_1 > struc_var_11.uint_var_2) {
		  
			uint_var = (uint32_T)(struc_var_11.uint_var_1 -
				struc_var_11.uint_var_2);

		   
		}
		else {
		   
        uint_var = (uint32_T)((uint32_T)(struc_var_11.uint_var_1
            - struc_var_11.uint_var_2 + 150U));

		   
		}
		break;
	default:
		printf("Dead Code");
		assert(0);
		break;
	}
	
}

void Test_case_17_initialize_11(void)
{
    (void)memset((void *)&struc_var_11, 0,
        sizeof(struc));
    struc_var_11.uint_var_1 = 1U;
  
}
