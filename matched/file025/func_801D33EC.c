#include "context.h"

extern s32 func_801CC540();
extern void func_800058DC(void *, void *);
extern s32 func_80010550(void *, void *);
extern u8 D_801BC025[];
extern u8 D_801D33EC[];
struct func_801D3718_Struct;
struct func_801D3788_StructObject;
struct func_801D4068_StructA;
extern struct func_801D3718_Struct D_801E14B8;
extern u8 D_801E14A8;
extern struct func_801D3788_StructObject *D_8008DA88[];
void func_80006214();
void func_801D3FD8(s32 arg0);
void func_801D4068(struct func_801D4068_StructA *arg0);

typedef struct { s32 unk0; s32 unk4; f32 unk8; } func_801D33EC_Struct0;
extern s32 func_80011140(void *, void *, func_801D33EC_Struct0, u32);
extern void func_8013A28C(void *, func_801D33EC_Struct0);
struct func_801D33EC_Struct1 { u8 pad[0x5C]; func_801D33EC_Struct0 unk5C; };
struct func_801D33EC_Struct3 { u8 pad[0x76]; u8 unk76; };
struct func_801D33EC_Struct2 { u8 pad[0x5C]; struct func_801D33EC_Struct3 *unk5C; };
struct func_801D33EC_Struct5 { u8 pad[0x2C]; struct func_801D33EC_Struct1 *unk2C; };
struct func_801D33EC_Struct4 { u8 pad[4]; struct func_801D33EC_Struct5 *unk4; };

void func_801D33EC(struct func_801D33EC_Struct2 *arg0, struct func_801D33EC_Struct4 *arg1) {
    func_801D33EC_Struct0 *p;
    struct func_801D33EC_Struct3 *q;
    if (D_801DB388 == 0) {
        if (func_801CC540() != 0) {
            func_800058DC(arg0, D_801D33EC);
            return;
        }
        if (D_801DB374 != 0) {
            func_80006214((s32)arg0);
            func_8013A28C(D_8008DA88, *(func_801D33EC_Struct0 *)D_801DB374);
            q = arg0->unk5C;
            q->unk76 = 1;
            D_801DB374 = 0;
        }
        p = (func_801D33EC_Struct0 *)D_801DB378;
        if (p != 0) {
            if (func_80011140(arg1, arg0->unk5C, *p, p->unk8) != 0) {
                D_801DB378 = 0;
            }
        } else {
            if (func_80010550(arg1, arg0->unk5C) != 0) {
                D_801DB37C = 1;
            } else {
                D_801DB37C = 0;
            }
            *(func_801D33EC_Struct0 *)&D_801E14B8 = arg1->unk4->unk2C->unk5C;
            *(func_801D33EC_Struct0 *)&D_801E14A8 = *(func_801D33EC_Struct0 *)(D_801BC025 + 3);
        }
        if (D_801DB384 != 0) {
            func_801D3FD8((s32)arg0);
        }
        if (D_801DB38C != 0) {
            func_801D4068((struct func_801D4068_StructA *)arg0);
        }
    }
}
