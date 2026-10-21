#include "context.h"

typedef struct func_80243070_StructB {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[12];
    u32 unk10;
} func_80243070_StructB;

typedef struct func_80243070_StructA {
    u8 pad0[0x38];
    func_80243070_StructB *unk38;
} func_80243070_StructA;

extern void func_80127014(void);
extern void func_8024310C();
extern void func_8024388C();
extern s32 func_8013B570();

void func_80243070(func_80243070_StructA *arg0, s32 arg1) {
    u32 temp_v1;
    func_80243070_StructB *temp_v0;

    func_8001F74C(arg0);
    if (func_80126CC0(arg0, func_80127014) != 0) {
        temp_v0 = arg0->unk38;
        if (temp_v0) {}
        temp_v1 = temp_v0->unk10 >> 16;
        if (temp_v1 == 0) goto L0;
        if (temp_v1 != 1) goto end;
        goto L1;
L0:
        func_8013B570(arg0, temp_v0->unk2, 2, 4, func_8024310C);
        goto end;
L1:
        func_8013B570(arg0, temp_v0->unk2, 2, 4, func_8024388C);
    }
end:;
}
