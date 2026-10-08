#include "context.h"

typedef struct func_80132D28_Struct {
    u8 pad0[0xA4];
    s16 unkA4;
    s16 unkA6;
} func_80132D28_Struct;

typedef struct func_80132D28_StructC {
    u8 pad0[0x898];
    s32 unk898;
} func_80132D28_StructC;

extern func_80132D28_StructC D_8005C4B0;
extern func_80132D28_Struct D_800892B0;
extern s8 D_801BBD54;

void func_80132D28(void *arg0, s32 arg1) {
    if (D_8005C4B0.unk898 == 0) {
        D_800892B0.unkA6 = 1;
        D_800892B0.unkA4 = 2;
        D_801BBD54 = 0;
        func_80005700(arg0);
    }
}
