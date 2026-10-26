#include "common.h"
typedef struct { u8 pad[0x90]; u16 unk90; } func_80254B3C_Ctx;
typedef struct { u8 pad[0x28]; } func_80254B3C_Args;
typedef struct { u8 pad[0x28]; } func_80254B3C_Node;
#define func_80251820_Ctx func_80254B3C_Ctx
#define func_80251820_Args func_80254B3C_Args
#define func_80251820_Node func_80254B3C_Node
#include "context.h"
typedef struct func_80254B3C_S { u8 pad[0x24]; struct func_80254B3C_T *unk24; } func_80254B3C_S;
typedef struct func_80254B3C_T { u8 pad[0x30]; u8 *unk30; } func_80254B3C_T;
extern void func_801518D4(s32, s32, s32);
extern void func_800058DC(void *, void *);
extern void func_802577B4(void *, void *);
extern void func_80020718(s32);
extern u8 D_801BBBF0[];
void func_80254BFC(func_80254B3C_Ctx *arg0, u16 arg1);

void func_80254B3C(func_80254B3C_Ctx *arg0, func_80254B3C_S *arg1) {
    s32 sp24;
    u8 *p;

    sp24 = arg0->unk90++;
    func_802577B4(arg0, arg1);
    if (sp24 >= 0xF) {
        if (sp24 == 0xF) {
            func_80020718(0x192);
        }
        p = arg1->unk24->unk30;
        if (p[0x4B] < 0x4C) {
            p[0x4B] += 2;
        }
    }
    if (sp24 >= 0x5A) {
        arg0->unk90 = 0;
        *(f32 *)(D_801BBBF0 + 0x1EC) = 166.0f;
        func_801518D4(0, 5, 0xF);
        func_800058DC(arg0, func_80254BFC);
    }
}
