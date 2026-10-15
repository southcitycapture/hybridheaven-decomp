#include "context.h"
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);

typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;

typedef struct func_801E74DC_Arg2 {
    u8 pad[0x1C];
    func_801E74DC_Sub unk1C;
} func_801E74DC_Arg2;

typedef struct func_801E74DC_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E74DC_Arg0;

typedef struct func_801E74DC_Inner {
    u8 pad[0x12];
    s16 unk12;
} func_801E74DC_Inner;

typedef struct func_801E74DC_Outer {
    u8 pad[0x2C];
    func_801E74DC_Inner *unk2C;
} func_801E74DC_Outer;

extern void func_800111E0(s32, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern func_801E74DC_Outer *D_801BBCD0;
extern func_801EFD14_Table D_80216B9C;
extern func_801EFD14_Table D_80216BA8;
extern f32 D_8021AFB0;

void func_801E74DC(func_801E74DC_Arg0 *arg0, s32 arg1, func_801E74DC_Arg2 *arg2, s32 arg3) {
    s32 pad[4];
    func_801E74DC_Sub *s;

    s = &arg2->unk1C;
    if (arg2->unk1C.unk0 == 0x168003E) goto def;
    if (arg2->unk1C.unk0 == 0x168003F) goto caseA;
    if (arg2->unk1C.unk0 == 0x1680040) goto caseC;
    if (arg2->unk1C.unk0 != 0x1680041) goto def;
    goto caseB;

caseA:
    if (s->unk8 != 1.0) {
        s->unk8 = 1.0f;
    }
    func_8013A28C(arg1, *s);
    arg0->unk2C |= 0x60;
    arg0->unk2C &= ~0x80;
    func_800111E0(arg1, (u8 *)s + 6);
    if (D_8021AFB0 >= 6.0) {
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
    }
    return;

caseB:
    func_80011140(arg1, arg2, D_80216B9C, 5);
    arg0->unk2C &= ~0x80;
    arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
    arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
    return;

caseC:
    func_80011140(arg1, arg2, D_80216BA8, 4);
    arg0->unk2C &= ~0x80;
    if (D_8021AFB0 >= 6.0) {
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
    }
    return;

def:
    func_80011140(arg1, arg2, D_80216BA8, 4);
    arg0->unk2C &= ~0x80;
    if (D_8021AFB0 >= 6.0) {
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
    }
}
