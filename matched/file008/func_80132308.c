#include "context.h"

extern void func_80005700();
extern s16 D_80089354;
extern s8 D_801BBD54;

typedef struct func_80132308_Struct {
    u8 pad0[0x92];
    s16 unk92;
} func_80132308_Struct;

void func_80132308(func_80132308_Struct *arg0, s32 arg1) {
    D_801BBD54 = 0;
    if (arg0->unk92 == 0) {
        D_80089354 = 2;
    }
    func_80005700(arg0);
}
