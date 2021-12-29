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
	uint32_T unionFirst;
	uint32_T unionSecond;
} Union;


int main_Test_case_35_34(uint32_T input0)
{
	uint32_T uint_arr1[20];
	uint32_T uint_arr2[20];
	uint32_T uint_var_1 = input0;
	Union myUnion;
	int i;

    

	myUnion.unionFirst = uint_var_1;
	uint32_T uint_var = myUnion.unionSecond;
	

		for (i = 0; i < 20; i++) {
			uint_arr1[i] = uint_var;
		}
	
	

	for (i = 0; i < 20; i++) {
		uint_arr2[i] = !(2U == uint_arr1[i]);
	}
    return 0;
}