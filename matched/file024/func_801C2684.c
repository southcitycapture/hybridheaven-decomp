#include "context.h"


typedef struct func_801C2684_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C2684_Arg0;

extern func_801C2684_Node *D_801CFD00;
extern func_801C2684_Node *D_801CFD04;
extern void func_801C27D0();
extern void func_801453CC(s32, s32, s32, s32, s32, s32, s32);
extern void func_800058DC(s32, void *);

void func_801C2684(func_801C2684_Arg0 *arg0, s32 arg1) {
    u8 i;
    func_801C2684_Node *node;

    node = D_801CFD04;
    func_801453CC(node, 0x80, 0, 1, 0x1D, 1, 0x1E);
    node = node->unk10;
    i = 0;
    do {
        func_801453CC(node, 0, 0, 1, 0x1D, 1, 0x1E);
        i++;
        node = node->unk10;
    } while (i < 8);
    node = D_801CFD00;
    func_801453CC(node, 0x80, 1, 1, 0x1F, 0x1F, 0xD);
    node = node->unk10;
    i = 0;
    do {
        func_801453CC(node, 0, 1, 1, 0x1F, 0x1F, 0xD);
        i++;
        node = node->unk10;
    } while (i < 0xB);
    arg0->unk3C++;
    if (arg0->unk3C >= 0x20) {
        func_800058DC((s32) arg0, func_801C27D0);
    }
}
