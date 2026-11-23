#include "common.h"
struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};
extern struct func_801F3FFC_Node *D_801BBCD0;
extern void (*D_80216D10[])(void *, s32);


typedef struct func_801F442C_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F442C_Pos;

typedef struct func_801F442C_Sub {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[2];
    s16 unkA;
} func_801F442C_Sub;

typedef struct func_801F442C_Obj {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
    u8 pad1[0x10];
    func_801F442C_Sub *unk38;
} func_801F442C_Obj;

#define P1 ((func_801F442C_Pos *)D_801BBCD0->unk2C)

s32 func_801F442C(void *arg0v, f32 arg1) {
    func_801F442C_Obj *arg0 = arg0v;
    f32 sum;
    f32 q1;
    f32 q2;

    q1 = (f32)arg0->unk38->unk6 / 10.0;
    q2 = (f32)arg0->unk38->unkA / 10.0;
    sum = (P1->unk4 - q1) * (P1->unk4 - q1) + (P1->unkC - q2) * (P1->unkC - q2);
    if (sum < arg1 * arg1) {
        if (D_801BBCD0->unk2C->unk8 < arg0->unk24->unk2C->unk8) {
            sum = -(D_801BBCD0->unk2C->unk8 - arg0->unk24->unk2C->unk8);
        } else {
            sum = D_801BBCD0->unk2C->unk8 - arg0->unk24->unk2C->unk8;
        }
        if (sum < 25.0) {
            return 1;
        }
    }
    return 0;
}
