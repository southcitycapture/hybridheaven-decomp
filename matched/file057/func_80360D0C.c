#include "common.h"
#define ZQ(a, b) a##_##b
#define ZP(a, b) ZQ(a, b)
#define zA_513 func_8035AFEC_ctx513
#define zA_566 func_8035AFEC
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
typedef union func_80359F54_Flags {
    s32 word;
    struct {
        u8 bit7 : 1;
        u8 rest0 : 6;
        u8 bit0 : 1;
        u8 bit15 : 1;
        u8 rest1 : 4;
        u8 low3 : 3;
        u8 pad[2];
    } b;
} func_80359F54_Flags;
void func_800058DC(void *arg0, void *arg1);
typedef struct func_8035F544_Copy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035F544_Copy;
extern s32 func_80011140(s32, s32, func_8035F544_Copy, s32);
typedef struct func_80360EF8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360EF8_Struct;
extern void func_8013A28C(s32, func_80360EF8_Struct);
extern void func_802237B0(void *arg0, s32 arg1);
extern s32 func_80224AC4();
extern void func_802256E4(func_80360EF8_Struct *, s32, s32);
extern void func_8035AFEC();
typedef struct func_80360020_Struct0 {
    u8 pad[0x36];
    u16 unk36;
} func_80360020_Struct0;
typedef struct func_80360394_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80360394_Struct;
typedef struct func_80360AA8_Struct {
    u8 pad[0x30];
    u32 pad0 : 9;
    u32 f : 2;
    u32 pad1 : 21;
    u8 pad3[0x2F9 - 0x34];
    u8 unk2F9;
    u8 pad2[0x392 - 0x2FA];
    u8 unk392;
} func_80360AA8_Struct;
void func_80360EF8(s32 arg0, s32 arg1);
extern void func_80360F9C();

extern s32 func_8022560C(s32);
extern void func_80224BEC(void *, s32);

void func_80360D0C(func_80360020_Struct0 *arg0, s32 arg1) {
    s32 sp44;
    s32 var_v0;
    u16 var_v1;
    u8 sp3D;
    func_80360AA8_Struct *var_s0;
    func_80360EF8_Struct sp2C;

    sp44 = ((func_80360394_Struct *)arg0)->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        var_s0 = (func_80360AA8_Struct *)D_801BC03C;
    } else {
        var_s0 = (func_80360AA8_Struct *)D_801BC3D8;
    }
    func_802237B0(arg0, 1);
    if (arg0->unk36 == 0x11D) {
        sp3D = 0;
    } else {
        sp3D = func_80224AC4(arg0, 0);
    }
    if (func_8022560C(sp44) == 0) {
        var_v1 = 1;
    } else {
        if (var_s0->f == 0) {
            var_s0->f = var_s0->unk2F9 + 2;
        }
        func_802256E4(&sp2C, (s32)arg0, 0);
        var_v1 = func_80011140(arg1, sp44, *(func_8035F544_Copy *)&sp2C, (var_s0->f != 0) ? 3 : 10);
    }
    if (var_v1 != 0) {
        if (var_s0->f == 0) {
            var_s0->f = var_s0->unk2F9 + 2;
        }
        if (sp3D != 0) {
            func_80224BEC(arg0, arg1);
            func_800058DC(arg0, func_80360EF8);
        } else {
            func_802256E4(&sp2C, (s32)arg0, 0x1D);
            func_8013A28C(arg1, sp2C);
            func_800058DC(arg0, func_80360F9C);
        }
    }
    var_s0->unk392 = 0;
}
