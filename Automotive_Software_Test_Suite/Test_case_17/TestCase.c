#include <stdio.h>
#include <math.h>
#include <string.h>
#include "TestCase.h"

typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;



void TestCase(boolean_T input1, boolean_T input2)
{
    Test_case_17_01( input1, input2);
	Test_case_17_04( input1, input2);
	Test_case_17_05( input1, input2);
	Test_case_17_08( input1, input2);
	Test_case_17_09( input1, input2);
	Test_case_17_10( input1, input2);
	Test_case_17_11( input1, input2);
	Test_case_17_15( input1, input2);
	Test_case_17_16( input1, input2);
	Test_case_17_17( input1, input2);
	Test_case_17_18( input1, input2);

    
}

void TestCase_init(void)
{
    
	Test_case_17_initialize_01();
	Test_case_17_initialize_04();
	Test_case_17_initialize_05();
	Test_case_17_initialize_08();
	Test_case_17_initialize_09();
	Test_case_17_initialize_10();
	Test_case_17_initialize_11();
	Test_case_17_initialize_15();
	Test_case_17_initialize_16();
	Test_case_17_initialize_17();
	Test_case_17_initialize_18();
 
    
}
