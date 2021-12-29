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
	boolean_T unionFirst;
	boolean_T unionSecond;
} Union;


int main_Test_case_25_34(boolean_T input0,boolean_T input1)
{
	int i_0;
	boolean_T bool_arr1[20];
	boolean_T	bool_arr2[20];
	boolean_T tmp;
	
	Union myUnion;
	
	myUnion.unionFirst = input0;
	
	boolean_T input0 = myUnion.unionSecond;

	
	
		for (i_0 = 0; i_0 < 20; i_0++) {

			bool_arr1[i_0] = input0;
			bool_arr2[i_0] = input1;
		}
	

	for (i_0 = 0; i_0 < 20; i_0++) {
	
		tmp = ((bool_arr1[i_0]) ||(bool_arr2[i_0]));
	}
    return 0;
}