#include <stdio.h>
#include <math.h>

#include <string.h>

typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;

typedef struct {
    rReal_T float_arr_1[150];
    rReal_T float_arr_2[150]; 
} struc;

    static rReal_T float_var;
static
struc struc_var;


static float static_var1;
static int32_T static_var2;

static void Test_case_16_45( )
 {

		float_var = struc_var.float_arr_1[static_var2]- static_var1;
	 
 }


int main_Test_case_16_45(float input1)
{

    rReal_T float_arr[150];
    int32_T int_var;
    int32_T i;
	
    for (i = 0; i < 150; i++) {
        struc_var.float_arr_1[i] = 0.0;
    }
    for (i = 0; i < 150; i++) {
        struc_var.float_arr_2[i] = 0.0;
    }

    for (int_var = 0; int_var < 150;
        int_var++) {
        
		static_var1 = input1;
		static_var2 = int_var;
		
		Test_case_16_45();
		
        float_arr[int_var] = float_var;
    }

    for (int_var = 0; int_var < 150;
        int_var++) {
    struc_var.float_arr_2[int_var] = float_arr[int_var];
    }
    return 0;
}