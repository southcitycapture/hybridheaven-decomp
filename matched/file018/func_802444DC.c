#include "context.h"
void func_80005F6C(void *, void *);
void func_80006214(void *);
void func_8012C89C(void *, s32, s32, s32);
void func_8012C2DC(s32);
extern void func_802445BC();
extern void func_8012C228(s32, s32, s32);

extern u8 D_80164F40[];
extern f32 D_8025BF78;

void func_802444DC(void *arg0, void **arg1) {
    if (func_80133A24(0x144) == 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x3CB, 0xB);
        func_8012C2DC(0);
        *(f32 *) (*(u8 **) (*(u8 **) arg1 + 0x30) + 0x4) = D_8025BF78;
        *(f32 *) (*(u8 **) (*(u8 **) arg1 + 0x30) + 0x8) = 200.0f;
        *(f32 *) (*(u8 **) (*(u8 **) arg1 + 0x30) + 0xC) = -90.0f;
        *(s16 *) (*(u8 **) (*(u8 **) arg1 + 0x30) + 0x12) = 0x800;
        func_8012C228((s32) arg0, 0x3CB, 0xC);
        *(s16 *) ((u8 *) arg0 + 0x90) = 0x80;
        func_800058DC(arg0, func_802445BC);
    }
}
