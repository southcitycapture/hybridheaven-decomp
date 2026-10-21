#include "context.h"
extern struct func_801C2684_Node *D_801CFD04;
typedef struct func_801C2684_Node {
    u8 pad[0x10];
    struct func_801C2684_Node *unk10;
} func_801C2684_Node;

typedef struct func_801C2518_StructA {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C2518_StructA;
typedef struct func_801C2518_StructB {
    u8 pad[0xB];
    u8 unkB;
} func_801C2518_StructB;
typedef struct func_801C2518_StructC {
    u8 pad[0x30];
    func_801C2518_StructB *unk30;
} func_801C2518_StructC;

void func_801C2518(func_801C2518_StructA *arg0, s32 arg1) {
    func_801C2518_StructC *p = (func_801C2518_StructC *)D_801CFD04;
    s16 b = p->unk30->unkB;
    if (arg0->unk3C >= 0xB5) {
        b = b + 3;
        if (b >= 0x100) {
            b = 0xFF;
        }
        func_801C1040((s32)p, (s8)b, 9);
        return;
    }
    arg0->unk3C = arg0->unk3C + 1;
}
