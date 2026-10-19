#include "context.h"

struct func_8022F680_Struct {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[0x24 - 0x1C];
    f32 unk24;
    u8 pad2[0x30 - 0x28];
    u8 unk30;
    u8 pad3[0xA0 - 0x31];
    s16 unkA0;
    u8 pad4[0x2AC - 0xA2];
    s16 unk2AC[6];
    s16 unk2B8[6];
};
struct func_8022F680_Ret {
    u8 pad0[0x90];
    u8 unk90;
};
extern struct func_8022F680_Ret *func_80005670();
extern s16 func_8022F630();
extern f64 D_8023FAF8;
extern f64 D_8023FB00;
extern u8 D_803896DC[];

void func_8022F680(s32 arg0, struct func_8022F680_Struct *arg1) {
    if ((arg1->unk2B8[0] < 0) && (arg1->unk2AC[0] == 0)) {
        arg1->unk2AC[0] = func_8022F630(arg1, 0);
        arg1->unk30 = (u8) ((arg1->unk30 & 0xFFE1) | 2);
    }
    if ((arg1->unk2B8[1] < 0) && (arg1->unk2AC[1] == 0)) {
        arg1->unk2AC[1] = func_8022F630(arg1, 1);
    }
    if ((arg1->unk2B8[2] < 0) && (arg1->unk2AC[2] == 0)) {
        arg1->unk2AC[2] = func_8022F630(arg1, 2);
        if (arg1->unk24 == 0.0f) {
            arg1->unk24 = arg1->unk18;
            arg1->unk18 = (f32) ((f64) arg1->unk18 * D_8023FAF8);
        }
    }
    if ((arg1->unk2B8[3] < 0) && (arg1->unk2AC[3] == 0)) {
        arg1->unk2AC[3] = func_8022F630(arg1, 3);
        if (arg1->unk24 == 0.0f) {
            arg1->unk24 = arg1->unk18;
            arg1->unk18 = (f32) ((f64) arg1->unk18 * D_8023FB00);
        }
    }
    if ((arg1->unk2B8[4] < 0) && (arg1->unk2AC[4] == 0)) {
        arg1->unkA0 = 0x32;
        arg1->unk2AC[4] = func_8022F630(arg1, 4);
        func_80005670(arg0, D_803896DC)->unk90 = 1;
    }
    if ((arg1->unk2B8[5] < 0) && (arg1->unk2AC[5] == 0)) {
        arg1->unkA0 = 0x32;
        arg1->unk2AC[5] = func_8022F630(arg1, 5);
        func_80005670(arg0, D_803896DC)->unk90 = 1;
    }
}
