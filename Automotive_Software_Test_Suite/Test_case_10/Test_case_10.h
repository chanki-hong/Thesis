#define NULL ((void *)0)

#define FALSE ((boolean)0)
#define def_60 60U
#define def_50 50U
#define def_40 40U
#define def_30 30U

typedef unsigned int     size_t;
typedef float float32;
typedef unsigned char boolean;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef int sint32;




typedef struct struc_2 struc_2;
#ifndef __TASKING__
#pragma pack(push,1)
#endif
struct struc_2 {
    uint32 uint_var : 6; /* range is [4 .. 61] */
    boolean bool_var1 : 1;
    boolean bool_var2 : 1;
    const uint8 *uchar_ptr;
    struc_2 *next_struc_2;
};

typedef struct struc_other struc_other_1;
typedef struct struc_other struc_other_2;

struct struc_other {
    const uint8 *uchar_ptr;
    uint8 uchar_var;
};


typedef struct {
    const uint8 *uchar_ptr;

    uint32 uint_var;
	
    struc_2 struc_2_arr[def_60];
	struc_2 struc_2_arr_other1[def_50];
    struc_2 struc_2_arr_other2[def_40];

    uint32 uint_var_other1;
    uint32 uint_var_other2;

    struc_other_1 struc_other_1_arr[def_50];
    struc_other_2 struc_other_2_arr[def_40];
  
    boolean bool_var2;
} struc_sub;


typedef struct {
    struc_sub struc_sub_var;
    uint32 uint_var;                    
} struc;



