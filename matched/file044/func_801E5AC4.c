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
extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern s32 func_801C1134(s32, s32);
typedef struct func_801E59C8_Leaf {
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
} func_801E59C8_Leaf;
typedef struct func_801E59C8_Mid {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    func_801E59C8_Leaf *unk30;
} func_801E59C8_Mid;
typedef struct func_801E59C8_Obj {
    u8 pad0[0x20];
    func_801E59C8_Mid *unk20;
} func_801E59C8_Obj;


s32 func_801E5AC4(s32 arg0, s32 arg1) {
    f32 ratio;
    f32 scale;
    f32 alpha;

    if (func_801C1088(3, 8, 10) != 0) {
        func_801C10D8(3, 8);
        ((func_801E59C8_Obj *)D_8038D8D0)->unk20->unk22 = 0;
        return 0x13;
    }
    ratio = (f32)(u32)func_801C1134(3, 8) / 10.0f;
    scale = 19.0f * ratio + 1.0f;
    alpha = -255.0f * ratio + 255.0f;
    ((func_801E59C8_Obj *)D_8038D8D0)->unk20->unk30->unk18 = scale;
    ((func_801E59C8_Obj *)D_8038D8D0)->unk20->unk30->unk1C = scale;
    ((func_801E59C8_Obj *)D_8038D8D0)->unk20->unk30->unk4B = (u32)alpha;
    return 0x12;
}
