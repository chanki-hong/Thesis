#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float float32;
typedef unsigned char boolean;
typedef unsigned char uint8;
typedef unsigned char uint8_T;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef int sint32;
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;



typedef union
{
	float unionFirst;
	float unionSecond;
} Union;


void Test_case_39_34(uint32_T uint_var)
{
	
	Union myUnion;
	uint8_T uchar_var=0;
	myUnion.unionFirst = uchar_var;
	
		uint8_T uchar_var_1 = myUnion.unionSecond;


	uchar_var_1 = ((uint32_T)((uint8_T)((int32_T)(((int32_T)((uint8_T)uint_var)) * 16)-1)));
}

int main_Test_case_39_34(uint32_T uint_var) {
	
if((uint_var== 1)||(uint_var== 8) || (uint_var== 16)){
	Test_case_39_34(uint_var);
}
	return 0;
}