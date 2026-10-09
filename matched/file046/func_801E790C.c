#include "context.h"

extern f32 D_801EB3C0;
extern f32 D_801EB3C4;
extern void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

struct func_801E790C_Vals {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad1[2];
    s16 h12;
};

struct func_801E790C_Holder {
    u8 pad0[0x2C];
    struct func_801E790C_Vals *vals;
};

struct func_801E790C_Node {
    u8 pad0[8];
    struct func_801E790C_Node *next;
    u8 pad1[0x18];
    struct func_801E790C_Holder *holder;
};

s32 func_801E790C(s32 arg0, s32 arg1) {
    struct func_801E790C_Holder *holder;

    holder = (*(struct func_801E790C_Node **)&D_801DAB14)->next->next->next->next->next->holder;
    if (holder != NULL) {
        holder->vals->f4 = D_801EB3C0;
        (*(struct func_801E790C_Node **)&D_801DAB14)->next->next->next->next->next->holder->vals->f8 = 10.0f;
        (*(struct func_801E790C_Node **)&D_801DAB14)->next->next->next->next->next->holder->vals->fC = D_801EB3C4;
        (*(struct func_801E790C_Node **)&D_801DAB14)->next->next->next->next->next->holder->vals->h12 = 0xF77;
        func_801CC470(4, 0x03200038, 0, 0x100, 6.0f);
        return 2;
    }
    return 1;
}
