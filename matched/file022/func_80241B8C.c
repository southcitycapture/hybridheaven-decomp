#include "context.h"
void func_80241C7C(u64 arg0);
extern void func_801268F4(s32);

typedef struct func_80241B8C_StructInner {
    u8 pad0[0x22];
    u8 unk22;
} func_80241B8C_StructInner;

typedef struct func_80241B8C_StructRet {
    u8 pad0[0x24];
    func_80241B8C_StructInner *unk24;
    u8 pad1[0x74 - 0x28];
    s32 unk74;
} func_80241B8C_StructRet;

typedef struct func_80241B8C_StructGlob {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0xDC - 0x44];
    func_8024167C_Sub *unkDC;
    func_80240B0C_StructMid *unkE0;
    u8 pad2[0x10A0 - 0xE4];
    s32 unk10A0;
    u8 pad3[0x1100 - 0x10A4];
    s32 unk1100;
} func_80241B8C_StructGlob;

extern void *func_801505AC(s32);
extern u8 D_8024FDC0[];
extern f32 D_80252568;

void func_80241B8C(s32 arg0, s32 arg1) {
    func_80240B0C_StructVec *v;
    func_80241B8C_StructRet *r;
    f32 dx;
    f32 dy;
    f32 dz;

    if (((func_80241B8C_StructGlob *)&D_801BBBF0)->unkDC->unk63 != 0) {
        v = ((func_80241B8C_StructGlob *)&D_801BBBF0)->unkE0->unk2C;
        dy = 193.0f - v->unk4;
        dx = D_80252568 - v->unk8;
        dz = -25.0f - v->unkC;
        if (!((dy * dy + dx * dx + dz * dz) > 900.0f)) {
            func_801268F4(0);
            func_80203830(arg0, D_8024FDC0);
            ((func_80241B8C_StructGlob *)&D_801BBBF0)->unk1100 = arg0;
            ((func_80241B8C_StructGlob *)&D_801BBBF0)->unk10A0 = (s32) ((func_80241B8C_StructGlob *)&D_801BBBF0)->unk40;
            r = func_801505AC(0);
            r->unk24->unk22 = 0;
            r->unk74 = 0;
            func_800058DC(arg0, &func_80241C7C);
        }
    }
}
