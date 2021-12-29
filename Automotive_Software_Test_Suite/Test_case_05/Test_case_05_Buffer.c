#include <stdio.h>
#include <math.h>

#include <string.h>
#include "Test_case_05.h"
#include "Test_case_05_Buffer.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;



int32_T Test_case_05_Buffer(struc_buffer *param_ptr)
{
  
    return (int32_T)(1 + param_ptr->int_var);
}
