#include "context.h"

typedef struct func_8012DF38_Vec { s32 pad; f32 x, y, z; } func_8012DF38_Vec;
typedef struct func_8012DF38_C { u8 pad[0x63]; u8 unk63; } func_8012DF38_C;
typedef struct func_8012DF38_B {
    u8 pad0[0x18]; func_8012DF38_C *unk18; s32 unk1C; u8 pad20[2]; u8 unk22;
    u8 pad23[9]; func_8012DF38_Vec *unk2C;
} func_8012DF38_B;
typedef struct func_8012DF38_Struct {
    func_8012DF38_B *unk0; func_8012DF38_B *unk4; u8 pad8[0x10]; func_8012DF38_B *unk18;
    u8 pad1C[8]; func_8012DF38_B *unk24; u8 pad28[8]; func_8012DF38_B *unk30;
    u8 pad34[8]; func_8012DF38_B *unk3C; u8 pad40[8]; func_8012DF38_B *unk48;
    u8 pad4C[0x10]; func_8012DF38_B *unk5C; func_8012DF38_B *unk60;
} func_8012DF38_Struct;
typedef struct func_8012DF38_P {
    u8 pad[0xC]; u16 unkC; u8 pad2[0x96]; f32 unkA4, unkA8, unkAC;
} func_8012DF38_P;
extern void func_8013A334(s32, s32, s32, s32);
extern void func_801DB868(s32, s32);
extern u16 D_801BBC1C;

#define A ((func_8012DF38_Struct *)arg0)
#define P ((func_8012DF38_P *)arg1)

void func_8012DF38(s32 arg0, s32 arg1) {
    s32 i;
    func_8012DF38_B **q;
    func_8012DF38_B *c;
    func_8012DF38_B *b;

    if (arg0 != 0 && arg1 != 0 && (b = A->unk0) != NULL && b->unk1C != 0 && b->unk18->unk63 != 0 &&
        (D_801BBC1C == 4 || D_801BBC1C == 5 || D_801BBC1C == 0xA || D_801BBC1C == 0xB || D_801BBC1C == 0xF)) {
        func_8012DF38_Vec *v = b->unk2C;
        P->unkA4 = v->x;
        P->unkA8 = v->y;
        P->unkAC = v->z;
        if (A->unk0->unk22 == 0) {
            i = 0;
            q = (func_8012DF38_B **)arg0;
            if (P->unkC > 0) {
                do {
                    ((func_8012DF38_B **)arg0)[i]->unk1C = 0;
                    i++;
                } while (i < P->unkC);
            }
        } else {
            func_8013A334((s32)A->unk24->unk2C + 0xA4, arg0, arg1, 0x1C);
            func_8013A334((s32)A->unk30->unk2C + 0xA4, arg0, arg1, 0x1D);
            func_8013A334((s32)A->unk3C->unk2C + 0xA4, arg0, arg1, 0x1E);
            func_8013A334((s32)A->unk48->unk2C + 0xA4, arg0, arg1, 0x1F);
            func_8013A334((s32)A->unk18->unk2C + 0xA4, arg0, arg1, 0x20);
            func_8013A334((s32)A->unk4->unk2C + 0xA4, arg0, arg1, 0x19);
            if (P->unkC >= 0x17) {
                func_8013A334((s32)A->unk60->unk2C + 0xA4, arg0, arg1, 0x21);
            }
            func_801DB868(arg0, arg1);
        }
    }
}
