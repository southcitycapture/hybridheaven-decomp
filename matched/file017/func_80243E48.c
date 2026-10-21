#include "context.h"

struct func_80243E48_StructP { u8 pad[4]; f32 unk4; f32 unk8; };
struct func_80243E48_StructM { u8 pad[0x30]; struct func_80243E48_StructP *unk30; };
struct func_80243E48_StructA { u8 pad[0x14]; struct func_80243E48_StructM *unk14; };
extern s32 func_8001EF38(f32, f32);
extern f64 D_8025C788;
extern f64 D_8025C790;
extern f32 D_8025C798;

void func_80243E48(void *arg0, void *argp) {
    struct func_80243E48_StructA *arg1 = argp;
    struct func_80243E48_StructP *p;
    f32 b;
    f32 a;
    f32 v;
    f32 d;
    f32 fv;
    s32 r;

    p = arg1->unk14->unk30;
    p->unk8 = (f32)((f64)p->unk8 - D_8025C788);
    p = arg1->unk14->unk30;
    fv = p->unk8;
    if ((f64)fv < D_8025C790) {
        p->unk8 = D_8025C798;
        p = arg1->unk14->unk30;
        fv = p->unk8;
    }
    r = func_8001EF38(fv - CAM->unk8, p->unk4 - CAM->unk4) << 16;
    GB(0xF2C) = 0x6E;
    GB(0xF2D) = (s32)(func_8001EAD0(r >> 16) * 80.0f);
    *(s8 *)&GB(0xF2E) = -0x46;
    a = CAM->unk8;
    fv = arg1->unk14->unk30->unk8;
    b = fv;
    if (a < b) {
        d = -(a - b);
    } else {
        d = a - b;
    }
    v = (f32)(1.0 - ((f64)d / 200.0));
    if ((f64)v < 0.0) {
        v = 0.0f;
    }
    if ((f64)v > 1.0) {
        v = 1.0f;
    }
    GB(0xF29) = (u32)(20.0f * v);
    GB(0xF2A) = (u32)(255.0f * v);
    GB(0xF2B) = (u32)(20.0f * v);
    GB(0xF20) = (u32)(64.0f * v);
    GB(0xF21) = (u32)(64.0f * v);
    GB(0xF22) = (u32)(64.0f * v);
}
