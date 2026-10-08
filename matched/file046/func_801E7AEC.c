#include "context.h"

struct func_801E7AEC_Vals {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad1[2];
    s16 h12;
};

struct func_801E7AEC_Holder {
    u8 pad0[0x2C];
    struct func_801E7AEC_Vals *vals;
};

struct func_801E7AEC_Node {
    u8 pad0[8];
    struct func_801E7AEC_Node *next;
    u8 pad1[0x18];
    struct func_801E7AEC_Holder *holder;
};

extern f32 D_801EB3C8;
extern f32 D_801EB3CC;

s32 func_801E7AEC(s32 arg0, s32 arg1) {
    struct func_801E7AEC_Holder *temp_v0;

    temp_v0 = ((struct func_801E7AEC_Node *)D_801DAB14)->next->next->next->next->next->next->holder;
    if (temp_v0 != NULL) {
        temp_v0->vals->f4 = D_801EB3C8;
        ((struct func_801E7AEC_Node *)D_801DAB14)->next->next->next->next->next->next->holder->vals->f8 = 10.0f;
        ((struct func_801E7AEC_Node *)D_801DAB14)->next->next->next->next->next->next->holder->vals->fC = D_801EB3CC;
        ((struct func_801E7AEC_Node *)D_801DAB14)->next->next->next->next->next->next->holder->vals->h12 = 0x1071;
        func_801CC470(5, 0x03200038, 0, 0x110, 6.0f);
        return 2;
    }
    return 1;
}
