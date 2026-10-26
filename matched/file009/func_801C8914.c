#include "common.h"
extern u8 D_8008DA88[];
extern u8 D_801BBBF0[];
extern u16 D_801E4040;
extern struct func_801C8914_Struct D_801E4048;
extern s32 D_801E4054;
extern s32 D_801E4058;
typedef struct func_801C86C4_StructD {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x3A6 - 6];
    u8 unk3A6;
    u8 pad3A7[0xEF0 - 0x3A7];
    u16 unkEF0;
    u16 unkEF2;
} func_801C86C4_StructD;
#define DD ((func_801C86C4_StructD *)&D_801BBBF0)
#define EF0 (DD->unkEF0)
extern void func_801C4A5C(void *, s32);
struct func_801C88BC_StructV {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
struct func_801C88BC_StructC {
    u8 pad[0x1C];
    struct func_801C88BC_StructV unk1C;
};
struct func_801C88BC_StructB {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0x54 - 0x30];
    s32 unk54;
    u8 pad3[4];
    struct func_801C88BC_StructC *unk5C;
};


struct func_801C8914_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
typedef struct func_801C8914_Struct func_801C8914_Struct;

typedef struct func_801C8914_Outer {
    u8 pad[0x5C];
    struct func_801C88BC_StructV *unk5C;
} func_801C8914_Outer;

extern void func_80006214(void *);
extern void func_8013A28C(void *, struct func_801C8914_Struct);
extern func_801C8914_Outer *D_801BBCCC;

void func_801C8914(void) {
    struct func_801C88BC_StructV *sp1C;
    struct func_801C88BC_StructV *temp_v0;

    sp1C = D_801BBCCC->unk5C;
    func_80006214(D_801BBCCC);
    ((struct func_801C88BC_StructB *)((s32 *)D_801BBBF0)[0xDC / 4] )->unk2C = D_801E4058;
    EF0 = D_801E4040;
    temp_v0 = (struct func_801C88BC_StructV *)((u8 *)sp1C + 0x1C);
    *(struct func_801C8914_Struct *)temp_v0 = D_801E4048;
    func_8013A28C(D_8008DA88, *(struct func_801C8914_Struct *)temp_v0);
    ((struct func_801C88BC_StructB *)((s32 *)D_801BBBF0)[0xDC / 4])->unk54 = D_801E4054;
    func_801C4A5C(*(void **)(D_801BBBF0 + 0xDC), 0);
}
