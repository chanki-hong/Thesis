#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;




static boolean_T static_var0;
static int32_T static_var1;
static boolean_T static_var2;
	static int32_T int_var;

static void Test_case_26_45( )
 {
		 if (static_var0) {
				int_var = (int32_T)(static_var1);
			}
			else {
				int_var = (int32_T)(static_var2 ? 1 : 0);
			}
	 
 }

int main_Test_case_26_45(boolean_T input0,int32_T input1,boolean_T input2)
{
	int32_T tmp =0;

	static_var0 = input0;
	static_var1 = input1;
	static_var2 = input2;
	
	Test_case_26_45();	
	
	
	
	tmp += int_var;


    return 0;
}