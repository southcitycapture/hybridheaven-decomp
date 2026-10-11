#include "context.h"
extern struct func_801C3174_Global D_801E0B20;
extern void func_800058DC(void *a, void *b);

struct func_801C32EC_Sub {
    u8 pad[0x78];
    s16 unk78;
};

struct func_801C32EC_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x10];
    struct func_801C32EC_Sub *unk5C;
};

struct func_801C32EC_Global {
    u32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
};

extern void func_801C3374(void);

void func_801C32EC(struct func_801C32EC_Obj *arg0, s32 arg1) {
    struct func_801C32EC_Sub *temp_v1;

    temp_v1 = arg0->unk5C;
    arg0->unk2C &= ~0x80;
    arg0->unk2C |= 0x20;
    arg0->unk44 = 0.0f;
    arg0->unk40 = 0.0f;
    arg0->unk48 = 0.0f;
    D_801E0B20.unk0 = 0x01680041;
    D_801E0B20.unk4 = 0;
    D_801E0B20.unk6 = 0x1100;
    D_801E0B20.unk8 = 1.0f;
    temp_v1->unk78 = 1;
    func_800058DC(arg0, func_801C3374);
}
