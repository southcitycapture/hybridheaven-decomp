#include "common.h"
extern s32 D_802588F0;
struct func_802453F0_StructG {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad1[0x198 - 0x34];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
    u8 pad2[0x29C - 0x1A4];
    f32 unk29C;
    f32 unk2A0;
    u8 pad3[0xF20 - 0x2A4];
    u8 unkF20, unkF21, unkF22, unkF23, unkF24, unkF25, unkF26, unkF27, unkF28, unkF29, unkF2A, unkF2B;
    s8 unkF2C, unkF2D, unkF2E;
    u8 padF2F[3];
    u8 unkF32, unkF33, unkF34, unkF35;
};
extern struct func_802453F0_StructG D_801BBBF0;
struct func_802450B0_StructG {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad1[0x198 - 0x34];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
    u8 pad2[0x29C - 0x1A4];
    f32 unk29C;
    f32 unk2A0;
    u8 pad3[0xF20 - 0x2A4];
    u8 unkF20, unkF21, unkF22, unkF23, unkF24, unkF25;
    s8 unkF26;
    u8 unkF27, unkF28, unkF29, unkF2A, unkF2B;
    s8 unkF2C, unkF2D, unkF2E;
    u8 padF2F[3];
    u8 unkF32, unkF33, unkF34, unkF35;
};
#define G (*(struct func_802450B0_StructG *)&D_801BBBF0)
extern void func_800058DC(void *, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_8012C97C(s32, s32);
extern s32 func_801C2FF8(void);
struct func_802453F0_StructB {
    u8 pad0[0x4];
    f32 unk4, unk8, unkC;
    u8 pad1[2];
    u16 unk12;
    u8 pad2[0x24 - 0x14];
    u32 unk24;
    u8 pad3[0x30 - 0x28];
    void *unk30;
    u8 pad4[0x4C - 0x34];
    u8 unk4C, unk4D, unk4E, unk4F;
};
struct func_802453F0_StructA { u8 pad[0x30]; struct func_802453F0_StructB *unk30; };
struct func_802453F0_StructP { struct func_802453F0_StructA *unk0; };
struct func_802476F0_StructTransform {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
};
struct func_802476F0_StructGlobal {
    u8 pad[0x2C];
    struct func_802476F0_StructTransform *unk2C;
};


struct func_80245F8C_StructO {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x74 - 0x30];
    s32 unk74;
    f32 unk78, unk7C, unk80;
    s16 unk84;
    u16 unk86;
    s16 unk88;
    u8 pad2[0x90 - 0x8A];
    f32 unk90, unk94, unk98;
    u16 unk9C;
    u8 pad3[2];
    f32 unkA0;
};
struct func_80245F8C_StructParams {
    s16 flag;
    s32 value;
    f32 scale;
    s16 duration;
};
struct func_80245F8C_StructT {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
};
struct func_80245F8C_StructG {
    u8 pad[0x2C];
    struct func_80245F8C_StructT *unk2C;
};
extern struct func_802476F0_StructGlobal *D_801BBCD8;
extern void func_801C2F0C();
void func_802461CC();
extern u8 D_8025C8C8[];
#define G ((struct func_80245F8C_StructG *) D_801BBCD8)

void func_80245F8C(struct func_80245F8C_StructO *arg0, struct func_802453F0_StructP *arg1) {
    s32 pad[4];
    struct func_80245F8C_StructParams sp60;

    if ((D_802588F0 == 0) && (func_801C2FF8() != 0)) {
        sp60.flag = 0x1000;
        sp60.value = 0x03480042;
        sp60.scale = 3.0f;
        func_801C2F0C(4, &sp60);
        D_802588F0 = 1;
    }
    arg1->unk0->unk30->unk4 = (f32) ((f64) arg1->unk0->unk30->unk4 - (f64) func_8001EB64(arg0->unk9C));
    arg1->unk0->unk30->unkC += (f64) func_8001EAD0(arg0->unk9C);
    arg0->unkA0 = (f32) ((f64) arg0->unkA0 + 1.0);
    if ((f64) arg0->unkA0 >= 46.0) {
        func_8011AAF4(D_8025C8C8, 0x24B, arg0, 2, 1, 0.0f, G->unk2C->unk30, G->unk2C->unk34, G->unk2C->unk38, 0.0f, G->unk2C->unk3C, G->unk2C->unk40, G->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        arg0->unk2C = 0x800;
        arg0->unk74 = func_8012C97C(0x30A, 1);
        arg0->unk84 = 0;
        arg0->unk88 = 0;
        arg0->unk78 = arg0->unk90;
        arg0->unk7C = arg0->unk94;
        arg0->unk80 = arg0->unk98;
        arg0->unk86 = arg0->unk9C;
        arg1->unk0->unk30->unk4 = arg0->unk90;
        arg1->unk0->unk30->unkC = arg0->unk98;
        sp60.flag = 0;
        sp60.value = 0x01680041;
        sp60.scale = 1.0f;
        sp60.duration = 0x14;
        func_801C2F0C(3, &sp60);
        func_800058DC(arg0, func_802461CC);
    }
}
