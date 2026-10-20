#include "context.h"

typedef struct func_802410BC_S2 {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[0x4];
    f32 unk20;
} func_802410BC_S2;
typedef struct func_802410BC_S1 {
    u8 pad0[0x2C];
    func_802410BC_S2 *unk2C;
} func_802410BC_S1;
typedef struct func_802410BC_S3 {
    u8 pad0[0x22];
    u8 unk22;
} func_802410BC_S3;
typedef struct func_802410BC_S0 {
    u8 pad0[0x24];
    func_802410BC_S3 *unk24;
    u8 pad1[0x6A];
    u16 unk92;
} func_802410BC_S0;
extern f64 D_8025BE10;
extern s32 D_801BCCC0;
extern void func_8024114C();

void func_802410BC(func_802410BC_S0 *arg0, func_802410BC_S1 **arg1) {
    f64 k;
    if (arg0->unk92 != 0) {
        k = D_8025BE10;
        arg0->unk92 = arg0->unk92 - 1;
        (*arg1)->unk2C->unk18 = (f64)(*arg1)->unk2C->unk18 - k;
        (*arg1)->unk2C->unk20 = (f64)(*arg1)->unk2C->unk20 - k;
    } else {
        arg0->unk24->unk22 = 0;
        D_801BCCC0 = 0;
        arg0->unk92 = 0x80;
        func_800058DC((s32)arg0, (void *)func_8024114C);
    }
}
