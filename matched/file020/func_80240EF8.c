#include "common.h"
extern void func_800058DC(void *arg0, void *arg1);
extern void func_80020718(s32 arg0);
typedef struct func_80240EF8_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
} func_80240EF8_Struct;
extern void func_801C2F0C(s32 arg0, struct func_80240EF8_Struct *arg1);
extern s32 func_801C3044(void);
struct func_80240F7C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
struct func_80240F7C_StructInner {
    u8 pad[0x4B];
    u8 unk4B;
};
struct func_80240F7C_StructObj {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_80240F7C_StructInner *unk30;
};
void func_80240F7C(struct func_80240F7C_Struct *arg0, struct func_80240F7C_StructObj **arg1);


typedef struct func_80240EF8_Local {
    func_80240EF8_Struct cfg;
    s32 extra[4];
} func_80240EF8_Local;

void func_80240EF8(void *arg0, void *arg1) {
    func_80240EF8_Local sp18;

    if (func_801C3044() == 0) {
        sp18.cfg.a = 0x1000;
        sp18.cfg.b = 0x01680041;
        sp18.cfg.c = 3.0f;
        sp18.cfg.d = 0x14;
        func_801C2F0C(5, &sp18.cfg);
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_80020718(0x153);
        func_80020718(0x154);
        func_800058DC(arg0, func_80240F7C);
    }
}
