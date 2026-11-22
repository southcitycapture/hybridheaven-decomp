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
typedef struct func_801E56CC_Ret {
    u8 pad0[0xC];
    s32 unkC;
} func_801E56CC_Ret;
typedef struct func_801E56CC_Struct2 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
    u8 pad14[0x4];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x2B];
    u8 unk4B;
} func_801E56CC_Struct2;
typedef struct func_801E56CC_Struct1 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801E56CC_Struct2 *unk30;
} func_801E56CC_Struct1;
typedef struct func_801E56CC_Struct0 {
    u8 pad0[0x20];
    func_801E56CC_Struct1 *unk20;
} func_801E56CC_Struct0;
s32 func_801E56CC(s32 arg0, s32 arg1) {
    if (((func_801E56CC_Ret *) func_801BF6B0(4))->unkC >= 0x1E) {
        ((func_801E56CC_Struct0 *) D_8038D8D0)->unk20->unk30->unk4 = 120.400002f;
        ((func_801E56CC_Struct0 *) D_8038D8D0)->unk20->unk30->unk8 = 30.6000004f;
        ((func_801E56CC_Struct0 *) D_8038D8D0)->unk20->unk30->unkC = -78.5f;
        ((func_801E56CC_Struct0 *) D_8038D8D0)->unk20->unk30->unk12 = 0x1BF9;
        ((func_801E56CC_Struct0 *) D_8038D8D0)->unk20->unk30->unk18 = 1.0f;
        ((func_801E56CC_Struct0 *) D_8038D8D0)->unk20->unk30->unk1C = 1.0f;
        ((func_801E56CC_Struct0 *) D_8038D8D0)->unk20->unk30->unk4B = 0xFF;
        ((func_801E56CC_Struct0 *) D_8038D8D0)->unk20->unk22 = 1;
        func_801C1000(3, 8);
        return 8;
    }
    return 7;
}
