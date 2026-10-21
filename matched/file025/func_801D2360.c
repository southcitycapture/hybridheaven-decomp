#include "context.h"
extern s32 D_801DB278;
extern s32 D_801DB27C;
struct func_801D24D8_StructP { u8 pad[0x5C]; s32 u5C, u60, u64; };
struct func_801D24D8_StructQ { u8 pad[0x76]; u8 u76; };
struct func_801D24D8_StructR { u8 pad[4]; struct func_801D24D8_StructS *u4; };
struct func_801D24D8_StructS { u8 pad[0x2C]; struct func_801D24D8_StructP *u2C; };
struct func_801D24D8_StructT { u8 pad[0x5C]; struct func_801D24D8_StructQ *u5C; };
extern u8 *D_801DB274;
void func_801D24D8(struct func_801D24D8_StructT *arg0, struct func_801D24D8_StructR *arg1);

typedef struct func_801D2360_StructSource {
    u16 *unk0;
    void **unk4;
} func_801D2360_StructSource;
extern func_801D2360_StructObject *func_80005FAC(void *, s32, void *);
extern u8 D_80171CF0[];
extern u8 D_801DB260[];
#define OBJ ((func_801D2360_StructObject *)D_801DB274)

void func_801D2360(func_801D2360_StructObject *arg0, func_801D2360_StructObject *arg1) {
    func_801D2360_StructData *temp_a0;

    if (arg0->unk24 != 0) {
        if (D_801DB278 != 0) {
            D_801DB274 = (u8 *)func_80005FAC(arg0, arg1->unk30, D_801DB260);
            *(s32 *)((u8 *)OBJ->unk2C + 0x28) = (s32)*(*(func_801D2360_StructSource **)(D_80171CF0 + 0x980))->unk4;
            OBJ->unk2C->unk0 = *(*(func_801D2360_StructSource **)(D_80171CF0 + 0x980))->unk0;
            OBJ->unk2C->unk2C = (*(func_801D2360_StructSource **)(D_80171CF0 + 0x980))->unk0[1];
            OBJ->unk2C->unk4 = 0.0f;
            OBJ->unk2C->unk8 = 0.0f;
            OBJ->unk2C->unkC = 0.0f;
            OBJ->unk2C->unk12 = 0;
            OBJ->unk2C->unk18 = 5.0f;
            OBJ->unk2C->unk1C = 5.0f;
            OBJ->unk2C->unk20 = 5.0f;
            temp_a0 = OBJ->unk2C;
            temp_a0->unk24 |= 0x40015;
            OBJ->unk22 = D_801DB27C;
        } else {
            D_801DB274 = 0;
            D_801DB27C = 0;
        }
        func_800058DC(arg0, (void (*)(void))func_801D24D8);
        return;
    }
    func_800058DC(arg0, (void (*)(void))func_801D2360);
}
