#include "common.h"
extern void D_8013AE20(void *, s32, s32);
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s8 D_80360588(s32, s32);
extern f32 D_8036153C(void *);
extern void func_800058DC();
void func_8035FEC0(s32 arg0);
extern void *func_8035FFA8(void *arg0);
typedef struct func_80360020_Struct0 {
    u8 pad[0x36];
    u16 unk36;
} func_80360020_Struct0;
typedef struct func_80360020_Struct1 {
    u8 pad[0x2D9];
    u8 unk2D9;
} func_80360020_Struct1;
void func_80360020(func_80360020_Struct0 *arg0, func_80360020_Struct1 *arg1);
typedef struct func_80360588_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360588_Struct;
void func_80360400(struct func_80360588_Struct *arg0, s32 arg1, s32 arg2);
typedef struct func_80360AA8_Struct {
    u8 pad[0x30];
    u32 pad0 : 9;
    u32 f : 2;
    u32 pad1 : 21;
    u8 pad3[0x2F9 - 0x34];
    u8 unk2F9;
    u8 pad2[0x392 - 0x2FA];
    u8 unk392;
} func_80360AA8_Struct;
typedef struct func_80361B50_Struct {
    u8 pad0[0x2DE];
    u8 unk2DE;
    u8 pad1[0x2EC - 0x2DF];
    f32 unk2EC;
} func_80361B50_Struct;
void func_80361B50(s32 arg0, s32 arg1, func_80361B50_Struct *arg2);
typedef struct func_80361B7C_StructA {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 pad1[2];
    u8 unk2DB;
} func_80361B7C_StructA;
typedef struct func_80361B7C_StructB {
    u8 pad0[0x7C];
    s32 unk7C;
    s16 unk80;
    u8 pad1[2];
    u8 unk84;
} func_80361B7C_StructB;
typedef struct func_80361B7C_StructC {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad1[4];
    s32 unk1C;
} func_80361B7C_StructC;
void func_80361B7C(func_80361B7C_StructA *arg0, func_80361B7C_StructB *arg1, func_80361B7C_StructC *arg2);
typedef struct func_8036265C_Inner { char pad[0x7C]; char *unk7C; } func_8036265C_Inner;
typedef struct func_8036265C_Arg { char pad[0x5C]; func_8036265C_Inner *unk5C; } func_8036265C_Arg;
void func_8036265C(func_8036265C_Arg *arg0, s32 arg1);
typedef struct func_80363D5C_StructS {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    u32 pad30a : 1;
    u32 f30 : 2;
    u32 pad30b : 29;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2D9[2];
    u8 unk2DB;
    u8 pad2DC[0x2E8 - 0x2DC];
    u8 unk2E8;
    u8 pad2E9[0x2F4 - 0x2E9];
    f32 unk2F4;
    u8 pad2F8[0x314 - 0x2F8];
    u8 unk314[0xC];
    u8 unk320;
    u8 pad321[0x32C - 0x321];
    u8 unk32C;
    u8 pad32D[0x392 - 0x32D];
    u8 unk392;
} func_80363D5C_StructS;
void func_80363FFC(s32 arg0, s32 arg1);
extern void func_80364D2C();
extern s32 func_80367288(void *, s32, s32, void *);
extern void func_803673B4(void *, s32, s32);


typedef struct func_803639F0_StructField {
    s32 unk1C;
    u16 unk20;
} func_803639F0_StructField;

typedef struct func_803639F0_Struct34 {
    u8 pad0[0x1C];
    func_803639F0_StructField field;
    u8 pad24[0x84 - 0x24];
    u8 unk84;
} func_803639F0_Struct34;

typedef struct func_803639F0_StructGlobals {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xEC - 0xE0];
    s32 unkEC;
} func_803639F0_StructGlobals;
extern s32 func_801DB6B8(void *, s32, s32);

void func_803639F0(u8 *arg0, s32 arg1) {
    func_803639F0_Struct34 *sp34[1];
    u8 *s1;
    func_80363D5C_StructS *sp2C;
    u8 *sp28;
    s32 *q;
    u8 *a3;
    func_80363D5C_StructS *p2C;
    s8 ret_v;
    s32 first;

    sp34[0] = *(func_803639F0_Struct34 **)(arg0 + 0x5C);
    if ((s32)arg0 == ((func_803639F0_StructGlobals *)D_801BBBF0)->unkDC) {
        s1 = D_801BC03C;
    } else {
        s1 = D_801BC3D8;
    }
    if ((s32)arg0 != ((func_803639F0_StructGlobals *)D_801BBBF0)->unkDC) {
        sp2C = (func_80363D5C_StructS *) D_801BC03C;
    } else {
        sp2C = (func_80363D5C_StructS *) D_801BC3D8;
    }
    sp28 = func_8035FFA8(s1);
    if (sp34[0]->unk84 == 2) {
        func_803639F0_StructField *field = &sp34[0]->field;
        if (s1[0x2E8] >= 2 && s1[0x32C] == 0) {
            s1[0x32C] = 1;
            func_80361B50((s32)arg0, arg1, (void *)s1);
            func_802254F8(arg0, 5, (u8)(u32)(D_8036153C(arg0) * 7.0f));
            D_8013AE20(arg0, arg1, 0);
            func_8035FEC0((s32)arg0);
            ret_v = D_80360588((s32)arg0, arg1);
            q = (s32 *)sp2C;
            ((func_80363D5C_StructS *)q)->unk320 = ret_v;
            if (((func_80363D5C_StructS *)q)->unk2D8 == 0xD && ((func_80363D5C_StructS *)q)->unk2DB != 0) {
                func_803673B4(arg0, arg1, 0xA);
            } else {
                first = ((func_803639F0_StructGlobals *)D_801BBBF0)->unkDC;
                if ((s32)arg0 == first) {
                    a3 = (u8 *)((func_803639F0_StructGlobals *)D_801BBBF0)->unkEC;
                } else {
                    a3 = (u8 *)first;
                }
                func_80367288(arg0, arg1, 0xF, a3);
                func_800058DC(a3, (void *)func_80364D2C);
            }
            func_80361B7C((void *)sp2C, (void *)sp34[0], (void *)sp28);
        } else {
            if (field->unk1C == **(s32 **)(sp28 + 0x18) && field->unk20 == 2) {
            sp34[0]->unk84 = 2;
            func_80361B50((s32)arg0, arg1, (void *)s1);
            D_8013AE20(arg0, arg1, 0);
            func_80360020((void *)arg0, (void *)s1);
            *(f32 *)(s1 + 0x2F4) = 0.0f;
            }
        }
        func_80360400((void *)(s1 + 0x314), (s32)arg0, arg1);
    }
    if (func_801DB6B8(arg0, arg1, 1)) {
        if (sp34[0]->unk84 == 2) {
            s1[0x394] = 1;
        }
        if (sp34[0]->unk84 & sp28[2]) {
            ((func_80360AA8_Struct *)s1)->f = ((func_80360AA8_Struct *)s1)->f ^ 1;
        }
        if (sp2C->unk2 <= 0 || sp2C->f30 != 0) {
            func_800058DC(arg0, (void *)func_8036265C);
        } else {
            func_800058DC(arg0, (void *)func_80363FFC);
        }
    }
    s1[0x392] = 4;
}
