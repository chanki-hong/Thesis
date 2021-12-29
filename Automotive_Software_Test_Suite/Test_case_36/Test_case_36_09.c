#include <assert.h>

typedef unsigned int     size_t;
typedef float float32;
typedef unsigned char boolean;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef int sint32;
#define TRUE 1U
#define FALSE 0U
 

typedef enum {
	enum_Mode_1,      
	enum_Mode_2,
	enum_Mode_3
} enum_Mode;

typedef struct {
	uint32 uint_var1;             
	uint32 uint_var2;            
	uint32 uint_var3;           
	enum_Mode mode;        
} struc_sub;

typedef struct {
	struc_sub c;    
	uint32 min;           
	uint32 max;            
	uint32 init;            
} struc;



 

boolean Test_case_36_16(uint32 * param_uint_ptr, const struc * const param_struc_ptr)
{
	uint32 i;
	boolean local_bool_var = FALSE;

	for (i = 0; i < param_struc_ptr->c.uint_var1; i++) {
		/* check for > max */
		if (param_uint_ptr[i] > param_struc_ptr->max) {
			local_bool_var = TRUE;
 
			switch (param_struc_ptr->c.mode) {
			case enum_Mode_3:
				param_uint_ptr[i] = param_struc_ptr->init;
				param_uint_ptr[i]++;
				break;
			case enum_Mode_2:
				param_uint_ptr[i] = param_struc_ptr->max;
				break;
			default:
				break;
			}
		}
		/* check for < min */
		else if (param_uint_ptr[i] < param_struc_ptr->min) {
			local_bool_var = TRUE;
 
			switch (param_struc_ptr->c.mode) {
			case enum_Mode_3:
				param_uint_ptr[i] = param_struc_ptr->init;
				param_uint_ptr[i]++;
				break;
			case enum_Mode_2:
				param_uint_ptr[i] = param_struc_ptr->min;
				break;
			default:
				break;
			}
		}

 
		 
	}

	return local_bool_var;
}
uint32 input1[10];



int main_Test_case_36_16(void)
{
	
	boolean bool_var = 0;
	
	
		while(1){
			static const struc struc_var = {
			{ 10u,
			5099u,
			1648u,
			enum_Mode_3 },
			0u ,
			7u,
			1u };
	
			bool_var = Test_case_36_16(&(input1[0]), &struc_var);
			break;
			assert(0);
		}
		



	

		return 0;
	 
}