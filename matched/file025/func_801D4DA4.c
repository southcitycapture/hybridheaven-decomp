#include "context.h"

typedef struct func_801D4DA4_StructData {
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
} func_801D4DA4_StructData;
typedef struct func_801D4DA4_StructObject {
    u8 pad0[0x22];
    s8 unk22;
    u8 pad23;
    s32 unk24;
    u8 pad28[4];
    func_801D4DA4_StructData *unk2C;
    s32 unk30;
} func_801D4DA4_StructObject;
typedef struct func_801D4DA4_StructSource {
    u16 *unk0;
    void **unk4;
} func_801D4DA4_StructSource;
extern func_801D4DA4_StructObject *func_80005FAC(void *, s32, void *);
extern u8 D_801DB668[];
extern u8 D_801D4DA4[];
void func_801D4F1C();
extern u8 *D_801DB678;
extern u8 D_80171CF0[];
#define OBJ ((func_801D4DA4_StructObject *)D_801DB678)

void func_801D4DA4(func_801D4DA4_StructObject *arg0, func_801D4DA4_StructObject *arg1) {
    func_801D4DA4_StructData *temp_a0;

    if (arg0->unk24 != 0) {
        if (D_801DB67C != 0) {
            D_801DB678 = (u8 *)func_80005FAC(arg0, arg1->unk30, D_801DB668);
            *(s32 *)((u8 *)OBJ->unk2C + 0x28) = (s32)*(*(func_801D4DA4_StructSource **)(D_80171CF0 + 0x980))->unk4;
            OBJ->unk2C->unk0 = *(*(func_801D4DA4_StructSource **)(D_80171CF0 + 0x980))->unk0;
            OBJ->unk2C->unk2C = (*(func_801D4DA4_StructSource **)(D_80171CF0 + 0x980))->unk0[1];
            OBJ->unk2C->unk4 = 0.0f;
            OBJ->unk2C->unk8 = 0.0f;
            OBJ->unk2C->unkC = 0.0f;
            OBJ->unk2C->unk12 = 0;
            OBJ->unk2C->unk18 = 5.0f;
            OBJ->unk2C->unk1C = 5.0f;
            OBJ->unk2C->unk20 = 5.0f;
            temp_a0 = OBJ->unk2C;
            temp_a0->unk24 |= 0x40015;
            OBJ->unk22 = D_801DB680;
        } else {
            D_801DB678 = 0;
            D_801DB680 = 0;
        }
        func_800058DC(arg0, (void (*)(void))func_801D4F1C);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801D4DA4);
}
