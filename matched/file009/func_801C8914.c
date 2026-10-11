#include "context.h"

typedef struct func_801C8914_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C8914_Struct;

typedef struct func_801C8914_Node {
    u8 pad[0x54];
    s32 unk54;
} func_801C8914_Node;

typedef struct func_801C8914_Outer {
    u8 pad[0x5C];
    s32 *unk5C;
} func_801C8914_Outer;

extern void func_80006214(void *);
extern void func_8013A28C(void *, func_801C8914_Struct);
extern void func_801C4A5C(void *, s32);
extern u8 D_8008DA88[];
extern func_801C8914_Outer *D_801BBCCC;
extern u16 D_801E4040;
extern func_801C8914_Struct D_801E4048;
extern s32 D_801E4054;
extern s32 D_801E4058;

void func_801C8914(void) {
    s32 *sp1C;
    func_801C8914_Struct *temp_v0;
    u8 *temp_v1;

    sp1C = D_801BBCCC->unk5C;
    func_80006214(D_801BBCCC);
    temp_v1 = (u8 *) &D_801BBBF0;
    *(s32 *)(*(u8 **)(temp_v1 + 0xDC) + 0x2C) = D_801E4058;
    *(u16 *)(temp_v1 + 0xEF0) = D_801E4040;
    temp_v0 = (func_801C8914_Struct *)(sp1C + 7);
    *temp_v0 = D_801E4048;
    func_8013A28C(D_8008DA88, *temp_v0);
    ((func_801C8914_Node *) D_801BBBF0.unkDC)->unk54 = D_801E4054;
    func_801C4A5C(D_801BBBF0.unkDC, 0);
}
