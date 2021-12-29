#include <stdio.h>
#include <math.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;



void Test_case_14_21(const rReal_T *Param_float_ptr,
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


 
static int goodStatic = 0;
static  rReal_T float_arr[40];

 static void Test_case_14_21_Sink(float input0 )
 {
	if(goodStatic){
			
		for (int i = 0; i < 40; i++) {
		   
				float_arr[i] =input0;
		  
		}
	}
 }
 
int main_Test_case_14_21(float input0)
{
    float tmp1 =1.0f;
    unsigned int tmp2 = 1U;

    int32_T i;
	goodStatic = 1;
	Test_case_14_21_Sink( input0 );
	
    Test_case_14_21(&tmp1, &tmp2, float_arr);
    return 0;
}