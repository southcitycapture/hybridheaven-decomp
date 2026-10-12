#include "context.h"

typedef struct func_801CE8C8_StructInner {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_801CE8C8_StructInner;

typedef struct func_801CE8C8_StructOuter {
    u8 pad0[0x30];
    func_801CE8C8_StructInner *unk30;
} func_801CE8C8_StructOuter;

typedef struct func_801CE8C8_Struct {
    u8 pad0[0x94];
    u8 unk94;
} func_801CE8C8_Struct;

extern void func_801CE9DC();

void func_801CE8C8(func_801CE8C8_Struct *arg0, void **arg1) {
    s32 var_a1;
    s8 sp2B;
    s32 var_v1;
    void **var_a2;
    func_801CE8C8_StructInner *temp_v0;

    sp2B = 0;
    if (func_801CE0E8(arg0, &sp2B) == 0) {
        var_a1 = 0;
        var_a2 = arg1;
        var_v1 = 0;
        if ((s32) arg0->unk94 > 0) {
            do {
                var_a1 += 1;
                temp_v0 = ((func_801CE8C8_StructOuter *) *var_a2)->unk30;
                temp_v0->unk10 = (s16) (var_v1 / (s32) arg0->unk94);
                var_a2 += 1;
                temp_v0->unk12 = (s16) (var_v1 / (s32) arg0->unk94);
                temp_v0->unk14 = (s16) (var_v1 / (s32) arg0->unk94);
                var_v1 += 0x2000;
            } while (var_a1 < (s32) arg0->unk94);
        }
        func_800058DC(arg0, (s32) func_801CE9DC);
    }
}
