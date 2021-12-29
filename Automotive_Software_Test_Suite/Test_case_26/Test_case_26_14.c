#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;



typedef union
{
	int32_T unionFirst;
	int32_T unionSecond;
} Union;



int main_Test_case_26_34(boolean_T input0,int32_T input1,boolean_T input2)
{
	int32_T tmp =0;
	int32_T int_var;
	Union myUnion;
	
		if (input0) {
			int_var = (int32_T)(input1);
		}
		else {
			int_var = (int32_T)(input2 ? 1 : 0);
		}
	
	

	myUnion.unionFirst = int_var;
	
	int32_T  int_var_1 = myUnion.unionSecond;
	
	tmp += int_var_1;


    return 0;
}