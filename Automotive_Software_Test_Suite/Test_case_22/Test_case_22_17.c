#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;



	static rReal_T float_var;
static float static_var1;
static boolean_T static_var2;

 static void Test_case_22_45( )
 {

		float_var = (1.0 / static_var1) * tan(0.7857);

		if (static_var2) {
			float_var = 1.0E-5;
		}
	
 }
		
		

int main_Test_case_22_45(rReal_T input0,boolean_T input2)
{

	static_var1 = input0;
	static_var2 = input2;
	if(static_var1 >= 1.0f){

		Test_case_22_45();
	
		float_var = 1.0 / float_var;
	}

    return 0;
}