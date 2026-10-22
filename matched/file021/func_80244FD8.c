#include "context.h"
extern void func_8024522C();
struct func_80244FD8_In {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_80244FD8_Out {
    u8 pad0[0x30];
    struct func_80244FD8_In *unk30;
};
struct func_80244FD8_S6 {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    u8 pad[4];
    u32 unk10;
};
struct func_80244FD8_A {
    u8 pad0[0x38];
    struct func_80244FD8_S6 *unk38;
    u8 pad3c[0x90 - 0x3C];
    s16 unk90;
};

void func_80244FD8(struct func_80244FD8_A *arg0, struct func_80244FD8_Out **arg1) {
    u32 v;
    func_8001F74C(arg0);
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    v = arg0->unk38->unk10 >> 24;
    if (v == 0) {
        func_8012C89C(arg0, 0, 0x507, 3);
        v = arg0->unk38->unk10 >> 24;
    }
    if (v == 1) {
        func_8012C89C(arg0, 0, 0x507, 4);
        v = arg0->unk38->unk10 >> 24;
    }
    if (v == 2) {
        func_8012C89C(arg0, 0, 0x508, 2);
        v = arg0->unk38->unk10 >> 24;
    }
    if (v == 3) {
        func_8012C89C(arg0, 0, 0x508, 6);
    }
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk30 = (u32)D_80250F40 | 0x40000000;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    (*arg1)->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
    (*arg1)->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
    (*arg1)->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk18 = 1.0f;
    (*arg1)->unk30->unk1C = 1.0f;
    (*arg1)->unk30->unk20 = 1.0f;
    func_800062F8(*arg1, 0x80000500);
    arg0->unk90 = 0x1E;
    func_800058DC((s32)arg0, func_8024522C);
}
