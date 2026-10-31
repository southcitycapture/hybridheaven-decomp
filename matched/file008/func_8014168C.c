#include "common.h"
extern s32 func_800031EC(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
u8 func_800032E0(u8, s32, s32, s32, s32);
s32 func_8001F430(s32);
void func_8001F540(s32);
u8 func_801422E4(u8 arg0, s32 arg1);


typedef struct func_8014168C_Struct { u8 b[8]; } func_8014168C_Struct;
extern func_8014168C_Struct D_801BEC10[];
extern func_8014168C_Struct D_801BEC30[];
extern u8 D_80142350(u8, func_8014168C_Struct *);
extern u8 D_801422E4(u8, func_8014168C_Struct *);

u8 func_8014168C(arg0, arg1, arg2, arg3)
    u8 arg0;
    u8 arg1;
    u8 arg2;
    u8 arg3;
{
    u8 r;
    s32 sp20;
    func_8014168C_Struct *p;

    r = 0;
    sp20 = func_8001F430(0xD00);
    if (arg0 == 1) goto a1;
    if (arg0 != 2) goto b0;
    if (1) goto a2;
a1:
    r = func_801422E4(0, (s32)D_801BEC10);
    if (r == 0) {
        r = func_800031EC(0, 0, (arg2 * 0xD00 + 0x100) & 0xFFFF, 0xD00, sp20);
    }
    if (1) goto b0;
a2:
    r = func_801422E4(1, (s32)D_801BEC10);
    if (r == 0) {
        r = func_800031EC(1, 0, (arg2 * 0xD00 + 0x100) & 0xFFFF, 0xD00, sp20);
    }
b0:
    if (r != 0) goto end;
    switch (arg1) {
    case 1: goto c1;
    case 2: goto c2;
    default: goto end;
    }
c1:
    r = D_801422E4(0, D_801BEC30);
    p = D_801BEC30;
    if (r == 0) {
        p[arg3] = D_801BEC10[arg2];
        r = D_80142350(0, p);
    }
    if (r == 0) {
        r = func_800032E0(0, 0, (arg3 * 0xD00 + 0x100) & 0xFFFF, 0xD00, sp20);
    }
    if (1) goto end;
c2:
    r = func_801422E4(1, (s32)D_801BEC30);
    if (r == 0) {
        D_801BEC30[arg3] = D_801BEC10[arg2];
        r = D_80142350(1, D_801BEC30);
    }
    if (r == 0) {
        r = func_800032E0(1, 0, (arg3 * 0xD00 + 0x100) & 0xFFFF, 0xD00, sp20);
    }
end:
    func_8001F540(sp20);
    return r;
}
