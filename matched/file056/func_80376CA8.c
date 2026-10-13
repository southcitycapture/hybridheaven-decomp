#include "context.h"
extern void func_8014B4A0(u16, f32 *);
typedef struct func_8037769C_Glob {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037769C_Glob;
extern func_8037769C_Glob D_80388778;
extern void func_80011140(s32, void *, func_8037769C_Glob, s32);

extern void func_801C4908(void *, s32, s32, s32);
extern s32 func_8012AE54(void *, s32, s32, f32);
extern void func_80376DC0();
extern struct func_8037769C_Glob D_80216B90;

struct func_80376CA8_Obj {
    u8 pad0[0x1C];
    s32 unk1C;
};
struct func_80376CA8_Struct {
    u8 pad0[0x5C];
    struct func_80376CA8_Obj *unk5C;
};

void func_80376CA8(struct func_80376CA8_Struct *arg0, s32 arg1) {
    u8 pad[0x10];
    f32 sp2C[3];
    struct func_80376CA8_Obj *temp_s0;

    temp_s0 = arg0->unk5C;
    func_8014B4A0(D_801BBBF8, sp2C);
    func_801C4908(arg0, *(s32 *)&sp2C[0], *(s32 *)&sp2C[2], 0x80);
    if (func_8012AE54(arg0, *(s32 *)&sp2C[0], *(s32 *)&sp2C[2], 3.0f) == 0) {
        func_80011198(arg1, (s32)temp_s0);
        func_80011140(arg1, temp_s0, D_80216B90, 5);
        func_800058DC(arg0, &func_80376DC0);
    }
    if (temp_s0->unk1C == 0x0168003E) {
        func_80010550(arg1, temp_s0);
        return;
    }
    func_80011140(arg1, temp_s0, D_80388778, 0xA);
}
