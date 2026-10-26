#include "common.h"
extern u8 D_8008DA88[];
extern u8 D_801BBBF0[];
typedef struct func_801C86C4_StructV { s32 a, b, c; } func_801C86C4_StructV;
extern func_801C86C4_StructV D_801E0BF4;
extern void func_80006214(void *);
typedef struct func_801C8914_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C8914_Struct;
extern void func_8013A28C(void *, func_801C8914_Struct);
extern void func_801C4A5C(void *, s32);
typedef struct func_801C86C4_StructN { u8 pad[0x1C]; func_801C86C4_StructV v; } func_801C86C4_StructN;
typedef struct func_801C86C4_StructO { u8 pad[0x5C]; func_801C86C4_StructN *unk5C; } func_801C86C4_StructO;


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
