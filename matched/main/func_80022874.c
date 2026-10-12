#include "context.h"

typedef struct func_80022874_Struct {
    s32 unk0;
    u8 unk4;
    u8 pad5[0xE - 0x5];
    u8 unkE;
    u8 unkF;
    u8 padF[0xB4 - 0x10];
    u16 unkB4;
    u16 unkB6;
} func_80022874_Struct;

extern s32 D_800498F0;
extern u8 D_800CBBE0[];
void func_80026950(s32, void *, s32, s32);

void func_80022874(s32 arg0) {
    D_800CBDA4 = (func_80022874_Struct *)((arg0 * 0xD8) + (s32)&D_801B5520);
    ((func_80022874_Struct *)D_800CBDA4)->unk0 = 0;
    ((func_80022874_Struct *)D_800CBDA4)->unk4 = 0;
    if (arg0 < 0x10) {
        if (((func_80022874_Struct *)D_800CBDA4)->unkE != 0) {
            ((func_80022874_Struct *)D_800CBDA4)->unkF = 2;
            ((func_80022874_Struct *)D_800CBDA4)->unkB4 = 0;
            ((func_80022874_Struct *)D_800CBDA4)->unkB6 = 0;
            func_80026950(D_800498F0, (u8 *)D_800CBBE0 + arg0 * 0x1C, 0, 0x1388);
        }
    }
}
