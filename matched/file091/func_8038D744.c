#include "context.h"

typedef struct func_8038D744_Struct {
    u8 pad0[0x98];
    s16 unk98;
    s16 unk9A;
    u8 pad1[0x5];
    u8 unkA1;
    u8 unkA2;
} func_8038D744_Struct;

typedef struct func_8038D744_Arg1 {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D744_Arg1;

extern void func_802294BC(void *a);
extern void func_80229CE0(void *a, void *b, s32 c);

void func_8038D744(void *arg0, void *arg1, void *arg2) {
    if (((u32) (((u32 *) arg2)[12] << 0xB) >> 0x1E) != 0) {
        func_802294BC(arg1);
        ((func_8038D744_Struct *) arg0)->unk9A = (s16) (((func_8038D744_Struct *) arg0)->unk9A | 8);
    } else if ((*(f32 *) (D_801BC3D8 + 0x3A8) > 25.0) && (((func_8038D744_Struct *) arg0)->unk98 != 0)) {
        ((func_8038D744_Arg1 *) arg1)->unk2D8 = 0x13;
        ((func_8038D744_Arg1 *) arg1)->unk2D9 = 3;
    } else {
        ((func_8038D744_Arg1 *) arg1)->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 1);
    }
    ((func_8038D744_Struct *) arg0)->unkA1 = ((func_8038D744_Arg1 *) arg1)->unk2D8;
    ((func_8038D744_Struct *) arg0)->unkA2 = ((func_8038D744_Arg1 *) arg1)->unk2D9;
}
