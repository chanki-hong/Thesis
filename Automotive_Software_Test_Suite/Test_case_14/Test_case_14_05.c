#include <stdio.h>
#include <math.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;



void Test_case_14_09(const rReal_T *Param_float_ptr,
     const uint32_T *Param_uint_ptr, const  rReal_T Param_float_arr[40])
{
    boolean_T bool_var;
    uint32_T uint_var;
    rReal_T float_var;

  
    bool_var = ((*Param_uint_ptr) != 0U);

    
    if (bool_var) {
        uint_var = *Param_uint_ptr;
    }
    else {
        uint_var = 1U;
    }

  
    float_var = Param_float_arr[(int32_T)(((int32_T)uint_var) - 1)];
}

 
 
const int GLOBAL_CONST_TRUE = 1; /* true */
const int GLOBAL_CONST_FALSE = 0; /* false */
 
int main_Test_case_14_09(float input0)
{
    float tmp1 =1.0f;
    unsigned int tmp2 = 1U;
    rReal_T float_arr[40];
    int32_T i;

	if (GLOBAL_CONST_TRUE)
	{
		
		for (i = 0; i < 40; i++) {
		   
				float_arr[i] =input0;
		  
		}
	}
	
    Test_case_14_09(&tmp1, &tmp2, float_arr);
    return 0;
}