#include "context.h"

typedef struct func_801CE1C8_StructA {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_801CE1C8_StructA;

typedef struct func_801CE1C8_StructB {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x18];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x10];
    f32 unk60;
    f32 unk64;
    f32 unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78[16];
    f32 unk88;
    s32 unk8C;
    u16 unk90;
    u16 unk92;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
} func_801CE1C8_StructB;

typedef struct func_801CE1C8_StructC {
    s32 unk0;
    u8 unk4;
} func_801CE1C8_StructC;

extern u8 D_801E1398[];
extern func_801CE1C8_StructB *func_80005670(func_801CE1C8_StructA *, void *);

func_801CE1C8_StructB *func_801CE1C8(func_801CE1C8_StructA *arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, u8 arg19, u8 arg20, u8 arg21, u16 arg22, f32 arg23, f32 arg24, f32 arg25, f32 arg26, u8 arg27) {
    func_801CE1C8_StructB *r;
    func_801CE1C8_StructC *sp18;

    sp18 = (func_801CE1C8_StructC *)func_801CE170(arg1);
    *(s32 *)(D_801E1398 + 0xC) = sp18->unk0;
    r = func_80005670(arg0, &D_801E1398);
    if (r != NULL) {
        arg0->unk4E = arg0->unk4E + 1;
        r->unk30 = 0;
        r->unk2C = 0;
        r->unk4C = 0;
        r->unk4E = 0;
        r->unk60 = arg23;
        r->unk64 = arg24;
        r->unk68 = arg25;
        r->unk6C = arg2;
        r->unk70 = arg3;
        r->unk74 = arg4;
        r->unk78[0] = arg5;
        r->unk78[1] = arg6;
        r->unk78[2] = arg7;
        r->unk78[3] = arg8;
        r->unk78[4] = arg9;
        r->unk78[5] = arg10;
        r->unk78[6] = arg11;
        r->unk78[7] = arg12;
        r->unk78[8] = arg13;
        r->unk78[9] = arg14;
        r->unk78[10] = arg15;
        r->unk78[11] = arg16;
        r->unk78[12] = arg17;
        r->unk78[13] = arg18;
        r->unk78[14] = arg19;
        r->unk78[15] = arg20;
        r->unk8C = sp18->unk0;
        r->unk90 = arg22;
        r->unk92 = 0;
        r->unk94 = arg21;
        r->unk95 = arg1;
        r->unk96 = arg27;
        r->unk97 = sp18->unk4;
        r->unk88 = arg26;
    }
    return r;
}
