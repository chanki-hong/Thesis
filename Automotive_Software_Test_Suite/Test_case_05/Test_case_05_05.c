#include <stdio.h>
#include <math.h>

#include <string.h>
#include "Test_case_05.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;

static int32_T tmp;

static
struc struc_var_9;

const int GLOBAL_CONST_TRUE = 1; /* true */

void Test_case_05_initialize_09(void)
{
    
    (void)memset((void *)&struc_var_9, 0,
        sizeof(struc));
}



void Test_case_05_09(void)
{

	if (GLOBAL_CONST_TRUE)
	{
		tmp = Test_case_05_Buffer(&struc_var_9.Buffer);
	}
	else{
		assert(0);
	}
  
}