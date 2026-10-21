#include "context.h"
typedef struct func_80240BD4_StructA { u8 pad[0x20]; u16 w20; u8 pad22[2]; f32 f24; } func_80240BD4_StructA;
typedef struct func_80240BD4_StructB { u8 pad[8]; u8 b8; u8 b9; } func_80240BD4_StructB;
extern s32 func_80010550(s32 a0, void *a1);
extern u16 func_80011590(u16 a0);
extern void func_8013B808(void *a0, s32 a1, u8 a2);
extern void func_80226710(void *a0, s32 a1, s32 a2);
extern u8 D_80248C48[];
extern u16 D_80249500;
void func_80240D98(s32 arg0, s32 arg1);

void func_80240BD4(func_802408F0_Struct *arg0, s32 arg1) {
    func_80240BD4_StructA *sa;
    func_80240BD4_StructB *sb;

    sa = arg0->unk5C;
    sb = (func_80240BD4_StructB *)(D_80248C48 + D_80249500 * 16);
    if (sa->w20 == func_80011590((u32)(sa->f24 * sb->b8))) {
        if ((D_80249500 == 2) || (D_80249500 == 3)) {
            func_80226710(arg0, 0x509, 0x3F800000);
        } else if ((D_80249500 == 0xB) || (D_80249500 == 0xC) || (D_80249500 == 0xD)) {
            func_80226710(arg0, 0x229, 0x3F800000);
        } else if ((D_80249500 == 6) || (D_80249500 == 7)) {
            func_80226710(arg0, 0x5D7, 0x3F800000);
        } else {
            func_8013B808(arg0, arg1, sb->b9);
        }
    }
    if (func_80010550(arg1, sa) != 0) {
        func_800058DC(arg0, (void *)func_80240D98);
    }
}
