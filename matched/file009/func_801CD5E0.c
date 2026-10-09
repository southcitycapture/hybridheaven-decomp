#include "context.h"
u8 func_801CD500(s32, u8, s32);

typedef struct func_801CD5E0_StructIn {
    u8 pad0[0x78];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    u8 unk7C;
    u8 unk7D;
    u8 unk7E;
    u8 unk7F;
} func_801CD5E0_StructIn;

typedef struct func_801CD5E0_StructOut {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801CD5E0_StructOut;


void func_801CD5E0(func_801CD5E0_StructIn *arg0, func_801CD5E0_StructOut *arg1, s32 arg2) {
    arg1->unk48 = func_801CD500(arg0->unk78, arg0->unk7C, arg2);
    arg1->unk49 = func_801CD500(arg0->unk79, arg0->unk7D, arg2);
    arg1->unk4A = func_801CD500(arg0->unk7A, arg0->unk7E, arg2);
    arg1->unk4B = func_801CD500(arg0->unk7B, arg0->unk7F, arg2);
}
