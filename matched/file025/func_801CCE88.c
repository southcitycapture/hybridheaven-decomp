#include "common.h"
typedef struct func_801CCE50_Struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
} func_801CCE50_Struct;
extern func_801CCE50_Struct D_801E0BC0;


typedef struct func_801CCE88_Struct {
    u8 pad[8];
    u8 r0, g0, b0, a0;
    u8 r1, g1, b1, a1;
} func_801CCE88_Struct;

void func_801CCE88(s32 arg0, u8 arg1, u8 arg2, u8 arg3) {
    func_801CCE88_Struct *e = (func_801CCE88_Struct *)&D_801E0BC0 + arg0;

    e->r0 = arg1;
    e->g0 = arg2;
    e->b0 = arg3;
    e->a0 = 0;
    e->r1 = arg1;
    e->g1 = arg2;
    e->b1 = arg3;
    e->a1 = 0;
}
