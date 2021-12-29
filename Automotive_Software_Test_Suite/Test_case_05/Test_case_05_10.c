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
struc struc_var_17;

void Test_case_05_initialize_17(void)
{
   
    (void)memset((void *)&struc_var_17, 0,
        sizeof(struc));
}



void Test_case_05_17(void)
{

	for (int l = 0; l < 1; l++)
	{
		tmp = Test_case_05_Buffer(&struc_var_17.Buffer);
	}
  
}