#include "context.h"

typedef struct func_8024247C_Struct_Inner {
    u8 pad0[0x8];
    f32 unk8;
} func_8024247C_Struct_Inner;

typedef struct func_8024247C_Struct_Mid {
    u8 pad0[0x30];
    func_8024247C_Struct_Inner *unk30;
} func_8024247C_Struct_Mid;

typedef struct func_8024247C_Struct {
    u8 pad0[0x24];
    func_8024247C_Struct_Mid *unk24;
    u8 pad1[0x90 - 0x28];
    f32 unk90;
} func_8024247C_Struct;

extern f32 D_80252578;
extern void func_802424EC(void);

void func_8024247C(func_8024247C_Struct *arg0, void *arg1) {
    func_8024247C_Struct_Inner *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 - arg0->unk90;
    arg0->unk90 = D_80252578;
    if (!(arg0->unk24->unk30->unk8 > -500.0f)) {
        func_800058DC(arg0, func_802424EC);
    }
}
