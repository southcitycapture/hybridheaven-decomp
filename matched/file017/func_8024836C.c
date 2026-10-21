#include "context.h"

typedef struct func_8024836C_Struct {
    u8 pad[0x30];
    struct func_8024836C_Struct *unk30;
    u8 pad34[8];
    u16 unk3C;
    u8 pad3E[0x4B - 0x3E];
    u8 unk4B;
    u8 pad4C[0x92 - 0x4C];
    u8 unk92;
} func_8024836C_Struct;

extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
struct func_80248538_Args;
void func_80248538(s32 arg0, struct func_80248538_Args *arg1);
extern u8 D_8025CA84[];
extern f32 D_8025CAC4;
extern u8 D_801BBBF0[];

void func_8024836C(func_8024836C_Struct *arg0, s32 *arg1) {
    func_8024836C_Struct *v;
    s32 sp50;
    s32 i;
    s32 k;

    sp50 = arg0->unk3C;
    arg0->unk3C = arg0->unk3C + 1;
    func_80248538((s32)arg0, (struct func_80248538_Args *)arg1);
    if (sp50 == 0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        func_8011AAF4(D_8025CA84, 0x1B5, arg0, 0, 1, 0.0f, -302.0f, -196.0f, 35.0f, 0.0f, D_8025CAC4, -183.0f, 2.0f, 0.0f, 35.0f, -1, -1);
    }
    if (sp50 >= 0x2D) {
        if (sp50 == 0x2D) {
            func_80020718(0x14F);
        }
        i = 3 - arg0->unk92;
        v = ((func_8024836C_Struct **)arg1)[i]->unk30;
        if (v->unk4B >= 5) {
            v->unk4B -= 4;
        }
        if (sp50 == 0x96) {
            if (func_80133A24(0x128) != 0) {
                *(s16 *)(D_801BBBF0 + 6) = 2;
            } else if (func_80133A24(0x129) != 0) {
                *(s16 *)(D_801BBBF0 + 6) = 1;
            } else {
                *(s16 *)(D_801BBBF0 + 6) = 0;
            }
            func_80020718(0x65C);
            D_801BBBF0[0x3A6] = 0;
            *(u16 *)(D_801BBBF0 + 4) = 0x2F;
            func_8012FE50(0x1E, *(u16 *)(D_801BBBF0 + 4), 1, 1, 1);
        }
    }
}
