#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;

static void Test_case_29_41(rReal_T * float_arr1, int count )
 {
	 float_arr1[count] = 0.0;
	 float_arr1[count+1] = 2.0;
 }



int main_Test_case_29_41(rReal_T input1)
{
	rReal_T float_arr1[8];
	rReal_T float_arr2[8];
	rReal_T float_arr3[8];

	int i;

	for (i = 0; i < 6; i++) {
		float_arr1[i] = input1;
	}

	Test_case_29_41(float_arr1, 6 );
		
	
	
	
	for (i = 0; i < 8; i++) {

		float_arr2[i] = fabs(float_arr1[i]);

	}
		
	for (i = 0; i < 8; i++) {
		float_arr3[i] = atan(float_arr2[i] /0.2);
	}
	

    return 0;
}