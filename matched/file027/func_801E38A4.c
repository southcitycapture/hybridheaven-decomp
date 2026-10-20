#include "context.h"
typedef struct func_801E390C_Struct3 {
    u8 pad0[8];
    f32 unk8;
} func_801E390C_Struct3;
typedef struct func_801E390C_Struct2 {
    u8 pad0[0x30];
    func_801E390C_Struct3 *unk30;
} func_801E390C_Struct2;
typedef struct func_801E390C_Struct1 {
    func_801E390C_Struct2 *unk0;
} func_801E390C_Struct1;
extern struct func_801E390C_Struct1 *D_8038D8D0;
extern f32 D_801F3BA0;

extern void func_801C2EF8();

s32 func_801E38A4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x018CBA80) != 0) {
        func_801C2EF8();
        D_801F3BA0 = D_8038D8D0->unk0->unk30->unk8;
        return 0xA;
    }
    return 9;
}
