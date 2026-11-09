#include "common.h"
typedef struct func_8022B4A4_StructBase {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8022B4A4_StructBase;
extern struct func_8022B4A4_StructBase D_801BBBF0;


typedef struct func_8022ABD8_StructT {
    u8 pad0[0x36];
    u16 unk36;
} func_8022ABD8_StructT;

extern void D_8038D8E0(s32);
extern void D_8038DBA4(s32);
extern void D_8038DBC4(s32);
extern void func_80242B2C(s32);
extern void func_8038D584(s32);
extern void func_8038D6F4(s32);
extern void func_8038D7A4(s32);
extern void func_8038D7B4(s32);
extern void func_8038D7B8(s32);
extern void func_8038D7D4(s32);
extern void func_8038D8BC(s32);
extern void func_8038D8EC(s32);
extern void func_8038D900(s32);
extern void func_8038D92C(s32);
extern void func_8038D93C(s32);
extern void func_8038D940(s32);
extern void func_8038D950(s32);
extern void func_8038D9D8(s32);
extern void func_8038D9E4(s32);
extern void func_8038D9F0(s32);
extern void func_8038D9FC(s32);
extern void func_8038DA40(s32);
extern void func_8038DA4C(s32);
extern void func_8038DA6C(s32);
extern void func_8038DA80(s32);
extern void func_8038DA84(s32);
extern void func_8038DAAC(s32);
extern void func_8038DB74(s32);
extern void func_8038DBA0(s32);
extern void func_8038DBF4(s32);
extern void func_8038DC0C(s32);
extern void func_8038DC20(s32);
extern void func_8038DC28(s32);
extern void func_8038DC2C(s32);
extern void func_8038DC3C(s32);
extern void func_8038DC98(s32);
extern void func_8038DDD4(s32);
extern void func_8038DFA0(s32);
extern void func_8038DFDC(s32);
extern void func_8038E100(s32);

void func_8022ABD8(arg0, arg1)
s32 arg1;
{
    s32 var_v0;
    func_8022ABD8_StructT *var_v1;
    s32 temp_v0;

    var_v0 = (s32)&D_801BBBF0;
    if (arg1 == var_v0 + 0x44C) {
        var_v1 = *(func_8022ABD8_StructT **)(var_v0 + 0xDC);
    } else {
        var_v1 = *(func_8022ABD8_StructT **)(var_v0 + 0xEC);
    }
    temp_v0 = var_v1->unk36;
    switch (temp_v0) {
    case 0x50:
        D_8038DBA4(arg0);
        return;
    case 0x51:
        func_8038D93C(arg0);
        return;
    case 0x52:
        func_8038D7B8(arg0);
        return;
    case 0x53:
        func_8038D900(arg0);
        return;
    case 0x143:
        func_8038DDD4(arg0);
        return;
    case 0x58:
        func_8038DC20(arg0);
        return;
    case 0x11A:
        func_8038DAAC(arg0);
        return;
    case 0x144:
        func_8038D8EC(arg0);
        return;
    case 0x119:
        func_8038DB74(arg0);
        return;
    case 0x55:
        func_8038D940(arg0);
        return;
    case 0x59:
        func_8038DC28(arg0);
        return;
    case 0x54:
        func_8038DA40(arg0);
        return;
    case 0x145:
        func_8038DC98(arg0);
        return;
    case 0x57:
        func_8038DA84(arg0);
        return;
    case 0x146:
        D_8038D8E0(arg0);
        return;
    case 0x149:
        func_8038DFA0(arg0);
        return;
    case 0xF9:
        func_8038DA4C(arg0);
        return;
    case 0xF4:
        func_8038DA6C(arg0);
        return;
    case 0xF5:
        func_8038D7D4(arg0);
        return;
    case 0xF6:
        func_8038D6F4(arg0);
        return;
    case 0x5A:
        func_8038D9D8(arg0);
        return;
    case 0x5B:
        func_8038DC2C(arg0);
        return;
    case 0x5D:
        func_8038D9F0(arg0);
        return;
    case 0xF3:
        func_8038D9FC(arg0);
        return;
    case 0xFA:
        func_8038D7A4(arg0);
        return;
    case 0xFB:
        func_8038D7B4(arg0);
        return;
    case 0x147:
        func_8038DA80(arg0);
        return;
    case 0xF0:
        func_8038DC0C(arg0);
        return;
    case 0xF1:
        func_8038DBA0(arg0);
        return;
    case 0x56:
        D_8038DBC4(arg0);
        return;
    case 0x5C:
        func_8038D9D8(arg0);
        return;
    case 0xF2:
        func_8038D9E4(arg0);
        return;
    case 0xFC:
        func_8038D950(arg0);
        return;
    case 0xFD:
        func_8038D8BC(arg0);
        return;
    case 0x2E:
        func_8038DFDC(arg0);
        return;
    case 0x29:
        func_80242B2C(arg0);
        return;
    case 0x32:
        func_8038DBA0(arg0);
        return;
    case 0x31:
        func_8038E100(arg0);
        return;
    case 0x148:
        func_8038D92C(arg0);
        return;
    case 0x11B:
        func_8038DBF4(arg0);
        return;
    case 0x11D:
        func_8038D584(arg0);
        return;
    case 0x11E:
        func_8038DC3C(arg0);
        return;
    default:
        func_8038D93C(arg0);
        return;
    }
}
