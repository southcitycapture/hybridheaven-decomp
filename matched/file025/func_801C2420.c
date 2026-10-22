#include "context.h"

extern s32 func_800045E8(u32);
extern void func_80004ADC(u16, s32);
extern s32 func_80017064(u16);
extern u16 **D_80171CF0[];

typedef struct func_801C2420_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[4];
    s32 unkC;
    s32 unk10;
} func_801C2420_Struct;

s32 func_801C2420(s32 arg0, func_801C2420_Struct *arg1) {
    u16 id;
    u16 ***volatile p;

    id = (*(&D_80171CF0[arg0])[-1])[0] & 0x0FFFFFFF;
    p = &D_80171CF0[arg0];
    if (func_80017064(id) == -1) {
        if (id) {
            arg1->unk0 = id;
            func_80004ADC(id, arg1->unkC = func_800045E8(id));
        }
    }
    id = (*p[-1])[1] & 0x0FFFFFFF;
    if (func_80017064(id) == -1) {
        if (id) {
            arg1->unk4 = id;
            func_80004ADC(id, arg1->unk10 = func_800045E8(id));
        }
    }
    return 1;
}
