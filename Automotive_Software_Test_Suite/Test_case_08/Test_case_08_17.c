#include <stdio.h>

#include <string.h>
#include "Test_case_08.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;



static uint32_T static_var;

static struc struc_var;

    static int32_T int_var;
 static void Test_case_08_45()
 {
			if (static_var > 20) {
			   
				int_var = 20;
			}
			else if (static_var < 1) {
				
				int_var = 1;
			}
			else {
				
				int_var = (int32_T)static_var;
			}
 }




void main_Test_case_08_45(boolean_T input1, uint32_T input2) {
    
       (void)memset((void *)&struc_var, 0,
        sizeof(struc));
    
  
    uint32_T uint_var;
    uint32_T uint_arr[20];


    for (int i = 0; i < 20; i++) {
        if (input1) {

            uint_var = 1U;
        }
        else {

            uint_var = struc_var.uint_arr[i];
        }
        uint_arr[i] = uint_var;

    }
	
	static_var = input2;
	
		Test_case_08_45(  );	
	

    if (uint_arr[(int32_T)(int_var - 1)] != 5U) {
        uint_var = uint_arr[(int32_T)(int_var - 1)];
    }
    else {
        uint_var = 0U;
    }


    uint32_T tmp2 = (uint32_T)(uint_var + 1U);
 
}

