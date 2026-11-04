#include "common.h"
#define ABS(x) (((x) < 0) ? -(x) : (x))
extern u8 D_80164F40[];
extern u32 *D_80171CEC[];
struct func_801F38B8_Node {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_801F38B8_Mid {
    u8 pad0[0x2C];
    struct func_801F38B8_Node *unk2C;
};
struct func_801F38B8_Hi {
    u8 pad0[0x30];
    struct func_801F38B8_Node *unk30;
};
struct func_801F38B8_Lo {
    u8 pad0[0x24];
    struct func_801F38B8_Hi *unk24;
};
struct func_801F38B8_Obj {
    u8 pad0[0x64];
    struct func_801F38B8_Lo *unk64;
};
struct func_801F38B8_Base {
    u8 pad0[0xDC];
    struct func_801F38B8_Obj *unkDC;
    struct func_801F38B8_Mid *unkE0;
};
extern struct func_801F38B8_Base D_801BBBF0;
extern s32 func_8000522C(u16, s32);
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_800062F8(void *, s32);
extern s32 func_8000C3B0(void *);
extern void func_8012636C(void *, s32);
extern void func_8012C89C(void *, s32, u32, s32);
typedef struct {
    u8 pad0[8];
    f32 unk8;
} func_801F1D74_StructF;
typedef struct {
    u8 pad0[0x30];
    func_801F1D74_StructF *unk30;
} func_801F1D74_Struct24;
typedef struct {
    u8 pad0[8];
    s16 unk8;
    u8 padA[6];
    u32 unk10;
    u32 unk14;
    u32 unk18;
} func_801F1D74_Struct38;
typedef struct {
    u8 pad0[0x24];
    func_801F1D74_Struct24 *unk24;
    u8 pad28[0x10];
    func_801F1D74_Struct38 *unk38;
    u8 pad3C[0x54];
    s16 unk90;
} func_801F1D74_Arg0;
void func_801F1D74(func_801F1D74_Arg0 *arg0, s32 arg1);
typedef struct {
    u8 pad0[0x2C];
    func_801F1D74_StructF *unk2C;
} func_801F1D74_StructE0;


typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_801F19A0_Spawn;

typedef struct {
    u8 pad0[8];
    f32 unk8;
    u8 padC[0x18];
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801F19A0_Node;

typedef struct {
    u8 pad0[0x30];
    func_801F19A0_Node *unk30;
} func_801F19A0_Mid;

typedef struct {
    u8 pad0[8];
    s16 unk8;
    u8 padA[6];
    u32 unk10;
    u32 unk14;
    u32 unk18;
} func_801F19A0_Data;

typedef struct {
    u8 pad0[0x24];
    func_801F19A0_Mid *unk24;
    u8 pad28[4];
    u32 unk2C;
    u8 pad30[6];
    u16 unk36;
    func_801F19A0_Data *unk38;
    u8 pad3C[0x38];
    s32 unk74;
    u8 pad78[0x18];
    s16 unk90;
    u8 pad92[0xE];
    f32 unkA0;
    f32 unkA4;
} func_801F19A0_Arg0;

#define BASE ((u8 *)&D_801BBBF0)
#define d ((func_801F19A0_Data *)x)
#define p2 ((func_801F19A0_Mid **)x)

extern u8 D_8017B608[];

void func_801F19A0(func_801F19A0_Arg0 *arg0, func_801F19A0_Mid **arg1) {
    void *x;
    func_801F19A0_Spawn spawn;
    s32 b;
    f64 h;

    if (*(s32 *)(BASE + 0xE0) != 0) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        arg0->unk2C |= 0xC20;
        func_8012636C(arg0, 0);
        x = arg0->unk38;
        h = (f32)d->unk8 / 10.0 + 0.5;
        b = ABS((s16)(((f32)(s16)(d->unk10 >> 16) + 0.5 - h) / 2.0));
        arg0->unkA0 = 0.0f;
        arg0->unkA4 = 0.0f;
        arg0->unk90 = b + h;
        if ((f32)arg0->unk90 < (*(func_801F1D74_StructE0 **)(BASE + 0xE0))->unk2C->unk8) {
            arg0->unk24->unk30->unk8 = (f32)(s16)(d->unk10 >> 16) + 0.5;
        } else {
            arg0->unk24->unk30->unk8 = (f32)d->unk8 / 10.0 + 0.5;
        }
        func_8012C89C(arg0, 0, arg0->unk38->unk18 >> 20, (arg0->unk38->unk18 >> 16) & 0xF);
        arg0->unk74 = func_8000522C(*(u16 *)D_80171CEC[arg0->unk36][0],
                                    ((s32 *)D_80171CEC[arg0->unk36][1])[((arg0->unk38->unk18 >> 16) & 0xF) + 1]);
        func_800062F8(arg1[0], 0x80000C00);
        {
            u8 i;
            i = 0;
            do {
                arg1[i]->unk30->unk24 = 0x13;
                arg1[i]->unk30->unk30 = func_8000C3B0(arg1[0]);
                arg1[i]->unk30->unk4C = BASE[0xF32];
                arg1[i]->unk30->unk4D = BASE[0xF33];
                arg1[i]->unk30->unk4E = BASE[0xF34];
                arg1[i]->unk30->unk4F = BASE[0xF35];
                i++;
            } while (i <= 0);
        }
        if ((arg0->unk38->unk18 >> 8) & 0xFF) {
            x = &arg1[1];
            spawn = *(func_801F19A0_Spawn *)D_80164F40;
            spawn.unk4 = 0x80000400;
            func_80005E44(arg0, &spawn);
            func_80006214(arg0);
            func_8012636C(arg0, 1);
            (*p2)->unk30->unk8 = arg1[0]->unk30->unk8;
            (*p2)->unk30->unk24 |= 0x100;
            (*p2)->unk30->unk30 = (s32)D_8017B608 | 0x40000000;
            (*p2)->unk30->unk4B = 0x40;
            (*p2)->unk30->unk48 = 0xFF;
            (*p2)->unk30->unk49 = 0xFF;
            (*p2)->unk30->unk4A = 0xFF;
            func_8012C89C(arg0, 1, arg0->unk38->unk18 >> 20, ((arg0->unk38->unk18 >> 16) & 0xF) + 2);
        }
        func_800058DC(arg0, func_801F1D74);
    }
}
