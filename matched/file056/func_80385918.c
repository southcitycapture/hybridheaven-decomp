#include "context.h"

typedef struct func_80385918_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80385918_Struct;

extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern f32 D_80389C88;
extern f32 D_80389C8C;
extern f32 D_80389C90;
extern f64 D_80389C98;
extern f64 D_80389CA0;

void func_80385918(func_80385918_Struct *arg0, s32 arg1) {
    s32 cnt;
    register f32 fs1;
    s32 r0;
    s32 r1;
    s32 r2;
    s32 i;

    cnt = arg0->unk3C++;
    if (cnt == 0) {
        f32 fs2;
        fs1 = 0.0f;
        func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0x9A, 0, 0xB4, -4, D_80389C88, 5, 0);
        for (fs2 = D_80389C8C, fs1 = D_80389C90, i = 0; i != 4; i++) {
            r0 = func_8012C6B4(0x190);
            r1 = func_8012C6B4(0x190);
            func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, (r0 - 0xC8) / 100.0, (r1 - 0x96) / 100.0, -((func_8012C6B4(0x190) - 0xC8) / 100.0), fs1, 0xFF, 0xFF, 0xFF, 0x14, 0xFF, 0x76, 0xDC, -0xE, fs2, 0x15, 0);
            r0 = func_8012C6B4(0x190);
            r1 = func_8012C6B4(0x190);
            func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, (r0 - 0xC8) / 100.0, (r1 - 0x96) / 100.0, -((func_8012C6B4(0x190) - 0xC8) / 100.0), fs1, 0, 0xFF, 0, 0, 0x40, 0, 0xDC, -0xE, fs2, 0x15, 0);
        }
    }
    r2 = func_8012C6B4(0x3E8);
    r0 = func_8012C6B4(0x3E8);
    r1 = func_8012C6B4(0x3E8);
    func_80129FB8((r2 - 0x1F4) / 100.0 + arg0->unk94, (r0 - 0x1F4) / 100.0 + arg0->unk98, (r1 - 0x1F4) / 100.0 + arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x14, 0xFF, 0x76, 0x78, -4, func_8012C6B4(0x3C) / D_80389C98 + D_80389CA0, 0, 0);
    if (cnt == 0xA) {
        func_80005700(arg0);
    }
}
