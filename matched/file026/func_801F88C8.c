#include "common.h"
extern s32 D_801CFD40();
extern f32 D_801FB9CC;
extern f64 func_80034C24();
u64 func_801C0B2C();
s32 func_801C0B8C(u64 time);
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
struct func_801EC668_StructE {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_801EC668_StructD {
    u8 pad0[0x2C];
    struct func_801EC668_StructE *unk2C;
};
struct func_801EC668_StructC {
    u8 pad0[0x24];
    struct func_801EC668_StructD *unk24;
};
struct func_801EC668_StructB {
    u8 pad0[0x8];
    struct func_801EC668_StructC *unk8;
};
struct func_801EC668_StructA {
    u8 pad0[0x24];
    struct func_801EC668_StructB *unk24;
};
extern struct func_801EC668_StructA func_801DAAF0;


extern f64 D_801FD3D8;
extern f64 D_801FD3E0;

s32 func_801F88C8(s32 arg0, s32 arg1)
{
    u64 t;
    f64 elapsed;
    f64 base;

    if (func_801C0B8C(0x05392DB5) != 0) {
        func_801DAAF0.unk24->unk8->unk24->unk2C->unk8 = 0.0f;
        if (D_801CFD40() == 1) {
            return 0x18;
        }
        func_801CC470(0, 0x02A80015, 0, 0, 3.0f);
        return 0x19;
    }
    t = func_801C0B2C();
    elapsed = func_80034C24(t);
    base = D_801FB9CC;
    func_801DAAF0.unk24->unk8->unk24->unk2C->unk8 = D_801FB9CC + ((0.0 - base) * (((f64) ((f32) ((elapsed / D_801FD3D8) - D_801FD3E0))) / 5.0));
    return 0x18;
}
