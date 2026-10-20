#include "context.h"

extern f64 func_80034C24();
extern u64 func_801C0F18(s32, s32);
extern s32 func_801D5250(s32, s32);
extern void func_8038D33C(f32, f32, f32, s32, f32, f32);
extern f64 D_801F4A70;
extern f32 D_801F4A78;

typedef struct func_801EBC00_Struct {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801EBC00_Struct;

typedef struct func_801EBC00_Struct3 { u8 pad[0x2C]; func_801EBC00_Struct *unk2C; } func_801EBC00_Struct3;
typedef struct func_801EBC00_Struct2 { u8 pad[0x24]; func_801EBC00_Struct3 *unk24; } func_801EBC00_Struct2;
typedef struct func_801EBC00_Struct1 { u8 pad[8]; struct func_801EBC00_Struct1 *unk8; } func_801EBC00_Struct1;
typedef struct func_801EBC00_StructR { u8 pad[8]; func_801EBC00_Struct1 *unk8; } func_801EBC00_StructR;

#define ROOT (*(func_801EBC00_StructR **)(func_801DAAF0 + 0x24))

s32 func_801EBC00(s32 arg0, s32 arg1) {
    u64 t;
    func_801EBC00_Struct *p;
    s32 v = D_801F34DC;
    f32 d = 4.0f;

    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    return 0xF;
c0:
    func_801CC4D8(1, 0x03480052, 0, 0, 15.0f);
    D_801F34DC = 1;
    goto end;
c1:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480052, 0, 0x1100, 1.5f);
        func_801C0D04(4, 1);
        D_801F34DC = 2;
    }
    goto end;
c2:
    if (func_801C0DE4(4, 1, 0x40800000) != 0) {
        func_801C0EB0(4, 1);
        return 0x10;
    }
    t = func_801C0F18(4, 1);
    ((func_801EBC00_Struct3 *)((func_801EBC00_Struct2 *)ROOT->unk8->unk8)->unk24)->unk2C->unkC =
        (f32)(func_80034C24(t) / D_801F4A70) / d * -29.0f + -10.0f;
    if (func_801D5250(0x03480052, 0xF) != 0 || func_801D5250(0x03480052, 0x2A) != 0) {
        p = ((func_801EBC00_Struct3 *)((func_801EBC00_Struct2 *)ROOT->unk8->unk8)->unk24)->unk2C;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x678, D_801F4A78, 1.0f);
    }
end:
    return 0xF;
}
