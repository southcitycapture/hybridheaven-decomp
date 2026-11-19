#include "common.h"
extern void func_800058DC(void *a0, void *a1);
typedef struct func_803721E0_Struct { u8 pad[0x6C]; f32 u6C; f32 u70; f32 u74; u8 u78; u8 pad2[2]; u8 u7B; u8 u7C; } func_803721E0_Struct;
typedef s32 (*func_803714B4_Emitter)(void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
void func_803721E0(func_803721E0_Struct *arg0, s32 arg1);


struct func_80372198_Struct {
    u8 pad[0x7A];
    u8 unk7A;
    u8 unk7B;
};

void func_80372198(struct func_80372198_Struct *arg0, s32 arg1) {
    if (arg0->unk7A++ < 3) {
        return;
    }
    arg0->unk7A = 1;
    arg0->unk7B = 0;
    func_800058DC(arg0, func_803721E0);
}
