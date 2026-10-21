#include "context.h"

typedef struct func_801C8B98_Struct {
    u8 pad0[0x30];
    u8 *unk30;
} func_801C8B98_Struct;
typedef struct func_801C8B98_Obj {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
} func_801C8B98_Obj;
typedef struct func_801C8B98_K {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801C8B98_K;

extern void func_8012C89C(void *, s32, s32, s32);
extern u8 D_8038D89C[];
extern u8 D_801D8E60[];
extern void func_801C8D28();
extern void func_800058DC(s32 arg0, void (*arg1)(void));
extern s32 func_80005E44(s32, void *);
extern void func_80005700(s32 arg0);
void func_80006214(s32 arg0);
extern void func_8012CF8C(void *, u8 *, s32, s32);

#define P (*arg1)->unk30
void func_801C8B98(func_801C8B98_Obj *arg0, func_801C8B98_Struct **arg1) {
    u32 kb = (u32)&D_801E04C0;
#define k ((f32 *)kb)
    if (func_80005E44((s32)arg0, D_8038D89C) == 0) {
        func_80005700((s32)arg0);
        return;
    }
    func_80006214((s32)arg0);
    func_8012C89C(arg0, 0, 0xA7, 0);
    func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, 0xA8, 0);
    *(f32 *)(P + 4) = arg0->unk90 * ((func_801C8B98_K *)kb)->unkC + ((func_801C8B98_K *)kb)->unk0;
    *(f32 *)(P + 8) = arg0->unk94;
    *(f32 *)(P + 0xC) = arg0->unk98 * ((func_801C8B98_K *)kb)->unkC + ((func_801C8B98_K *)kb)->unk8;
    *(s16 *)(P + 0x12) = 0;
    P[0x48] = 0xFF;
    P[0x49] = 0xFF;
    P[0x4A] = 0xFF;
    P[0x4B] = 0x80;
    *(s32 *)(P + 0x24) = 0x100;
    *(f32 *)(P + 0x18) = k[5];
    *(f32 *)(P + 0x1C) = k[5];
    *(f32 *)(P + 0x20) = k[5];
    *(s32 *)(P + 0x30) = (s32)D_801D8E60 | 0x40000000;
    func_800058DC((s32)arg0, func_801C8D28);
}
#undef k
#undef P
