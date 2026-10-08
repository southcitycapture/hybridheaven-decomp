#include "common.h"

extern u8 D_80388410[];

void func_80378F64(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = *(u16 *)(arg0 + 0x82);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x6A) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0x944);
    } else {
        *(u16 *)(arg0 + 0x6A) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x84);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x6C) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xA0A);
    } else {
        *(u16 *)(arg0 + 0x6C) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x86);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x6E) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xAD0);
    } else {
        *(u16 *)(arg0 + 0x6E) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x88);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x70) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xB96);
    } else {
        *(u16 *)(arg0 + 0x70) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x8A);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x72) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xC5C);
    } else {
        *(u16 *)(arg0 + 0x72) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x8C);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x74) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xD22);
        return;
    }
    *(u16 *)(arg0 + 0x74) = 0;
}
