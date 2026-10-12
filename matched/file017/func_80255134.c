#include "context.h"

extern void func_8025799C();
extern s32 func_801C3044(void);
extern void func_801C2F0C(s32, void *);
extern void func_802551A0();

typedef struct func_80255134_Struct {
    s16 unk0;
    u8 pad[0x2];
    s32 unk4;
    f32 unk8;
    s32 unkC;
} func_80255134_Struct;

void func_80255134(func_802543F8_Obj *arg0) {
    u8 sp30[0x10];
    func_80255134_Struct sp18;

    func_8025799C();
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x04100026;
        sp18.unk8 = 3.0f;
        func_801C2F0C(4, &sp18);
        arg0->unk92 = 0;
        func_800058DC(arg0, func_802551A0);
    }
}
