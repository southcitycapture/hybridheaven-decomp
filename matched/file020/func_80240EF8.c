#include "common.h"

typedef struct func_80240EF8_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
} func_80240EF8_Struct;

extern s32 func_801C3044(void);
extern void func_801C2F0C(s32 arg0, func_80240EF8_Struct *arg1);
extern void func_80020718(s32 arg0);
extern void func_800058DC(void *arg0, void *arg1);
extern void func_80240F7C(void);

void func_80240EF8(void *arg0, void *arg1) {
    u8 pad[0x10];
    func_80240EF8_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0x1000;
        sp18.b = 0x01680041;
        sp18.c = 3.0f;
        sp18.d = 0x14;
        func_801C2F0C(5, &sp18);
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_80020718(0x153);
        func_80020718(0x154);
        func_800058DC(arg0, func_80240F7C);
    }
}
