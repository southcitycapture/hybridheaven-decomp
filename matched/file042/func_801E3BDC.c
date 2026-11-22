#include "common.h"

typedef struct func_801E3474_Struct2C {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E3474_Struct2C;
typedef struct func_801E3474_Struct24 {
    u8 pad0[0x2C];
    func_801E3474_Struct2C *unk2C;
} func_801E3474_Struct24;
typedef struct func_801E3474_Struct8 {
    u8 pad0[0x24];
    func_801E3474_Struct24 *unk24;
} func_801E3474_Struct8;
typedef struct func_801E3474_Struct0 {
    u8 pad0[0x8];
    func_801E3474_Struct8 *unk8;
} func_801E3474_Struct0;
extern struct func_801E3474_Struct0 *D_801DAB14;
extern s32 func_801C0B8C(u64);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
typedef struct func_801E3BDC_Struct8 {
    u8 pad0[0x8];
    func_801E3474_Struct8 *unk8;
} func_801E3BDC_Struct8;
s32 func_801E3BDC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4F587F) != 0) {
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk4 = 301.0f;
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unkC = 10.0f;
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC4D8(1, 0x01680040, 0, 0, 5.0f);
        return 8;
    }
    return 7;
}
