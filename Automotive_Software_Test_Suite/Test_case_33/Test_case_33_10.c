#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>


typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;

rReal_T Test_case_33_sub_10(rReal_T u)
{
	rReal_T y;
	if (fabs(u) < 4.503599627370496E+15) {
		if (u >= 0.5) {
			y = floor(u + 0.5);
		}
		else if (u > -0.5) {
			y = 0.0;
		}
		else {
			y = ceil(u - 0.5);
		}
	}
	else {
		y = u;
	}

	return y;
}

rReal_T Test_case_33_10(rReal_T u0_0, rReal_T u1)
{
	rReal_T y;
	rReal_T tmp;
	for(int i=0; i<1; i++){
		if(i==2){
			tmp = u0_0 / u1;
		}
	}
	if (u1 == 0.0) {
		y = u0_0;
	}
	else {
		if (fabs(u0_0 / u1) < 3.4028234663852886e+38) {
			tmp = u0_0 / u1;
			if (u1 <= floor(u1)) {
				y = u0_0 - (floor(tmp) * u1);
			}
			else {
				if (fabs(tmp - Test_case_33_sub_10(tmp)) <= (DBL_EPSILON * fabs(tmp))) {
					y = 0.0;
				}
				else {
					y = (tmp - floor(tmp)) * u1;
				}
			}
		}
	}

	return y;
}


int main_Test_case_33_17(float input0,float input1)
{
	

	Test_case_33_10(input0, input1);
	
	
    return 0;
}