#define TRUE ((boolean)1)
#define NULL ((void *)0)
#define MIN_FLOAT                   -100000.0f /**< maximum floating point value (for PolySpace) */
#define MAX_FLOAT                   +100000.0f /**< minimum floating point value (for PolySpace) */
 
#include <string.h>
#include <math.h>
#include "Test_case_10.h"
typedef float float32;
typedef int sint32;
typedef unsigned char boolean;
typedef unsigned int uint32;
typedef unsigned char uint8;
typedef unsigned int     size_t;

static struc struc_arr[20u];   
void input_init_07(void) {

    uint32 i = 0;


     
    for (; i < 20u; i++) {
        memset(&struc_arr[i].struc_sub_var, 0, sizeof(struc_sub));
        struc_arr[i].uint_var = 255u;
    }


}

float32 Test_case_10_07_Func3(float32 floatValue) {
    float32 num = floatValue;

    if ((num != num) || (num == (float32)HUGE_VAL) || (num == (float32)-HUGE_VAL))
    {
        num = 0.0f;
    }
    if (num < MIN_FLOAT) {
        num = MIN_FLOAT;
    }
    if (num > MAX_FLOAT) {
        num = MAX_FLOAT;
    }
    return num;
}

float32 Test_case_10_07_Func2(const uint8 *uint_ptr, size_t size_var) {
    float32 num = 0.0f;
    if ((uint_ptr != NULL) && ((size_var + sizeof(float32)) <= 1024u)) {

        num = Test_case_10_07_Func3(*(const float32*)&uint_ptr[size_var]);

    }
    return num;
}

float32 Test_case_10_07_Func1(const struc_2 *param_ptr, const uint32 param_uint) {
    float32 float_var = 0.0f;
    if ((param_ptr != NULL) && (param_ptr->uchar_ptr != NULL) && (param_uint <= (61u + 3u + 1u))) {
        float_var = Test_case_10_07_Func2(param_ptr->uchar_ptr, (((size_t)2 * sizeof(uint32))) + (param_ptr->uint_var * (size_t)3 * sizeof(float32)) + (sizeof(float32) * param_uint));
    }
    
    return float_var;
}


int globalReturnsTrue()
{
	return 1;
}

int main_Test_case_10_11() {
    input_init_07();
    uint8 uchar_arr[50] = { 0 };
    for(uint32 i = 0; i < 50; i++) {
        uchar_arr[i] = i;
    }


	if (globalReturnsTrue())
	{
		struc_arr[0].struc_sub_var.uint_var = 1;
		struc_2 tmp = { 2, FALSE, FALSE, uchar_arr,&struc_arr[0].struc_sub_var.struc_2_arr[1] };
		struc_arr[0].struc_sub_var.struc_2_arr[0] = tmp;
	}


    float32 temp = Test_case_10_07_Func1(struc_arr[0].struc_sub_var.struc_2_arr,1u);
    return 0;
}

