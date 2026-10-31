#include "common.h"
extern void (*D_801CCB04)(void *, s32, u8);
extern void D_800058DC(void *, void *);
typedef struct func_801C659C_Struct16 {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    s32 unkC;
} func_801C659C_Struct16;
extern func_801C659C_Struct16 D_80164F40;
extern u8 D_801CD0D0;
extern void *D_801CFD78[];
extern u8 *D_801CFD90[];
extern void *D_801CFDA0;
extern void func_80005700(void *);
extern void func_80005E44(s32, void *);
extern s32 func_80006214(s32);
extern void func_8001B204(s32, s32, s32, void *);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_80147250(void *, s32, s32, s32, s32);
extern void func_801472C0(void *, s32, s32, s32, s32);
typedef struct func_801C659C_Ret {
    u8 pad[0x90];
    u8 unk90;
} func_801C659C_Ret;
void func_801C70E8(void *arg0, s32 arg1);


typedef struct func_801C6D94_Struct30 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    u8 pad12[2];
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    f32 unk34;
    f32 unk38;
} func_801C6D94_Struct30;
typedef struct func_801C6D94_Struct {
    u8 pad[0x30];
    func_801C6D94_Struct30 *unk30;
} func_801C6D94_Struct;
extern void func_8014646C(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_801CCE00[];
extern u8 D_801CF2E4[];
extern f32 D_801CF39C;

void func_801C6D94(s32 arg0, func_801C6D94_Struct **arg1) {
    func_801C659C_Struct16 spA0;
    register u8 i;
    u8 temp_s4;
    u8 k;
#define temp_fs0 0.2f

    spA0 = D_80164F40;
    for (i = 0; i <= 1; i++) {
        k = i;
        if (D_801CFD78[(u32)k] == 0) {
            continue;
        }
        func_80005700(D_801CFD78[(u32)k]);
    }
    func_8001B204(0, 0x7D0, 0x7C, D_801CF2E4);
    func_8014646C(arg0, 0x2004, 0x80, 0x8D, 0x20, 0x20, 0x20, 0x20, 0, 0, 0, 0x229, 0xD, 0x229, 0xE);
    D_801CFDA0 = arg1[func_80006214(arg0) - 1];
    ((func_801C6D94_Struct *)D_801CFDA0)->unk30->unk34 = 2.0f;
    ((func_801C6D94_Struct *)D_801CFDA0)->unk30->unk38 = 2.0f;
    temp_s4 = func_80006214(arg0);
    for (i = k = 0; i < 2; i++) {
        spA0.unk8 = 0x10;
        func_80005E44(arg0, &spA0);
        func_80006214(arg0);
        func_8012C89C(arg0, temp_s4 + i, 0x229, 3);
#define p (&arg1[temp_s4 + i])
        (*p)->unk30->unk24 |= 0x300;
        (*p)->unk30->unk30 = (s32)D_801CCE00 | 0x40000000;
        (*p)->unk30->unk4 = (f32)(0xCA - ((i << 1) * 0x2A));
        (*p)->unk30->unk8 = 173.0f;
        (*p)->unk30->unkC = 0.0f;
        (*p)->unk30->unk10 = 0x1000;
        (*p)->unk30->unk14 = (i << 0xC) & 0x1FFF;
        (*p)->unk30->unk18 = temp_fs0;
        (*p)->unk30->unk1C = temp_fs0;
        (*p)->unk30->unk20 = temp_fs0;
        func_80147250(*p, 0xFF, 0xCF, 0xCF, 0xFF);
        func_801472C0(*p, 0xFF, 0x20, 0x20, 0xFF);
    }
    D_801CFD90[0] = (u8 *)arg1[temp_s4];
    ((func_801C659C_Ret *)arg0)->unk90 = 1 - D_801CD0D0;
    D_800058DC((void *)arg0, func_801C70E8);
}
#undef p
#undef temp_fs0
