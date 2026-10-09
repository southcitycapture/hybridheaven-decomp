#include "context.h"

struct func_80033D20_StructVtbl {
    u8 pad0[0x8];
    void (*unk8)();
};

struct func_80033D20_StructB {
    u8 pad0[0xC];
    struct func_80033D20_StructVtbl *unkC;
    u8 pad1[0xD8 - 0x10];
    s32 unkD8;
};

struct func_80033D20_StructArg1 {
    u8 pad0[0x8];
    struct func_80033D20_StructB *unk8;
    u8 pad1[0x1A - 0xC];
    s16 unk1A;
};

struct func_80033D20_StructArg0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct func_80033D20_StructObj {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    f32 unkC;
    s16 unk10;
    u8 unk12;
    u8 unk13;
    s32 unk14;
    s32 unk18;
};

extern void *func_8002C6A0();
extern s32 func_8002C7CC(void *, s32, void *, void *);

void func_80033D20(void *arg0, void *arg1, s32 arg2, f32 arg3, s16 arg4, u8 arg5, u8 arg6, s32 arg7) {
    struct func_80033D20_StructObj *temp_v0;
    struct func_80033D20_StructArg1 *a1 = arg1;
    u8 var_v0;

    if (a1->unk8 != NULL) {
        temp_v0 = func_8002C6A0();
        if (temp_v0 != NULL) {
            var_v0 = arg6;
            if ((s32) var_v0 >= 0x80) {
                var_v0 = 0x7F;
            }
            temp_v0->unk4 = ((struct func_80033D20_StructArg0 *)arg0)->unk1C + a1->unk8->unkD8;
            temp_v0->unk0 = 0;
            temp_v0->unk8 = 0xD;
            temp_v0->unkA = a1->unk1A;
            temp_v0->unk12 = arg5;
            temp_v0->unk10 = arg4;
            temp_v0->unk13 = var_v0;
            temp_v0->unkC = arg3;
            temp_v0->unk14 = func_8002C7CC(arg0, arg7, temp_v0, arg1);
            temp_v0->unk18 = arg2;
            a1->unk8->unkC->unk8(a1->unk8->unkC, 3, temp_v0, arg1);
        }
    }
}
