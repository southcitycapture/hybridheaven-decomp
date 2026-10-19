#include "context.h"

extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_8025C290[];
extern f32 D_8025C5C0;
extern u8 D_801BBF7C[];
extern func_80246E60_StructGlobal D_80258F78;
extern u8 func_80247754[];

typedef struct func_802475F0_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x24];
    void *unk54;
    void *unk58;
    void *unk5C;
    u8 pad60[0x30];
    s16 unk90;
} func_802475F0_Struct;

void func_802475F0(func_802475F0_Struct *arg0, void *arg1) {
    void *sp64;
    f32 sp58[3];

    sp64 = arg0->unk5C;
    if (func_80244F28((s32)arg0) == 0) {
        func_8013A334(sp58, (s32)arg1, (s32)sp64, 6);
        func_8011AAF4(D_8025C290, 0x4C0, arg0, 0, 1, 4.0f, 80.0f, 213.0f, D_8025C5C0, 4294967296.0f, sp58[0], sp58[1], sp58[2], 0.0f, 35.0f, -1, -1);
        D_8025C704 = 0;
        D_801BBF7C[0x10] = 0;
        if (func_8012CE9C((s32)arg1, sp64, D_80258F78, 0xA) == 0) {
            D_8025C708 = 0;
            arg0->unk90 = 0x33;
            arg0->unk54 = 0;
            arg0->unk2C = arg0->unk2C & ~0x340;
            func_800058DC(arg0, func_80247754);
        }
    }
}
