#include <stdio.h>
#include <math.h>

#include <string.h>

typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;
   static uint32_T uint_arr[11];
  static rReal_T float_arr[20];
static unsigned int static_var1;
static float static_var2;



 static void TAHMI_Sink_45( )
 {
	  int32_T i;
	
	
		 for (i = 0; i < 11; i++) {
			uint_arr[i] = static_var1;
		}
		for (i = 0; i < 20; i++) {
			float_arr[i] = static_var2;
		}
	 
	 
 }

int main_Test_case_18_45(unsigned int input1, float input2)
{
    int32_T int_var;
    rReal_T float_var;
   
    uint32_T tmp;
	static_var1 = input1;
	static_var2 = input2;

 
  
	
	TAHMI_Sink_45( );


    for (int_var = 0; int_var < 11; int_var++) {
        if (uint_arr[int_var] != 0U) {
        
            if (1U >= uint_arr[int_var]) {
                tmp = 1U;
            }
            else if(uint_arr[int_var] <21) {
                tmp = uint_arr[int_var];
            }
			else{ tmp = 19U;}

         
            float_var = float_arr[(int32_T)(((int32_T)tmp)
                - 1)];
        }
    }
    return 0;
}