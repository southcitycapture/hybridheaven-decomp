#include "common.h"
struct func_802488E8_StructBBBF0 {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad1[0x4];
    f32 unk1A0;
    u8 pad2[0x39C - 0x1A4];
    u8 unk39C;
    u8 pad3[0xF0C - 0x39D];
    u16 unkF0C;
};
extern struct func_802488E8_StructBBBF0 D_801BBBF0;
extern s32 D_8024F518;
typedef struct func_80247B6C_StructData {
    u8 pad[4];
    f32 unk4, unk8, unkC;
    u8 pad10[0x20];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_80247B6C_StructData;
typedef struct func_80247B6C_StructEnt {
    u8 pad[0x2C];
    func_80247B6C_StructData *unk2C;
} func_80247B6C_StructEnt;
typedef struct func_80247B6C_StructAnim {
    u8 pad[0x1C];
    s32 unk1C;
} func_80247B6C_StructAnim;
typedef struct func_80247B6C_StructGfx {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad30[0x24];
    s32 unk54;
    u8 pad58[4];
    func_80247B6C_StructAnim *unk5C;
} func_80247B6C_StructGfx;
typedef struct func_80247B6C_StructGlobal {
    u8 pad[0xDC];
    func_80247B6C_StructGfx *unkDC;
    func_80247B6C_StructEnt *unkE0;
    u8 padE4[4];
    func_80247B6C_StructEnt *unkE8;
    u8 padEC[0xA2];
    u16 unk18E;
    s16 unk190;
} func_80247B6C_StructGlobal;
#define G (*(func_80247B6C_StructGlobal *)&D_801BBBF0)
extern void func_800058DC(void *arg0, void *arg1);
extern s32 func_80010550();
typedef struct func_80248DE0_StructCBC {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80248DE0_StructCBC;
extern void func_80011140(s32, void *, func_80248DE0_StructCBC, s32);
struct func_80248C04_StrData {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80248C04_StrNode {
    u8 pad0[0x2C];
    struct func_80248C04_StrData *unk2C;
};
struct func_80248C04_StrGlob {
    u8 pad0[0xE0];
    struct func_80248C04_StrNode *unkE0;
    u8 pad1[0x198 - 0xE4];
    s32 unk198;
    u8 pad2[4];
    s32 unk1A0;
    u8 pad3[0xEF0 - 0x1A4];
    u16 unkEF0;
    u8 pad4[0xF0C - 0xEF2];
    u16 unkF0C;
};


struct func_80248C04_StrA3 {
    s32 unk0;
    u8 pad4[2];
    u16 unk6;
};
struct func_80248C04_StrArg {
    u8 pad0[0x24];
    struct func_80248C04_StrNode *unk24;
    u8 pad1[0x40 - 0x28];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
    u8 pad3[0x5C - 0x4C];
    u8 *unk5C;
};
extern s32 func_801C4908(void *, s32, s32, s32);
extern s32 func_8012AE54(void *, s32, s32, s32);
extern s8 D_80249CB0;
extern func_80248DE0_StructCBC D_80249CC8;
extern void func_80248970();

#undef G
#define G ((struct func_80248C04_StrGlob *) &D_801BBBF0)

void func_80248C04(struct func_80248C04_StrArg *arg0, s32 arg1) {
    u8 *anim;
    struct func_80248C04_StrA3 *key;

    anim = arg0->unk5C;
    key = (struct func_80248C04_StrA3 *) (anim + 0x1C);
    arg0->unk24->unk2C->unk12 = (s16) (arg0->unk24->unk2C->unk12 + G->unkF0C);
    func_801C4908(arg0, G->unk198, G->unk1A0, 0x80);
    arg0->unk24->unk2C->unk12 = (s16) (arg0->unk24->unk2C->unk12 - G->unkF0C);
    if (func_8012AE54(arg0, G->unk198, G->unk1A0, 0x40400000) == 0) {
        arg0->unk48 = 0.0f;
        arg0->unk40 = 0.0f;
        D_80249CB0 = 0;
        G->unkEF0 = (u16) (G->unkEF0 | 0x10);
        G->unkE0->unk2C->unk12 = 0x1800;
        D_8024F518 = 2;
        func_800058DC(arg0, func_80248970);
        return;
    }
    if ((key->unk0 == 0x0168003E) && (key->unk6 == 0x100)) {
        func_80010550(arg1, anim);
        return;
    }
    func_80011140(arg1, anim, D_80249CC8, 0xA);
}
