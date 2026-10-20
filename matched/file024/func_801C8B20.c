#include "context.h"

typedef struct func_801C8B20_Inner {
    u8 pad[8];
    f32 unk8;
    u8 pad2[0x3C];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C8B20_Inner;
typedef struct func_801C8B20_Outer {
    u8 pad[0x30];
    func_801C8B20_Inner *unk30;
} func_801C8B20_Outer;
typedef struct func_801C8B20_Arg {
    u8 pad[0x94];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801C8B20_Arg;
extern void func_80005700(void *);
extern f32 func_8001EAD0(s16);
extern f64 D_801CF3B8;

void func_801C8B20(func_801C8B20_Arg *arg0, func_801C8B20_Outer **arg1) {
    f32 sp24;
    func_801C8B20_Inner *t;

    t = (*arg1)->unk30;
    t->unk8 = (f32) ((f64) t->unk8 + D_801CF3B8);
    sp24 = (*arg1)->unk30->unk8;
    arg0->unk94 = arg0->unk94 + 0x64;
    arg0->unk96 = arg0->unk96 + 0x96;
    arg0->unk98 = arg0->unk98 + 0xC8;
    (*arg1)->unk30->unk48 = (u32) ((f64) ((func_8001EAD0(arg0->unk94) + 1.0f) * 255.0f) * 0.5);
    (*arg1)->unk30->unk49 = (u32) ((f64) ((func_8001EAD0(arg0->unk96) + 1.0f) * 255.0f) * 0.5);
    (*arg1)->unk30->unk4A = (u32) ((f64) ((func_8001EAD0(arg0->unk98) + 1.0f) * 255.0f) * 0.5);
    if (sp24 > 30.0f) {
        func_80005700(arg0);
    }
}
