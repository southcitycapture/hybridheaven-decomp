#include "common.h"
extern u8 *D_8008DA88;
extern u8 D_801BBBF0[];
extern s32 func_800058DC(void *, void *);
extern f32 func_8001EAD0(s16);
extern s32 func_80236BA4(s32, void *);
struct func_8037D088_StructA {
    u8 pad[0xC];
    u8 *unkC;
    u8 pad10[0x94 - 0x10];
    u8 *unk94;
    u8 pad98[0xB0 - 0x98];
    s16 unkB0;
};
void func_8037D088(struct func_8037D088_StructA *arg0, s32 arg1);


struct func_8037C778_StructC { u8 pad[8]; u8 unk8; u8 unk9; u8 unkA; };
struct func_8037C778_StructB { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; struct func_8037C778_StructC *unk30; };
struct func_8037C778_StructP {
    u8 pad[0x30]; u32 unk30; u8 pad34[0x9E - 0x34]; u16 unk9E; u16 unkA0; u8 padA2[4]; u8 unkA6;
    u8 padA7[0x2B8 - 0xA7]; s16 unk2B8[6]; u8 pad2C4[0x2D0 - 0x2C4]; u8 unk2D0;
};
struct func_8037C778_StructA { u8 pad[0x94]; struct func_8037C778_StructP *unk94; u8 pad98[0xB0 - 0x98]; s16 unkB0; };
struct func_8037C778_StructD { u8 pad[0x30]; u16 unk30; u8 pad32[0x7E8 - 0x32]; struct func_8037C778_StructP unk7E8; u8 padX[0x1031 - 0x7E8 - sizeof(struct func_8037C778_StructP)]; u8 unk1031; };

#define T ((struct func_8037C778_StructB **)&D_8008DA88)
#define D ((struct func_8037C778_StructD *)D_801BBBF0)
#define S(x) (func_8001EAD0((s16)(D->unk30 << 7)) * (x))

void func_8037C778(struct func_8037C778_StructA *arg0, s32 arg1) {
    struct func_8037C778_StructP *p;
    u8 i;
    f32 v;
    u32 c;
extern s32 func_80236BA4();
    p = arg0->unk94;
    if ((p->unk2D0 & 0x10) || func_80236BA4() == 0) {
        for (i = 0; i < 6;) {
            T[i++]->unk22 = 0;
        }
        return;
    }
    for (i = 0; i < 6;) {
        T[i++]->unk22 = 1;
    }
    if ((p->unk2B8[0] >= 0 && p->unk2B8[1] >= 0 && p->unk2B8[2] >= 0 && p->unk2B8[3] >= 0 &&
         p->unk2B8[4] >= 0 && p->unk2B8[5] >= 0 && p->unk9E == 0 && p->unkA0 == 0 &&
         !(p->unkA6 & 0x20) && ((p->unk30 << 11) >> 30) == 0) ||
        (D->unk1031 >= 0xA && D->unk1031 != 0xF) ||
        (i = 0, (p == &D->unk7E8) && (((p->unk30 << 1) >> 30) == 3))) {
        arg0->unkB0 = 8;
        func_800058DC(arg0, (void *)func_8037D088);
        return;
    }
    do {
        if (p->unk2B8[i] < 0) {
            if (p->unk9E != 0) {
                if (S(128.0f) < 0.0f) v = -S(128.0f); else v = S(128.0f);
                T[i]->unk30->unk8 = (u32)(255.0f - v);
                T[i]->unk30->unk9 = 0;
                if (S(255.0f) < 0.0f) T[i]->unk30->unkA = (u32)-S(255.0f);
                else T[i]->unk30->unkA = (u32)S(255.0f);
            } else if (p->unkA0 != 0 || (p->unkA6 & 0x20) != 0) {
                if (S(255.0f) < 0.0f) v = -S(255.0f); else v = S(255.0f);
                T[i]->unk30->unk8 = (u32)(255.0f - v);
                T[i]->unk30->unk9 = 0;
                if (S(255.0f) < 0.0f) T[i]->unk30->unkA = (u32)-S(255.0f);
                else T[i]->unk30->unkA = (u32)S(255.0f);
            } else {
                T[i]->unk30->unk8 = 0xFF;
                if (S(255.0f) < 0.0f) v = -S(255.0f); else v = S(255.0f);
                c = (u32)v;
                T[i]->unk30->unkA = c;
                T[i]->unk30->unk9 = c;
            }
        } else if (p->unk9E != 0) {
            T[i]->unk30->unk8 = 0x80;
            T[i]->unk30->unk9 = 0;
            T[i]->unk30->unkA = 0xFF;
        } else if (p->unkA0 != 0 || (p->unkA6 & 0x20) != 0) {
            T[i]->unk30->unk8 = 0;
            T[i]->unk30->unk9 = 0;
            T[i]->unk30->unkA = 0xFF;
        } else {
            T[i]->unk30->unkA = 0xFF;
            T[i]->unk30->unk8 = T[i]->unk30->unk9 = T[i]->unk30->unkA;
        }
        i++;
    } while (i < 6);
}
