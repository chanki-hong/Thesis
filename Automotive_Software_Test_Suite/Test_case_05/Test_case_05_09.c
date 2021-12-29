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
struc struc_var_16;

void Test_case_05_initialize_16(void)
{
    
    (void)memset((void *)&struc_var_16, 0,
        sizeof(struc));
}



void Test_case_05_16(void)
{

	while (1)
	{
		tmp = Test_case_05_Buffer(&struc_var_16.Buffer);
		break;
		assert(0);
	}
	
   
  
}