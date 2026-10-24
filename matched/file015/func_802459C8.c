#include "context.h"

extern u8 D_80258880[], D_802588C0[];
extern f32 D_80258B04, D_80258B08, D_80258B0C, D_80258B10;
extern f32 D_80258B14, D_80258B18, D_80258B1C, D_80258B20;

typedef struct func_802459C8_StructObj {
    u8 pad[0x3C];
    u16 counter;
} func_802459C8_StructObj;

typedef struct func_802459C8_StructData {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    u8 pad[0xC];
} func_802459C8_StructData;

void func_802459C8(func_802459C8_StructObj *arg0, s32 arg1) {
    s32 count;
    u16 old;
    func_802459C8_StructData data;

    old = arg0->counter;
    arg0->counter = old + 1;
    count = old;
    func_8011AAF4(D_80258880, 0x2A2, arg0, 0, 2,
        D_80258B04, D_801BBBF0.f1E8, D_801BBBF0.f1EC,
        D_801BBBF0.f1F0, D_80258B08, D_801BBBF0.f1F4,
        D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
    if (count == 30) {
        func_80133980(0x73);
        return;
    }
    if (count == 180) {
        D_801BBBF0.f1E8 = D_80258B0C;
        D_801BBBF0.f1EC = D_80258B10;
        D_801BBBF0.f1F0 = D_80258B14;
        D_801BBBF0.f1F4 = D_80258B18;
        D_801BBBF0.f1F8 = D_80258B1C;
        D_801BBBF0.f1FC = D_80258B20;
        func_8011AAF4(D_802588C0, 0x2B1, arg0, 0, 1,
            0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC,
            D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4,
            D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        data.unk0 = 0;
        data.unk4 = 0x04100043;
        data.unk8 = 4.0f;
        func_801C2F0C(4, &data);
        func_801C3B5C();
        func_80020718(0x667);
        func_800058DC(arg0, func_80245BCC);
    }
}
