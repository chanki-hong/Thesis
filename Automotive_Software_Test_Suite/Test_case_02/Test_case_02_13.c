typedef float rReal_T;
typedef int int32_T;
typedef unsigned int uint32;
typedef unsigned int uint32_T;
typedef unsigned char boolean_T;

static void Test_case_02_44( rReal_T   input1[150])
{
   
    rReal_T float_arr[150];
    int32_T i;
    rReal_T float_var1;
    rReal_T float_var2;

  
    if (1) {

        for (i = 0; i < 150; i++) {

			if((input1[i] * input1[i]* input1[i] * input1[i]) <3.4028234663852886E+38){
         
            float_var1 = input1[i] * input1[i];

  
            float_var2 = float_var1 * input1[i];

         
            float_arr[i] = float_var2 * input1[i];
			
			float_var1 = float_arr[0]; 
			}
        }

					
    }
}

rReal_T input1[150];
int main_Test_case_02_44(rReal_T input0){
  
  for(int i=0; i<150; i++){
	  input1[i] = input0;
  }
    void(*funcPtr) (float *) = Test_case_02_44;
	
    funcPtr(input1);
    return 0;
}