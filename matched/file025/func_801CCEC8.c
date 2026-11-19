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


typedef struct func_801CCEC8_Struct {
    u8 pad[0x10];
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
} func_801CCEC8_Struct;

void func_801CCEC8(s32 arg0, s8 arg1, s8 arg2, s8 arg3) {
    func_801CCEC8_Struct *entry;

    if (arg1 == -0x80) {
        arg1 = 0x7F;
    }
    if (arg2 == -0x80) {
        arg2 = 0x7F;
    }
    if (arg3 == -0x80) {
        arg3 = 0x7F;
    }
    if (arg1 == 0) {
        arg1 = 1;
    }
    entry = (func_801CCEC8_Struct *) ((u8 *) &D_801E0BC0 + arg0 * 16);
    if (arg2 == 0) {
        arg2 = 1;
    }
    if (arg3 == 0) {
        arg3 = 1;
    }
    entry->unk10 = arg1;
    entry->unk11 = arg2;
    entry->unk12 = arg3;
    entry->unk13 = 0;
}
