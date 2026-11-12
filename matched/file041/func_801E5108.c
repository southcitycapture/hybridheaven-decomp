#include "common.h"
extern s32 D_801E8178;
extern s32 D_801E81C8;
extern s32 func_801C0B8C(u64);
extern s32 func_801C86FC(s32, f32, s32, f32, f32, f32, s32);


#define STATE0W (*(s32 *)((u8 *)&D_801E81C8 - 0x50))

#define STATE3 D_801E8178
#define STATE4 D_801E8178

s32 func_801E5108(arg0, arg1)
s32 arg0;
s32 arg1;
{
    s32 result;
    switch (D_801E8178) {
    case 0:
        if (func_801C0B8C(0) != 0) {
            func_801C86FC(1, 0, 0xC1100000, 0, 13.0f, 13.0f, 0x28);
            STATE0W = D_801E8178 + 1;
        }
        break;
    case 1:
        if (func_801C0B8C(0xDBB9F) != 0) {
            func_801C86FC(0, 0, 0xC2700000, 0, 13.0f, 13.0f, 0x28);
            D_801E8178++;
        }
        break;
    case 2:
        if (func_801C0B8C(0x155CBF) != 0) {
            func_801C86FC(0, 0, 0xC2200000, 0, 13.0f, 13.0f, 0x28);
            D_801E8178++;
        }
        break;
    case 3:
        if (func_801C0B8C(0x1B773F) != 0) {
            func_801C86FC(0, 0, 0xC1A00000, 0, 13.0f, 13.0f, 0x28);
            do {
            } while (0);
            result = (s32)&STATE3;
            (*(s32 *)result)++;
        }
        break;
    case 4:
        if (func_801C0B8C(0x2191C0) != 0) {
            func_801C86FC(0, 0, 0xC1800000, 0, 13.0f, 13.0f, 0x28);
            do {
            } while (0);
            result = (s32)&STATE4;
            (*(s32 *)result)++;
        }
        break;
    case 5:
        if (func_801C0B8C(0x27AC3F) != 0) {
            func_801C86FC(0, 0, 0xC1700000, 0, 13.0f, 13.0f, 0x28);
            D_801E8178 = 0;
            return 6;
        }
        break;
    }
    result = 5;
    return result;
}
