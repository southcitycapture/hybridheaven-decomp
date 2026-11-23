#include "common.h"
extern s32 D_800498F0;
typedef struct func_80022B6C_Struct {
    u16 unk0;
    u16 unk2;
} func_80022B6C_Struct;
extern func_80022B6C_Struct D_800CBAC4[];
extern u16 D_800CBAC8[];
extern u8 D_800CBAD0[];
extern s16 D_800CBAD8[];
extern s32 D_800CBB48;
extern u8 D_800CBBE0[];
extern u32 D_801B5520;
extern void (*D_80047E0C[])(void);
void func_80026950(s32, void *, s32, s32);


typedef struct func_80022214_Track {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4;
    /* 0x05 */ u8 unk5;
    /* 0x06 */ u8 pad6[2];
    /* 0x08 */ u8 *unk8;
    /* 0x0C */ u8 unkC;
    /* 0x0D */ u8 padD;
    /* 0x0E */ u8 unkE;
    /* 0x0F */ u8 unkF;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 pad11[7];
    /* 0x18 */ u16 unk18;
    /* 0x1A */ u16 unk1A;
    /* 0x1C */ u8 pad1C;
    /* 0x1D */ u8 unk1D;
    /* 0x1E */ u8 pad1E[3];
    /* 0x21 */ u8 unk21;
    /* 0x22 */ u8 unk22;
    /* 0x23 */ u8 pad23[0x2E - 0x23];
    /* 0x2E */ s16 unk2E;
    /* 0x30 */ s16 unk30;
    /* 0x32 */ s16 unk32;
    /* 0x34 */ s16 unk34;
    /* 0x36 */ u8 pad36[2];
    /* 0x38 */ s16 unk38;
    /* 0x3A */ u8 pad3A[6];
    /* 0x40 */ s16 unk40;
    /* 0x42 */ s16 unk42;
    /* 0x44 */ u8 pad44[3];
    /* 0x47 */ u8 unk47;
    /* 0x48 */ u8 pad48[0x58 - 0x48];
    /* 0x58 */ s16 unk58;
    /* 0x5A */ u8 pad5A;
    /* 0x5B */ u8 unk5B;
    /* 0x5C */ u8 pad5C[0x7D - 0x5C];
    /* 0x7D */ s8 unk7D;
    /* 0x7E */ u8 pad7E[0x8A - 0x7E];
    /* 0x8A */ s16 unk8A;
    /* 0x8C */ u8 pad8C[0x92 - 0x8C];
    /* 0x92 */ u8 unk92;
    /* 0x93 */ u8 pad93[0x9A - 0x93];
    /* 0x9A */ s16 unk9A;
    /* 0x9C */ u8 pad9C[2];
    /* 0x9E */ u8 unk9E;
    /* 0x9F */ u8 pad9F[3];
    /* 0xA2 */ s16 unkA2[3];
    /* 0xA8 */ s16 unkA8[3];
    /* 0xAE */ u8 padAE[0xB8 - 0xAE];
    /* 0xB8 */ u8 unkB8[3];
    /* 0xBB */ u8 unkBB[3];
    /* 0xBE */ u8 unkBE;
    /* 0xBF */ u8 padBF[0xC6 - 0xBF];
    /* 0xC6 */ s16 unkC6[3];
    /* 0xCC */ u8 padCC[0xD2 - 0xCC];
    /* 0xD2 */ u8 unkD2[3];
    /* 0xD5 */ u8 unkD5;
    /* 0xD6 */ u8 padD6[2];
} func_80022214_Track;

typedef struct func_80022214_Seq {
    u8 unk0, unk1, unk2, unk3, unk4, unk5;
    u8 pad6[2];
    u8 **unk8;
    s16 unkC[3];
} func_80022214_Seq;
extern void func_80030770(s32, void *, u8);
#define seq ((func_80022214_Seq *)D_800CBAD8)

void func_80022214(s32 arg0) {
    func_80022214_Track *t;
    func_80022214_Track *t2;
    u8 **ch;
    s32 n;
    s32 flag;
    s32 idx;
    u32 id;

    if (arg0 == 0) {
        seq->unkC[0] = 0;
        seq->unkC[1] = 0;
        seq->unkC[2] = 0;
    }
    id = D_800CBB48 & 0x7FFF;
    if (id < 0x100) {
        flag = 0;
    } else {
        flag = 1;
    }
    ch = seq->unk8;
    for (n = 0; n < seq->unk0; n++) {
        idx = seq->unk1 + n;
        t = &((func_80022214_Track *)&D_801B5520)[idx];
        t2 = t;
        if (idx < 16) {
            if (t->unk10 != D_800CBAD0[flag]) {
                t->unk10 = D_800CBAD0[flag];
                func_80030770(D_800498F0, D_800CBBE0 + idx * 0x1C, t->unk10);
            }
            if ((seq->unk5 != 0 || flag != 0) && t->unkE != 0) {
                func_80026950(D_800498F0, D_800CBBE0 + idx * 0x1C, 0, 5000);
                t->unkF = 2;
            }
        } else {
            t2 = t;
            t->unkF = t->unkE = 0;
        }
        t->unk5 = seq->unk4;
        t->unk0 = D_800CBB48;
        t->unk4 = seq->unk2;
        t->unkC = seq->unk3;
        t->unk8 = ch[n];
        t->unk18 = 0x8000;
        t->unk1A = 0x80;
        t->unk21 = t->unk22 = 1;
        t->unk2E = t->unk30 = 0;
        t->unk32 = t->unk34 = 0;
        t->unk40 = t->unk42 = 0;
        t2->unk7D = t2->unk8A = 0;
        t2->unk92 = 0;
        t2->unk38 = 0;
        t2->unk9A = t2->unk92 & 0xFF;
        t2->unk9E = 0;
        t2->unk1D = 0;
        t2->unk47 = 0;
        t2->unk5B = 0;
        t2->unk58 = 0;
        for (idx = 0; idx < 3; idx++) {
            t2->unkA2[idx] = t2->unkA8[idx] = seq->unkC[idx];
        }
        for (idx = 0; idx < 3; idx++) {
            t2->unkB8[idx] = 0;
            t2->unkBB[idx] = 0;
        }
        t2->unkBE = 0;
        for (idx = 0; idx != 3; idx++) {
            t2->unkC6[idx] = 0;
            t2->unkD2[idx] = 0;
        }
        t2->unkD5 = seq->unk5;
    }
    id = D_800CBB48 & 0x7FFF;
    for (n = 0; n != 1; n++) {
        if (D_800CBAC8[n] == id) {
            D_800CBAC8[n] = D_800CBAC4[n].unk2 = 0;
        }
    }
}
