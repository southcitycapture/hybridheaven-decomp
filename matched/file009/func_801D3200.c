#include "context.h"

extern void func_801D337C();
struct func_801D35BC_StructObj;
extern void func_801D3060(f32 *, void *, struct func_801D35BC_StructObj **);
extern struct func_801D35BC_StructObj *D_8008DA88[];

typedef struct func_801D3200_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    void *unk30;
} func_801D3200_StructObj;

typedef struct func_801D3200_StructB {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x17];
    u8 unk3B;
} func_801D3200_StructB;

typedef struct func_801D3200_StructA {
    u8 pad[0xC];
    void *unkC;
} func_801D3200_StructA;

typedef struct func_801D3200_Struct {
    u8 pad0[0xC];
    func_801D3200_StructA *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[0x30];
    u8 unk94;
} func_801D3200_Struct;

void func_801D3200(func_801D3200_Struct *arg0, s32 arg1) {
    void *s6;
    func_801D3200_StructB *s0;
    f32 sp5C[3];
    s8 sp5B;
    u8 i;

    s6 = arg0->unkC->unkC;
    sp5B = 0;
    if (func_801CE0E8(arg0, &sp5B) == 0) {
        i = 0;
        if (arg0->unk94 > 0) {
            do {
                func_80006214(s6);
                func_801D3060(sp5C, s6, D_8008DA88);
                func_80006214(arg0);
                s0 = ((func_801D3200_StructObj *)D_8008DA88[i])->unk30;
                s0->unk4 = sp5C[0];
                s0->unk8 = sp5C[1];
                s0->unkC = sp5C[2];
                s0->unk18 = s0->unk1C = s0->unk20 = (((f64)func_8012C6B4(0xA) + 5.0) * arg0->unk60) / 10.0;
                s0->unk3B = func_8012C6B4(8);
                if (i >= 2) {
                    ((func_801D3200_StructObj *)D_8008DA88[i])->unk22 = 0;
                }
                i++;
            } while (i < arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801D337C);
    }
}
