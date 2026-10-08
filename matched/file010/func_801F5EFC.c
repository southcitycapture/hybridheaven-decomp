#include "common.h"

struct func_801F5EFC_StructInner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0xA8 - 0x28];
    s32 unkA8;
    u8 unkAC;
    u8 unkAD;
};

struct func_801F5EFC_StructOuter {
    u8 pad0[0xC];
    struct func_801F5EFC_StructInner *unkC;
};

void func_80005700(void *);
void func_800062F8(s32, s32);
void func_80147450(void *);
void func_801FA570(s32);

void func_801F5EFC(struct func_801F5EFC_StructOuter *arg0, s32 arg1) {
    func_801FA570(arg0->unkC->unkA8);
    func_800062F8(arg0->unkC->unk24, 0x80000900);
    func_80147450(arg0->unkC);
    arg0->unkC->unkAD = 0;
    func_80005700(arg0);
}
