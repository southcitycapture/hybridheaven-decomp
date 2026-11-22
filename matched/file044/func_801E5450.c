#include "common.h"

struct func_801E4EE0_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x4B - 0x14];
    u8 unk4B;
};
struct func_801E4EE0_Mid {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E4EE0_Leaf *unk30;
};
struct func_801E4EE0_Obj {
    u8 pad0[0x1C];
    struct func_801E4EE0_Mid *unk1C;
};
extern struct func_801E4EE0_Obj *D_8038D8D0;
extern void *func_801BF6B0();
extern void func_801C1000(s32, s32);                       /* extern */
struct func_801E5450_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x18 - 0x14];
    f32 unk18;
    f32 unk1C;
    u8 pad3[0x4B - 0x20];
    u8 unk4B;
};
struct func_801E5450_Mid {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E5450_Leaf *unk30;
};
struct func_801E5450_Obj {
    u8 pad0[0x20];
    struct func_801E5450_Mid *unk20;
};
struct func_801E5450_Ret {
    u8 pad0[0xC];
    s32 unkC;
};
s32 func_801E5450(s32 arg0, s32 arg1) {
    if (((struct func_801E5450_Ret *) func_801BF6B0(0))->unkC >= 0x11) {
        ((struct func_801E5450_Obj *) D_8038D8D0)->unk20->unk30->unk4 = 50.2000008f;
        ((struct func_801E5450_Obj *) D_8038D8D0)->unk20->unk30->unk8 = 10.5f;
        ((struct func_801E5450_Obj *) D_8038D8D0)->unk20->unk30->unkC = (-47.7000008f);
        ((struct func_801E5450_Obj *) D_8038D8D0)->unk20->unk30->unk12 = 0x1B57;
        ((struct func_801E5450_Obj *) D_8038D8D0)->unk20->unk30->unk18 = 1.0f;
        ((struct func_801E5450_Obj *) D_8038D8D0)->unk20->unk30->unk1C = 1.0f;
        ((struct func_801E5450_Obj *) D_8038D8D0)->unk20->unk30->unk4B = 0xFF;
        ((struct func_801E5450_Obj *) D_8038D8D0)->unk20->unk22 = 1;
        func_801C1000(3, 8);
        return 6;
    }
    return 5;
}
