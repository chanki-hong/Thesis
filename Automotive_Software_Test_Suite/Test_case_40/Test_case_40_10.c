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







void Test_case_40_17(uint32_T uint_var)
{
	uint8_T uchar_arr[64];

	uint8_T uchar_var =255;
		
	
  
    if (uint_var > 255U) {
      uint_var = 255U;
    }

    
    uchar_arr[(int32_T)uint_var] =
      uchar_var;
  

}

int main_Test_case_40_17(uint32_T uint_var) {

	if((uint_var== 0)||(uint_var== 62)){

		for (int i = 0; i < 1; i++){
				Test_case_40_17(uint_var);
		}
	
	}
	return 0;
}