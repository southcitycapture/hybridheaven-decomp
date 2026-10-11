#include "context.h"

extern void func_800200B0(void);
extern s32 func_80028A10(s32);
extern u32 func_80033C60(void);
extern void func_80034F70(s32, s32);
extern s32 func_8002C4D0(s32, s32 *, s32, s16);
extern void func_80026300(s32, void *, s32, s32);
extern void func_800350D0(void);
extern u8 D_800351A0[];
extern u8 D_80036530[];
extern s32 D_80047958;
extern u8 D_8004D910[];
extern s32 D_80091BD0;
extern s32 D_80091BD8[];
extern u8 D_80091EB8[];
extern u32 D_8009633C;
extern s32 D_80096340;

struct func_8001FD14_Struct {
    void *unk0;
    s16 unk4;
    u8 pad6[2];
    s32 unk8;
    u8 padC[0xC];
    s32 unk18;
    s32 unk1C;
    void *unk20;
    s32 unk24;
    void *unk28;
    s32 unk2C;
    void *unk30;
    s32 unk34;
    u8 pad38[0x10];
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    void *unk58;
    void *unk5C;
};

s32 func_8001FD14(struct func_8001FD14_Struct *arg0, struct func_8001FD14_Struct *arg1) {
    s32 sp3C;
    s32 sp34[2];
    s32 temp_a3;
    s32 pad[2];

    func_800200B0();
    sp3C = func_80028A10((s32) arg0->unk0);
    if (arg1 != NULL) {
        func_80034F70((s32) arg1->unk0, arg1->unk4 * 4);
    }
    arg0->unk4 = (s16) (((D_80096340 - (func_80033C60() >> 2)) + 0x100) & 0xFFF0);
    if ((u32) arg0->unk4 < D_8009633C) {
        arg0->unk4 = (s16) D_8009633C;
    }
    temp_a3 = func_8002C4D0(D_80091BD8[D_80047958], sp34, sp3C, arg0->unk4);
    if (sp34[0] == 0) {
        return 0;
    }
    arg0->unk8 = 0;
    arg0->unk58 = D_80091EB8;
    arg0->unk5C = (u8 *) arg0 + 0x60;
    arg0->unk48 = D_80091BD8[D_80047958];
    arg0->unk4C = ((temp_a3 - D_80091BD8[D_80047958]) >> 3) * 8;
    arg0->unk18 = 2;
    arg0->unk20 = func_800350D0;
    arg0->unk24 = (s32) (D_800351A0 - (u8 *) func_800350D0);
    arg0->unk1C = 0;
    arg0->unk28 = D_80036530;
    arg0->unk30 = D_8004D910;
    arg0->unk34 = 0x800;
    arg0->unk50 = 0;
    arg0->unk54 = 0;
    func_80026300(D_80091BD0, (u8 *) arg0 + 8, 1, temp_a3);
    D_80047958 ^= 1;
    return 1;
}
