#include "context.h"

struct func_8002C1D0_StructB {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    u8 padC[4];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 unk1C;
};
struct func_8002C1D0_StructN {
    u8 pad0[8];
    s32 unk8;
    u8 *unkC;
    u8 unk10[0x58 - 0x10];
    u8 unk58[0x8C - 0x58];
    u8 unk8C[0xDC - 0x8C];
};
struct func_8002C1D0_StructA {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    struct func_8002C1D0_StructN *unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    void *unk2C;
    u8 *unk30;
    u8 *unk34;
    u8 *unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
};

extern void func_8002CF08(u8 *, u8 *, s32);
extern void func_8002CF5C(u8 *, u8 *, s32);
extern void func_8002CFB0(u8 *);
extern void func_8002D000(u8 *, s32, u8 *);
extern void func_8002DDB0(u8 *, s32, u8 *);
extern void func_8002E3C8(u8 *, s32, u8 *);
extern void func_8002EB40(u8 *, s32, u8 *);
extern void func_8002F010(u8 *, s32, s32);
extern void func_8003089C(u8 *, s32, u8 *);
extern void func_8002CD2C(u8 *, s32);
extern void func_8002CDD4(u8 *, s32, s32);
extern void func_8002CE7C(u8 *, s32);
extern u8 *func_80034A10(s32, s32, s32, s32, s32);
extern void func_80034E40(void *, s32, void *, s32);

void func_8002C1D0(struct func_8002C1D0_StructA *arg0, struct func_8002C1D0_StructB *arg1) {
    s32 s4;
    s32 s7;
    u8 *v1;
    u8 *s0;
    u8 *n;
    struct func_8002C1D0_StructN *e;
    u8 *sp5C;
    s32 pad1;
    s32 pad2;

    s7 = arg1->unk14;
    arg0->unk0 = 0;
    arg0->unk3C = arg1->unk4;
    arg0->unk20 = 0;
    arg0->unk1C = 0;
    arg0->unk44 = arg1->unk18;
    arg0->unk48 = 0xA0;
    arg0->unk24 = arg1->unk10;
    sp5C = func_80034A10(0, 0, s7, 1, 0x1C);
    func_8002CFB0(sp5C);
    arg0->unk38 = sp5C;
    arg0->unk34 = func_80034A10(0, 0, s7, 1, 0x4C);
    arg0->unk40 = 1;
    func_8002CF08(arg0->unk34, func_80034A10(0, 0, s7, arg1->unk4, 4), arg1->unk4);
    arg0->unk30 = func_80034A10(0, 0, s7, 1, 0x20);
    func_8002CF5C(arg0->unk30, func_80034A10(0, 0, s7, arg1->unk4, 4), arg1->unk4);
    if (arg1->unk1C != 0) {
        func_80034E40(arg0, 0, arg1, s7);
    } else {
        func_8002D000(arg0->unk30, 2, arg0->unk34);
    }
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    n = func_80034A10(0, 0, s7, arg1->unk4, 0xDC);
    s4 = 0;
    s0 = n;
    for (s4 = 0; s4 < arg1->unk4; s4++) {
        e = &((struct func_8002C1D0_StructN *)s0)[s4];
        func_800268C0((s32)e, &arg0->unk4);
        e->unk8 = 0;
        func_8002CDD4(e->unk10, arg0->unk24, s7);
        func_8002F010(e->unk10, 1, 0);
        func_8002CE7C(e->unk58, s7);
        func_8002EB40(e->unk58, 1, e->unk10);
        func_8002CD2C(e->unk8C, s7);
        func_8002E3C8(e->unk8C, 1, e->unk58);
        func_8002DDB0(arg0->unk34, 2, e->unk8C);
        e->unkC = e->unk8C;
    }
    s4 = 0;
    func_8003089C(sp5C, 1, arg0->unk30);
    v1 = func_80034A10(0, 0, s7, arg1->unk8, 0x1C);
    arg0->unk2C = 0;
    if (arg1->unk8 > 0) {
        do {
            s4 += 1;
            *(void **)v1 = arg0->unk2C;
            arg0->unk2C = v1;
            v1 += 0x1C;
        } while (s4 < arg1->unk8);
    }
    arg0->unk28 = s7;
}
