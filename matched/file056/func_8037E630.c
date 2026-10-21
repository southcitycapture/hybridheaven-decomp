#include "context.h"

typedef struct func_8037E630_Struct {
    u8 pad0[0x91];
    s8 unk91;
    u8 pad92[5];
    u8 unk97;
} func_8037E630_Struct;

typedef struct func_8037E630_Struct2 {
    u8 pad0[0x22];
    u8 unk22;
} func_8037E630_Struct2;

extern s32 func_80146178();
extern s32 func_8013D268(u8, u8, u8);
extern u8 D_803899E0[];
extern u8 D_803899EC[];
extern void D_8001B204();
extern u8 D_80006214();
extern struct func_8037EABC_Struct *D_8038A9C0;

void func_8037E630(func_8037E630_Struct *arg0, func_8037E630_Struct2 **arg1) {
    s16 sp6E;
    s32 temp_s1;
    u8 j;

    D_8001B204(3, 0x7D0, 0x3B, D_803899E0, 1, arg0->unk91);
    func_80146208((s32)arg0, &sp6E, 0xE6, 0x7E, 0x3F, 8, 8, 8, 0, 0xFF, 0x209, 6);
    func_80145348((s32)arg0, 0x1A, 3);
    D_8038A9C0 = (struct func_8037EABC_Struct *)arg1[D_80006214(arg0) - 1];
    if (arg0->unk91 == 2) {
        arg1[D_80006214(arg0) - 1]->unk22 = 0;
    }
    func_80146208((s32)arg0, &sp6E, 0x66, 0xBA, 0x3F, 8, 8, 0, 0, 0xFF, 0x209, 6);
    func_80145348((s32)arg0, 0x1A, 3);
    if (arg0->unk91 == 5) {
        arg1[D_80006214(arg0) - 1]->unk22 = 0;
    }
    func_80146178(arg0, &sp6E, 0x50, 0x4B, 0xA0, 0x82, 2, 0, 0, 0, 0x66);
    for (j = 0; arg0->unk91 > j; j++) {
        temp_s1 = j * 0x1A + 0x3C;
        func_8001B204((u8)(j + 4), 0x7D0, temp_s1 + 0x13, D_803899EC, 0xFF, 0, func_8013D268(arg0->unk91, arg0->unk97, j));
        func_80146208((s32)arg0, &sp6E, 0xE6, 0x9C, temp_s1 + 0x24, 8, 8, 0, 8, 0xFF, 0x209, 5);
        func_80145348((s32)arg0, 0x19, 0xD);
    }
    arg1[D_80006214(arg0) - 1]->unk22 = 0;
}
