#include "common.h"
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
extern void func_80127430(f32, f32, s32, s32, f32, f32);
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
extern s32 func_80244AB0();
extern void func_8024564C();


extern func_80246E60_StructGlobal D_80258F24;
void func_80247EB0(u8 *arg0, s32 arg1) {
    u8 *sp2C;
    u8 *v;

    sp2C = *(u8 **)(arg0 + 0x5C);
    *(s32 *)(arg0 + 0x2C) |= 0x80;
    if (func_80244AB0() == 0 && func_8012CE9C(arg1, sp2C, D_80258F24, 0xA) == 0 && func_80010550(arg1, sp2C) != 0) {
        *(s16 *)(sp2C + 0x78) = 1;
        *(s32 *)(arg0 + 0x2C) &= ~0x80;
        v = *(u8 **)(*(u8 **)(arg0 + 0x24) + 0x2C);
        func_80127430(*(f32 *)(v + 4), *(f32 *)(v + 8), *(s32 *)(v + 0xC), 0x6C9, (1.8f), 1.0f);
        func_800058DC(arg0, func_8024564C);
    }
}
