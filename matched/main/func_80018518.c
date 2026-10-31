#include "common.h"
unsigned short func_80017014(int);
int func_80017384(int, unsigned short);
extern u16 *D_800440A4[];


void func_80018518(u32 arg0) {
    u16 *temp_v0;
    u16 *temp_v0_2;
    u32 temp_t7;

    temp_t7 = (arg0 >> 4) & 0xF;
    switch (temp_t7) {
    case 0:
        *D_800440A4[(arg0 >> 8) & 0x1F] = arg0 >> 16;
        return;
    case 1:
        temp_v0 = D_800440A4[(arg0 >> 8) & 0x1F];
        *temp_v0 = *temp_v0 + (u16)(arg0 >> 16);
        return;
    case 2:
        temp_v0_2 = D_800440A4[(arg0 >> 8) & 0x1F];
        *temp_v0_2 = *temp_v0_2 - (u16)(arg0 >> 16);
        return;
    case 3:
        *D_800440A4[(arg0 >> 8) & 0x1F] = *D_800440A4[arg0 >> 16];
        return;
    case 4:
        *D_800440A4[(arg0 >> 8) & 0x1F] += *D_800440A4[arg0 >> 16];
        return;
    case 5:
        *D_800440A4[(arg0 >> 8) & 0x1F] -= *D_800440A4[arg0 >> 16];
    default:
        return;
    }
}
