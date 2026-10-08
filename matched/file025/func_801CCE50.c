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

void func_801CCE50(u8 arg0, u8 arg1, u8 arg2) {
    D_801E0BC0.unk0 = arg0;
    D_801E0BC0.unk1 = arg1;
    D_801E0BC0.unk2 = arg2;
    D_801E0BC0.unk3 = 0;
    D_801E0BC0.unk4 = arg0;
    D_801E0BC0.unk5 = arg1;
    D_801E0BC0.unk6 = arg2;
    D_801E0BC0.unk7 = 0;
}
