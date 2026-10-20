#include "context.h"

struct func_801F9BC8_Vec { s32 a; s32 b; s32 c; };
extern struct func_801F9BC8_Vec D_80216EDC;
extern u8 D_80218BB0[];
extern u8 func_801F9D68[];
extern void func_8013A28C(s32, struct func_801F9BC8_Vec);
struct func_801F9BC8_Obj {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
    u8 pad1[0x4];
    u32 unk2C;
    u8 pad2[0x2C];
    void *unk5C;
    u8 pad3[0x34];
    f32 unk94;
};
struct func_801F9BC8_Tgt { u8 pad[0x78]; s16 unk78; };

void func_801F9BC8(struct func_801F9BC8_Obj *arg0, s32 arg1) {
    struct func_801F9BC8_Tgt *sp64;
    f32 sp58[3];

    sp64 = arg0->unk5C;
    func_8013A334(sp58, arg1, sp64, 1);
    func_8011AAF4(D_80218BB0, 0x968, arg0, 0, 1, 3.0f, ((f32 *)D_801BBCD0->unk2C)[1], ((f32 *)D_801BBCD0->unk2C)[2] + 20.0f, ((f32 *)D_801BBCD0->unk2C)[3], 3.0f, sp58[0], arg0->unk24->unk2C->unk8 + 5.0f, sp58[2], 0.0f, 35.0f, -1, -1);
    arg0->unk2C |= 0x20;
    func_80010550(arg1, sp64);
    func_801F5294((void *)arg0);
    func_8012A94C(arg0, 0x100);
    if (arg0->unk24->unk2C->unk8 < arg0->unk94) {
        func_801F5210(arg0);
        func_80020744(0x13C);
        arg0->unk24->unk2C->unk8 = arg0->unk94;
        func_8013A28C(arg1, D_80216EDC);
        sp64->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F9D68);
    }
}
