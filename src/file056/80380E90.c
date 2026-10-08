#include "common.h"


extern void func_8001F74C(void);
extern void func_80380EEC(void);
extern void *D_80388D84[];

void func_80380E90(u8 *arg0, s32 arg1) {
    void (*temp_v0)(u8 *, s32);

    func_8001F74C();
    temp_v0 = D_80388D84[arg0[0x90]];
    if (temp_v0 != NULL) {
        temp_v0(arg0, arg1);
    }
    func_800058DC(arg0, func_80380EEC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80380EEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80380F94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381084.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381204.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803813A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803816EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803818A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381A7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381C08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80381F30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803820E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803820EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80382280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80382410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_8038259C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80382724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803828BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80382B80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80382CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80383098.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803831D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80383490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80383530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803837A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803838EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80383C6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803840D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803841EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80384518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803846EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_8038480C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80384AEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80384E5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80385114.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80385584.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80385918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80385D08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80386094.s")


struct func_80386420_StructInner {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[0x4];
    f32 unk20;
    u8 pad2[0x27];
    u8 unk4B;
};

struct func_80386420_StructOuter {
    u8 pad0[0x30];
    struct func_80386420_StructInner *unk30;
};

struct func_80386420_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
};

extern f64 D_80389CE8;
void func_80005700(void);

void func_80386420(struct func_80386420_StructArg0 *arg0, struct func_80386420_StructOuter **arg1) {
    u16 temp_a2;

    temp_a2 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_a2 + 1);
    (*arg1)->unk30->unk18 = (f32) ((f64) (*arg1)->unk30->unk18 + D_80389CE8);
    (*arg1)->unk30->unk20 = (*arg1)->unk30->unk18;
    if (temp_a2 < 4) {
        (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B + 0x3C;
        return;
    }
    if (temp_a2 >= 5) {
        (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - 0x20;
        if ((s32) (*arg1)->unk30->unk4B < 0x20) {
            func_80005700();
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803864D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803865D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80386968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80386C0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80386D54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80386DFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80386EE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80386FD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80386FE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80387230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_8038755C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_80387764.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/80380E90/func_803877F0.s")

