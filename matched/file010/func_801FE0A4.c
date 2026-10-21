#include "context.h"
struct func_801FE250_Sub {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
};
struct func_801FE250_Obj {
    u8 pad0[0x30];
    struct func_801FE250_Sub *unk30;
};
struct func_801FE250_Struct {
    u8 pad0[0xAB];
    u8 unkAB;
    u8 pad1[0xB0 - 0xAC];
    s16 unkB0;
};
void func_801FE250(struct func_801FE250_Struct *arg0, struct func_801FE250_Obj **arg1);

struct func_801FE0A4_Inner { u8 pad[0xB]; u8 unkB; };
struct func_801FE0A4_Mid { u8 pad[0x30]; struct func_801FE0A4_Inner *unk30; };
struct func_801FE0A4_Obj {
    u8 pad[0xAA];
    u8 unkAA;
    u8 unkAB;
    u8 pad2[4];
    s16 unkB0;
};
extern void func_80126E88(s32);
extern f32 func_8001EAD0();
extern u8 func_80126A0C();

void func_801FE0A4(struct func_801FE0A4_Obj *arg0, struct func_801FE0A4_Mid **arg1) {
    if (arg0->unkB0 == 0x34) {
        func_80126E88(0x127);
        func_80126E88(0x125);
    }
    if ((arg0->unkB0 >= 0x35) && (arg0->unkAA == 0)) {
        arg0->unkAA = func_80126A0C(arg0, 0x128, 0);
    }
    if (arg0->unkB0 == 0x32) {
        func_80020718(0x82);
    }
    if (arg1[arg0->unkAB + 1]->unk30->unkB == 0xFF) {
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_801FE250);
        return;
    }
    arg1[arg0->unkAB + 1]->unk30->unkB = (u32)(func_8001EAD0((s16)((arg0->unkB0++ << 6) / 4)) * 255.0f);
}
