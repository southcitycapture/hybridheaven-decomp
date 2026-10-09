#include "context.h"
extern u8 D_80164F40[];
extern void func_800058DC(s32, void *);
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_800062F8(void *, u32);
extern void func_8001F74C();
void func_8012C89C(void *, s32, s32, s32);

typedef struct func_80244E9C_StructInner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    s32 unk30;
    u8 pad2[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80244E9C_StructInner;

typedef struct func_80244E9C_StructOuter {
    u8 pad0[0x30];
    func_80244E9C_StructInner *unk30;
} func_80244E9C_StructOuter;

extern u8 D_80250F40[];
extern void func_80244FCC(void);

void func_80244E9C(s32 arg0, func_80244E9C_StructOuter **arg1) {
    func_80244E9C_StructInner *temp_v0;

    func_8001F74C(arg0);
    func_80005F6C((void *) arg0, D_80164F40);
    func_80006214((void *) arg0);
    func_8012C89C((void *) arg0, 0, 0x507, 2);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk24 = temp_v0->unk24 | 0x300;
    (*arg1)->unk30->unk30 = (s32) D_80250F40 | 0x40000000;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0;
    (*arg1)->unk30->unk4A = 0;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk18 = 1.0f;
    (*arg1)->unk30->unk1C = 1.0f;
    (*arg1)->unk30->unk20 = 1.0f;
    func_800062F8(*arg1, 0x80000500);
    func_800058DC(arg0, (void *) func_80244FCC);
}
