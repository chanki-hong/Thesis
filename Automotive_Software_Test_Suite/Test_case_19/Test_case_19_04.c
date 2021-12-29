#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;




void Test_case_19_subfunc_08(uint32_T *Param_uint_ptr1, uint32_T *Param_uint_ptr2, rReal_T u, const
	rReal_T *Param_float_ptr, uint32_T iHi)
{
	
	*Param_uint_ptr1 = 0U;
	*Param_uint_ptr2 = iHi;
	if (u <= Param_float_ptr[0]) {
		
		*Param_uint_ptr2 = 0U;
	}
	else if (u >= Param_float_ptr[iHi]) {
		
		*Param_uint_ptr1 = iHi;
	}
	else {
		uint32_T i;

		
		while ((*Param_uint_ptr2 - *Param_uint_ptr1) > 1U) {
			
			i = (*Param_uint_ptr1 + *Param_uint_ptr2) >> 1;

			
			
			if (u < Param_float_ptr[i]) {
				*Param_uint_ptr2 = i;
			}
			else {
				*Param_uint_ptr1 = i;
			}
		}
	}
}


void Test_case_19_func_08(rReal_T *Param_float_ptr1, const rReal_T *Param_float_ptr2, rReal_T u, const
	rReal_T *Param_float_ptr3, uint32_T iHi)
{
	uint32_T uint_var;
	uint32_T uint_var2;
	Test_case_19_subfunc_08(&(uint_var), &(uint_var2), u, Param_float_ptr3, iHi);

	{
		rReal_T lambda;
		if ((Param_float_ptr3[uint_var2] > Param_float_ptr3[uint_var])&& ( (Param_float_ptr3[uint_var2]  - Param_float_ptr3[uint_var]) != 0 ) ) {
			rReal_T num;
			rReal_T den;
			den = Param_float_ptr3[uint_var2];
			den -= Param_float_ptr3[uint_var];
			num = u;
			num -= Param_float_ptr3[uint_var];
			lambda = num / den;
		}
		else {
			lambda = 0.0;
		}

		{
			rReal_T float_var3;
			rReal_T float_var4;
			float_var3 = Param_float_ptr2[uint_var];
			float_var4 = Param_float_ptr2[uint_var2];
			float_var3 += lambda * (float_var4 - float_var3);
			(*Param_float_ptr1) = float_var3;
		}
	}
}




static int staticReturnsTrue()
{
	return 1;
}


int main_Test_case_19_08(float input1,float input1_1,float input2)
{
	rReal_T float_var1;
	rReal_T float_var2;
	
	rReal_T float_arr1[2];
	rReal_T float_arr2[2];

	if ((input1 >= 0.0f) && (input1 <= 66.0f)) {
		if ((input1_1 >= 0.00006f) && (input1_1 <= 66.0f)) {
			if ((input2 >= 0.0f) && (input1_1 <= 1.0f)) {
				
				if (staticReturnsTrue())
				{
					float_arr1[0] = input1; //0.0
					float_arr1[1] = input1_1; //0.00006


					float_arr2[0] = input2;
					float_arr2[1] = input2;
				}


				Test_case_19_func_08(&(float_var1),
					&float_arr2[0],
					0.0001f,
					&float_arr1[0], 1U);

				
				float_var2 = float_var1;
				
				rReal_T tmp = float_var2 + 2.0;
			}
		}
	}

    return 0;
}