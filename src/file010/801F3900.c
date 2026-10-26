#include "common.h"


typedef struct func_801F3900_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x6];
    u16 unk36;
    u8 pad2[0x3C];
    s32 unk74;
} func_801F3900_Struct;

typedef struct func_801F3900_Inner {
    u32 unk0;
    u32 unk4;
} func_801F3900_Inner;

typedef struct func_801F3900_Entry {
    u16 *unk0;
    func_801F3900_Inner *unk4;
} func_801F3900_Entry;

extern s32 func_8000522C(u16, s32);
extern void func_800058DC(s32, void *);
extern void func_80005E44(s32, u8 *);
extern void func_80006214(s32);
extern void func_8012636C(s32, s32);
extern void func_8012C784(void *, s32, s32);
extern u8 D_80164F40[];
extern func_801F3900_Entry *D_80171CEC[];
extern void func_801F39A0(s32 arg0, s32 arg1);

void func_801F3900(func_801F3900_Struct *arg0, s32 arg1) {
    func_801F3900_Entry *temp_v0;

    func_80005E44(arg0, D_80164F40);
    func_80006214(arg0);
    arg0->unk2C = arg0->unk2C | 0x800;
    func_8012636C(arg0, 0);
    func_8012C784(arg0, 0, 0);
    temp_v0 = D_80171CEC[arg0->unk36];
    arg0->unk74 = func_8000522C(*temp_v0->unk0, temp_v0->unk4->unk4);
    func_800058DC(arg0, func_801F39A0);
}


void func_801F39A0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern void func_8012C89C(s32, s32, s32, s32);
#define func_801F3A18 func_801F3A18__decl55
extern void func_801F3A18(void);

void func_801F39AC(s32 arg0, s32 arg1) {
    func_80005E44(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_8012C89C(arg0, 0, 0x86, 0);
    func_800058DC(arg0, func_801F3A18);
}
#undef func_801F3A18

#define func_8012D844 func_8012D844__func_801F3A18
#define func_80133A24 func_80133A24__func_801F3A18
extern s32 func_80133A24(s32);
extern void func_8012D844(s32, s32, s32);

void func_801F3A18(s32 arg0, s32 arg1)
{
    s32 flags;

    flags = 0;
    if (func_80133A24(5)) flags = 1;
    if (func_80133A24(3)) flags |= 2;
    if (func_80133A24(6)) flags |= 4;
    if (flags == 0) goto zero;
    if (flags == 1) goto one;
    if (flags == 3) goto three;
    if (flags != 7) goto other;
    goto seven;
zero:
    func_8012D844(arg0, 0x78, 1);
    return;
one:
    func_8012D844(arg0, 0x78, 0);
    return;
three:
    func_8012D844(arg0, 0x78, 1);
    return;
seven:
    func_8012D844(arg0, 0x78, 0);
    return;
other:
    func_8012D844(arg0, 0x78, 0);
}
#undef func_8012D844
#undef func_80133A24

