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


uint32_T global_uint_arr3[6] = { 1U, 2U, 3U, 4U, 5U, 6U } ;
#define def_global_uint_arr      global_uint_arr3  


static int staticTrue = 1; /* true */

int main_Test_case_38_5(boolean_T input1) {
	

	uint32_T uint_arr[6];
	int32_T int_var;
	float float_arr[6] = {1.0f, 2.0f,3.0f,4.0f,5.0f,6.0f};

		if (staticTrue)
		{
			for (int i = 0; i < 6; i++) {

				if (input1) {
				  uint_arr[i] = def_global_uint_arr[i];
				} else {
				  uint_arr[i] = 0U;
				}
			}
		}
  
  uint32_T uint_var = uint_arr[0];
  for (int32_T i = 0; i < 5; i++) {
    if (!(uint_var >= uint_arr[(int32_T)(i + 1)])) {
      uint_var = uint_arr[(int32_T)(i + 1)];
    }
  }
  
  if (uint_var > 100U) {
    int_var = 100;
  } else if (uint_var < 1U) {
    int_var = 1;
  } else {
    int_var = (int32_T)uint_var;
  }

  rReal_T tmp = float_arr[(int32_T)(int_var - 1)];
  
	return 0;
}
