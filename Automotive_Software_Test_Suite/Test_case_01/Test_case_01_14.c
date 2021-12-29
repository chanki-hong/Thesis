#include <stdio.h>
#include <math.h>

#include <string.h>

typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;

static float static_var1;




static void Test_case_01_45__Sink()
{
	float float_var = static_var1;
	static uint32_T uint_var;

	if (float_var < 4.503599627370496E+15) {
		if (float_var >= 0.5) {
			float_var = floor(float_var + 0.5);
		}
		else {
			float_var = 0.0;
		}
	}

	if (float_var < 4.294967296E+9) {
		uint_var = (uint32_T)float_var;
	}
}


int main_Test_case_01_45(rReal_T input1)
{
   
    rReal_T float_var;
    
    float_var = input1;

	static_var1 = float_var;

	Test_case_01_45__Sink();
   
    return 0;
}