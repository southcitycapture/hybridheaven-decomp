#include "context.h"
extern func_80132D28_StructC D_8005C4B0;
extern func_80132D28_Struct D_800892B0;
extern s8 D_801BBD54;
extern void func_80005700();

typedef struct func_80133458_Struct {
    u8 pad0[0xA4];
    s16 unkA4;
    s16 unkA6;
} func_80133458_Struct;

typedef struct func_80133458_StructC {
    u8 pad0[0x898];
    s32 unk898;
} func_80133458_StructC;


void func_80133458(void *arg0, s32 arg1) {
    if (D_8005C4B0.unk898 == 0) {
        D_800892B0.unkA6 = 1;
        D_800892B0.unkA4 = 2;
        D_801BBD54 = 0;
        func_80005700(arg0);
    }
}
