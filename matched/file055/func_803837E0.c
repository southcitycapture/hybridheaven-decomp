#include "context.h"

#if __LINE__ == 3
#define func_803837E0_Struct func_80383888_Struct
#define D_803837E0_Arr D_80384360
#else
typedef struct func_803837E0_Struct {
    /* 0x0 */ u8 a0;
    /* 0x1 */ u8 a1;
    /* 0x2 */ s16 a2;
    /* 0x4 */ s16 a4;
    /* 0x6 */ s16 a6;
    /* 0x8 */ s16 a8;
    /* 0xA */ u16 aA;
    /* 0xC */ u8 aC;
    /* 0xD */ u8 aD;
    /* 0xE */ u16 aE;
} func_803837E0_Struct;
extern void func_8014B1A4(f32, f32, f32, s16, u16, u8, u8, u16, u8, u8);
extern struct func_80383888_Struct D_80384360[];
#define D_803837E0_Arr ((func_803837E0_Struct *)D_80384360)
#endif

void func_803837E0(void) {
    s32 i;

    for (i = 0; D_803837E0_Arr[i].aA != 0; i++) {
        func_8014B1A4(D_803837E0_Arr[i].a2, D_803837E0_Arr[i].a4, D_803837E0_Arr[i].a6, D_803837E0_Arr[i].a8, D_803837E0_Arr[i].aA,
                      D_803837E0_Arr[i].aC, D_803837E0_Arr[i].aD, D_803837E0_Arr[i].aE, D_803837E0_Arr[i].a0, D_803837E0_Arr[i].a1);
    }
}
