#include "context.h"

extern f64 D_801E9640;
extern f64 D_801E9648;
extern f32 D_801E9650;
extern f32 D_801E9654;
extern f32 D_801E9658;

typedef struct func_801E4E58_StructC {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E4E58_StructC;
typedef struct func_801E4E58_StructB {
    u8 pad[0x2C];
    func_801E4E58_StructC *unk2C;
} func_801E4E58_StructB;
typedef struct func_801E4E58_StructA {
    u8 pad[8];
    struct func_801E4E58_StructA *unk8;
    u8 pad1[0x18];
    func_801E4E58_StructB *unk24;
} func_801E4E58_StructA;

#define OBJECT ((func_801E4E58_StructA *)D_801DAB14)

s32 func_801E4E58(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    func_801E4E58_StructC *temp_v0;

    if (func_801C0B8C(0xC042C0) != 0) {
        func_801C10D8(4, 0);
        D_801E8D50 = 0;
        return 0x1A;
    }
    temp_fv0 = (f32) func_801C1134(4, 0) / 138.0f;
    OBJECT->unk8->unk24->unk2C->unk4 = (f32) (((f64) temp_fv0 * D_801E9640) + D_801E9648);
    OBJECT->unk8->unk24->unk2C->unkC = D_801E9650 * temp_fv0 + D_801E9654;
    if (func_801CE2D0(0x02A80023, 0x1E) != 0 || func_801CE2D0(0x02A80023, 0x32) != 0) {
        temp_v0 = OBJECT->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, *(s32 *)&temp_v0->unkC, 0x665, D_801E9658, 1.0f);
    }
    return 0x19;
}
