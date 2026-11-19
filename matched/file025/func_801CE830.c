#include "common.h"
extern u8 D_80171CF0[];
extern u8 D_801D9FE8[];
extern u8 *D_801DAD50;
extern s32 D_801DAD54;
extern s32 D_801DAD58;
extern s8 D_801DAD5C;
extern s32 D_801DAD60;
extern void func_800058DC(void *, void (*)(void));
typedef struct func_801CF950_StructData {
    u16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u32 unk28;
    u16 unk2C;
} func_801CF950_StructData;
typedef struct func_801CF950_StructObject {
    u8 pad0[0x22];
    s8 unk22;
    u8 pad23;
    s32 unk24;
    u8 pad28[4];
    func_801CF950_StructData *unk2C;
    s32 unk30;
} func_801CF950_StructObject;
extern func_801CF950_StructObject *func_80005FAC(void *, s32, void *);
struct func_801CE7D4_Struct {
    u8 pad[0x24];
    s32 unk24;
};
void func_801CEA50(u8 *arg0, u8 *arg1);


struct func_801CE830_StructB {
    u16 unk0;
    u8 pad2[2];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12, unk14;
    u8 pad16[2];
    f32 unk18, unk1C, unk20;
    s32 unk24, unk28;
    u16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
};
struct func_801CE830_StructA {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[9];
    struct func_801CE830_StructB *unk2C;
};
struct func_801CE830_StructC { u16 *unk0; s32 *unk4; };
struct func_801CE830_StructD { s32 unk0, unk4, unk8; };
extern s8 D_801DAD40;
#define O ((struct func_801CE830_StructA *)D_801DAD50)
#define S (*(struct func_801CE830_StructC **)(D_80171CF0 + 0x11A0))

void func_801CE830(struct func_801CE7D4_Struct *arg0, struct func_801CE830_StructD *arg1) {

    if (arg0->unk24 != 0) {
        if (D_801DAD54 != 0) {
            D_801DAD50 = (u8 *)func_80005FAC(arg0, arg1->unk8, &D_801DAD40);
            O->unk2C->unk28 = *S->unk4;
            O->unk2C->unk0 = *S->unk0;
            O->unk2C->unk2C = S->unk0[1];
            O->unk2C->unk30 = (s32)D_801D9FE8 | 0x40000000;
            O->unk2C->unk24 = 0x40300;
            O->unk2C->unk48 = 0;
            O->unk2C->unk49 = 0xFF;
            O->unk2C->unk4A = 0xFF;
            O->unk2C->unk4B = *(u8 *)&D_801DAD5C = 0xFF;
            O->unk2C->unk4C = 0xFF;
            O->unk2C->unk4D = 0xFF;
            O->unk2C->unk4E = 0xFF;
            O->unk2C->unk4F = 0xFF;
            O->unk2C->unk4 = 0.0f;
            O->unk2C->unk8 = 0.0f;
            O->unk2C->unkC = 0.0f;
            O->unk2C->unk10 = 0;
            O->unk2C->unk12 = 0;
            O->unk2C->unk14 = 0x800;
            O->unk2C->unk18 = 100.0f;
            O->unk2C->unk1C = 100.0f;
            O->unk2C->unk20 = 100.0f;
            O->unk22 = D_801DAD58;
            D_801DAD60 = 0;
        } else {
            D_801DAD50 = NULL;
            D_801DAD58 = 0;
        }
        func_800058DC(arg0, (void (*)(void))func_801CEA50);
        return;
    }
    func_800058DC(arg0, (void (*)(void))func_801CE830);
}
