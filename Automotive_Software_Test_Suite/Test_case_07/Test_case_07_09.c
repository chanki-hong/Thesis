#include <stdio.h>
#include <math.h>


union str {
	unsigned int uint32;
	float float32;
	
};
typedef union str str_;



int main_Test_case_07_16()
{
	str_ var1;
	str_ var2;
	
	int a;

	while (1)
	{
		var2.uint32 = 4294967295u;
		break;
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