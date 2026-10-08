#include "context.h"

extern void func_800058DC(void *, void *);
extern void func_803758FC(void);

typedef struct func_803757B0_Struct {
    u8 pad[0x33];
    u8 unk33;
    u8 unk34;
    u8 pad2[0x3];
    u8 unk38;
} func_803757B0_Struct;

void func_803757B0(func_803757B0_Struct *arg0, s32 arg1) {
    arg0->unk34 = 0;
    arg0->unk33 = 0;
    arg0->unk38 = 0;
    func_800058DC(arg0, func_803758FC);
}
