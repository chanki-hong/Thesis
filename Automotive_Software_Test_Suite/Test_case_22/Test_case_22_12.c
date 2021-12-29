#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;



	static rReal_T float_var;
static int goodStatic = 0;

 static void Test_case_22_21(float input0, boolean_T input2  )
 {
	 if (goodStatic) {
		float_var = (1.0 / input0) * tan(0.7857);

		if (input2) {
			float_var = 1.0E-5;
		}
	 }
	 else{
		 printf("Dead Code");
	 }
 }
		
		

int main_Test_case_22_21(rReal_T input0,boolean_T input2)
{

	goodStatic=1;

	if(input0 >= 1.0f){

		Test_case_22_21(input0, input2);
	
		float_var = 1.0 / float_var;
	}

    return 0;
}