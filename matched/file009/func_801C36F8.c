#include "context.h"

typedef struct func_801C36F8_StructRot {
    u8 pad[0x12];
    s16 unk12;
} func_801C36F8_StructRot;
typedef struct func_801C36F8_StructLink {
    u8 pad[0x2C];
    func_801C36F8_StructRot *unk2C;
} func_801C36F8_StructLink;
typedef struct func_801C36F8_StructObj {
    u8 pad[0x24];
    func_801C36F8_StructLink *unk24;
    u8 pad2[0x5C - 0x28];
    struct func_801C3174_Sub *unk5C;
} func_801C36F8_StructObj;
typedef struct func_801C36F8_StructGlobal {
    u8 pad[0x198];
    s32 unk198;
    u8 pad2[4];
    s32 unk1A0;
    u8 pad3[0x1DA - 0x1A4];
    u16 unk1DA;
    u8 pad4[0xF04 - 0x1DC];
    s32 unkF04;
    u8 pad5[4];
    u16 unkF0C;
} func_801C36F8_StructGlobal;

extern void func_8012AEE0(void *, s32);
extern s32 func_8012AE54(void *, s32, s32, f32);

void func_801C36F8(func_801C36F8_StructObj *arg0, s32 arg1) {
    struct func_801C3174_Sub *sp2C;
    func_801C36F8_StructRot *temp;

    sp2C = arg0->unk5C;
    temp = arg0->unk24->unk2C;
    temp->unk12 += ((func_801C36F8_StructGlobal *)D_801BBBF0)->unkF0C;
    func_8012A7F4(arg0, ((func_801C36F8_StructGlobal *)D_801BBBF0)->unk198,
                 ((func_801C36F8_StructGlobal *)D_801BBBF0)->unk1A0, 0x80);
    func_8012AEE0(arg0, ((func_801C36F8_StructGlobal *)D_801BBBF0)->unkF04);
    temp = arg0->unk24->unk2C;
    temp->unk12 -= ((func_801C36F8_StructGlobal *)D_801BBBF0)->unkF0C;
    if (func_8012AE54(arg0, ((func_801C36F8_StructGlobal *)D_801BBBF0)->unk198,
                     ((func_801C36F8_StructGlobal *)D_801BBBF0)->unk1A0, 3.0f) == 0) {
        func_800058DC(arg0, func_801C3174);
        return;
    }
    if (((func_801C36F8_StructGlobal *)D_801BBBF0)->unk1DA == 1U) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, func_801C3174);
        return;
    }
    if (func_8012CE9C(arg1, (s32)sp2C, D_801E0B20, 10) == 0) {
        func_80010550(arg1, sp2C);
    }
}
