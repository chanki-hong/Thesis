#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;





int globalReturnsFalse()
{
	return 0;
}


int main_Test_case_26_11(boolean_T input0,int32_T input1,boolean_T input2)
{
	int32_T tmp =0;
	int32_T int_var;

	if (globalReturnsFalse())
	{
		/* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
		printf("Dead Code");
	}
	else
	{
		if (input0) {
			int_var = (int32_T)(input1);
		}
		else {
			int_var = (int32_T)(input2 ? 1 : 0);
		}
	}
	
	
	tmp += int_var;


    return 0;
}