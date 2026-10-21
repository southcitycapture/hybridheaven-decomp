#include "context.h"

typedef struct func_8001E978_Struct {
    u8 pad[0x154];
    u16 unk154;
    u16 unk156;
    u8 pad158[2];
    u8 unk15A;
    u8 unk15B;
    u8 unk15C;
    u8 unk15D;
    u8 unk15E;
    u8 pad15F;
    s32 unk160;
    u8 unk164;
} func_8001E978_Struct;

typedef struct func_8001E978_StructCopy {
    s32 words[4];
} func_8001E978_StructCopy;

extern s32 func_80005670(s32, void *);
extern u8 D_800448E0[];
extern func_8001E978_StructCopy D_80044918;

void func_8001E978(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u16 arg4, u16 arg5, u8 arg6, u8 arg7) {
    func_8001E978_StructCopy sp18;

    if ((((func_8001E978_Struct *)&D_801BBBF0)->unk15D & 0x80) && (((func_8001E978_Struct *)&D_801BBBF0)->unk160 != 0)) {
        sp18 = D_80044918;
        return;
    }
    ((func_8001E978_Struct *)&D_801BBBF0)->unk160 = func_80005670(arg0, D_800448E0);
    if (((func_8001E978_Struct *)&D_801BBBF0)->unk160 != 0) {
        ((func_8001E978_Struct *)&D_801BBBF0)->unk154 = arg4;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk156 = arg5;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk15A = arg1;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk15B = arg2;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk15C = arg3;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk15D = arg6;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk15E = arg7;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk164 = 1;
    }
}
