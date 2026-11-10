#include "common.h"
#ifndef LP
unsigned short func_80017014(int);
int func_80017384(int, unsigned short);
#endif
extern void *D_80044124[];
extern u16 D_800892B0[];
extern u16 D_8008EBC0;
extern s16 D_8008EBE6;
extern s16 D_8008EBEC;
extern s16 D_8008EBFC;
extern u8 D_8008ED28[];
extern s32 D_8008EE78;
extern s8 D_8008EE80;
#define LQ(p,l) p##_##l
#define LP(p,l) LQ(p,l)
extern s32 func_800058DC(s32, void *);
extern void func_80017BB8();
void func_8001C0B0(u8, u16, u8, s32);
s32 func_8001D394(u8, u16);


typedef struct func_8001A0A4_Struct {
    u8 b0;
    u8 b1;
    u8 b2;
    u8 pad3;
    u16 unk4;
    u8 pad6[2];
    s32 unk8;
} func_8001A0A4_Struct;

#define TAB ((func_8001A0A4_Struct *)D_8008ED28)
#define CUR (*(u8 *)&D_8008EE80)
#define CH (((u8 *)&D_8008EBE6)[1])
#define PG ((u8 *)D_80044124[D_8008EBC0])
#define FL (*(u16 *)(PG + 0xC))

void func_8001A0A4(s32 arg0, s32 arg1) {
    u8 sp2F;
    u8 sp2E;
    u8 sp2D;

    D_8008EBFC = D_800892B0[0x1E8 / 2] | D_800892B0[0x1C8 / 2];
    sp2E = CUR;
    sp2F = TAB[CUR].b0;
    sp2D = TAB[CUR].b1;
    if (TAB[CUR].b2 == TAB[sp2D].b2) {
        if (FL & 0x200) {
            func_8001C0B0(TAB[sp2E].b2, TAB[sp2E].unk4, CH, func_8001D394(CH, 0xA1A1) & 0xFFFF);
            func_8001C0B0(TAB[sp2F].b2, TAB[sp2F].unk4, CH, func_8001D394(CH, 0xA1FC) & 0xFFFF);
            CUR = sp2F;
        }
        if (FL & 0x100) {
            func_8001C0B0(TAB[sp2E].b2, TAB[sp2E].unk4, CH, func_8001D394(CH, 0xA1A1) & 0xFFFF);
            func_8001C0B0(TAB[sp2D].b2, TAB[sp2D].unk4, CH, func_8001D394(CH, 0xA1FC) & 0xFFFF);
            CUR = sp2D;
        }
    } else {
        if (FL & 0x800) {
            func_8001C0B0(TAB[sp2E].b2, TAB[sp2E].unk4, CH, func_8001D394(CH, 0xA1A1) & 0xFFFF);
            func_8001C0B0(TAB[sp2F].b2, TAB[sp2F].unk4, CH, func_8001D394(CH, 0xA1FC) & 0xFFFF);
            CUR = sp2F;
        }
        if (FL & 0x400) {
            func_8001C0B0(TAB[sp2E].b2, TAB[sp2E].unk4, CH, func_8001D394(CH, 0xA1A1) & 0xFFFF);
            func_8001C0B0(TAB[sp2D].b2, TAB[sp2D].unk4, CH, func_8001D394(CH, 0xA1FC) & 0xFFFF);
            CUR = sp2D;
        }
    }
    if (*(u16 *)(PG + 4) & 0xF000) {
        if (*(u16 *)(PG + 4) & 0xB000) {
            D_8008EBEC = 0;
        } else {
            D_8008EBEC = 1;
        }
        D_8008EE78 = TAB[CUR].unk8;
        func_800058DC(arg0, func_80017BB8);
    }
}
