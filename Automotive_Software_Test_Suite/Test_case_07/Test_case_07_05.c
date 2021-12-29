#include <stdio.h>
#include <math.h>


union str {
	unsigned int uint32;
	float float32;
	
};
typedef union str str_;

const int GLOBAL_CONST_TRUE = 1; /* true */
const int GLOBAL_CONST_FALSE = 0; /* false */


int main_Test_case_07_09()
{
	str_ var1;
	str_ var2;
	
	int a;

	if (GLOBAL_CONST_TRUE)
	{
		var2.uint32 = 4294967295u;
	}
	
	
	if (0 == isfinite(4294967295.0f)) { 
		a = 1;
	}
	else {
		a = 0;
	}

	
	if (0 == isfinite(var2.float32)) { 
		a = 1;
	}
	else {
		a = 0;
	}

    return 0;
}
