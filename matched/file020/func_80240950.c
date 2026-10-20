#include "context.h"
extern void func_8012C89C(void *arg0, s32 arg1, s32 arg2, s32 arg3);
typedef struct func_802430FC_Struct_Quad {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_802430FC_Struct_Quad;
typedef union func_802430FC_Union_Quad {
    s64 align;
    func_802430FC_Struct_Quad w;
} func_802430FC_Union_Quad;
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern func_802430FC_Union_Quad D_80164F40;

struct func_80240950_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x14];
    u32 unk24;
    u8 pad2[8];
    u32 unk30;
    u8 pad3[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};
struct func_80240950_Outer {
    u8 pad[0x30];
    struct func_80240950_Inner *unk30;
};
struct func_80240950_Quad {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_80240950_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x74 - 0x30];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
};
void func_80241214(s32 arg0, s32 arg1);
void func_80240CF8(void *arg0, s32 arg1);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80133A24(s32);
extern s32 func_8012C97C(s32, s32);
extern u8 D_8017B608[];
extern u8 D_8017B6C0[];
extern u8 func_80126EAC[];

void func_80240950(struct func_80240950_Arg0 *arg0, struct func_80240950_Outer **arg1) {
    struct func_80240950_Quad sp38;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        if (func_80133A24(0x16E) != 0) {
            func_800058DC(arg0, func_80241214);
            return;
        }
        sp38 = *(struct func_80240950_Quad *)&D_80164F40;
        sp38.unk4 = 0x80000300;
        func_80005E44((s32)arg0, &sp38);
        sp38.unk4 = 0x80000300;
        func_80005E44((s32)arg0, &sp38);
        sp38.unk4 = 0x80000600;
        func_80005E44((s32)arg0, &sp38);
        sp38.unk4 = 0x80000600;
        func_80005E44((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012C89C(arg0, 0, 0x284, 1);
        arg1[0]->unk30->unk24 |= 0x100;
        arg1[0]->unk30->unk30 = (s32)D_8017B608 | 0x40000000;
        arg1[0]->unk30->unk4 = 0.0f;
        arg1[0]->unk30->unk8 = 0.0f;
        arg1[0]->unk30->unkC = 0.0f;
        arg1[0]->unk30->unk48 = 0;
        arg1[0]->unk30->unk49 = 0xFF;
        arg1[0]->unk30->unk4A = 0xFF;
        arg1[0]->unk30->unk4B = 0xFF;
        func_8012C89C(arg0, 1, 0x284, 2);
        arg1[1]->unk30->unk24 |= 0x100;
        arg1[1]->unk30->unk30 = (s32)D_8017B608 | 0x40000000;
        arg1[1]->unk30->unk4 = 0.0f;
        arg1[1]->unk30->unk8 = 0.0f;
        arg1[1]->unk30->unkC = 0.0f;
        arg1[1]->unk30->unk48 = 0xFF;
        arg1[1]->unk30->unk49 = 0xFF;
        arg1[1]->unk30->unk4A = 0xFF;
        arg1[1]->unk30->unk4B = 0xFF;
        func_8012C89C(arg0, 2, 0x28F, 4);
        arg1[2]->unk30->unk24 |= 0x100;
        arg1[2]->unk30->unk30 = (s32)D_8017B6C0 | 0x40000000;
        arg1[2]->unk30->unk4 = 0.0f;
        arg1[2]->unk30->unk8 = 0.0f;
        arg1[2]->unk30->unkC = 0.0f;
        arg1[2]->unk30->unk48 = 0;
        arg1[2]->unk30->unk49 = 0xFF;
        arg1[2]->unk30->unk4A = 0xA6;
        arg1[2]->unk30->unk4B = 0xFF;
        func_8012C89C(arg0, 3, 0x28F, 5);
        arg1[3]->unk30->unk24 |= 0x100;
        arg1[3]->unk30->unk30 = (s32)D_8017B6C0 | 0x40000000;
        arg1[3]->unk30->unk4 = 0.0f;
        arg1[3]->unk30->unk8 = 0.0f;
        arg1[3]->unk30->unkC = 0.0f;
        arg1[3]->unk30->unk48 = 0xFF;
        arg1[3]->unk30->unk49 = 0xFF;
        arg1[3]->unk30->unk4A = 0xFF;
        arg1[3]->unk30->unk4B = 0xFF;
        arg0->unk2C |= 0x800;
        arg0->unk74 = func_8012C97C(0x284, 3);
        arg0->unk78 = 0.0f;
        arg0->unk7C = 0.0f;
        arg0->unk80 = 0.0f;
        arg0->unk84 = 0;
        arg0->unk86 = 0;
        arg0->unk88 = 0;
        func_800058DC(arg0, func_80240CF8);
    }
}
