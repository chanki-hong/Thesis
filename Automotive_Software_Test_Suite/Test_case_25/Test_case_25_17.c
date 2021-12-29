#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;




static static_var1;
static static_var2;
static	boolean_T	bool_arr2[20];
static 	boolean_T bool_arr1[20];

static void Test_case_25_45( )
 {
	 for (int i_0 = 0; i_0 < 20; i_0++) {

			bool_arr1[i_0] = static_var1;
			bool_arr2[i_0] = static_var2;
		}
 }


int main_Test_case_25_45(boolean_T input0,boolean_T input1)
{
	int i_0;


	boolean_T tmp;
	
	static_var1 = input0;
	static_var2 = input1;
	
	Test_case_25_45( );

	for (i_0 = 0; i_0 < 20; i_0++) {
	
		tmp = ((bool_arr1[i_0]) ||(bool_arr2[i_0]));
	}
    return 0;
}