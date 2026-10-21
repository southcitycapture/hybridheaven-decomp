#include "context.h"

extern u8 D_803899F4[];

void func_8037E920(void *arg0, s32 arg1) {
    s16 sp6E;
    u8 i;
    s32 s1;

    func_80146178(arg0, &sp6E, 0x50, 0x4B, 0xA0, 0x82, 2, 0, 0, 0, 0x66);
    for (i = 0; i < 5; i++) {
        s1 = i * 0x1A + 0x3C;
        func_8001B204((u8)(i + 4), 0x7D0, s1 + 0x13, D_803899F4, 0xFF, 0, func_8013D268(5, ((func_8037E630_Struct *)arg0)->unk97, i));
        func_80146208((s32)arg0, &sp6E, 0xE6, 0x9C, s1 + 0x24, 8, 8, 0, 8, 0xFF, 0x209, 5);
        func_80145348((s32)arg0, 0x19, 0xD);
        if (func_8013D268(5, ((func_8037E630_Struct *)arg0)->unk97, i + 1) == 0) break;
    }
    ((func_8037E630_Struct2 **)arg1)[D_80006214(arg0) - 1]->unk22 = 0;
}
