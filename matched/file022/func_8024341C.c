#include "common.h"
typedef struct {
    u8 pad[0x22];
    u8 unk22;
} func_80243880_Obj;
typedef struct {
    u8 pad[0x24];
    func_80243880_Obj *unk24;
} func_80243880_Mid;
typedef struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0xDC - 4];
    func_80243880_Mid *unkDC;
    u8 padE0[0xF5 - 0xE0];
    u8 unkF5;
    u8 padF6[0xF20 - 0xF6];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
} func_80243880_Struct;
extern func_80243880_Struct D_801BBBF0;
extern u16 D_802528A0[];
extern f32 D_802528B0[];
extern u8 D_802528C0;
extern u8 D_802528C1;
extern u8 D_802528C2;
typedef struct {
    u8 pad[0x30];
    f32 *unk30;
} func_80243880_Inner;
void func_80243880(s32 arg0, func_80243880_Inner **arg1);


typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_8024341C_Copy;

typedef struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
} func_8024341C_Entry;

typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
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
} func_8024341C_Inner;

typedef struct {
    u8 pad[0x30];
    func_8024341C_Inner *unk30;
} func_8024341C_Obj;

typedef struct {
    u8 pad[0xF20];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 padF29[0xF32 - 0xF29];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
} func_8024341C_Big;
extern void func_800058DC(s32, void *);
extern void func_80005E44(s32, void *);
extern s32 func_80006214(s32);
extern s32 func_8000C3B0(func_8024341C_Obj *);
extern void func_8001F74C();
extern void func_8012C784(s32, s32, u8);
extern func_8024341C_Copy D_80164F40;
extern u8 D_8017AE98[];
extern u8 D_8017B608[];
extern func_8024341C_Entry D_80250428[];
extern u8 D_802528C3;
extern u8 D_802528C4;
extern u8 D_802528C5;
extern s8 D_802528C6;
extern s8 D_802528C7;
extern s8 D_802528C8;

#define big ((func_8024341C_Big *) &D_801BBBF0)
#define e (&D_80250428[i])

void func_8024341C(s32 arg0, func_8024341C_Obj **arg1) {
    func_8024341C_Copy sp80[4];
    s32 addr;
    f32 f;
    func_8024341C_Copy *p;
    u8 i;

    func_8001F74C();
    for (i = 0; i < 4; i++) {
        p = &sp80[i];
        *p = D_80164F40;
        D_802528A0[i] = 0;
        D_802528B0[i] = 0.0f;
        switch (e->unk0) {
        case 3:
            p->unk4 = 0x80000400;
            addr = (s32) D_8017B608 | 0x40000000;
            func_80005E44(arg0, p);
            func_80006214(arg0);
            arg1[i]->unk30->unkC = 0.0f;
            arg1[i]->unk30->unk8 = f = arg1[i]->unk30->unkC;
            arg1[i]->unk30->unk4 = f;
            arg1[i]->unk30->unk12 = 0;
            arg1[i]->unk30->unk24 |= 0x100;
            arg1[i]->unk30->unk30 = addr;
            arg1[i]->unk30->unk4B = e->unk2;
            arg1[i]->unk30->unk48 = e->unk3;
            arg1[i]->unk30->unk49 = e->unk4;
            arg1[i]->unk30->unk4A = e->unk5;
            arg1[i]->unk30->unk24 |= 0x400;
            arg1[i]->unk30->unk4C = big->unkF32;
            arg1[i]->unk30->unk4D = big->unkF33;
            arg1[i]->unk30->unk4E = big->unkF34;
            arg1[i]->unk30->unk4F = big->unkF35;
            func_8012C784(arg0, i, e->unk1);
            continue;
        case 7:
            p->unk4 = 0x80000C00;
            addr = (s32) D_8017AE98;
            func_80005E44(arg0, p);
            func_80006214(arg0);
            arg1[i]->unk30->unkC = 0.0f;
            arg1[i]->unk30->unk8 = f = arg1[i]->unk30->unkC;
            arg1[i]->unk30->unk4 = f;
            arg1[i]->unk30->unk12 = 0;
            arg1[i]->unk30->unk30 = addr;
            if (e->unk2 == 1) {
                arg1[i]->unk30->unk24 = 0x13;
                arg1[i]->unk30->unk30 = func_8000C3B0(arg1[0]);
                arg1[i]->unk30->unk4C = big->unkF32;
                arg1[i]->unk30->unk4D = big->unkF33;
                arg1[i]->unk30->unk4E = big->unkF34;
                arg1[i]->unk30->unk4F = big->unkF35;
            }
            func_8012C784(arg0, i, e->unk1);
            if (e->unk3 == 0) {
                arg1[i]->unk30->unk20 = 1.0f;
                arg1[i]->unk30->unk1C = f = arg1[i]->unk30->unk20;
                arg1[i]->unk30->unk18 = f;
            } else {
                f = (f32) (u32) e->unk3 / 100.0;
                arg1[i]->unk30->unk20 = f;
                arg1[i]->unk30->unk1C = f;
                arg1[i]->unk30->unk18 = f;
            }
            break;
        }
    }
    D_802528C0 = big->unkF20;
    D_802528C1 = big->unkF21;
    D_802528C2 = big->unkF22;
    D_802528C3 = big->unkF23;
    D_802528C4 = big->unkF24;
    D_802528C5 = big->unkF25;
    D_802528C6 = big->unkF26;
    D_802528C7 = big->unkF27;
    D_802528C8 = big->unkF28;
    func_800058DC(arg0, func_80243880);
}
