#include "context.h"

struct func_80205A60_Pos { u8 pad[4]; f32 x, y; s32 z; };
struct func_80205A60_Out { u8 pad[0x48]; u8 c0, c1, c2; u8 pad2; u8 d0, d1, d2; };
struct func_80205A60_Mid { u8 pad[0x30]; struct func_80205A60_Out *unk30; };
struct func_80205A60_Inner { u8 pad[0x10]; u32 unk10; };
struct func_80205A60_Obj { u8 pad[0x38]; struct func_80205A60_Inner *unk38; u16 unk3C; };
extern f32 func_8001EAD0(s16);
extern u8 D_802179D8[];
extern void func_801FC830(f32, f32, s32, f32, s32);

void func_80205A60(struct func_80205A60_Obj *arg0, struct func_80205A60_Mid **arg1) {
    u8 sp2F;
    u8 sp2E;
    u8 sp2D;
    s32 idx;
    u8 *p;
    f64 v;
extern s32 func_80133A24();

    idx = arg0->unk38->unk10 & 0xFFFF;
    if (idx != 0) {
        p = &D_802179D8[idx * 4];
        sp2E = p[1];
        sp2D = p[2];
        sp2F = p[0];
        (*arg1)->unk30->c0 = (u32)((func_8001EAD0((s16)(arg0->unk3C * 40) & 0x1FFF) * 0.3 + 0.3) * (f64)(0xFF - sp2F) + (f64)(u32)sp2F);
        (*arg1)->unk30->c1 = (u32)((func_8001EAD0((s16)(arg0->unk3C * 40) & 0x1FFF) * 0.3 + 0.3) * (f64)(0xFF - sp2E) + (f64)(u32)sp2E);
        (*arg1)->unk30->c2 = (u32)((func_8001EAD0((s16)(arg0->unk3C * 40) & 0x1FFF) * 0.3 + 0.3) * (f64)(0xFF - sp2D) + (f64)(u32)sp2D);
    } else {
        (*arg1)->unk30->c0 = (u32)(func_8001EAD0((s16)(arg0->unk3C * 100) & 0x1FFF) * 127.0f + 128.0f);
        (*arg1)->unk30->c1 = (u32)(func_8001EAD0((s16)(arg0->unk3C * 120) & 0x1FFF) * 127.0f + 128.0f);
        (*arg1)->unk30->c2 = (u32)(func_8001EAD0((s16)(arg0->unk3C * 140) & 0x1FFF) * 127.0f + 128.0f);
    }
    (*arg1)->unk30->d0 = (*arg1)->unk30->c0;
    (*arg1)->unk30->d1 = (*arg1)->unk30->c1;
    (*arg1)->unk30->d2 = (*arg1)->unk30->c2;
    arg0->unk3C = arg0->unk3C + 1;
    if (func_80133A24(arg0->unk38->unk10 >> 16)) {
        struct func_80205A60_Pos *q = (void *)(*arg1)->unk30;
        func_801FC830(q->x, q->y, q->z, 600.0f, 0x154);
        func_800058DC(arg0, (void *)func_80206118);
    }
}
