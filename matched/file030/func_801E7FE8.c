#include "context.h"

typedef struct func_801E7FE8_StructR {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801E7FE8_StructR;

typedef struct func_801E7FE8_StructQ {
    u8 pad0[0x30];
    func_801E7FE8_StructR *unk30;
} func_801E7FE8_StructQ;

#define OBJ ((func_801E7FE8_StructQ **)D_8038D8D0)
#define HANDLE D_8038D8CC

s32 func_801E7FE8(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 2; i++) {
        func_80005E44(HANDLE, func_8038D830 + 0x5C);
    }
    func_80006214(HANDLE);
    func_8012C89C(HANDLE, 0, 0x48A, 0);
    func_8012C89C(HANDLE, 1, 0x2D2, 0);
    OBJ[0]->unk30->unk4 = 0.0f;
    OBJ[0]->unk30->unk8 = 0.0f;
    OBJ[0]->unk30->unkC = -42.0f;
    OBJ[0]->unk30->unk12 = 0;
    OBJ[0]->unk30->unk18 = 1.0f;
    OBJ[0]->unk30->unk1C = 1.0f;
    OBJ[0]->unk30->unk20 = 1.0f;
    OBJ[1]->unk30->unk4 = 0.0f;
    OBJ[1]->unk30->unk8 = 8.0f;
    OBJ[1]->unk30->unkC = -42.0f;
    OBJ[1]->unk30->unk12 = 0;
    OBJ[1]->unk30->unk18 = 1.0f;
    OBJ[1]->unk30->unk1C = 1.0f;
    OBJ[1]->unk30->unk20 = 1.0f;
    return 2;
}
