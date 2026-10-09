#include "context.h"
extern func_8024090C_Struct D_801BBBF0;
extern void func_800058DC(void *, void *);

typedef struct func_80241E1C_Struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0xDC - 0x44];
    void *unkDC;
    void *unkE0;
    u8 pad2[0x10A0 - 0xE4];
    s32 unk10A0;
    u8 pad3[0x1100 - 0x10A4];
    s32 unk1100;
} func_80241E1C_Struct;

extern void func_801268F4(s32);
extern void func_80203830(s32, void *);
extern void func_80241EF4(void);
extern u8 D_80250054[];
extern f32 D_8025256C;
extern f32 D_80252570;

void func_80241E1C(s32 arg0, s32 arg1) {
    void *temp_v0;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv1;

    if (*(u8 *)((u8 *) ((func_80241E1C_Struct *) &D_801BBBF0)->unkDC + 0x63) != 0) {
        temp_v0 = *(void **)((u8 *) ((func_80241E1C_Struct *) &D_801BBBF0)->unkE0 + 0x2C);
        temp_fv0 = -52.0f - *(f32 *)((u8 *)temp_v0 + 0x4);
        temp_fv1 = D_8025256C - *(f32 *)((u8 *)temp_v0 + 0x8);
        temp_fa0 = D_80252570 - *(f32 *)((u8 *)temp_v0 + 0xC);
        if (!(((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1) + (temp_fa0 * temp_fa0)) > 900.0f)) {
            func_801268F4(0);
            func_80203830(arg0, D_80250054);
            ((func_80241E1C_Struct *) &D_801BBBF0)->unk1100 = arg0;
            ((func_80241E1C_Struct *) &D_801BBBF0)->unk10A0 = ((func_80241E1C_Struct *) &D_801BBBF0)->unk40;
            func_800058DC((void *) arg0, (void *) func_80241EF4);
        }
    }
}
