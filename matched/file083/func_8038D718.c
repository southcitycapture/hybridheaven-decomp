#include "context.h"

typedef struct func_8038D718_StructA {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 padA1[7];
    u8 unkA8;
    u8 padA9[7];
    void *unkB0;
} func_8038D718_StructA;
typedef struct func_8038D718_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x30 - 4];
    u16 unk30;
} func_8038D718_StructB;
typedef struct func_8038D718_StructC {
    u8 pad0[0x30];
    u32 : 11;
    u32 f11 : 2;
    u32 : 19;
} func_8038D718_StructC;
extern s32 func_8022AB58(void *, void *, void *);
extern u8 func_8022B3E0[];
extern u8 D_8038D718[];

void func_8038D718(func_8038D718_StructA *arg0, s32 arg1) {
    func_8038D718_StructB *a1;
    func_8038D718_StructC *a2;

    a1 = (arg0->unkC == (void *)D_801BBBF0.unkDC) ? (func_8038D718_StructB *)D_801BC03C : (func_8038D718_StructB *)D_801BC3D8;
    a2 = (arg0->unkC == (void *)D_801BBBF0.unkDC) ? (func_8038D718_StructC *)D_801BC3D8 : (func_8038D718_StructC *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D59C((void *)arg0, (void *)a1, (void *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->unk30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D718;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if ((a1->unk2 < (a1->unk0 / 5)) && (arg0->unkA0 != 0) && !(arg0->unk9A & 0x20)) {
        func_8038D59C((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D59C((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if (a2->f11 != 0 && !(arg0->unk9A & 8)) {
        func_8038D59C((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if (a2->f11 == 0) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            func_8038D59C((void *)arg0, (void *)a1, (void *)a2);
        }
    }
}
