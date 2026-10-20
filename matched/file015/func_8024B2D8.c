#include "context.h"

typedef struct func_8024B2D8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[6];
    f32 unk44;
} func_8024B2D8_Struct;

extern void func_801518D4();
extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
extern void func_8024B350();

void func_8024B2D8(func_8024B2D8_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x80) != 0) {
        if (arg0->unk3C++ >= 0x2D) {
            arg0->unk44 = 0.0f;
            func_80020718(0x1FA);
            func_801518D4(0, 1, 0xA);
            func_800058DC(arg0, func_8024B350);
        }
    }
}
