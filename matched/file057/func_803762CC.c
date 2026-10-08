#include "common.h"

extern void func_80005700(void *);
extern void func_801479A8(s32);

typedef struct func_803762CC_Struct {
    u8 pad[0x2C];
    s32 unk2C;
} func_803762CC_Struct;

void func_803762CC(func_803762CC_Struct *arg0, s32 arg1) {
    func_801479A8(arg0->unk2C);
    func_80005700(arg0);
}
