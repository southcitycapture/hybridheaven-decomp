#include "common.h"
struct func_8037EABC_Struct {
    u8 pad0[0x10];
    struct func_8037EABC_Struct *unk10;
    u8 pad1[0xE];
    u8 unk22;
    u8 pad2[0x72];
    u8 unk95;
    s8 unk96;
};
extern struct func_8037EABC_Struct *D_8038A9C0;
extern void func_800058DC(void *a0, void (*a1)());
extern u8 func_80006214(void);
extern s32 func_80126A0C(void *a0, s32 a1, s32 a2);
extern void func_80145348(s32, s32, s32);
extern void func_80146208(s32, void *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);
void func_8037F3B4(void);
typedef struct func_80380C5C_Struct {
    u8 pad0[0x4];
    u16 unk4;
    u8 pad1[6];
    u16 unkC;
} func_80380C5C_Struct;
typedef struct func_80380C5C_Obj {
    u8 pad0[0x96];
    s8 unk96;
    u8 pad1[0xD];
    func_80380C5C_Struct *unkA4;
} func_80380C5C_Obj;
void func_80380C5C(func_80380C5C_Obj *arg0, s32 arg1);

extern void func_8037EDF4(void *);
extern void func_8037EF2C(void *);
extern s32 D_8038A99C;
extern s32 D_8038A9C8;

void func_803809A4(u8 *arg0, s32 *arg1)
{
    s16 sp5E;
    u8 sp5D;
    s32 i;
    s32 j;
extern u8 func_80006214();

    if (func_80126A0C(arg0, 0x124, 0) != 0) {
        sp5D = func_80006214(arg0);
        func_80146208((s32)arg0, &sp5E, 0x26, 0x70, 0x25, 0x60, 0x14, 0, 0, 0xFF, 0x20E, 6);
        func_80146208((s32)arg0, &sp5E, 0x66, 0x80, 0x28, 0x40, 0x10, 0, 0, 0xFF, 0x21F, 0);
        func_80145348((s32)arg0, 1, 0);
        D_8038A99C = arg1[sp5D];
        sp5D = func_80006214(arg0);
        i = 0;
        j = 0;
loop:
        func_80146208((s32)arg0, &sp5E, 0x66, 0x94, (s16)((j * 0x14) + 0x46), 0x40, 0x10, 0, 0, 0xFF, 0x21F, 1);
        func_80146208((s32)arg0, &sp5E, 0x66, 0xDA, (s16)((j * 0x14) + 0x46), 0x40, 0x10, 0, 0, 0xFF, 0x21F, 1);
        i = (i + 1) & 0xFF;
        j = i;
        if (i < 6) goto loop;
        D_8038A9C8 = arg1[sp5D];
        func_80146208((s32)arg0, &sp5E, 0x66, 0x2A, 0x4A, 8, 8, 0, 0, 0xFF, 0x209, 6);
        func_80145348((s32)arg0, 0x1A, 3);
        D_8038A9C0 = (void *)arg1[func_80006214(arg0) - 1];
        arg0[0x96] = 0;
        func_8037F3B4();
        func_8037EDF4(arg0);
        func_8037EF2C(arg0);
        func_800058DC(arg0, func_80380C5C);
    }
}
