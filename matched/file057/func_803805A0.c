#include "context.h"

typedef struct func_803805A0_StructA {
    u8 pad0[0x5C];
    struct func_803805A0_StructA *unk5C;
} func_803805A0_StructA;
typedef struct func_803805A0_StructP {
    u8 pad0[0x90];
    s16 unk90;
    u8 pad1[2];
    u8 unk94;
} func_803805A0_StructP;
typedef struct func_803805A0_StructF {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad2[0x30 - 0x24];
    u32 unk30;
} func_803805A0_StructF;
typedef struct func_803805A0_StructO {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x24 - 0x23];
    u32 unk24;
    u8 pad2[4];
    func_803805A0_StructF *unk2C;
    u32 unk30;
} func_803805A0_StructO;
typedef struct func_803805A0_StructD {
    u8 pad0[0x14];
    s32 unk14;
    u16 unk18;
    u8 pad1[2];
    s32 unk1C;
} func_803805A0_StructD;
typedef struct func_803805A0_StructE {
    u8 pad0[0x28];
    s32 unk28;
} func_803805A0_StructE;

extern s32 func_8012C6B4();
extern func_803805A0_StructO *func_80005E44();
extern void func_80020744();
extern void func_80148DDC(f32 *, s32, u16);
extern func_803805A0_StructD D_8038CF70;
extern u8 D_803897E0[];
extern u8 D_80389808[];
extern u8 D_80389880[];
extern u8 func_803807D8[];

void func_803805A0(func_803805A0_StructP *arg0, s32 arg1) {
    s32 a, b, c;
    s32 *sp70;
    func_803805A0_StructO *o;
    s32 i;
    f32 sp5C[3];
    s32 v;

    v = *(s32 *)((u8 *)D_8038CFB0 + 0x5C);
    sp70 = *(s32 **)(v + 4);
    a = func_8012C6B4(0x100) & 0xFF;
    b = func_8012C6B4(0x100) & 0xFF;
    c = func_8012C6B4(0x100) & 0xFF;
    func_8038005C((void *)arg0, a, b, c, func_8012C6B4(0x100));
    if (arg0->unk90++ >= 0xB) {
        (*(func_803805A0_StructO **)D_8008DA88)->unk22 = 0;
        func_80006214((void *)D_8038CFB0);
        i = 1;
        while (i < arg0->unk94) {
            if (sp70[i] < 0) {
            } else {
                v = func_80005670(arg0, D_803897E0);
                D_8038CF70.unk14 = 0x301;
                D_8038CF70.unk18 = *(u16 *)((func_803805A0_StructO *)D_8008DA88[i])->unk2C;
                D_8038CF70.unk1C = ((func_803805A0_StructE *)((func_803805A0_StructO *)D_8008DA88[i])->unk2C)->unk28;
                o = func_80005E44(v, D_80389808);
                o->unk24 = 0x80000900;
                o->unk2C->unk18 = ((func_803805A0_StructO *)D_8008DA88[0])->unk2C->unk18;
                o->unk2C->unk1C = ((func_803805A0_StructO *)D_8008DA88[0])->unk2C->unk1C;
                o->unk2C->unk20 = ((func_803805A0_StructO *)D_8008DA88[0])->unk2C->unk20;
                o->unk2C->unk30 = (u32)D_80389880 | 0x40000000;
                func_80148DDC(sp5C, D_8038CFB0, i);
                o->unk2C->unk4 = sp5C[0];
                o->unk2C->unk8 = sp5C[1];
                o->unk2C->unkC = sp5C[2];
            }
            i = (u8)(i + 1);
        }
        func_80020744(0x139);
        func_800058DC(arg0, func_803807D8);
    }
}
