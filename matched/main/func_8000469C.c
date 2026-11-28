#include "common.h"
extern s32 D_80037C5C[];
extern s8 D_8008DC18;
extern void func_80001FE8(s32, s32, s32);
extern void func_80028A90(u8 *, s32);
extern void func_80030640(u8 *, s32);
extern void func_800306C0(u8 *, s32);


typedef struct func_8000469C_StructRomTable {
    u8 header[0x10];
    s32 offsets[625];
} func_8000469C_StructRomTable;
extern func_8000469C_StructRomTable D_80038FE0;
extern u8 *func_80003824(u32 rom, u8 *dst, s32 size);

s32 func_8000469C(s32 file, s32 arg1) {
    u32 rom;
    u32 size;
    u8 i = 16;
    u8 *end;
    u8 *p;
    u8 *ram = (u8 *)arg1;

    p = ram;
    if ((u32)file < 1 || (u32)file > 624) {
        return 0;
    }
    rom = D_80038FE0.offsets[(u32)file - 1] & 0x7FFFFFFF;
    size = (D_80038FE0.offsets[(u32)file - 1 + 1] & 0x7FFFFFFF) - rom;
    end = ram + (D_80037C5C[((u32)file - 1) * 2 + 1] - D_80037C5C[((u32)file - 1) * 2]);
    D_8008DC18 = 1;
    if (size != 0) {
        if (D_80038FE0.offsets[(u32)file - 1] & 0x80000000) {
            p = func_80003824(rom, ram, (s32)(D_80038FE0.offsets[(u32)file - 1 + 1] & 0x7FFFFFFF) - (s32)rom);
            func_80028A90(ram, (u32)p - (u32)ram);
            func_80030640(ram, p - ram);
            func_800306C0(ram, p - ram);
        } else {
            func_80001FE8(D_80038FE0.offsets[(u32)file - 1], (s32)ram, (size + 1) & ~1);
            p += (size + 1) & ~1;
        }
    }
    while (i--) {
    }
    D_8008DC18 *= 0;
    while (p < end) {
        *p++ = 0;
    }
    return (s32)end;
}
