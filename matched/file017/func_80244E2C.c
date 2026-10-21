#include "context.h"

typedef struct func_80244E2C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x92 - 0x3E];
    u8 unk92;
} func_80244E2C_Struct;
typedef struct func_80244E2C_Struct2 {
    u8 pad0[4];
    u16 unk4;
    u16 unk6;
    u8 pad8[0x3A6 - 8];
    u8 unk3A6;
} func_80244E2C_Struct2;
typedef struct func_80244E2C_Struct3 {
    u8 pad0[0x30];
    u8 *unk30;
} func_80244E2C_Struct3;

extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern u8 D_8025C80C[];
extern func_80244E2C_Struct2 D_801BBBF0;

void func_80244E2C(func_80244E2C_Struct *arg0, func_80244E2C_Struct3 **arg1) {
    s32 k;
    s32 sp50;
    u8 *p;

    k = 5;
    sp50 = arg0->unk3C;
    arg0->unk3C++;
    func_80245040(arg0, arg1);
    if (sp50 == 0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        func_8011AAF4(D_8025C80C, 0x1FB, arg0, 0, 1, 0.0f, -324.0f, 28.0f, -26.0f, 0.0f, -336.0f, 22.0f, -18.0f, 0.0f, 35.0f, -1, -1);
    }
    if (sp50 >= 0x2D) {
        if (sp50 == 0x2D) {
            func_80020718(0x14F);
        }
        k = 5 - arg0->unk92;
        p = (*(func_80244E2C_Struct3 **)((u8 *)arg1 + (k << 2)))->unk30;
        if (p[0x4B] >= 5) {
            p[0x4B] -= 4;
        }
        if (sp50 == 0x96) {
            if (func_80133A24(0x128) != 0) {
                D_801BBBF0.unk6 = 1;
            } else if (func_80133A24(0x129) != 0) {
                D_801BBBF0.unk6 = 2;
            } else if (func_80133A24(0x12A) != 0) {
                D_801BBBF0.unk6 = 4;
            } else if (func_80133A24(0x12B) != 0) {
                D_801BBBF0.unk6 = 8;
            } else {
                D_801BBBF0.unk6 = 0;
            }
            func_80020718(0x65C);
            D_801BBBF0.unk3A6 = 0;
            D_801BBBF0.unk4 = 0x2B;
            func_8012FE50(0x1E, D_801BBBF0.unk4, 1, 1, 1);
        }
    }
}
