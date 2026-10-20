#include "context.h"

typedef struct func_80242BAC_StructVec {
    s32 x, y, z;
} func_80242BAC_StructVec;

typedef struct func_80242BAC_StructData {
    u8 pad[0x78];
    s16 unk78;
} func_80242BAC_StructData;

typedef struct func_80242BAC_StructObj {
    u8 pad[0x5C];
    func_80242BAC_StructData *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80242BAC_StructObj;

extern s32 func_8012CE9C(s32, void *, func_80242BAC_StructVec, s32);
extern s32 func_80010550(s32, void *);
extern void func_80133980(s32);
extern void func_80020744(s32);
extern void func_80242C58();
extern func_80242BAC_StructVec D_80245DF8;

void func_80242BAC(func_80242BAC_StructObj *arg0, s32 arg1) {
    func_80242BAC_StructData *sp24;
    s16 temp_v1;

    sp24 = arg0->unk5C;
    if (func_8012CE9C(arg1, sp24, D_80245DF8, 10) == 0) {
        func_80010550(arg1, sp24);
        temp_v1 = arg0->unk94;
        arg0->unk94 = temp_v1 - 1;
        if (temp_v1 == 0) {
            func_80133980(11);
            sp24->unk78 = 1;
            func_80020744(0x338);
            func_800058DC((s32)arg0, func_80242C58);
        }
    }
}
