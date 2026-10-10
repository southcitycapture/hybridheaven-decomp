#include "context.h"
struct func_80126794_Struct;
extern struct func_80126794_Struct D_801BBBF0;

void func_80126744(void) {
    s32 base;

    base = (s32)&D_801BBBF0;
    if (*(u8 *)(base + 0x181) != 0) {
        *(u8 *)(base + 0x182) = 1;
    } else {
        *(u8 *)(base + 0x182) = 0;
    }
    *(u8 *)(base + 0x181) = 0;
    if (*(u8 *)(base + 0x186) != 0) {
        *(u8 *)(base + 0x187) = 1;
    } else {
        *(u8 *)(base + 0x187) = 0;
        *(u16 *)(base + 0x184) = 0;
    }
    *(u8 *)(base + 0x186) = 0;
}
