#include "Test_case_11.h"
#include <string.h>

 
static struc struc_arr[20u];  
static uint8 uchar_arr_arr[50u][1024u];

void input_init_05(void) {

    uint32 i = 0;
  

     
    for (; i < 20u; i++) {
        memset(&struc_arr[i].struc_sub_var, 0, sizeof(struc_sub));
        struc_arr[i].uint_var = 255u;
    }

   
}

static void Test_case_11_05_Func2(uint8* param_uchar_ptr, struc_2 *param_struc_2_ptr, uint32 param_uint_var) {
    uint32 j;
    for (j = 0; j < param_uint_var; j++) {
        struc_2 *s = &param_struc_2_ptr[j];	
		if(s != NULL){
			if (s->next_struc_2 != NULL) { /////////////////////////////////////////////////////////////////Warning
				const uint8 *uchar_ptr = s->next_struc_2->uchar_ptr; ///////////////////////////////////////////Warning
				if (uchar_ptr > param_uchar_ptr) {
					if (((uint32)(uchar_ptr - param_uchar_ptr) < 1024u)) { ////////////////////////////////Warning
						 
						 
						s->next_struc_2 = NULL;
					}
				}
				
			}
		}
    }
}

static void Test_case_11_05_Func1(void) {
    
        uint8 *param_uchar_ptr = uchar_arr_arr[0];
        uint32 k;
        for (k = 0; k < 20u; k++) {
            struc_sub *struc_sub_var = &struc_arr[k].struc_sub_var;

            if (struc_sub_var != NULL) {
                Test_case_11_05_Func2(param_uchar_ptr, struc_sub_var->struc_2_arr, struc_sub_var->uint_var);

            }
        }
}

const int GLOBAL_CONST_TRUE = 1; /* true */
const int GLOBAL_CONST_FALSE = 0; /* false */

int main_Test_case_11_09(void)
{
    input_init_05();
    uint8 uchar_ptr1[2] = { 0,1 };
    uint8 uchar_ptr2[2] = { 0,1 };
    struc_arr[0].struc_sub_var.uint_var = 1; //or 2
    uchar_arr_arr[0][0] =  0;
    uchar_arr_arr[0][1] = 1;
    
    struc_2 tmp = { 2, FALSE, FALSE, uchar_ptr1,&struc_arr[0].struc_sub_var.struc_2_arr[1] };
    struc_2 tmp1 = { 2, FALSE, FALSE, uchar_ptr2, NULL };
	
	if (GLOBAL_CONST_TRUE)
	{
		struc_arr[0].struc_sub_var.struc_2_arr[0] = tmp;
		struc_arr[0].struc_sub_var.struc_2_arr[1] = tmp1;
	}

    Test_case_11_05_Func1();
    return 0;
}