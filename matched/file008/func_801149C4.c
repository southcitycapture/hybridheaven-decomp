#include "common.h"
extern s16 D_80163A10;
extern s16 D_80163A14;
extern s16 D_80163A18;
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
extern s32 func_8001EF38(f32, f32);
typedef struct { u8 pad0[0x4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[8]; f32 unk18; f32 unk1C; f32 unk20; } func_801147C0_S4;
typedef struct { u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; func_801147C0_S4 *unk30; } func_801147C0_S5;
typedef struct { u8 pad0[4]; func_801147C0_S5 *unk4; } func_801147C0_S1;
void func_80114980(s32 arg0, s32 arg1);
extern void func_801152B8(void);
extern void func_80119F9C(s16 *, s16 *);
extern void func_8011A0F0(s16 *);
extern void func_8011A1B8(s32);
extern void func_8011A7FC();
extern void func_8011AA0C(s32, void (*)(s32, s32), void (*)());


typedef struct func_801149C4_StructP {
    u8 pad0[0x1C];
    f32 unk1C;
    u8 pad20[4];
    f32 unk24;
    f32 unk28;
    u8 pad2C[4];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    f32 unk50;
} func_801149C4_StructP;

typedef struct func_801149C4_StructE {
    u8 pad0[0x2C];
    func_801149C4_StructP *unk2C;
} func_801149C4_StructE;

typedef struct func_801149C4_StructG {
    u8 pad0[0x7E];
    u16 unk7E;
    u16 unk80;
    u8 pad82[6];
    u16 unk88;
    u8 pad8A[0xE8 - 0x8A];
    func_801149C4_StructE *unkE8;
    u8 padEC[0x232 - 0xEC];
    s16 unk232;
    u8 pad234[0x29C - 0x234];
    f32 unk29C;
    f32 unk2A0;
    u8 pad2A4[0x2AD - 0x2A4];
    u8 unk2AD;
    u8 pad2AE[0x2B5 - 0x2AE];
    u8 unk2B5;
} func_801149C4_StructG;

typedef struct func_801149C4_StructD {
    s32 a[7];
} func_801149C4_StructD;

#define X (*(func_801149C4_StructG *)&D_801BBBF0)
extern void func_8001DFFC();
extern s32 D_8011A148(s16, s16, s16, f32 *, f32 *, f32 *);
extern func_801149C4_StructD D_80163A90;
extern u8 D_80163800[];
extern u8 D_80163804[];
extern u8 D_80163808[];
extern u8 D_8016380C[];
extern u8 D_80163810[];
extern u8 D_80163814[];
extern u8 D_80163818[];
extern u8 D_8016381C[];
extern u8 D_80163820[];
extern u8 D_80163824[];
extern u8 D_80163828[];
extern u8 D_8016382C[];
extern u8 D_80163830[];
extern u8 D_80163834[];
extern u8 D_80163838[];
extern u8 D_8016383C[];
extern u8 D_80163840[];
extern u8 D_80163844[];
extern u8 D_80163848[];
extern u8 D_8016384C[];
extern u8 D_80163850[];
extern u8 D_80163854[];
extern u8 D_80163858[];
extern u8 D_8016385C[];
extern u8 D_80163860[];
extern u8 D_80163864[];
extern u8 D_80163868[];
extern u8 D_8016386C[];
extern u8 D_80163870[];
extern u8 D_80163874[];
extern u8 D_80163878[];
extern u8 D_8016387C[];
extern u8 D_80163880[];
extern u8 D_80163884[];

extern u8 D_8018828C[];
extern u8 D_801882AC[];
extern u8 D_801882B0[];
extern u8 D_801882B4[];
extern u8 D_801882B8[];
extern u8 D_801882BC[];
extern u8 D_801882C0[];
extern u8 D_801882C4[];
extern u8 D_801882C8[];
extern u8 D_801882CC[];
extern u8 D_801882D0[];
extern u8 D_801882D4[];
extern u8 D_801882DC[];
extern u8 D_801882E0[];
extern u8 D_801882E4[];
extern u8 D_801882EC[];
extern u8 D_801882F0[];
extern u8 D_801882F4[];
extern u8 D_801882FC[];
extern u8 D_80188304[];
extern u8 D_80188308[];

void func_801149C4(s32 arg0, func_801147C0_S1 *arg1) {
    func_801149C4_StructD sp44;
    f32 var_fv0;
    f32 fv1;
    s32 abc;
    func_801149C4_StructP *p;

    sp44 = D_80163A90;
    X.unkE8->unk2C->unk24 = X.unk29C;
    X.unkE8->unk2C->unk28 = X.unk2A0;
    if (X.unk2AD != 0) {
        if (X.unk2B5 == 1) {
            func_8011A1B8(1);
            func_801152B8();
            func_8011A7FC();
        } else if (X.unk2B5 == 2) {
            func_8011AA0C(arg0, func_80114980, func_801149C4);
            return;
        } else {
            X.unk2AD = 0;
            X.unk2B5 = 0;
        }
    }
    func_8011A0F0(&D_80163A18);
    func_8001DFFC(0, 0x14, 0x14, D_8018828C);
    func_8001DFFC(1, 0x14, 0x1E, D_801882AC);
    func_8001DFFC(2, 0x14, 0x1E, D_801882B0);
    func_8001DFFC(3, 0x14, 0x1E, D_801882B4);
    func_8001DFFC(4, 0x14, 0x1E, D_801882B8);
    func_8001DFFC(5, 0x14, 0x1E, D_801882BC);
    func_8001DFFC(6, 0x14, 0x1E, D_801882C0);
    func_8001DFFC(7, 0x14, 0x1E, D_801882C4);
    func_8001DFFC(8, 0x14, 0x1E, D_801882C8);
    func_8001DFFC(9, 0x14, 0x1E, D_801882CC);
    if ((X.unk80 & 0x800) || (X.unk88 & 0x800)) {
        if ((*(u8 *)&D_80163800[700]) <= 0) {
            (*(u8 *)&D_80163804[696]) = 3;
        } else {
            (*(u8 *)&D_80163808[692]) = (*(u8 *)&D_8016380C[688]) - 1;
        }
    }
    if ((X.unk80 & 0x400) || (X.unk88 & 0x400)) {
        if ((*(u8 *)&D_80163810[684]) >= 3) {
            (*(u8 *)&D_80163814[680]) = 0;
        } else {
            (*(u8 *)&D_80163818[676]) = (*(u8 *)&D_8016381C[672]) + 1;
        }
    }
    if ((X.unk80 & 0x200) || (X.unk88 & 0x200)) {
        if ((*(u8 *)&D_80163820[664]) <= 0) {
            (*(u8 *)&D_80163824[660]) = 2;
        } else {
            (*(u8 *)&D_80163828[656]) = (*(u8 *)&D_8016382C[652]) - 1;
        }
        if (((*(u8 *)&D_80163830[652]) == 0) || ((*(u8 *)&D_80163830[652]) == 1)) {
            (*(u8 *)&D_80163834[652]) = (*(u8 *)&D_80163838[640]);
        }
    }
    abc = (*(u8 *)&D_8016383C[640]);
    if ((X.unk80 & 0x100) || (X.unk88 & 0x100)) {
        if ((*(u8 *)&D_80163840[632]) >= 2) {
            (*(u8 *)&D_80163844[628]) = 0;
        } else {
            (*(u8 *)&D_80163848[624]) = (*(u8 *)&D_8016384C[620]) + 1;
        }
        if ((abc == 0) || (abc == 1)) {
            (*(u8 *)&D_80163850[624]) = (*(u8 *)&D_80163854[612]);
        }
    }
    if ((abc == 2) || (abc == 3)) {
        (*(u8 *)&D_80163858[608]) = 0;
    } else {
        (*(u8 *)&D_8016385C[604]) = (*(u8 *)&D_80163860[608]);
    }
    func_8001DFFC(1, (s16)(((*(u8 *)&D_80163864[596]) * 0x32) + 0x2D), (s16)((abc * 0xA) + 0x1E), D_801882D0);
    if (X.unk7E & 0x20) {
        (*(s32 *)&D_80163868[604]) = (*(s32 *)&D_8016386C[600]) - 1;
    }
    if (X.unk7E & 0x10) {
        (*(s32 *)&D_80163870[596]) = (*(s32 *)&D_80163874[592]) + 1;
    }
    func_8001DFFC(2, 0x14, 0x1E, D_801882D4, (s32)X.unkE8->unk2C->unk30);
    func_8001DFFC(3, 0x66, 0x1E, D_801882DC, (s32)X.unkE8->unk2C->unk34);
    func_8001DFFC(4, 0x98, 0x1E, D_801882E0, (s32)X.unkE8->unk2C->unk38);
    func_8001DFFC(5, 0x14, 0x28, D_801882E4, (s32)X.unkE8->unk2C->unk3C);
    func_8001DFFC(6, 0x66, 0x28, D_801882EC, (s32)X.unkE8->unk2C->unk40);
    func_8001DFFC(7, 0x98, 0x28, D_801882F0, (s32)X.unkE8->unk2C->unk44);
    func_8001DFFC(8, 0x14, 0x32, D_801882F4, (s32)X.unkE8->unk2C->unk1C);
    func_8001DFFC(9, 0x14, 0x3C, D_801882FC, arg1->unk4->unk22 != 0 ? D_80188304 : D_80188308);
    if (X.unk7E & 0x10) {
        var_fv0 = 10.0f;
    } else {
        var_fv0 = 1.0f;
    }
    if (X.unk80 & 0x8000) {
        switch ((u8)((*(u8 *)&D_80163878[576]) + ((*(u8 *)&D_8016387C[576]) * 3))) {
        case 0:
            p = X.unkE8->unk2C;
            p->unk30 = p->unk30 + var_fv0;
            break;
        case 1:
            p = X.unkE8->unk2C;
            p->unk34 = p->unk34 + var_fv0;
            break;
        case 2:
            p = X.unkE8->unk2C;
            p->unk38 = p->unk38 + var_fv0;
            break;
        case 3:
            p = X.unkE8->unk2C;
            p->unk3C = p->unk3C + var_fv0;
            break;
        case 4:
            p = X.unkE8->unk2C;
            p->unk40 = p->unk40 + var_fv0;
            break;
        case 5:
            p = X.unkE8->unk2C;
            p->unk44 = p->unk44 + var_fv0;
            break;
        case 6:
            p = X.unkE8->unk2C;
            fv1 = p->unk1C + var_fv0;
            if (fv1 < 360.0f) {
                p->unk1C = fv1;
            }
            break;
        case 9:
            arg1->unk4->unk22 = 1;
            break;
        }
    }
    if (X.unk80 & 0x4000) {
        switch ((u8)((*(u8 *)&D_80163880[568]) + ((*(u8 *)&D_80163884[568]) * 3))) {
        case 0:
            p = X.unkE8->unk2C;
            p->unk30 = p->unk30 - var_fv0;
            break;
        case 1:
            p = X.unkE8->unk2C;
            p->unk34 = p->unk34 - var_fv0;
            break;
        case 2:
            p = X.unkE8->unk2C;
            p->unk38 = p->unk38 - var_fv0;
            break;
        case 3:
            p = X.unkE8->unk2C;
            p->unk3C = p->unk3C - var_fv0;
            break;
        case 4:
            p = X.unkE8->unk2C;
            p->unk40 = p->unk40 - var_fv0;
            break;
        case 5:
            p = X.unkE8->unk2C;
            p->unk44 = p->unk44 - var_fv0;
            break;
        case 6:
            p = X.unkE8->unk2C;
            if (var_fv0 < p->unk1C) {
                p->unk1C = p->unk1C - var_fv0;
            }
            break;
        case 9:
            arg1->unk4->unk22 = 0;
            break;
        }
    }
    arg1->unk4->unk30->unk4 = X.unkE8->unk2C->unk3C;
    arg1->unk4->unk30->unk8 = X.unkE8->unk2C->unk40;
    arg1->unk4->unk30->unkC = X.unkE8->unk2C->unk44;
    p = X.unkE8->unk2C;
    X.unk232 = func_8001EF38(p->unk44 - p->unk38, p->unk3C - p->unk30);
    func_80119F9C(&D_80163A10, &D_80163A14);
    p = X.unkE8->unk2C;
    D_8011A148(D_80163A10, D_80163A14, D_80163A18, &p->unk48, &p->unk4C, &p->unk50);
    if ((X.unk80 & 0x20) && (X.unk80 & 0x40) && (X.unk80 & 0x80)) {
    }
}
