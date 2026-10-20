#include "context.h"

extern void func_801453CC();
extern void func_801C2684();

typedef struct func_801C258C_Node {
    u8 pad[0x10];
    struct func_801C258C_Node *unk10;
} func_801C258C_Node;
typedef struct func_801C258C_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C258C_Arg0;

void func_801C258C(func_801C258C_Arg0 *arg0, s32 arg1) {
    func_801C258C_Node *n;
    u8 i;

    n = *(func_801C258C_Node **)((u8 *)&D_801CFCF4 + 0x10);
    func_801453CC((s32)n, 0x100, 0, 0xD, 1, 0xD, 1);
    n = n->unk10;
    i = 0;
    do {
        func_801453CC((s32)n, 0, 0, 0xD, 1, 0xD, 1);
        i++;
        n = n->unk10;
    } while (i < 8);
    func_801C10DC(*(void **)((u8 *)&D_801CFCF4 + 0xC), 0xC, 0x10);
    arg0->unk3C++;
    if (arg0->unk3C >= 0x10) {
        arg0->unk3C = 0;
        func_80145390(0x1800);
        func_800058DC((s32)arg0, (void *)func_801C2684);
    }
}
