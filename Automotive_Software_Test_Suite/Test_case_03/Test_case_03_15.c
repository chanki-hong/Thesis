#include <string.h>
#include <stdio.h>


typedef unsigned int uint32_T;
typedef int int32_T;

static uint32_T uint_arr[361];

static void Test_case_03_45()
{
	static   uint32_T tmp[361];
	int i;
	for (i = 0; i < 42; i++) {
		uint_arr[i] = 0U;
	}

	for (i = 0; i < 361; i++) {
		tmp[i] = uint_arr[i];
	}
}

int main_Test_case_03_45()
{
    int32_T i;
   
    uint32_T tmp[361];
    memset(&uint_arr[42], 0, (uint32_T)(319U * (sizeof(uint32_T))));
    
	Test_case_03_45();

    return 0;
}