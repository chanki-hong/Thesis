#include <stdio.h>
#include <math.h>
#include <string.h>
#include "TestCase.h"
#include "Wrapper.h"

typedef unsigned int uint32_T;

static unsigned int cycle_counter = 0u;

void WRAPPER(uint32_T input1)
{
    if (cycle_counter >= 12960000u) {
        TestCase_init();  
        cycle_counter = 0u;
    }
 
    TestCase(input1);   
    cycle_counter++;

    return;
}





