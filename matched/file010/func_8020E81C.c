#include "context.h"

extern s32 func_80150584();
extern s32 func_801FD168(f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
extern void func_801FD260(s32, void *);
extern f32 D_8021ABA0;
extern s32 func_80108590(f32, f32, f32, f32, f32, f32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern s32 func_801FD5BC(f32, f32, f32);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern f32 func_801FD780(u8);
extern u16 func_8012FF58(void);

typedef struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x91 - 0x4C];
    u8 unk91;
    u8 pad92[2];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
} func_8020E81C_Struct;

s32 func_8020E81C(func_8020E81C_Struct *arg0, s32 arg1) {
    u8 pad[8];
    u16 sp46;
    s32 temp_v0;

    if (func_80150584() != 0) {
        return 0;
    }
    if (func_801FD5BC(arg0->unk94, arg0->unk98, arg0->unk9C) != 0) {
        return 0;
    }
    temp_v0 = func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, arg0->unkA0, arg0->unkA2, arg0->unkA4, 0x14, 0, 0);
    if (temp_v0 != 0) {
        func_801FD260(temp_v0, arg0);
    }
    sp46 = func_8012FF58();
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 1.5f, arg0->unkA2, D_8021ABA0, 0.5f, (u32) (func_801FD780(arg0->unk91) * (f32) ((((s32) sp46 / 10) * 0xA) + 5))) != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 1);
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3CE);
        return 0;
    }
    if (func_80108590(arg0->unk94, arg0->unk98, arg0->unk9C, arg0->unk40 + arg0->unk94, arg0->unk44 + arg0->unk98, arg0->unk48 + arg0->unk9C) != 0) {
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3CE);
        return 0;
    }
    return 1;
}
