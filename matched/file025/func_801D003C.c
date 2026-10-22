#include "context.h"
extern s32 D_801DAF38;
extern s32 D_801DAF3C;
extern u8 *D_801DAF34;
extern void func_801D01B4();
extern u8 D_801D003C[];

typedef struct func_801D003C_StructData {
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
} func_801D003C_StructData;
typedef struct func_801D003C_StructObject {
    u8 pad0[0x22];
    s8 unk22;
    u8 pad23;
    s32 unk24;
    u8 pad28[4];
    func_801D003C_StructData *unk2C;
    s32 unk30;
} func_801D003C_StructObject;
typedef struct func_801D003C_StructSource {
    u16 *unk0;
    void **unk4;
} func_801D003C_StructSource;
extern u8 D_80171CF0[];
extern u8 D_801DAF20[];
#undef OBJ
#define OBJ ((func_801D003C_StructObject *)D_801DAF34)

void func_801D003C(func_801D003C_StructObject *arg0, func_801D003C_StructObject *arg1) {
    func_801D003C_StructData *temp_a0;

    if (arg0->unk24 != 0) {
        if (D_801DAF38 != 0) {
            D_801DAF34 = (u8 *)func_80005FAC(arg0, arg1->unk30, D_801DAF20);
            *(s32 *)((u8 *)OBJ->unk2C + 0x28) = (s32)(*(func_801D003C_StructSource **)(D_80171CF0 + 0x10E0))->unk4[0];
            OBJ->unk2C->unk0 = *(*(func_801D003C_StructSource **)(D_80171CF0 + 0x10E0))->unk0;
            OBJ->unk2C->unk2C = (*(func_801D003C_StructSource **)(D_80171CF0 + 0x10E0))->unk0[1];
            OBJ->unk2C->unk4 = 0.0f;
            OBJ->unk2C->unk8 = 0.0f;
            OBJ->unk2C->unkC = 0.0f;
            OBJ->unk2C->unk12 = 0;
            OBJ->unk2C->unk18 = 5.0f;
            OBJ->unk2C->unk1C = 5.0f;
            OBJ->unk2C->unk20 = 5.0f;
            temp_a0 = OBJ->unk2C;
            temp_a0->unk24 |= 0x40015;
            OBJ->unk22 = D_801DAF3C;
        } else {
            D_801DAF34 = 0;
            D_801DAF3C = 0;
        }
        func_800058DC(arg0, (void (*)(void))func_801D01B4);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801D003C);
}
