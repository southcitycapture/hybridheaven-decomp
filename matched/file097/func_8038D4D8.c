#include "common.h"
struct func_8038D4D8_Obj {
    u8 pad0[0xC];
    struct func_8038D4D8_Obj *unkC;
    u8 pad1[0x8A];
    u16 unk9A;
    u8 pad2[0x5];
    u8 unkA1;
    u8 unkA2;
};
struct func_8038D4D8_Global {
    u8 pad0[0xDC];
    struct func_8038D4D8_Obj *unkDC;
    u8 pad1[0x1030 - 0xE0];
    u8 unk1030;
    u8 unk1031;
};
extern struct func_8038D4D8_Global D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s32 func_800058DC(s32, void *);
extern void func_8038D2C0();
struct func_8038D420_StructObj {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x8A];
    s16 unk9A;
};
void func_8038D420(struct func_8038D420_StructObj *arg0, s32 arg1);


struct func_8038D4D8_StructTarget {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

void func_8038D4D8(struct func_8038D4D8_Obj *arg0, s32 arg1) {
    struct func_8038D4D8_StructTarget *target;
    s32 var_v0;

    if (D_801BBBF0.unkDC == arg0->unkC) {
        target = (struct func_8038D4D8_StructTarget *) D_801BC03C;
    } else {
        target = (struct func_8038D4D8_StructTarget *) D_801BC3D8;
    }
    if (arg0 == D_801BBBF0.unkDC) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    arg0->unk9A = 0;
    if (D_801BBBF0.unk1031 == 5) {
        if (var_v0 != D_801BBBF0.unk1030) {
            target->unk2D8 = arg0->unkA1;
            target->unk2D9 = arg0->unkA2;
            func_800058DC((s32) arg0, (void *) func_8038D420);
        } else {
            func_800058DC((s32) arg0, (void *) func_8038D2C0);
        }
    }
}
