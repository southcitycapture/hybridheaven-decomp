#include "common.h"

struct func_80244600_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_80244600_Struct1 {
    u8 pad0[0x30];
    struct func_80244600_Struct2 *unk30;
};

struct func_80244600_Struct0 {
    u8 pad0[0x90];
    s16 unk90;
};

s32 func_80133A24(s32);
void func_80005F6C(void *, void *);
void func_80006214(void *);
void func_8012C89C(void *, s32, s32, s32);
void func_8012C2DC(s32);
void func_800058DC(void *, void (*)());
extern u8 D_80164F40[];
extern f32 D_8025BF80;
extern void func_802446CC();

void func_80244600(struct func_80244600_Struct0 *arg0, struct func_80244600_Struct1 **arg1) {
    if (func_80133A24(0x146) == 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x3CB, 5);
        func_8012C2DC(0);
        (*arg1)->unk30->unk4 = D_8025BF80;
        (*arg1)->unk30->unk8 = 200.0f;
        (*arg1)->unk30->unkC = 240.0f;
        (*arg1)->unk30->unk12 = 0;
        arg0->unk90 = 0x30;
        func_800058DC(arg0, func_802446CC);
    }
}
