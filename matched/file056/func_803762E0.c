#include "context.h"
extern s32 func_803757E0(void *, s32, s32, s32);
struct func_8037644C_Sub {
    u8 pad[0x10];
    u32 unk10;
};
struct func_8037644C_Obj {
    u8 pad[0x78];
    s16 unk78;
};
struct func_8037644C_Struct {
    u8 pad0[0x38];
    struct func_8037644C_Sub *unk38;
    u8 pad3C[0x20];
    struct func_8037644C_Obj *unk5C;
};
typedef struct func_80377140_Struct {
    u8 pad[6];
    u16 unk6;
    u16 unk8;
} func_80377140_Struct;
extern func_80377140_Struct D_801BBBF0;

struct func_803762E0_S { u8 pad[0x78]; s16 unk78; };
struct func_803762E0_F { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; };
struct func_803762E0_M { u8 pad[0x2C]; struct func_803762E0_F *unk2C; };
struct func_803762E0_O { u8 pad[0x24]; struct func_803762E0_M *unk24; u8 pad28[0x10]; struct func_80376160_Inner *unk38; u8 pad3C[0x20]; struct func_803762E0_S *unk5C; };
struct func_803762E0_G { u8 pad0[0xE0]; struct func_803762E0_M *unkE0; };
struct func_8037644C_Struct;
void func_8037644C(struct func_8037644C_Struct *arg0, s32 arg1);
extern s32 func_801C3B3C();
extern s32 func_8012A630(void *, f32);
extern s32 func_80375A04(void *);

void func_803762E0(struct func_803762E0_O *arg0, s32 arg1) {
    struct func_803762E0_S *sp24;
    f32 one;
    f32 f;

    sp24 = arg0->unk5C;
    func_803757E0(arg0, arg1, 4, (arg0->unk38->unk10 >> 8) & 0xFF);
    if ((arg0->unk38->unk10 >> 24) != 3) {
        if ((arg0->unk38->unk10 >> 16) & 0xFF) {
            if (func_801C3B3C() == 0) {
                if (func_8012A630(arg0, (f32)((arg0->unk38->unk10 >> 16) & 0xFF)) != 0) goto blk;
            }
        }
        if (((arg0->unk38->unk10 >> 16) & 0xFF) == 0) {
            if (func_80375A04(arg0) != 0) {
blk:
                one = 1.0f;
                *(s16 *)((u8 *)&D_801BBBF0 + 0x18E) = 1;
                *(s16 *)((u8 *)&D_801BBBF0 + 0x190) = 4;
                *(s16 *)((u8 *)&D_801BBBF0 + 0x192) = 6;
                *(f32 *)((u8 *)&D_801BBBF0 + 0xF14) = arg0->unk24->unk2C->unk4;
                *(f32 *)((u8 *)&D_801BBBF0 + 0xF18) = arg0->unk24->unk2C->unkC;
                *(f32 *)((u8 *)&D_801BBBF0 + 0x198) = ((struct func_803762E0_G *)&D_801BBBF0)->unkE0->unk2C->unk4;
                *(f32 *)((u8 *)&D_801BBBF0 + 0x1A0) = ((struct func_803762E0_G *)&D_801BBBF0)->unkE0->unk2C->unkC;
                *(s16 *)((u8 *)&D_801BBBF0 + 0xF00) = 0x1100;
                *(f32 *)((u8 *)&D_801BBBF0 + 0xF04) = one;
                *(f32 *)((u8 *)&D_801BBBF0 + 0xF08) = one;
                sp24->unk78 = 1;
                func_800058DC(arg0, func_8037644C);
            }
        }
    }
}
