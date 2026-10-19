#include "context.h"

extern s32 func_8000522C(u16, s32);
void func_80244904(void *arg0, void *arg1);
struct func_80244AC4_Arg0;
void func_80244AC4(struct func_80244AC4_Arg0 *arg0, s32 arg1);
struct func_8024475C_B { u8 pad[0x10]; s32 unk10; };
struct func_8024475C_A { u16 *unk0; struct func_8024475C_B *unk4; };
extern struct func_8024475C_A *D_801730F4;
struct func_8024475C_S {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x74 - 0x30];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
};

void func_8024475C(struct func_8024475C_S *arg0, struct func_8024358C_StructArg1 *arg1) {
    struct func_8024358C_StructY *t_v0;
    f32 t_f;
    if (func_80126CC0((s32)arg0, func_80126EAC) != 0) {
        func_8001F74C(arg0);
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012636C(arg0, 0);
        func_800062F8(arg1->unk0, 0x80000C00);
        arg1->unk0->unk30->unk30 = (void *)D_8017AF38;
        arg1->unk0->unk30->unk24 = 0x400;
        arg1->unk0->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
        arg1->unk0->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
        arg1->unk0->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
        arg1->unk0->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
        func_8012C89C(arg0, 0, 0x502, 3);
        arg1->unk0->unk30->unk20 = 1.0f;
        t_v0 = arg1->unk0->unk30;
        t_f = t_v0->unk20;
        t_v0->unk1C = t_f;
        arg1->unk0->unk30->unk18 = t_f;
        arg0->unk2C |= 0x800;
        arg0->unk74 = func_8000522C(*D_801730F4->unk0, D_801730F4->unk4->unk10);
        arg0->unk84 = 0;
        arg0->unk86 = 0;
        arg0->unk88 = 0;
        arg0->unk78 = 0.0f;
        arg0->unk7C = 0.0f;
        arg0->unk80 = 0.0f;
        if (func_80133A24(0x1A7) != 0) {
            func_800058DC((s32)arg0, func_80244AC4);
            return;
        }
        func_800058DC((s32)arg0, func_80244904);
    }
}
