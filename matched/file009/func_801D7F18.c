#include "common.h"
s32 func_80133A24(s32);
void func_80150314(void *, s32);


typedef struct {
    u8 pad0[6];
    u16 unk6;
    f32 unk8;
    u8 pad1[0x14 - 0xC];
} func_801D7F18_Struct14;

typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801D7F18_Struct30;

typedef struct {
    u8 pad0[0x30];
    func_801D7F18_Struct30 *unk30;
} func_801D7F18_Struct24;

typedef struct {
    u8 pad0[0x24];
    func_801D7F18_Struct24 *unk24;
    u8 pad1[0x90 - 0x28];
    u8 unk90;
    u8 pad2[2];
    u8 unk93;
    f32 unk94;
    u8 pad3[0xA0 - 0x98];
    s16 unkA0;
} func_801D7F18_Struct;

typedef struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
} func_801D7F18_Arg;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_801C2F0C(s32, void *);
extern s32 func_801C3B5C(void);
extern f32 D_80182954[];
extern func_801D7F18_Struct14 B_8018294C[];

s32 func_801D7F18(func_801D7F18_Struct *arg0, s32 arg1) {
    s32 r;
    func_801D7F18_Struct14 *p;
    u8 state;
    f32 g;
    func_801D7F18_Arg sp30;
    f32 h;

    state = arg0->unk93;
    if (state == 1) goto case1;
    if (state == 2) goto case2;
    if (state == 3) goto case3;
    return 1;
case1:
    arg0->unk24->unk30->unk4 += (f64) func_8001EB64(arg0->unk24->unk30->unk12) * B_8018294C[arg0->unk90].unk8;
    arg0->unk24->unk30->unkC -= (f64) func_8001EAD0(arg0->unk24->unk30->unk12) * B_8018294C[arg0->unk90].unk8;
    p = &B_8018294C[arg0->unk90];
    g = (f64) arg0->unk94 + p->unk8;
    arg0->unk94 = g;
    if ((f32) (u32) p->unk6 <= g) {
        arg0->unk93 = 2;
        arg0->unk94 = 0.0f;
    }
    goto end;
case2:
    if (arg0->unk94 < 20.0f) {
        r = arg0->unk94 == 12.0f;
        arg0->unk94 += 1.0f;
        if (r != 0) {
            sp30.unk0 = 0x1000;
            sp30.unk4 = 0x04100045;
            sp30.unk8 = 1.0f;
            sp30.unkC = 0xA;
            func_801C2F0C(3, &sp30);
        }
    } else if (func_80133A24(0xB) != 0) {
        arg0->unk93 = 3;
        arg0->unk94 = 0.0f;
    }
    goto end;
case3:
    arg0->unk24->unk30->unk4 -= (f64) func_8001EB64(arg0->unk24->unk30->unk12) * *(f32 *) ((u8 *) D_80182954 + arg0->unk90 * 20);
    arg0->unk24->unk30->unkC += (f64) func_8001EAD0(arg0->unk24->unk30->unk12) * B_8018294C[arg0->unk90].unk8;
    p = &B_8018294C[arg0->unk90];
    g = (f64) arg0->unk94 + p->unk8;
    arg0->unk94 = g;
    if ((f32) (u32) p->unk6 <= g) {
        func_80150314(arg0, 0xE);
        arg0->unkA0 = 8;
        func_801C3B5C();
        return 0;
    }
end:
    return 1;
}
