#include "context.h"

extern u16 *D_800440A4[];

s32 func_80018684(u32 arg0) {
    s32 r = 1;
    switch ((arg0 >> 4) & 0xF) {
    case 0:
        if ((s32)((arg0 >> 16) & 0xFFFF) == *D_800440A4[(arg0 >> 8) & 0x1F]) r = 0;
        break;
    case 1:
        if ((s32)((arg0 >> 16) & 0xFFFF) != *D_800440A4[(arg0 >> 8) & 0x1F]) r = 0;
        break;
    case 2:
        if ((s32)((arg0 >> 16) & 0xFFFF) >= *D_800440A4[(arg0 >> 8) & 0x1F]) r = 0;
        break;
    case 3:
        if (*D_800440A4[(arg0 >> 8) & 0x1F] >= (s32)((arg0 >> 16) & 0xFFFF)) r = 0;
        break;
    case 4:
        if (*D_800440A4[(arg0 >> 8) & 0x1F] < (s32)((arg0 >> 16) & 0xFFFF)) r = 0;
        break;
    case 5:
        if ((s32)((arg0 >> 16) & 0xFFFF) < *D_800440A4[(arg0 >> 8) & 0x1F]) r = 0;
        break;
    case 6:
        if (*D_800440A4[(arg0 >> 8) & 0x1F] == *D_800440A4[arg0 >> 16]) r = 0;
        break;
    case 7:
        if (*D_800440A4[(arg0 >> 8) & 0x1F] != *D_800440A4[arg0 >> 16]) r = 0;
        break;
    case 8:
        if (*D_800440A4[arg0 >> 16] >= *D_800440A4[(arg0 >> 8) & 0x1F]) r = 0;
        break;
    case 9:
        if (*D_800440A4[(arg0 >> 8) & 0x1F] >= *D_800440A4[arg0 >> 16]) r = 0;
        break;
    case 10:
        if (*D_800440A4[(arg0 >> 8) & 0x1F] < *D_800440A4[arg0 >> 16]) r = 0;
        break;
    case 11:
        if (*D_800440A4[arg0 >> 16] < *D_800440A4[(arg0 >> 8) & 0x1F]) r = 0;
        break;
    }
    return r;
}
