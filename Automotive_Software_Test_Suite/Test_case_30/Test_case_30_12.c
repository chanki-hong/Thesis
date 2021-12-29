#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>
#include "Test_case_30.h"

typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;

 
static struc struc_var_12;


const struc* struc_func_12(void) {
	return (struc*) &(struc_var_12);
} 
#define def_func_12 (struc_func_12()->uint_arr)

 
 
 

void Init_12(void) {

	struc_var_12.uint_arr[0] = 1u;
	struc_var_12.uint_arr[1] = 2u;
	struc_var_12.uint_arr[2] = 3u;
	struc_var_12.uint_arr[3] = 4u;
	struc_var_12.uint_arr[4] = 5u;
	struc_var_12.uint_arr[5] = 6u;
	struc_var_12.uint_arr[6] = 7u;
	struc_var_12.uint_arr[7] = 8u;
	struc_var_12.uint_arr[8] = 9u;
	struc_var_12.uint_arr[9] = 10u;
	struc_var_12.uint_arr[10] = 11u;
	struc_var_12.uint_arr[11] = 12u;
	struc_var_12.uint_arr[12] = 13u;
	struc_var_12.uint_arr[13] = 14u;
	struc_var_12.uint_arr[14] = 15u;
	struc_var_12.uint_arr[15] = 16u;
	struc_var_12.uint_arr[16] = 17u;
	struc_var_12.uint_arr[17] = 18u;
	struc_var_12.uint_arr[18] = 19u;
	struc_var_12.uint_arr[19] = 20u;
	struc_var_12.uint_arr[20] = 21u;
	struc_var_12.uint_arr[21] = 22u;
	struc_var_12.uint_arr[22] = 23u;
	struc_var_12.uint_arr[23] = 24u;
	struc_var_12.uint_arr[24] = 25u;
	struc_var_12.uint_arr[25] = 26u;
	struc_var_12.uint_arr[26] = 27u;
	struc_var_12.uint_arr[27] = 28u;
	struc_var_12.uint_arr[28] = 29u;
	struc_var_12.uint_arr[29] = 30u;
	struc_var_12.uint_arr[30] = 31u;
	struc_var_12.uint_arr[31] = 32u;
	struc_var_12.uint_arr[32] = 33u;
	struc_var_12.uint_arr[33] = 34u;
	struc_var_12.uint_arr[34] = 35u;
	struc_var_12.uint_arr[35] = 36u;
	struc_var_12.uint_arr[36] = 37u;
	struc_var_12.uint_arr[37] = 38u;
	struc_var_12.uint_arr[38] = 39u;
}


static int staticgood= 0;
	static boolean_T bool_var2;
 static void Test_case_30_21(float float_var3 )
 {
	 if(staticgood == 1){
		bool_var2 = (float_var3 <= (5.0 -	(1.83 * 0.5)));
	 }
	
 }


int main_Test_case_30_21(rReal_T input0,rReal_T	input1,boolean_T input2,rReal_T input3)
{
	boolean_T	bool_arr1[40];
	boolean_T bool_arr2[40];
	rReal_T float_var1 = input0;
	rReal_T	float_var2 = input1;
	boolean_T bool_var1 = input2;
	rReal_T float_var3 = input3;




	int i;

	Init_12();
	staticgood =1;
	Test_case_30_21( float_var3 );
	
	
	for (i = 0; i < 40; i++) {
		bool_arr2[i] = (((float_var1 >=
			float_var2) && bool_var1) &&
			bool_var2);
	}

	for (i = 0; i < 39; i++) {
		bool_arr1[i] = (bool_arr2[(int32_T)
			(((int32_T)((uint32_T)def_func_12[(i)])) - 1)]);
	}
    return 0;
}