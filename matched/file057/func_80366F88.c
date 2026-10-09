#include "context.h"

extern void func_80011198(s32 arg0, void *arg1);
extern void func_80367050(void);
extern u8 D_803868C8[];
extern u8 D_803868D8[];

typedef struct func_80366F88_Struct {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad34[0x390 - 0x34];
    u8 unk390;
    u8 pad391;
    u8 unk392;
} func_80366F88_Struct;

typedef struct func_80366F88_Struct2 {
    u8 pad0[0x7C];
    void *unk7C;
    s16 unk80;
    s16 unk82;
} func_80366F88_Struct2;

void func_80366F88(s32 arg0, s32 arg1) {
    func_80366F88_Struct *var_v0;
    func_80366F88_Struct2 *temp_a1;
    if (arg0 == D_801BBCCC) {
        var_v0 = (func_80366F88_Struct *) &D_801BC03C;
    } else {
        var_v0 = (func_80366F88_Struct *) &D_801BC3D8;
    }
    temp_a1 = *(func_80366F88_Struct2 **) (arg0 + 0x5C);
    var_v0->unk392 = 0;
    func_80011198(arg1, temp_a1);
    if ((((u32) var_v0->unk30 << 27) >> 30) != 0 && (var_v0->unk390 == 2 || var_v0->unk390 == 2)) {
        temp_a1->unk7C = D_803868C8;
    } else {
        temp_a1->unk7C = D_803868D8;
    }
    temp_a1->unk82 = 5;
    temp_a1->unk80 = 3;
    func_800058DC(arg0, (void *) func_80367050);
}
