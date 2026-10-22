#include "context.h"

typedef struct func_8001E4C0_StructDraw {
    u8 pad[8];
    u16 flags;
    u8 padA[2];
    void *data;
} func_8001E4C0_StructDraw;
extern func_8001E4C0_StructDraw D_800448F4;
extern void func_80116E80(s32, void *, void *);

typedef struct func_8001E4C0_StructState {
    u8 pad[0x154];
    u16 unk154;
    u16 unk156;
    u16 unk158;
    u8 unk15A;
    u8 unk15B;
    u8 unk15C;
    u8 unk15D;
    u8 unk15E;
    u8 pad15F;
    s32 unk160;
    u8 unk164;
} func_8001E4C0_StructState;
struct func_8001E87C_Struct;
extern struct func_8001EA48_Struct D_801BBBF0;
void func_8001E768(void *arg0, struct func_8001E87C_Struct **arg1);
void func_8001E66C(s32 arg0, struct func_8001E87C_Struct **arg1);
void func_8001E87C(s32 arg0, struct func_8001E87C_Struct **arg1);
#define S4C0 (*(func_8001E4C0_StructState *)&D_801BBBF0)
typedef struct func_8001E4C0_StructRect {
    s16 x, y, w, h;
    u8 r, g, b, a;
    u8 pad[4];
    s16 flags, end;
    u8 tail[0x28];
} func_8001E4C0_StructRect;
#define sp2C rect.x
#define sp2E rect.y
#define sp30 rect.w
#define sp32 rect.h
#define sp34 rect.r
#define sp35 rect.g
#define sp36 rect.b
#define sp37 rect.a
#define sp3C rect.flags
#define sp3E rect.end
typedef struct func_8001E4C0_Bits {
    u8 flag : 1;
    u8 mid : 3;
    u8 lo : 4;
} func_8001E4C0_Bits;
void func_8001E4C0(s32 arg0, s32 arg1) {
    func_8001E4C0_StructRect rect;
    s32 var_v0;
    s32 mode;
    s32 state;

    sp2C = 0;
    sp2E = 0;
    sp32 = (sp30 = 320) - 80;
    sp34 = S4C0.unk15A;
    sp35 = S4C0.unk15B;
    sp36 = S4C0.unk15C;
    if (func_801302CC() && (sp34 || sp35 || sp36)) {
        sp2E = 45;
        sp32 = 150;
    }
    state = S4C0.unk15D;
    if (state == 2 || state == 0) {
        sp37 = 255;
        sp3C = 0;
    } else {
        sp37 = 0;
        sp3C = 0x1002;
    }
    sp3E = 0;
    D_800448F4.data = &sp2C;
    if (S4C0.unk15E) D_800448F4.flags = 128;
    else D_800448F4.flags = 4;
    if (S4C0.unk15E) var_v0 = 128;
    else var_v0 = 4;
    func_80116E80(var_v0 & 0xFFFF, &D_800448F4, &D_801BBBF0);
    func_80005E44(arg0, &D_800448F4);
    state = S4C0.unk15D;
    if (S4C0.unk15D == 2) S4C0.unk158 = S4C0.unk154;
    else S4C0.unk158 = 0;
    state |= state << 4;
    S4C0.unk15D = state;
    ((func_8001E4C0_Bits *)&S4C0.unk15D)->flag = 1;
    S4C0.unk164 = 1;
    if ((S4C0.unk15D & 0xF) == 0) {
        func_800058DC(arg0, (void (*)(void))func_8001E768);
        return;
    }
    if ((S4C0.unk15D & 0xF) == 2) {
        func_800058DC(arg0, (void (*)(void))func_8001E87C);
        return;
    }
    func_800058DC(arg0, (void (*)(void))func_8001E66C);
}
#undef S4C0
#undef sp2C
#undef sp2E
#undef sp30
#undef sp32
#undef sp34
#undef sp35
#undef sp36
#undef sp37
#undef sp3C
#undef sp3E
