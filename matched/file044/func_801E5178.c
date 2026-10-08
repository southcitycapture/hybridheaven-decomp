#include "context.h"

typedef struct func_801E5178_Struct2 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
    u8 pad14[0x37];
    u8 unk4B;
} func_801E5178_Struct2;

typedef struct func_801E5178_Struct1 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801E5178_Struct2 *unk30;
} func_801E5178_Struct1;

typedef struct func_801E5178_Struct0 {
    u8 pad0[0x1C];
    func_801E5178_Struct1 *unk1C;
} func_801E5178_Struct0;

extern func_801E5178_Struct0 *D_8038D8D0;
extern f32 D_801EDD14;
extern f32 D_801EDD18;
extern f32 D_801EDD1C;

s32 func_801E5178(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x118C2F) != 0) {
        D_8038D8D0->unk1C->unk30->unk4 = D_801EDD14;
        D_8038D8D0->unk1C->unk30->unk8 = D_801EDD18;
        D_8038D8D0->unk1C->unk30->unkC = D_801EDD1C;
        D_8038D8D0->unk1C->unk30->unk12 = 0x878;
        D_8038D8D0->unk1C->unk30->unk4B = 0xFF;
        D_8038D8D0->unk1C->unk22 = 1;
        func_801C1000(3, 7);
        return 0x10;
    }
    return 0xF;
}
