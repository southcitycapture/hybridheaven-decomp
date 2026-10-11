#include "context.h"

struct func_801CB5A0_Struct30 {
    u8 pad[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
};

struct func_801CB5A0_Struct {
    u8 pad[0x28];
    s16 unk28;
    u8 pad2[6];
    struct func_801CB5A0_Struct30 *unk30;
};

struct func_801CB5A0_StructArg0 {
    u8 pad[0x90];
    u8 unk90;
    u8 pad2[0x1B];
    s32 unkAC;
};

extern void func_80116E80(s32);
extern void func_80126930(s32);
extern void func_80146208(void *, void *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80006214(void *);
extern u8 D_80044434[];
extern void func_801CB788(void);
extern void func_800058DC(void *, void *);
extern void func_80005670(void *, void *);

void func_801CB5A0(void *arg0, struct func_801CB5A0_Struct **arg1) {
    u8 sp5F;
    u8 i;
    struct func_801CB5A0_Struct30 *q;
    u8 c;

    func_80126930(0);
    func_80005670(arg0, D_80044434);
    func_80116E80(0x80);
    func_80116E80(0x100);
    ((struct func_801CB5A0_StructArg0 *) arg0)->unk90 = 0;
    ((struct func_801CB5A0_StructArg0 *) arg0)->unkAC = 0;
    for (i = 0; i < 8; i++) {
        func_80146208(arg0, &sp5F, 0x66, (s16) ((i << 5) + 0x18), 0x56, 0x20, 0x40, 0, 0, 0, 0x228, i);
    }
    func_80146208(arg0, &sp5F, 0x66, (s16) ((i << 5) + 0x18), 0x56, 0x10, 0x40, 0, 0, 0, 0x228, i);
    func_80006214(arg0);
    for (i = 0; i < 9; i++) {
        arg1[i]->unk28 = 0x100;
        arg1[i]->unk30->unkD = 0;
        q = arg1[i]->unk30;
        c = q->unkD;
        q->unkC = c;
        arg1[i]->unk30->unk9 = c;
        arg1[i]->unk30->unk8 = c;
        arg1[i]->unk30->unkE = 0x80;
        q = arg1[i]->unk30;
        q->unkA = q->unkE;
        arg1[i]->unk30->unkF = 0xFF;
        q = arg1[i]->unk30;
        q->unkB = q->unkF;
    }
    func_800058DC(arg0, &func_801CB788);
}
