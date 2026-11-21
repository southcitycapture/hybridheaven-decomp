#include "common.h"
extern u8 D_801BBBF0[];
typedef struct func_802521D0_Struct2 { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_802521D0_Struct2;
typedef struct func_802521D0_Struct1 { u8 pad[0x2C]; func_802521D0_Struct2 *unk2C; } func_802521D0_Struct1;
typedef struct func_802521D0_Struct0 { u8 pad[0xE0]; func_802521D0_Struct1 *unkE0; } func_802521D0_Struct0;
#define G ((func_802521D0_Struct0 *)D_801BBBF0)
extern void func_800058DC();
extern f32 func_8001EAD0(s16);
extern s32 func_80133A24(s32);
typedef struct func_80251820_Inner {
    u8 pad0[8];
    f32 unk8;
    u8 padC[6];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80251820_Inner;
typedef struct func_80251820_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80251820_Inner *unk30;
} func_80251820_Node;
typedef struct func_80251820_Args {
    func_80251820_Node *unk0;
    func_80251820_Node *unk4;
    func_80251820_Node *unk8;
    func_80251820_Node *unkC;
    func_80251820_Node *unk10;
    func_80251820_Node *unk14;
    func_80251820_Node *unk18;
    func_80251820_Node *unk1C;
} func_80251820_Args;
typedef struct func_80251820_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
} func_80251820_Ctx;
typedef struct func_80256CB0_StructI {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80256CB0_StructI;
struct func_80257418_Struct30 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0x4B - 0x24];
    u8 unk4B;
};
struct func_80257418_Struct0 {
    u8 pad0[0x30];
    struct func_80257418_Struct30 *unk30;
};
void func_80257418(s32 arg0, struct func_80257418_Struct0 **arg1);
void func_80257114(func_80251820_Ctx *arg0, func_80251820_Args *arg1) {
#define p ((func_80256CB0_StructI *)arg1->unk0->unk30)
    u32 t = arg0->unk92++;
#define a ((s16)(((s32)t * 30) % 8192))
    p->unk4A = (u32)(func_8001EAD0(a) * 127.0f + 128.0f);
    p->unk4D = (u32)(func_8001EAD0(a) * 127.0f + 128.0f);
    p->unk12 = (s16)(arg0->unk92 * 2.0 + p->unk12) & 0x1FFF;
    p->unk18 += 0.00005;
    p->unk20 += 0.00005;
    if (p->unk4B >= 0x11) {
        p->unk4B--;
    }
    if (func_80133A24(0x13C) != 0) {
        p->unk4 = G->unkE0->unk2C->unk4;
        p->unkC = G->unkE0->unk2C->unkC;
        p->unk4B = 0xFF;
        p->unk20 = (f64)p->unk20 * (0.2);
        func_800058DC(arg0, func_80257418);
    }
}
#undef a
#undef p
