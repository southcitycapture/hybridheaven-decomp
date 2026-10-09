#include "common.h"


s32 func_8001F74C(void);
s32 func_8013B570(void *arg0, u16 arg1, s32 arg2, s32 arg3, void *arg4);
extern u8 func_80150DB4[];

typedef struct func_80150D70_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_80150D70_Struct;

void func_80150D70(void *arg0, s32 arg1)
{
  if (1)
  {
  }
  func_8001F74C();
  func_8013B570(arg0, ((func_80150D70_Struct *) arg0)->unk92, 0, 3, func_80150DB4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80150D70/func_80150DB4.s")


typedef struct func_80150E60_Struct {
    u8 pad[0x91];
    u8 unk91;
} func_80150E60_Struct;

extern s32 (*D_801832F0[])(void);

void func_80150E60(func_80150E60_Struct *arg0) {
    s32 (*temp_v0)(void);

    temp_v0 = D_801832F0[arg0->unk91];
    if ((temp_v0 != NULL) && (temp_v0() == 0)) {
        arg0->unk91 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80150D70/func_80150EA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80150D70/func_80150EE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80150D70/func_80150F7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80150D70/func_80150FE8.s")


typedef struct func_8015105C_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x90 - 0x4C];
    u8 unk90;
    u8 unk91;
    u16 unk92;
} func_8015105C_Struct;

typedef struct func_8015105C_Vals {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_8015105C_Vals;

extern void func_8001F790(void *);
extern func_8015105C_Struct *func_8012C4D0(s32, func_8015105C_Vals, s32);
extern func_8015105C_Vals D_80183300;
extern s32 D_801BBC2C;

func_8015105C_Struct *func_8015105C(u16 arg0) {
    func_8015105C_Struct *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_80183300, 1);
    if (temp_v0 != NULL) {
        func_8001F790(temp_v0);
        temp_v0->unk2C = temp_v0->unk2C | 0x20;
        temp_v0->unk90 = 1;
        temp_v0->unk91 = 0;
        temp_v0->unk92 = arg0;
        temp_v0->unk40 = 0.0f;
        temp_v0->unk44 = 0.0f;
        temp_v0->unk48 = 0.0f;
        return temp_v0;
    }
    return NULL;
}


typedef struct func_80151114_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_80151114_Struct;

s32 func_8001F7B0(void);
void func_800058DC(void *arg0, void *arg1);
extern u8 func_80150EA8[];

s32 func_80151114(func_80151114_Struct *arg0) {
    if ((arg0 != NULL) && (func_8001F7B0() != 0)) {
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80150EA8);
        return 1;
    }
    return 0;
}


s32 func_801517CC();

typedef struct func_8015115C_Vec {
    s32 x;
    s32 y;
    s32 z;
} func_8015115C_Vec;

typedef struct func_8015115C_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 pad1[0x6];
    func_8015115C_Vec unk98;
} func_8015115C_Struct;

s32 func_8015115C(func_8015115C_Struct *arg0, func_8015115C_Vec *arg1) {
    if (func_801517CC() != 0) {
        arg0->unk90 = arg0->unk90 | 2;
        arg0->unk91 = 1;
        arg0->unk98 = *arg1;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80150D70/func_801511C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80150D70/func_8015122C.s")


typedef struct func_80151294_Struct {
    u8 pad[0x91];
    u8 unk91;
} func_80151294_Struct;

s32 func_80151294(func_80151294_Struct *arg0) {
    if (func_801517CC() != 0) {
        arg0->unk91 = 0;
        return 1;
    }
    return 0;
}


typedef struct func_801512CC_Vec {
    s32 pad0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801512CC_Vec;

typedef struct func_801512CC_Mid {
    u8 pad0[0x2C];
    func_801512CC_Vec *unk2C;
} func_801512CC_Mid;

typedef struct func_801512CC_Struct {
    u8 pad0[0x24];
    func_801512CC_Mid *unk24;
} func_801512CC_Struct;

s32 func_801517CC(void);

s32 func_801512CC(func_801512CC_Struct *arg0, f32 arg1, f32 arg2, f32 arg3) {
    if (func_801517CC() != 0) {
        arg0->unk24->unk2C->unk4 = arg1;
        arg0->unk24->unk2C->unk8 = arg2;
        arg0->unk24->unk2C->unkC = arg3;
        return 1;
    }
    return 0;
}


s32 func_8015133C(func_801512CC_Struct *arg0, f32 *arg1) {
    if (func_801517CC() != 0) {
        arg1[0] = arg0->unk24->unk2C->unk4;
        arg1[1] = arg0->unk24->unk2C->unk8;
        arg1[2] = arg0->unk24->unk2C->unkC;
        return 1;
    }
    return 0;
}


s32 func_801513A8(func_801512CC_Struct *arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_801512CC_Vec *temp_v1;

    if (func_801517CC() != 0) {
        temp_v1 = arg0->unk24->unk2C;
        temp_v1->unk4 = temp_v1->unk4 + arg1;
        temp_v1 = arg0->unk24->unk2C;
        temp_v1->unk8 = temp_v1->unk8 + arg2;
        temp_v1 = arg0->unk24->unk2C;
        temp_v1->unkC = temp_v1->unkC + arg3;
        return 1;
    }
    return 0;
}


typedef struct func_80151430_Struct2 {
    u8 pad[0x12];
    u16 unk12;
} func_80151430_Struct2;

typedef struct func_80151430_Struct1 {
    u8 pad[0x2C];
    func_80151430_Struct2 *unk2C;
} func_80151430_Struct1;

typedef struct func_80151430_Struct0 {
    u8 pad[0x24];
    func_80151430_Struct1 *unk24;
} func_80151430_Struct0;

s32 func_80151430(func_80151430_Struct0 *arg0, u16 arg1) {
    if (func_801517CC() != 0) {
        arg0->unk24->unk2C->unk12 = arg1;
        return 1;
    }
    return 0;
}


s32 func_801517CC();

struct func_80151478_Struct2 {
    u8 pad[0x12];
    u16 unk12;
};

struct func_80151478_Struct1 {
    u8 pad[0x2C];
    struct func_80151478_Struct2 *unk2C;
};

struct func_80151478_Struct0 {
    u8 pad[0x24];
    struct func_80151478_Struct1 *unk24;
};

u16 func_80151478(struct func_80151478_Struct0 *arg0) {
    if (func_801517CC() != 0) {
        return arg0->unk24->unk2C->unk12;
    }
    return 0xFFFFU;
}


typedef struct func_801514B0_Struct2C {
    u8 pad[0x12];
    s16 unk12;
} func_801514B0_Struct2C;

typedef struct func_801514B0_Struct24 {
    u8 pad[0x2C];
    func_801514B0_Struct2C *unk2C;
} func_801514B0_Struct24;

typedef struct func_801514B0_Struct {
    u8 pad[0x24];
    func_801514B0_Struct24 *unk24;
} func_801514B0_Struct;

s32 func_801517CC();

s32 func_801514B0(func_801514B0_Struct *arg0, s16 arg1)
{
  func_801514B0_Struct2C *temp_v1;
  if (func_801517CC())
  {
    temp_v1 = arg0->unk24->unk2C;
    temp_v1->unk12 = (s16) (((short) (temp_v1->unk12 + arg1)) & 0x1FFF);
    return 1;
  }
  return 0;
}


typedef struct func_80151504_Struct {
    u8 pad[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_80151504_Struct;

s32 func_80151504(func_80151504_Struct *arg0, f32 arg1, f32 arg2, f32 arg3) {
    if (func_801517CC() != 0) {
        arg0->unk40 = arg1;
        arg0->unk44 = arg2;
        arg0->unk48 = arg3;
        return 1;
    }
    return 0;
}


extern s32 func_801517CC();

struct func_8015155C_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
};

struct func_8015155C_Dst {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};

s32 func_8015155C(struct func_8015155C_Struct *arg0, struct func_8015155C_Dst *arg1) {
    if (func_801517CC() != 0) {
        arg1->unk0 = arg0->unk40;
        arg1->unk4 = arg0->unk44;
        arg1->unk8 = arg0->unk48;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80150D70/func_801515B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80150D70/func_80151640.s")


typedef struct func_801516CC_Struct1 {
    u8 pad[0xC];
    u16 unkC;
} func_801516CC_Struct1;

typedef struct func_801516CC_Struct0 {
    u8 pad[0x5C];
    func_801516CC_Struct1 *unk5C;
} func_801516CC_Struct0;

u16 func_801516CC(func_801516CC_Struct0 *arg0) {
    func_801516CC_Struct1 *sp1C;

    sp1C = arg0->unk5C;
    if (func_801517CC() != 0) {
        return sp1C->unkC;
    }
    return 0xFFFFU;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80150D70/func_80151700.s")


s32 func_801517CC();                                /* extern */

typedef struct func_80151790_Struct {
    u8 pad[0x91];
    u8 unk91;
} func_80151790_Struct;

s32 func_80151790(func_80151790_Struct *arg0) {
    s32 var_v0;

    if (func_801517CC() == 0) {
        goto set_one;
    }
    var_v0 = 0;
    if (arg0->unk91 == 0) {
        goto done;
    }
set_one:
    return 1;
done:
    return var_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80150D70/func_801517CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80150D70/func_8015180C.s")

