#include "context.h"

void func_801C89D8(void) {
    func_801C86C4_StructN *sp1C;

    sp1C = ((func_801C86C4_StructO *)*(void **)((u8 *)&D_801BBBF0 + 0xDC))->unk5C;
    func_80006214(*(void **)((u8 *)&D_801BBBF0 + 0xDC));
    *(s32 *)(*(u8 **)((u8 *)&D_801BBBF0 + 0xDC) + 0x2C) = 0x3E0;
    *(u16 *)((u8 *)&D_801BBBF0 + 0xEF0) = 0x80;
    sp1C->v = D_801E0BF4;
    func_8013A28C(&D_8008DA88, *(func_801C8914_Struct *)&sp1C->v);
    *(s32 *)(*(u8 **)((u8 *)&D_801BBBF0 + 0xDC) + 0x54) = *(s32 *)((u8 *)&D_801BBBF0 + 0xEFC);
    func_801C4A5C(*(void **)((u8 *)&D_801BBBF0 + 0xDC), 0);
}
