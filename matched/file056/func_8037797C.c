#include "context.h"
struct func_8037797C_Struct { u8 pad[0x79]; u8 unk79; u8 unk7A; u8 unk7B; };
struct func_8037797C_Sub { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; };
struct func_8037797C_Mid { u8 pad[0x2C]; struct func_8037797C_Sub *unk2C; };
struct func_8037797C_Ret { u8 pad[0x98]; u8 unk98; };
extern struct func_8037797C_Mid *D_801BBCD0;
extern f64 D_803893A8;
extern struct func_8037797C_Ret *D_80377BA0(s32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, u8 arg19, u8 arg20, u8 arg21, u16 arg22);
extern void func_80020718(s32);
void func_80377AF0(s32 arg0, s32 arg1);
void func_8037797C(struct func_8037797C_Struct *arg0, s32 arg1) {
    struct func_8037797C_Sub *t;
    f32 sp74;
    u8 pad[0x14];
    f32 sp70;
    func_8001F74C(arg0);
    arg0->unk79 = 0;
    arg0->unk7A = 0;
    arg0->unk7B = 0;
    sp70 = func_8001EAD0(D_801BBCD0->unk2C->unk12);
    sp74 = func_8001EB64(D_801BBCD0->unk2C->unk12);
    D_80377BA0((s32)arg0, 1, (f32)((f64)sp70 * D_803893A8 + (f64)D_801BBCD0->unk2C->unk4), (f32)((f64)D_801BBCD0->unk2C->unk8 + 1.0), (f32)((f64)sp74 * D_803893A8 + (f64)D_801BBCD0->unk2C->unkC),0xFF, 0xFF, 0xFF, 0, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0xFF, 0, 0xFF, 0, 0xFF, 0, 0xFF, 1, 0x28)->unk98 = 0;
    func_80020718(0x10D);
    func_800058DC(arg0, (void *)func_80377AF0);
}
