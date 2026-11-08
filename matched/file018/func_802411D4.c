#include "common.h"
extern void func_800058DC(s32, void *);
extern void func_8001F74C();


typedef struct func_802411D4_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
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
} func_802411D4_Inner;

typedef struct func_802411D4_Obj {
    u8 pad0[0x30];
    func_802411D4_Inner *unk30;
} func_802411D4_Obj;

typedef struct func_802411D4_Arg {
    u8 pad0[0x92];
    u16 unk92;
} func_802411D4_Arg;

extern u8 D_80164F40[];
extern u8 D_80254470[];
extern u8 D_80254520[];
extern u8 D_80254580[];
extern void func_80005F6C(s32, void *);
extern void func_80006214(s32);
extern void func_800062F8();
extern void func_80020744(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012D8C8(s32, s32, s32, f32, s32, s32);
extern void func_802415DC();

void func_802411D4(func_802411D4_Arg *arg0, func_802411D4_Obj **arg1) {
    s32 i;

    func_8001F74C();
    for (i = 0; i < 7; i++) {
        func_80005F6C((s32)arg0, D_80164F40);
    }
    func_80006214((s32)arg0);
    for (i = 0; i < 5; i++) {
        func_8012C89C((s32)arg0, i, 9, 1);
        func_800062F8(arg1[i], 0x80000500);
        arg1[i]->unk30->unk24 |= 0x100;
        arg1[i]->unk30->unk30 = (s32)D_80254470 | 0x40000000;
        arg1[i]->unk30->unk48 = 0;
        arg1[i]->unk30->unk49 = 0xFF;
        arg1[i]->unk30->unk4A = 0;
        arg1[i]->unk30->unk4B = 0x40;
        arg1[i]->unk30->unk4 = 185.1f;
        arg1[i]->unk30->unk8 = i * 3 + 303.11;
        arg1[i]->unk30->unkC = -259.88f;
        arg1[i]->unk30->unk18 = 0.005f;
        arg1[i]->unk30->unk1C = 0.01f;
        arg1[i]->unk30->unk20 = 0.005f;
    }
    func_8012C89C((s32)arg0, 5, 9, 3);
    func_8012D8C8((s32)arg0, 9, 0, 1.0f, 1, 5);
    arg1[5]->unk30->unk24 |= 0x300;
    arg1[5]->unk30->unk30 = (s32)D_80254520 | 0x40000000;
    arg1[5]->unk30->unk48 = 0;
    arg1[5]->unk30->unk49 = 0xFF;
    arg1[5]->unk30->unk4A = 0;
    arg1[5]->unk30->unk4C = 0;
    arg1[5]->unk30->unk4D = 0xFF;
    arg1[5]->unk30->unk4E = 0;
    arg1[5]->unk30->unk4B = 0x80;
    arg1[5]->unk30->unk4 = 185.1f;
    arg1[5]->unk30->unk8 = 300.11f;
    arg1[5]->unk30->unkC = -259.88f;
    arg1[5]->unk30->unk18 = 0.0001f;
    arg1[5]->unk30->unk1C = 0.0f;
    arg1[5]->unk30->unk20 = 0.0001f;
    func_8012C89C((s32)arg0, 6, 9, 4);
    arg1[6]->unk30->unk24 |= 0x100;
    func_800062F8(arg1[6], 0x80000A0A);
    arg1[6]->unk30->unk30 = (s32)D_80254580 | 0x40000000;
    arg1[6]->unk30->unk48 = 0xFF;
    arg1[6]->unk30->unk49 = 0xFF;
    arg1[6]->unk30->unk4A = 0xFF;
    arg1[6]->unk30->unk4B = 0;
    arg1[6]->unk30->unk18 = 0.01f;
    arg1[6]->unk30->unk1C = 0.01f;
    arg1[6]->unk30->unk20 = 0.01f;
    arg1[6]->unk30->unk4 = 185.1f;
    arg1[6]->unk30->unk8 = 300.11f;
    arg1[6]->unk30->unkC = -259.88f;
    func_80020744(0x233);
    arg0->unk92 = 0x14;
    func_800058DC((s32)arg0, func_802415DC);
}
