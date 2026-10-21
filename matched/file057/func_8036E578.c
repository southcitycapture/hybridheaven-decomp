#include "context.h"
typedef struct func_8036E578_Struct { s32 id; u16 frame; u16 flags; f32 speed; } func_8036E578_Struct;
extern func_8036E578_Struct D_80387B2C;
extern void func_80020718(s32);
extern void func_8036E780();

void func_8036E578(void *arg0) {
    struct func_80369C7C_Obj1 *sp44;
    s32 sp40;
    struct func_8036E39C_Bits *sp3C;
    s16 sp3A;
    s32 pad[2];
    func_8036E578_Struct sp24;
    s16 sp22;

    if (arg0 != D_801BBBF0.unkDC) {
        sp44 = D_801BBBF0.unkDC;
    } else {
        sp44 = D_801BBBF0.unkEC;
    }
    sp40 = ((func_8036B158_Struct *)sp44)->unk5C;
    if (arg0 != D_801BBBF0.unkDC) {
        sp3C = (struct func_8036E39C_Bits *)D_801BC03C;
    } else {
        sp3C = (struct func_8036E39C_Bits *)D_801BC3D8;
    }
    sp3A = sp44->unk24->unk2C->unk12;
    func_8001EAD0(sp3A);
    func_8001EB64(sp3A);
    sp24 = D_80387B2C;
    sp22 = (s16)(((arg0 != D_801BBBF0.unkDC) ? 0 : 0x1000) + D_801BBBF0.unkB98) & 0x1FFF;
    func_802237B0(arg0, 1);
    if (sp3C->d == 1) {
        if (((s16)(sp22 - sp3A) & 0x1FFF) < 0x1000) {
            sp24.flags |= 0x10;
        }
        sp24.id = 0x019001C1;
    } else {
        if (((s16)(sp22 - sp3A) & 0x1FFF) < 0x1000) {
            sp24.flags |= 0x10;
        }
        if (sp3C->d == 2) {
            sp24.id = 0x019001C2;
        } else if (sp3C->d == 3) {
            sp24.id = 0x019001C3;
        }
    }
    func_80006214(sp44);
    func_80011198((s32)D_8008DA88, sp40);
    func_8013A28C(D_8008DA88, *(func_8036D30C_Anim *)&sp24);
    func_80006214(arg0);
    func_80020718(0x3BD);
    func_800058DC((s32)sp44, func_8036E780);
}
