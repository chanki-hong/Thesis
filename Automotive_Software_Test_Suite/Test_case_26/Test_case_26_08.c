#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;







int main_Test_case_26_15(boolean_T input0,int32_T input1,boolean_T input2)
{
	int32_T tmp =0;
	int32_T int_var;

		switch (6)
		{
		case 6:
			if (input0) {
				int_var = (int32_T)(input1);
			}
			else {
				int_var = (int32_T)(input2 ? 1 : 0);
			}
			break;
		default:
			printf("Dead Code");
			break;
		}
		
	
	
	
	tmp += int_var;


    return 0;
}