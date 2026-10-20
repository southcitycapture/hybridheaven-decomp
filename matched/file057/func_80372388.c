#include "context.h"

struct func_80372388_StructA { u8 pad[0x5C]; s32 unk5C; };
struct func_80372388_StructB { s16 unk0; u8 pad[0x2E]; u32 unk30; u8 pad2[0x66]; u16 unk9A; };
struct func_80372388_StructC { u8 pad[0x2C]; f32 *unk2C; };
struct func_80372388_StructD { u8 pad[0x6C]; f32 unk6C; f32 unk70; f32 unk74; u8 unk78; u8 unk79; u8 unk7A; u8 unk7B; u8 unk7C; u8 pad2[3]; f32 unk80; };
extern void func_80020718(s32);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80387C14[];

void func_80372388(struct func_80372388_StructA *arg0, void **arg1) {
    struct func_80372388_StructB *v1;
    s32 sp38;
    u8 pad[4];
    f32 *sp30;
    f32 sp24[3];
    s32 v0;
    struct func_80372388_StructD *r;
    extern void *func_80005670();

    if ((s32)arg0 == D_801BBCCC) {
        v1 = (void *)D_801BC03C;
    } else {
        v1 = (void *)D_801BC3D8;
    }
    sp38 = arg0->unk5C;
    sp30 = ((struct func_80372388_StructC *)*arg1)->unk2C;
    func_80020718(0x13A);
    func_8013A334(sp24, (s32)arg1, sp38, (u16)(((v1->unk30 << 9) >> 30) == 3 ? 0x1D : 0x1C));
    r = func_80005670(arg0, D_80387C14);
    if (r != NULL) {
        r->unk6C = sp24[0];
        r->unk70 = sp24[1] - 10.0;
        r->unk74 = sp24[2];
        r->unk78 = 0;
        r->unk79 = 0;
        r->unk7A = 0;
        r->unk7B = 0;
        if (v1->unk9A < v1->unk0 / 8) {
            r->unk7C = 0;
        } else {
            r->unk7C = 1;
        }
        r->unk80 = sp30[2];
    }
}
