#include "common.h"
extern u8 D_801BBBF0[];
extern u16 D_801E4040;
extern s32 D_801E4054;
extern s32 D_801E4058;


#if __LINE__ != 3
struct func_801C88BC_Fwd;
extern struct func_801C88BC_Fwd D_801E4048;
#endif
struct func_801C88BC_StructV {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
struct func_801C88BC_StructB {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0x54 - 0x30];
    s32 unk54;
    u8 pad3[4];
    struct func_801C88BC_StructC *unk5C;
};
struct func_801C88BC_StructC {
    u8 pad[0x1C];
    struct func_801C88BC_StructV unk1C;
};
#define B (*(struct func_801C88BC_StructB **)(D_801BBBF0 + 0xDC))

void func_801C88BC(void) {
    struct func_801C88BC_StructC *c;

    c = B->unk5C;
    D_801E4058 = B->unk2C;
    D_801E4040 = *(u16 *)(D_801BBBF0 + 0xEF0);
    *(struct func_801C88BC_StructV *)&D_801E4048 = c->unk1C;
    D_801E4054 = B->unk54;
}
