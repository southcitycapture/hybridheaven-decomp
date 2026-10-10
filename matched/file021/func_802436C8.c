#include "context.h"

extern void func_8001F74C();
extern s32 func_80126CC0(s32, void *);
extern void func_80126EAC();
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_800062F8(void *, u32);
extern void func_800058DC(s32, void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_80133A24(s32 arg0);
extern u8 D_80164F40[];
extern u8 D_8017AF38[];
struct func_80243A00_Arg0;
void func_80243A00(struct func_80243A00_Arg0 *arg0, s32 arg1);

struct func_802436C8_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    void *unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_802436C8_Outer {
    u8 pad0[0x30];
    struct func_802436C8_Inner *unk30;
};

extern void func_80243824();

void func_802436C8(s32 arg0, struct func_802436C8_Outer **arg1) {
    f32 temp_fv0;
    struct func_802436C8_Inner *temp_v0;

    func_8001F74C();
    if (func_80126CC0(arg0, &func_80126EAC) != 0) {
        func_80005F6C((void *) arg0, D_80164F40);
        func_80006214((void *) arg0);
        func_8012636C((void *) arg0, 0);
        func_800062F8((*arg1), 0x80000C00);
        (*arg1)->unk30->unk30 = D_8017AF38;
        (*arg1)->unk30->unk24 = 0x400;
        (*arg1)->unk30->unk4C = ((u8 *) &D_801BBBF0)[0xF32];
        (*arg1)->unk30->unk4D = ((u8 *) &D_801BBBF0)[0xF33];
        (*arg1)->unk30->unk4E = ((u8 *) &D_801BBBF0)[0xF34];
        (*arg1)->unk30->unk4F = ((u8 *) &D_801BBBF0)[0xF35];
        func_8012C89C((void *) arg0, 0, 0x502, 5);
        (*arg1)->unk30->unk20 = 1.0f;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        if (func_80133A24(0x1A5) != 0) {
            func_800058DC(arg0, &func_80243A00);
            return;
        }
        func_800058DC(arg0, &func_80243824);
    }
}
