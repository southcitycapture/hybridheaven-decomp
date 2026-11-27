#include "common.h"
struct func_8038D048_StructY {
    u8 pad0[0x9C];
    u8 unk9C;
};
struct func_8038D048_StructO {
    u8 pad0[0x5C];
    struct func_8038D048_StructY *unk5C;
};
struct func_8038D048_StructG {
    u8 pad0[0xDC];
    struct func_8038D048_StructO *unkDC;
    void *unkE0;
    u8 padE4[0xEC - 0xE4];
    struct func_8038D048_StructO *unkEC;
    void *unkF0;
    u8 padF4[0x232 - 0xF4];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
};
extern struct func_8038D048_StructG B_801BBBF0;
#define D_801BBBF0 B_801BBBF0
extern void func_800058DC(void *, void *);
extern s32 func_8022B640(s32);
struct func_8038D048_StructQ {
    u8 pad0[0xC];
    struct func_8038D048_StructO *unkC;
};
struct func_8038D048_StructX {
    u8 pad0[0xC];
    struct func_8038D048_StructQ *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[6];
    u32 unk9C_hi : 27;
    u32 unk9C : 5;
};
void func_8038D048(struct func_8038D048_StructX *arg0, s32 arg1);


struct func_8038CFC0_Struct {
    u8 pad0[0xC];
    struct func_8038D048_StructQ *unkC;
    u8 pad10[0x86];
    s16 unk96;
};
extern s32 D_80229500(void *, void *);

void func_8038CFC0(struct func_8038CFC0_Struct *arg0, s32 arg1) {
    struct func_8038D048_StructO *t;
    u8 *v1;

    t = D_801BBBF0.unkDC;
    v1 = (u8 *)arg0->unkC->unkC;
    if ((u8 *)t == v1) {
        v1 = (u8 *)t->unk5C;
    } else {
        v1 = (u8 *)D_801BBBF0.unkEC->unk5C;
    }
    D_80229500(arg0, &D_801BBBF0);
    v1[0x9C] = 1;
    arg0->unk96 = func_8022B640(8) << 10;
    func_800058DC(arg0, func_8038D048);
}
