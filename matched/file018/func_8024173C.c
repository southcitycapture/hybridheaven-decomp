#include "common.h"
extern s8 D_801BCC25;
extern void func_800058DC(s32, void *);
extern void func_80020744(s32);
typedef struct func_80241854_Struct0 {
    u8 pad[0x92];
    u16 unk92;
} func_80241854_Struct0;
typedef struct func_80241854_Struct3 {
    u8 pad[0x4B];
    u8 unk4B;
} func_80241854_Struct3;
typedef struct func_80241854_Struct2 {
    u8 pad[0x30];
    func_80241854_Struct3 *unk30;
} func_80241854_Struct2;
typedef struct func_80241854_Struct1 {
    u8 pad[0x14];
    func_80241854_Struct2 *unk14;
    func_80241854_Struct2 *unk18;
} func_80241854_Struct1;
void func_80241854(func_80241854_Struct0 *arg0, func_80241854_Struct1 *arg1);

extern f32 D_8025BE48;
extern f64 D_8025BE50;
typedef struct func_8024173C_S3 { u8 pad0[8]; f32 unk8; u8 pad1[0x3F]; u8 unk4B; } func_8024173C_S3;
typedef struct func_8024173C_S2 { u8 pad[0x30]; func_8024173C_S3 *unk30; } func_8024173C_S2;
typedef struct func_8024173C_S0 { u8 pad[0x92]; u16 unk92; } func_8024173C_S0;

typedef struct func_8024173C_S4 { u8 pad[0x9B]; u8 b; } func_8024173C_S4;

extern void *D_801BCCC0;
void func_8024173C(func_8024173C_S0 *arg0, func_8024173C_S2 **arg1) {
    s32 i;
    f32 k;
    f64 m;

    for (i = 0; i < 5; i++) {
        arg1[i]->unk30->unk8 += 0.125;
        if (321.11 <= arg1[i]->unk30->unk8) {
            arg1[i]->unk30->unk8 = 303.11f;
        }
    }
    if (arg0->unk92 != 0) {
        for (i = 0; i < 5; i++) {
            arg1[i]->unk30->unk4B = 0;
        }
        ((func_8024173C_S0 *)D_801BCCC0)->unk92 = 1;
        arg0->unk92 = 0x14;
        func_80020744(0x64F);
        func_800058DC((s32)arg0, (void *)func_80241854);
    }
}
