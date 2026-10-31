#include "common.h"
extern void func_800058DC(void *arg0, s32 arg1);
extern s32 func_8012C6B4(s32);
s32 func_801CE0E8(void *arg0, s8 *a1);
typedef struct func_801CE898_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CE898_StructInner;
typedef struct func_801CE898_StructOuter {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
} func_801CE898_StructOuter;
void func_801CE898(func_801CE898_StructOuter *arg0, s32 arg1);


typedef struct func_801D5CA8_Struct {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[0x10];
    f32 unk88;
    u8 pad8C[6];
    s16 unk92;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
} func_801D5CA8_Struct;
typedef struct func_801D5CA8_Obj {
    u8 pad0[0x30];
    u8 *unk30;
} func_801D5CA8_Obj;
extern u8 func_801D58B8(f32);
extern void func_801D5ED0();
extern void func_801D59A8(void *, s32, s32, s32, f32, f32, f32);

void func_801D5CA8(func_801D5CA8_Struct *arg0, func_801D5CA8_Obj **arg1) {
    s32 sp5C;
    s16 sp5A;
    s8 sp59;
    u8 i;
    u8 *s;

    sp59 = 0;
    arg0->unk94 = func_801D58B8(arg0->unk88);
    if (arg0->unk94 == 0) {
        func_800058DC(arg0, (s32)func_801CE898);
        return;
    }
    if (func_801CE0E8(arg0, &sp59) == 0) {
        func_801D59A8(arg0, (s32)arg1, 0, *(s32 *)&arg0->unk88, arg0->unk6C, arg0->unk70, arg0->unk74);
        if (arg0->unk97 == 0x10) {
            i = 0;
            if (arg0->unk94 > 0) {
            do {
                s = arg1[i]->unk30;
                s[0x3B] = func_8012C6B4(8);
                if (arg0->unk95 == 0x2F && i >= (u8)(u32)((f64)arg0->unk88 / 0.7) && !(i & 3)) {
                    s[0x48] = 0xFF;
                    s[0x49] = 0xFF;
                    s[0x4A] = 0xFF;
                    s[0x4C] = 0xFF;
                    s[0x4D] = 0xA5;
                    s[0x4E] = 0x40;
                }
                i++;
            } while (i < arg0->unk94);
            }
        }
        arg0->unk92 = 0;
        func_800058DC(arg0, (s32)func_801D5ED0);
    }
}
