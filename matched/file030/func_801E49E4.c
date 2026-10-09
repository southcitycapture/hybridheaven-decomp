#include "context.h"
extern struct func_801E5060_StructC *D_8038D8D0;
extern s32 func_801C0D04(s32 arg0, s32 arg1);

typedef struct func_801E49E4_Struct3 {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801E49E4_Struct3;

typedef struct func_801E49E4_Struct2 {
    u8 pad0[0x30];
    func_801E49E4_Struct3 *unk30;
} func_801E49E4_Struct2;

typedef struct func_801E49E4_Struct1 {
    u8 pad0[0x4];
    func_801E49E4_Struct2 *unk4;
} func_801E49E4_Struct1;

s32 func_801E49E4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xFBC520) != 0) {
        ((func_801E49E4_Struct1 *) D_8038D8D0)->unk4->unk30->unk48 = 0xFF;
        ((func_801E49E4_Struct1 *) D_8038D8D0)->unk4->unk30->unk49 = 0xFF;
        ((func_801E49E4_Struct1 *) D_8038D8D0)->unk4->unk30->unk4A = 0;
        func_801C0D04(3, 1);
        return 0xC;
    }
    return 0xB;
}
