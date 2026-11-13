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
    void *unk5C;
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
extern s32 func_801C4908(void *, s32, s32, s32);
extern s32 func_8012AE54(void *, s32, s32, s32);
extern s8 D_80249CB0;
extern func_80248DE0_StructCBC D_80249CC8;
extern void func_80248970();

#define G ((struct func_80248C04_StrGlob *) &D_801BBBF0)

void func_80248C04(struct func_80248C04_StrArg *arg0, s32 arg1) {
    u8 *volatile sp24;
    u8 *p;
    struct func_80248C04_StrA3 *a3;

    sp24 = arg0->unk5C;
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
    p = sp24;
    a3 = (struct func_80248C04_StrA3 *) (p + 0x1C);
    if (a3) {}
    if ((a3->unk0 == 0x0168003E) && (a3->unk6 == 0x100)) {
        func_80010550(arg1, p);
        return;
    }
    func_80011140(arg1, p, D_80249CC8, 0xA);
}
