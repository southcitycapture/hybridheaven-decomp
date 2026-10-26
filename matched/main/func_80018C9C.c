#include "common.h"
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
extern s16 D_8008EBE2;
extern s16 D_8008EBE4;
extern s16 D_8008EBE8;
extern u8 *D_8008EE8C;
extern u8 *D_8008EE90;
extern u8 D_8008EE94;
extern u8 D_8008EE95;
extern u8 D_8008EE96;
extern s16 D_8008EE98;
extern u16 D_8008EE9A;
extern u16 D_8008EE9C;
extern u16 D_8008EBC2;
typedef struct func_8001800C_Struct {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 pad5;
    s16 unk6;
    s16 unk8;
    u8 unkA;
    u8 padB;
    u16 unkC;
    u16 unkE;
    u8 pad10[0x16];
} func_8001800C_Struct;
extern func_8001800C_Struct D_8008EC18[];
#define e (&D_8008EC18[D_8008EBC2])


typedef struct func_80018C9C_StructA { u8 unk0; u8 unk1; u16 h[4]; } func_80018C9C_StructA;
typedef struct func_80018C9C_StructB { u8 b[8]; } func_80018C9C_StructB;
extern func_80018C9C_StructA D_800441B4;
extern func_80018C9C_StructB D_800441C0;
extern u8 *D_8008EE88;
extern u8 *func_8001B154(u32, u32);

void func_80018C9C(u8 arg0) {
    func_80018C9C_StructA sp24 = D_800441B4;
    func_80018C9C_StructB sp1C = D_800441C0;

    D_8008EE88 = func_8001B154(arg0 * 1, arg0);
    D_8008EE90 = D_8008EE88 + 8;
    D_8008EE8C = D_8008EE88 + 0x12;
    D_8008EE88[0] = 1;
    D_8008EE88[1] = 1;
    *(s16 *)(D_8008EE88 + 2) = e->unk6;
    *(s16 *)(D_8008EE88 + 4) = e->unk8;
    *(u16 *)(D_8008EE88 + 6) = D_8008EE9A;
    *(func_80018C9C_StructB *)D_8008EE8C = sp1C;
    *(func_80018C9C_StructA *)D_8008EE90 = sp24;
    D_8008EE90[1] = (u16)D_8008EBE2;
    *(u16 *)(D_8008EE90 + 4) = *(u16 *)&D_8008EBE4;
    D_8008EE98 = 0;
    D_8008EE94 = 0;
    D_8008EE95 = 0;
    D_8008EE96 = 0;
    if ((u16)D_8008EBE8 != 0) {
        *(u16 *)(D_8008EE90 + 6) = D_8008EE9C;
        *(u16 *)(D_8008EE90 + 8) = *(u16 *)&D_8008EBE8;
        D_8008EE9C += 0x100 / (s32)(u16)D_8008EBE8;
    }
}
