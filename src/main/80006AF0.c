#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006AF0/D_8004C460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006AF0/func_80006AF0.s")


struct func_80006F8C_StructB {
    u8 pad[0x6C];
    u16 unk6C;
};
struct func_80006F8C_Struct {
    struct func_80006F8C_Struct *unk0;
    u8 pad4[4];
    struct func_80006F8C_Struct *unk8;
    u8 padC[0x1C];
    u16 unk28;
    u16 unk2A;
    struct func_80006F8C_StructB *unk2C;
};
extern s32 func_80006AB4(void *);
struct func_80006F8C_StructE {
    struct func_80006F8C_Struct *unk0;
    u8 pad[0x80];
};
extern struct func_80006F8C_StructE D_8005D050[][60];
extern u8 D_80062D20[];
extern struct func_80006F8C_Struct *D_8008D5D8[];

void func_80006F8C(u16 arg0, struct func_80006F8C_Struct *arg1) {
    struct func_80006F8C_Struct *s1;
    s32 s2;
    s32 a0;
    s32 v;
    u8 n;
    u8 *p;
    s32 t;

    s2 = 0;
    if (arg1 != NULL) {
        do {
            s1 = arg1->unk0;
            if ((arg1->unk28 & arg0) && func_80006AB4(arg1) && arg1->unk2A == 6) {
                v = arg1->unk2C->unk6C;
                if (v & 0xF0) {
                    if (v & 2) {
                        a0 = 0;
                    } else if (v & 4) {
                        a0 = 1;
                    } else {
                        a0 = 2;
                    }
                    D_8005D050[a0][D_80062D20[a0]++].unk0 = arg1;
                }
            }
            if (arg1->unk8 != NULL) {
                if (s1 != NULL) {
                    D_8008D5D8[s2] = s1;
                    s2++;
                }
                arg1 = arg1->unk8;
            } else if (s1 == NULL && (t = s2 - 1, s2 != 0)) {
                arg1 = D_8008D5D8[t];
                s2 = t;
            } else {
                arg1 = s1;
            }
        } while (arg1 != NULL);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006AF0/func_80007114.s")


struct func_80007328_StructVec {
    s32 x;
    s32 y;
    s32 z;
};

struct func_80007328_StructData {
    u8 pad[0x98];
    struct func_80007328_StructVec vec;
};

struct func_80007328_StructObject {
    u8 pad[0x2C];
    struct func_80007328_StructData *data;
};

extern void func_80007114();

void func_80007328(s32 arg0, struct func_80007328_StructObject **arg1) {
    func_80007114(arg0, (*arg1)->data->vec);
}


struct func_8000736C_Struct4 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct func_8000736C_Struct2 {
    u8 pad0[0xA4];
    struct func_8000736C_Struct4 unkA4;
};

struct func_8000736C_Struct3 {
    u8 pad0[0x2C];
    struct func_8000736C_Struct2 *unk2C;
};


void func_8000736C(struct func_8000736C_Struct3 **arg0)
{
  struct func_8000736C_Struct2 *temp_t7;
 temp_t7 = (*arg0)->unk2C; func_80007114(arg0, (*(*arg0)->unk2C).unkA4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006AF0/func_800073AC.s")


extern f32 func_8002FC20(f32, f32);

void func_800075B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    f32 dx;
    f32 dy;
    f32 dz;

    dx = *(f32 *)&arg0 - *(f32 *)&arg3;
    dy = *(f32 *)&arg1 - arg4;
    dz = *(f32 *)&arg2 - arg5;
    func_8002FC20((dx * dx) + (dy * dy) + (dz * dz), dz);
}


struct func_80007618_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
};

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_80007618(struct func_80007618_Struct *arg0, s16 arg1) {
    f32 sp24;
    f32 sp20;

    sp20 = func_8001EB64(arg1);
    sp24 = (arg0->unk4 * sp20) - (func_8001EAD0(arg1) * arg0->unk8);
    sp20 = func_8001EAD0(arg1);
    arg0->unk8 = (func_8001EB64(arg1) * arg0->unk8) + (arg0->unk4 * sp20);
    arg0->unk4 = sp24;
}


struct func_800076B0_Struct {
    f32 unk0;
    f32 unk4;
};


void func_800076B0(struct func_800076B0_Struct *arg0, s16 arg1) {
    f32 sp24;
    f32 sp20;

    sp20 = func_8001EB64(arg1);
    sp24 = (arg0->unk0 * sp20) - (func_8001EAD0(arg1) * arg0->unk4);
    sp20 = func_8001EAD0(arg1);
    arg0->unk4 = (func_8001EB64(arg1) * arg0->unk4) + (arg0->unk0 * sp20);
    arg0->unk0 = sp24;
}

