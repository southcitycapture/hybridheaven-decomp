#include "context.h"
struct func_80243224_Inner {
    u8 pad[0x4C];
    u8 unk4C;
    u8 unk4D;
};
struct func_80243224_Outer {
    u8 pad[0x30];
    struct func_80243224_Inner *unk30;
};
void func_80243224(s32 arg0, struct func_80243224_Outer **arg1);

typedef struct func_802430FC_Struct_Quad {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_802430FC_Struct_Quad;

typedef union func_802430FC_Union_Quad {
    s64 align;
    func_802430FC_Struct_Quad w;
} func_802430FC_Union_Quad;

typedef struct func_802430FC_Struct_Inner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x08];
    s32 unk30;
    u8 pad2[0x17];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802430FC_Struct_Inner;

typedef struct func_802430FC_Struct_Outer {
    u8 pad0[0x30];
    func_802430FC_Struct_Inner *unk30;
} func_802430FC_Struct_Outer;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8001F74C(s32);
extern void func_8012D918(s32, s32, s32, s32, s32);
extern func_802430FC_Union_Quad D_80164F40;
extern u32 D_80244338[];

void func_802430FC(s32 arg0, func_802430FC_Struct_Outer **arg1) {
    func_802430FC_Union_Quad sp28;

    sp28.w = D_80164F40.w;
    sp28.w.unk4 = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C((void *) arg0, 0, 0x293, 2);
    func_8012D918(arg0, 0x293, 3, 0, 0);
    (*arg1)->unk30->unk24 |= 0x4100;
    (*arg1)->unk30->unk30 = (s32) D_80244338 | 0x40000000;
    (*arg1)->unk30->unk4B = 0x80;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    func_8001F74C(arg0);
    func_800058DC((void *) arg0, (void *) func_80243224);
}
