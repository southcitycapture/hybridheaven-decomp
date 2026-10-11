#include "context.h"

struct func_80380EEC_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad1[0x44];
    u8 unk90;
    u8 pad2[0x3];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

extern void func_8001F74C(void);
extern void func_8001F75C(void *);
extern u16 D_801BCAE0;
extern s32 D_80388E0C[];

void func_80380EEC(struct func_80380EEC_Struct *arg0, s32 arg1) {
    void (*temp_v0)(void *, s32);

    if (D_801BCAE0 & 0x10) {
        func_8001F74C();
    } else {
        func_8001F75C(arg0);
    }
    temp_v0 = (void (*)(void *, s32)) D_80388E0C[arg0->unk90];
    if (temp_v0 != NULL) {
        temp_v0(arg0, arg1);
    }
    arg0->unk94 = arg0->unk94 + arg0->unk40;
    arg0->unk98 = arg0->unk98 + arg0->unk44;
    arg0->unk9C = arg0->unk9C + arg0->unk48;
}
