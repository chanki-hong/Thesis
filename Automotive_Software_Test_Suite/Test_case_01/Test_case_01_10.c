#include <stdio.h>
#include <math.h>

#include <string.h>

typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;





int main_Test_case_01_31(rReal_T input1)
{
	rReal_T dataCopy;
    rReal_T float_var;
    uint32_T uint_var;
   

    float_var = input1;

	dataCopy = float_var;
	float_var = dataCopy;


   
    if (float_var < 4.503599627370496E+15) {
        if (float_var >= 0.5) {
            float_var = floor(float_var + 0.5);
        }
        else {
            float_var = 0.0;
        }
    }

    if (float_var < 4.294967296E+9) {
        uint_var = (uint32_T)float_var;
    }
    return 0;
}