#include "context.h"

typedef struct func_8035AA44_StructB {
    u8 pad0[0x36];
    u16 unk36;
} func_8035AA44_StructB;

typedef struct func_8035AA44_Struct {
    u8 pad0[0xC];
    func_8035AA44_StructB *unkC;
    u8 pad00[0x34 - 0x10];
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 pad1;
    u8 unk38;
    u8 unk39;
    u8 unk3A;
    u8 pad2[0x4C - 0x3B];
    s16 unk4C;
    u8 pad3[0x6C - 0x4E];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
    u8 pad4[0x7D - 0x78];
    u8 unk7D;
} func_8035AA44_Struct;

extern void func_8035A938();
extern void func_801CE4D4(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16, f32 arg17, s32 arg18);
extern void func_800058DC(void *arg0, void *arg1);
extern void func_8035ABAC();
extern f32 D_8038A034;
extern f32 D_8038A038;

void func_8035AA44(func_8035AA44_Struct *arg0, s32 arg1) {
    arg0->unk4C = 0;
    func_8035A938();
    if (arg0->unkC->unk36 != 0x148) {
        func_801CE4D4(arg0, 0xD, arg0->unk6C, arg0->unk70, arg0->unk74, (s32) arg0->unk34, (s32) arg0->unk35, (s32) arg0->unk36, 0xFF, 0, (s32) arg0->unk38, (s32) arg0->unk39, (s32) arg0->unk3A, 0xFF, 0, 1, 0x18, D_8038A034, 5);
    }
    func_801CE4D4(arg0, 0x1B, arg0->unk6C, arg0->unk70, arg0->unk74, (s32) arg0->unk34, (s32) arg0->unk35, (s32) arg0->unk36, 0xFF, 0, (s32) arg0->unk38, (s32) arg0->unk39, (s32) arg0->unk3A, 0xFF, 0, 1, 0xA, D_8038A038, 5);
    arg0->unk7D = 0;
    func_800058DC(arg0, (void *) func_8035ABAC);
}
