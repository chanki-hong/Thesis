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
	float unionFirst;
	float unionSecond;
} Union;


int main_Test_case_23_34(rReal_T input0)
{
	rReal_T tmp;
	
	Union myUnion;
	
	if ((input0 >= 1.0) && (input0 <= 5.0)) {
		
		myUnion.unionFirst = input0;
	
	rReal_T input0 = myUnion.unionSecond;
	
		tmp = 1.0986122886681096 / log(3.0 * input0);
	}
	
    return 0;
}