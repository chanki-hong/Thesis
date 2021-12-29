#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <string.h>



typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;

static int goodStatic = 0;

   static uint32_T uint_var;



 static void Test_case_13_21(uint32_T input1)
 {
	 
	 if (goodStatic) {
		 if (input1 <= 40U) {
			uint_var = input1;
		}
		else {
			uint_var = 40U;
		}
	 }
	 else {
		 printf("Dead Code");
		 assert(0);
	 }
	 
 }


int main_Test_case_13_21(uint32_T input1)
{   
	goodStatic=1;
    rReal_T float_var;
    rReal_T tmp[40] = { 0, };

	Test_case_13_21( input1);

    
    if (1U <= (uint_var)) {
        float_var = tmp[(int32_T)(((int32_T)(uint_var)) - 1)];
    }
    else {
        float_var = 0.0;
    }
     return 0;
}