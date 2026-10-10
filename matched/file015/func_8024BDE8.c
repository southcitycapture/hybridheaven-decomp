#include "context.h"
extern s32 func_80133A24(s32);
extern void func_800058DC(void *, void *);
extern struct func_8024C5B4_Struct D_801BBBF0;
extern void func_8024BE88();

extern s32 func_80005670(void *, void *);
extern void func_801339D0(s32);
extern void func_801FBB30(void);
extern s32 D_8025A2D0;
extern u8 D_80253954[];

void func_8024BDE8(void *arg0, void **arg1) {
    if (func_80133A24(0x7C) != 0) {
        func_801339D0(0x73);
        func_801339D0(0x77);
        D_8025A2D0 = func_80005670(arg0, D_80253954);
        *((u8 *)*arg1 + 0x22) = 1;
        *(f32 *)((u8 *)*(void **)((u8 *)&D_801BBBF0 + 0xDC) + 0x40) = 0.0f;
        *(f32 *)((u8 *)*(void **)((u8 *)&D_801BBBF0 + 0xDC) + 0x48) = 0.0f;
        *(u16 *)((u8 *)arg0 + 0x3C) = 0;
        func_801FBB30();
        func_800058DC(arg0, func_8024BE88);
    }
}
