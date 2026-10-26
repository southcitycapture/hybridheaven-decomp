#include "common.h"
extern s32 func_800058DC(s32, void *);
extern void func_80243DDC();


typedef struct func_802436A4_Struct {
    u8 pad0[0xC];
    s16 unkC;
} func_802436A4_Struct_B;

typedef struct func_802436A4_Struct_A {
    u8 pad0[0x34];
    func_802436A4_Struct_B *unk34;
    u8 pad38[6];
    u16 unk3E;
    u8 unk40;
    u8 unk41;
    u8 unk42;
} func_802436A4_Struct_A;

extern void D_80243588(u16, u8 *, u8 *, func_802436A4_Struct_A *);

void func_802436A4(func_802436A4_Struct_A *arg0, s32 arg1) {
    func_802436A4_Struct_B *b;
    u8 *p;
    u8 *q1;
    u8 *q2;
    s32 pad;
  {
    u16 sp2A;
    u8 sp29;
    u8 sp28;

    b = arg0->unk34;
    sp2A = arg0->unk3E;
    q1 = &arg0->unk40;
    q2 = &arg0->unk41;
    arg0->unk42++;
    p = &arg0->unk42;
    if (arg0->unk42 >= 0x1F) {
        *p = 0x14;
        D_80243588(sp2A, &sp29, &sp28, arg0);
        if (sp29 != *q1) {
            if ((sp29 - *q1 + 4) % 4 < 3) {
                b->unkC = 0x100;
                *q1 = (*q1 + 1) % 4;
            } else {
                b->unkC = 0x200;
                *q1 = (*q1 + 3) % 4;
            }
            return;
        }
        if (sp28 != *q2) {
            if ((sp28 - *q2 + 5) % 5 < 3) {
                b->unkC = 0x400;
                *q2 = (*q2 + 1) % 5;
            } else {
                b->unkC = 0x800;
                *q2 = (*q2 + 4) % 5;
            }
            return;
        }
        *p = 0;
        func_800058DC((s32)arg0, (void *)func_80243DDC);
    }
  }
}
