#include "common.h"
extern s32 D_801636F4;
extern f32 D_80163980;
extern f32 D_80163984;
extern f32 D_80163988;
extern u8 D_801BBAF0[];
extern f32 D_801BBB0C;
extern f32 D_801BBB10;
extern f32 D_801BBB14;
extern f32 D_801BBB18;
extern f32 D_801BBB1C;
extern f32 D_801BBB20;
typedef struct func_80113148_StructO { u8 pad0[0x24]; struct func_80113148_StructO *unk24; u8 pad28[4]; f32 *unk2C; } func_80113148_StructO;
typedef struct func_80113148_Struct {
    u8 pad0[0x54]; func_80113148_StructO *unk54;
    u8 pad58[0xE0-0x58]; func_80113148_StructO *unkE0; func_80113148_StructO *unkE4; func_80113148_StructO *unkE8;
    u8 padEC[4]; s32 unkF0; u8 padF4; u8 unkF5;
    u8 padF6[0x299-0xF6]; u8 unk299; u8 pad29A[2]; f32 unk29C; f32 unk2A0;
    u8 pad2A4[0x448-0x2A4]; func_80113148_StructO **unk448;
    u8 pad44C[0x1031-0x44C]; u8 unk1031;
} func_80113148_Struct;
extern func_80113148_Struct D_801BBBF0;
extern void func_800058DC(void *, void *);
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32, f32);
extern u8 func_80113AB4[];
extern void func_80114728();
extern void func_80114758();
typedef struct {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801152B8_Struct1;
typedef struct {
    u8 pad0[0x2C];
    func_801152B8_Struct1 *unk2C;
} func_801152B8_Struct0;


typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801133D0_StructA;

typedef struct {
    u8 pad0[0x2C];
    func_801133D0_StructA *unk2C;
} func_801133D0_StructB;

typedef struct {
    u8 pad0[0x24];
    func_801133D0_StructB *unk24;
} func_801133D0_StructC;

typedef struct {
    u8 pad0[0xE0];
    func_801133D0_StructB *unkE0;
    u8 padE4[4];
    func_801152B8_Struct0 *unkE8;
    s32 unkEC;
    s32 unkF0;
    u8 padF4;
    u8 unkF5;
    u8 padF6[0x230 - 0xF6];
    u8 unk230;
    u8 unk231;
    u8 pad232[0x299 - 0x232];
    u8 unk299;
    u8 pad29A[0x380 - 0x29A];
    f32 unk380;
    u8 pad384[4];
    f32 unk388;
    u8 pad38C[0x448 - 0x38C];
    func_801133D0_StructC **unk448;
    u8 pad44C[0x1031 - 0x44C];
    u8 unk1031;
} func_801133D0_Struct;

#define G (*(func_801133D0_Struct *)&D_801BBBF0)
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801084C4(f32, f32, f32, f32, f32, f32);
extern s16 D_8016398C;
extern f64 D_80188028;
extern f64 D_80188030;
#define ANGLE (*(s16 *)D_801BBAF0)
#define WRAP(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))
#define ABS(x) (((x) < 0) ? -(x) : (x))
extern f32 D_801BBAF4;
extern f32 D_801BBAF8;
extern f32 D_801BBAFC;
extern f32 D_801BBB00;
extern f32 D_801BBB04;
extern f32 D_801BBB08;

void func_801133D0(arg0, arg1)
s32 arg0;
s32 arg1;
{
    s16 sp56;
    s16 sp54;
    f32 sp50;
    func_801152B8_Struct1 *p;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    func_801152B8_Struct0 *e;
    s32 a2, v0, v1;
    s16 sp2E;
    s16 sp2C;
    s16 sp2A;

    if ((G.unkE0 != NULL) && (G.unkF0 != 0) && (G.unkF5 != 0)) {
        if (G.unk230 == 0) {
            D_801BBAF4 = D_801BBB0C;
            D_801BBAF8 = D_801BBB10;
            D_801BBAFC = D_801BBB14;
        } else {
            D_801BBB0C = G.unkE0->unk2C->unk4;
            D_801BBAF4 = D_801BBB0C;
            D_801BBB10 = G.unkE0->unk2C->unk8;
            D_801BBAF8 = D_801BBB10;
            D_801BBB14 = G.unkE0->unk2C->unkC;
            D_801BBAFC = D_801BBB14;
        }
        if (G.unk231 == 0) {
            D_801BBB00 = D_801BBB18;
            D_801BBB04 = D_801BBB1C;
            D_801BBB08 = D_801BBB20;
        } else {
            D_801BBB18 = (*G.unk448)->unk24->unk2C->unk4;
            D_801BBB00 = D_801BBB18;
            D_801BBB1C = (*G.unk448)->unk24->unk2C->unk8;
            D_801BBB04 = D_801BBB1C;
            D_801BBB20 = (*G.unk448)->unk24->unk2C->unkC;
            D_801BBB08 = D_801BBB20;
        }
        sp50 = D_801BBB00 - D_801BBAF4;
        sp48 = D_801BBB08 - D_801BBAFC;
        sp44 = func_8002FC20(sp50 * sp50 + sp48 * sp48, sp50);
        sp54 = func_8001EF38(sp48, sp50);
        G.unkE8->unk2C->unk3C = (D_801BBAF4 + D_801BBB00) * 0.5;
        G.unkE8->unk2C->unk40 = (D_801BBAF8 + D_801BBB04) * 0.5 + 8.0;
        G.unkE8->unk2C->unk44 = (D_801BBAFC + D_801BBB08) * 0.5;
        if (D_801636F4 != 0) {
        }
        D_80163980 = G.unkE8->unk2C->unk3C;
        D_80163984 = G.unkE8->unk2C->unk40;
        D_80163988 = G.unkE8->unk2C->unk44;
        if (D_801636F4 != 0) {
            func_80114728();
        }
        if (D_801636F4 != 0) {
            func_80114758();
        }
        if (G.unk1031 == 0 || G.unk1031 == 1 || G.unk1031 == 2 || G.unk1031 == 3) {
            sp56 = (s16)(sp54 - 0x200) & 0x1FFF;
            v1 = (s16)(sp56 - ANGLE);
            if (D_801636F4 != 0) {
            }
            v0 = WRAP(v1);
            v0 = (v0 < 0) ? -WRAP(v1) : WRAP(v1);
            if (v0 > 0x30) {
                v0 = WRAP(v1);
                if (v0 > 0) {
                    sp56 = ANGLE + 0x30;
                } else {
                    sp56 = ANGLE - 0x30;
                }
                if (D_801636F4 != 0) {
                }
            } else {
                G.unk299 = 1;
                v0 = (s32)G.unkE8;
                p = ((func_801152B8_Struct0 *)v0)->unk2C;
                sp2E = func_8001EF38(D_801BBB08 - p->unk38, D_801BBB00 - p->unk30);
                p = G.unkE8->unk2C;
                if ((s16)(sp2E - func_8001EF38(p->unk44 - p->unk38, p->unk3C - p->unk30)) & 0x1000) {
                    p = G.unkE8->unk2C;
                    sp2C = func_8001EF38(D_801BBB08 - p->unk38, D_801BBB00 - p->unk30);
                    p = G.unkE8->unk2C;
                    D_8016398C = ((s16)(sp2C - func_8001EF38(p->unk44 - p->unk38, p->unk3C - p->unk30)) & 0x1FFF) - 0x2000;
                } else {
                    p = G.unkE8->unk2C;
                    sp2A = func_8001EF38(D_801BBB08 - p->unk38, D_801BBB00 - p->unk30);
                    p = G.unkE8->unk2C;
                    D_8016398C = (s16)(sp2A - func_8001EF38(p->unk44 - p->unk38, p->unk3C - p->unk30)) & 0x1FFF;
                }
                func_800058DC((void *)arg0, func_80113AB4);
            }
        } else {
            func_800058DC((void *)arg0, func_80113AB4);
            return;
        }
            if (sp44 > 20.0) {
                sp40 = (((sp44 - 20.0) / 20.0) * 0.25 + 1.0) * D_80188028;
            } else {
                sp40 = 55.0f;
            }
            sp44 = func_8001EB64(sp56) * sp40;
            p = G.unkE8->unk2C;
            p->unk30 = p->unk3C - sp44;
            G.unkE8->unk2C->unk34 = (D_801BBAF8 + D_801BBB04) * 0.5 + D_80188030;
            sp44 = func_8001EAD0(sp56) * sp40;
            p = G.unkE8->unk2C;
            p->unk38 = p->unk44 - sp44;
            p = G.unkE8->unk2C;
            if (func_801084C4(p->unk3C, p->unk40, p->unk44, p->unk30, p->unk34, p->unk38) != 0) {
                G.unkE8->unk2C->unk30 = G.unk380;
                G.unkE8->unk2C->unk38 = G.unk388;
            }
            ANGLE = sp56;
    }
}
