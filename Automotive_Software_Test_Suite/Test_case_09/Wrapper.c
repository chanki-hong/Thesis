#include <stdio.h>
#include <math.h>
#include <string.h>
#include "TestCase.h"
#include "Wrapper.h"
typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;
typedef int sint32;



static unsigned int ps_state_cycle_counter = 0u;


void WRAPPER(void)
{

    
    if (ps_state_cycle_counter >= CALL_INIT_AFTER_CYCLES) {

        TestCase_init();

        ps_state_cycle_counter = 0u;
    }

  
    TestCase();

    ps_state_cycle_counter++;
    return;
}


