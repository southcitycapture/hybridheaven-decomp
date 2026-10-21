#include "context.h"

typedef struct func_8012BFA0_Struct {
    u8 pad0[0x24];
    func_8012A774_Obj *unk24;
    u8 pad28[4];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x10];
    f32 unk44;
    u8 pad48[0x10];
    s32 unk58;
} func_8012BFA0_Struct;

extern s32 func_8012B85C();
extern s32 D_8001EF38(f32, f32, void *);

void func_8012BFA0(func_8012BFA0_Struct *arg0) {
    s32 r;
    u32 v;
    s32 y;
    u16 a;

    if (arg0->unk2C & 0x100) {
        if (arg0->unk30 & 4) {
            arg0->unk30 |= 2;
        } else {
            arg0->unk30 &= ~2;
        }
        arg0->unk30 &= ~4;
        arg0->unk30 &= ~0xD8;
        r = func_8012B85C();
        arg0->unk58 = *(s32 *)(D_801BBBF0 + 0xD2C);
        v = r * 1;
        if (r != 0) {
            if (v & 0x21F) {
                arg0->unk30 |= 4;
                arg0->unk44 = 0.0f;
            }
            if (v & 0x1E0) {
                if (*(s32 *)(D_801BBBF0 + 0xD3C) != 0x21) {
                    arg0->unk30 |= 8;
                } else {
                    arg0->unk30 |= 0x80;
                }
            }
            if (v & 0x20) {
                y = ((u16)D_8001EF38((f32)(u32)-*(s32 *)(D_801BBBF0 + 0xD38), (f32)*(u32 *)(D_801BBBF0 + 0xD30), D_801BBBF0) + 0x1800);
                a = (arg0->unk24->unk2C->unk12 - (s16)y - 0x1000) & 0x1FFF;
                if (a < 0x400 || (a >= 0x1C01 && a < 0x1FFF)) {
                    if (*(s32 *)(D_801BBBF0 + 0xD3C) != 0x21) {
                        arg0->unk30 |= 0x10;
                    } else {
                        arg0->unk30 |= 0x40;
                    }
                }
            }
        }
    }
}
