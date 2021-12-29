#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;



	static int32_T int_var;

static void Test_case_26_44(boolean_T input0, int32_T input1,boolean_T  input2  )
 {
		 if (input0) {
				int_var = (int32_T)(input1);
			}
			else {
				int_var = (int32_T)(input2 ? 1 : 0);
			}
	 
 }

int main_Test_case_26_44(boolean_T input0,int32_T input1,boolean_T input2)
{
	int32_T tmp =0;

	void(*funcPtr) (boolean_T,int32_T, boolean_T) = Test_case_26_44;
	
	funcPtr(input0,input1,input2);	
	
	
	
	tmp += int_var;


    return 0;
}