#include "common.h"

struct func_802466A4_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};

struct func_802466A4_Obj {
    u8 pad[0x2C];
    struct func_802466A4_Sub *unk2C;
};

struct func_802466A4_Vec {
    s32 x;
    s32 y;
    s32 z;
};

extern s32 func_800058DC(void *, void *);
extern s32 func_8013A1B4(void **, struct func_802466A4_Vec, s32);
extern struct func_802466A4_Vec D_8025294C;
extern f32 D_80258BB0;
extern void func_80246760(void);

void func_802466A4(void *arg0, void **arg1) {
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unk4 = -278.0f;
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unk8 = -125.0f;
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unkC = D_80258BB0;
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unk12 = 0x1000;
    func_8013A1B4(arg1, D_8025294C, 0xFFFFFF);
    *(s16 *) ((u8 *) arg0 + 0x90) = 0;
    func_800058DC(arg0, func_80246760);
}
