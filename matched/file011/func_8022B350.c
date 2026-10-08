#include "context.h"

typedef struct func_8022B350_Entry {
    u8 pad0[2];
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
} func_8022B350_Entry;

typedef struct func_8022B350_StructInner {
    u8 pad0[0xC];
    s32 unkC;
} func_8022B350_StructInner;

typedef struct func_8022B350_StructOuter {
    u8 pad0[0xC];
    func_8022B350_StructInner *unkC;
} func_8022B350_StructOuter;

extern func_8022B350_Entry D_801BBC8C;
extern func_8022B350_Entry D_801BBCAC;
extern s32 D_801BBCCC;

void func_8022B350(func_8022B350_StructOuter *arg0, s32 arg1) {
    func_8022B350_Entry *var_v0;

    if (D_801BBCCC == arg0->unkC->unkC) {
        var_v0 = &D_801BBC8C;
    } else {
        var_v0 = &D_801BBCAC;
    }
    var_v0->unk6 = 0;
    var_v0->unk8 = 0;
    var_v0->unk4 = 0;
    var_v0->unk2 = 0;
}
