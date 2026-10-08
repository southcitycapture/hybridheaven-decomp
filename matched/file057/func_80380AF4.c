#include "context.h"

extern void func_80005700(void);
extern u8 D_801BC3D8[];

struct func_80380AF4_Struct {
    u8 pad[8];
    s32 unk8;
};

void func_80380AF4(struct func_80380AF4_Struct *arg0, s32 arg1) {
    if (arg0->unk8 == 0) {
        func_80005700();
        *(s16 *)&D_801BC3D8[0x3B2] = 2;
    }
}
