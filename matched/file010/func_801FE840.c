#include "common.h"
extern void func_800058DC();
struct func_801FE5F0_Sub {
    u8 pad0[0x8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 padB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
};
struct func_801FE5F0_Obj {
    u8 pad0[0x30];
    struct func_801FE5F0_Sub *unk30;
};
struct func_801FE5F0_Struct {
    u8 pad0[0xAB];
    u8 unkAB;
    u8 pad1[0xB0 - 0xAC];
    s16 unkB0;
};
typedef struct func_801FEA04_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0xB0 - 0x91];
    s16 unkB0;
} func_801FEA04_Struct;
extern s32 (*D_802171F0[])();
void func_801FEA04(func_801FEA04_Struct *arg0, s32 arg1);


#define ENTRY(n) (arg1[arg0->unkAB + (n)]->unk30)
void func_801FE840(struct func_801FE5F0_Struct *arg0, struct func_801FE5F0_Obj **arg1) {
    struct func_801FE5F0_Sub *b;
    u8 i;
    b = ENTRY(1);
    if (b->padB != 0) {
        b->padB = arg0->unkB0 * 4;
        for (i=2; i<10; i++) {
            ENTRY(i)->unk8 = (0xFF - arg0->unkB0) * 2;
        }
        for (i=10; i<18; i++) {
            ENTRY(i)->unkC = 0xFF - arg0->unkB0;
            ENTRY(i)->unkD = 0xFF - arg0->unkB0;
            ENTRY(i)->unkE = 0xFF - arg0->unkB0;
        }
        for (i=10; i<18; i++) {
            s32 t = arg0->unkB0 * 4;
            ENTRY(i)->unkE = t;
            ENTRY(i)->unkD = t;
            ENTRY(i)->unkC = t;
        }
        arg0->unkB0--;
        return;
    }
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_801FEA04);
}
