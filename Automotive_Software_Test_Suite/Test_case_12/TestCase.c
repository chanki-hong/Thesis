#include <stdio.h>
#include <math.h>
#include <string.h>
#include "TestCase.h"

typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;



void TestCase(boolean_T input1)
{
    main_Test_case_12_01(input1);
	main_Test_case_12_04(input1);
	main_Test_case_12_05(input1);
	main_Test_case_12_08(input1);
	main_Test_case_12_09(input1);
	main_Test_case_12_10(input1);
	main_Test_case_12_11(input1);
	main_Test_case_12_15(input1);
	main_Test_case_12_16(input1);
	main_Test_case_12_17(input1);
	main_Test_case_12_18(input1);

    
}

void TestCase_init(void)
{
    
	Test_case_12_initialize_01();
	Test_case_12_initialize_04();
	Test_case_12_initialize_05();
	Test_case_12_initialize_08();
	Test_case_12_initialize_09();
	Test_case_12_initialize_10();
	Test_case_12_initialize_11();
	Test_case_12_initialize_15();
	Test_case_12_initialize_16();
	Test_case_12_initialize_17();
	Test_case_12_initialize_18();
 
    
}
