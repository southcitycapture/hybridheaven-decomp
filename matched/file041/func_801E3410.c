#include "context.h"
extern struct func_801E3750_Struct0 *D_8038D8D0;

extern f32 D_801E883C;
extern f32 D_801E8840;
extern f32 D_801E8844;

struct func_801E3410_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E3410_Mid {
    u8 pad[0x30];
    struct func_801E3410_Obj *unk30;
};

s32 func_801E3410(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xE4E1C0) != 0) {
        ((struct func_801E3410_Mid *) *(void **) D_8038D8D0)->unk30->unk4 = D_801E883C;
        ((struct func_801E3410_Mid *) *(void **) D_8038D8D0)->unk30->unk8 = D_801E8840;
        ((struct func_801E3410_Mid *) *(void **) D_8038D8D0)->unk30->unkC = D_801E8844;
        ((struct func_801E3410_Mid *) *(void **) D_8038D8D0)->unk30->unk12 = 0x1000;
        return 6;
    }
    return 5;
}
