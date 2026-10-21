#include "context.h"

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
typedef struct func_801CF950_StructSource {
    u16 *unk0;
    void **unk4;
} func_801CF950_StructSource;
extern func_801CF950_StructObject *func_80005FAC(void *, s32, void *);
struct func_801CFAC8_S;
struct func_801CFAC8_A;
void func_801CFAC8(struct func_801CFAC8_S *arg0, struct func_801CFAC8_A *arg1);
extern u8 D_801DAED4[];
#define OBJ ((func_801CF950_StructObject *)D_801DAEE4)

void func_801CF950(func_801CF950_StructObject *arg0, func_801CF950_StructObject *arg1) {
    func_801CF950_StructData *temp_a0;

    if (arg0->unk24 != 0) {
        if (D_801DAEE8 != 0) {
            D_801DAEE4 = (u8 *)func_80005FAC(arg0, arg1->unk30, D_801DAED4);
            *(s32 *)((u8 *)OBJ->unk2C + 0x28) = (s32)*(*(func_801CF950_StructSource **)(D_80171CF0 + 0x980))->unk4;
            OBJ->unk2C->unk0 = *(*(func_801CF950_StructSource **)(D_80171CF0 + 0x980))->unk0;
            OBJ->unk2C->unk2C = (*(func_801CF950_StructSource **)(D_80171CF0 + 0x980))->unk0[1];
            OBJ->unk2C->unk4 = 0.0f;
            OBJ->unk2C->unk8 = 0.0f;
            OBJ->unk2C->unkC = 0.0f;
            OBJ->unk2C->unk12 = 0;
            OBJ->unk2C->unk18 = 5.0f;
            OBJ->unk2C->unk1C = 5.0f;
            OBJ->unk2C->unk20 = 5.0f;
            temp_a0 = OBJ->unk2C;
            temp_a0->unk24 |= 0x40015;
            OBJ->unk22 = D_801DAEEC;
        } else {
            D_801DAEE4 = 0;
            D_801DAEEC = 0;
        }
        func_800058DC(arg0, (void (*)(void))func_801CFAC8);
        return;
    }
    func_800058DC(arg0, (void (*)(void))func_801CF950);
}
