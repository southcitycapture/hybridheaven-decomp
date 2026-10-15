#include "context.h"
typedef struct func_802474E4_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_802474E4_StructNode;
typedef struct func_802474E4_StructMid {
    u8 pad0[0x2C];
    func_802474E4_StructNode *unk2C;
} func_802474E4_StructMid;
extern func_802474E4_StructMid *D_801BBCD0;
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

extern u8 D_8025C038[];
extern f32 D_8025C588;
extern f32 D_8025C58C;

s32 func_80245010(s32 arg0) {
    if (*(f32 *)(*(u8 **)((u8 *)D_801BBCD0 + 0x2C) + 8) < 199.0f) {
        func_8011AAF4(D_8025C038, 0x18D, (void *)arg0, 0, 1, 4.0f, -10.0f, D_8025C588, 250.0f, 4294967296.0f, -8.0f, 278.0f, D_8025C58C, 0.0f, 35.0f, -1, -1);
        return 1;
    }
    return 0;
}
