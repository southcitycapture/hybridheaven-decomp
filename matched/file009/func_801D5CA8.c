#include "common.h"
extern void func_800058DC(void *arg0, s32 arg1);
extern s32 func_8012C6B4(s32);
s32 func_801CE0E8(void *arg0, s8 *a1);
extern void func_801CE898();
u8 func_801D58B8(f32 arg0);


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
typedef struct func_801D5CA8_Out {
    u8 pad0[0x3B];
    u8 unk3B;
    u8 pad3C[0xC];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 pad4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_801D5CA8_Out;
typedef struct func_801D5CA8_Obj {
    u8 pad0[0x30];
    func_801D5CA8_Out *unk30;
} func_801D5CA8_Obj;
extern void func_801D5ED0();
extern void func_801D59A8(void *, s32, s32, s32, f32, f32, f32);

void func_801D5CA8(func_801D5CA8_Struct *arg0, func_801D5CA8_Obj **arg1) {
    s32 mode;
    s16 timer;
    s8 flag;
    u8 i;
    func_801D5CA8_Out *out;

    mode = 0;
    timer = 0;
    flag = 0;
    arg0->unk94 = func_801D58B8(arg0->unk88);
    if (arg0->unk94 == 0) {
        func_800058DC(arg0, (s32)func_801CE898);
        return;
    }
    if (func_801CE0E8(arg0, &flag) == 0) {
        func_801D59A8(arg0, (s32)arg1, mode, *(s32 *)&arg0->unk88, arg0->unk6C, arg0->unk70, arg0->unk74);
        if (arg0->unk97 == 0x10) {
            i = 0;
            if (arg0->unk94 > 0) {
            do {
                out = arg1[i]->unk30;
                out->unk3B = func_8012C6B4(8);
                if (arg0->unk95 == 0x2F && i >= (u8)(u32)((f64)arg0->unk88 / 0.7) && !(i & 3)) {
                    out->unk48 = 0xFF;
                    out->unk49 = 0xFF;
                    out->unk4A = 0xFF;
                    out->unk4C = 0xFF;
                    out->unk4D = 0xA5;
                    out->unk4E = 0x40;
                }
                i++;
            } while (i < arg0->unk94);
            }
        }
        arg0->unk92 = timer;
        func_800058DC(arg0, (s32)func_801D5ED0);
    }
}
