#include "context.h"

typedef struct {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801152B8_Struct1;

typedef struct {
    u8 pad0[0x2C];
    func_801152B8_Struct1 *unk2C;
} func_801152B8_Struct0;

extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32, f32);
extern s16 D_80163A10;
extern s16 D_80163A14;
extern f32 D_80163A1C;
extern func_801152B8_Struct0 *D_801BBCD8;

void func_801152B8(void) {
    f32 a;
    f32 b;
    f32 c;
    f32 r;
    func_801152B8_Struct1 *p;

    p = D_801BBCD8->unk2C;
    a = p->unk3C - p->unk30;
    b = p->unk40 - p->unk34;
    c = p->unk44 - p->unk38;
    r = func_8002FC20(a * a + c * c, a);
    D_80163A10 = func_8001EF38(c, a) & 0x1FFF;
    if (func_8001EF38(b, r) & 0x1000) {
        D_80163A14 = (func_8001EF38(b, r) & 0x1FFF) - 0x2000;
    } else {
        D_80163A14 = func_8001EF38(b, r) & 0x1FFF;
    }
    D_80163A1C = r;
}
