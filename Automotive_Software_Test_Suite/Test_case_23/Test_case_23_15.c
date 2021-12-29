#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;



static float static_var1;
static rReal_T tmp;
 static void Test_case_23_45( )
 {
	
	tmp = 1.0986122886681096 / log(3.0 * static_var1);
 }

int main_Test_case_23_45(rReal_T input0)
{

	
	if ((input0 >= 1.0) && (input0 <= 5.0)) {
	static_var1= input0;
		Test_case_23_45();
		
	}
	
    return 0;
}