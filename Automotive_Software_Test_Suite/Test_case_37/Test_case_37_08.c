#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float float32;
typedef unsigned char boolean;
typedef unsigned char uint8;
typedef unsigned char uint8_T;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef int sint32;
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;


const rReal_T const_global_float_arr_1_08[3] = { 0.0, 0.05, 0.5 } ;
const rReal_T const_global_float_arr_2_08[3] = { 20.0, 10.0, 5.0 } ;

#define def_const_global_float_arr_1_08     const_global_float_arr_1_08  
#define def_const_global_float_arr_2_08     const_global_float_arr_2_08  


void Test_case_37_sub_8(uint32_T *param_uint_ptr_1, uint32_T *param_uint_ptr_2, rReal_T u, const
  rReal_T *param_uint_ptr_3, uint32_T iHi)
{
  
  *param_uint_ptr_1 = 0U;
  *param_uint_ptr_2 = iHi;
  if (u <= param_uint_ptr_3[0] ) {
   
    *param_uint_ptr_2 = 0U;
  } else if (u >= param_uint_ptr_3[iHi] ) {
    
    *param_uint_ptr_1 = iHi;
  } else {
    uint32_T i;

   
    while (( *param_uint_ptr_2 - *param_uint_ptr_1 ) > 1U ) {
      
      i = (*param_uint_ptr_1 + *param_uint_ptr_2) >> 1;

     
      if (u < param_uint_ptr_3[i] ) {
        *param_uint_ptr_2 = i;
      } else {
        *param_uint_ptr_1 = i;
      }
    }
  }
}


void Test_case_37_8(rReal_T *param_uint_ptr_1, const rReal_T *param_uint_ptr_2, rReal_T u, const
  rReal_T *param_uint_ptr_3, uint32_T iHi)
{
  uint32_T uint_var_1;
  uint32_T uint_var_2;
  Test_case_37_sub_8( &(uint_var_1), &(uint_var_2), u, param_uint_ptr_3, iHi);

  {
    rReal_T float_var;
    if (param_uint_ptr_3[uint_var_2] > param_uint_ptr_3[uint_var_1] ) {
      rReal_T float_var_3;
      rReal_T float_var_4;
      float_var_4 = param_uint_ptr_3[uint_var_2];
      float_var_4 -= param_uint_ptr_3[uint_var_1];
      float_var_3 = u;
      float_var_3 -= param_uint_ptr_3[uint_var_1];
      float_var = float_var_3 / float_var_4;
    } else {
      float_var = 0.0;
    }

    {
      rReal_T float_var_1;
      rReal_T float_var_2;
      float_var_1 = param_uint_ptr_2[uint_var_1];
      float_var_2 = param_uint_ptr_2[uint_var_2];
      float_var_1 += float_var * ( float_var_2 - float_var_1 );
      (*param_uint_ptr_1) = float_var_1;
    }
  }
}

int main_Test_case_37_15() {
	
	  rReal_T float_arr1[20];
	  rReal_T float_arr2[20];
	  rReal_T global_float_arr[20];

			switch (6)
			{
			case 6:
					for (int i = 0; i < 20; i++) {
					  global_float_arr[i] = 1.0f;
					}
					break;
			default:
				printf("Dead Code");
				break;
			}


      const rReal_T *u0 = &global_float_arr[0];
      rReal_T *y0 = float_arr2;
      for (int i1=0; i1 < 20; i1++) {
        Test_case_37_8( &(y0[i1]), def_const_global_float_arr_2_08, u0[i1],
          def_const_global_float_arr_1_08, 2U);
      }
    

    for (int i = 0; i < 20; i++) {
      float_arr1[i] = float_arr2[(i)];
    }
	
	return 0;
}