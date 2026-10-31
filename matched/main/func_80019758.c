#include "common.h"
extern u16 D_8008EBC2;
extern s16 D_8008EBE2;
extern s16 D_8008EBE6;
typedef struct func_8001800C_Struct {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 pad5;
    s16 unk6;
    s16 unk8;
    u8 unkA;
    u8 padB;
    u16 unkC;
    u16 unkE;
    u8 pad10[0x16];
} func_8001800C_Struct;
extern func_8001800C_Struct D_8008EC18[];
extern u8 D_8008EE81;
#define e (&D_8008EC18[D_8008EBC2])
extern s32 func_800058DC(s32, void *);
extern void func_80017BB8();
typedef struct func_8001800C_Struct5 {
    u8 b[5];
} func_8001800C_Struct5;
void func_80018C9C(u8 arg0);
extern void *func_8001B154(s32);

#undef e

extern func_8001800C_Struct5 D_80044214;

void func_80019758(s32 arg0, s32 arg1) {
    s32 unused;
    u8 sp3B;
    func_8001800C_Struct5 sp34;
#define n arg1
    u8 *p;
    s32 found;
    func_8001800C_Struct *ent;

    sp34 = D_80044214;
    sp3B = 0;
    p = func_8001B154(D_8008EBC2 << 2);
    ent = &D_8008EC18[D_8008EBC2];
    n = ent->unk4;
    found = 0;
    for (; sp3B < n; sp3B++) {
        if (p[1] != 0 && p[0xB] != 0) {
            found = 1;
        }
        p += 0x11A;
    }
    if (found == 0) {
        if (D_8008EE81 - (D_8008EBC2 << 2) < n - 1) {
            D_8008EE81 += 1;
        } else {
            D_8008EE81 = D_8008EBC2 << 2;
        }
        if (ent->unkA < n - 1) {
            ent->unk8 += *(u16 *)&D_8008EBE2 + sp34.b[*(u16 *)&D_8008EBE6];
            ent->unkA += 1;
        }
        func_80018C9C(D_8008EE81);
        func_800058DC(arg0, (void *)func_80017BB8);
    }
}
