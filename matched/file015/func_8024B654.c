#include "context.h"
extern struct func_8024C5B4_Struct D_801BBBF0;
struct func_8024C5B4_Struct {
    u8 pad[0x1E8];
    s32 unk1E8;
    s32 unk1EC;
    s32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80020718(s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);

typedef struct func_8024B654_StructState {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024B654_StructState;

typedef struct func_8024B654_StructPosition {
    u8 pad[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_8024B654_StructPosition;

typedef struct func_8024B654_StructObject {
    u8 pad[0x30];
    func_8024B654_StructPosition *unk30;
} func_8024B654_StructObject;

typedef struct func_8024B654_StructGlobal {
    u8 pad[4];
    u16 unk4;
    u8 pad6[0x3A0];
    u8 unk3A6;
} func_8024B654_StructGlobal;

void func_8024B654(func_8024B654_StructState *arg0, func_8024B654_StructObject **arg1) {
    u16 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 + 1;
    if ((s32)temp_v0 >= 0xF) {
        if (temp_v0 == 0xF) {
            ((func_8024B654_StructGlobal *)&D_801BBBF0)->unk3A6 = 1;
            ((func_8024B654_StructGlobal *)&D_801BBBF0)->unk4 = 0x108;
            func_8012FE50(0x10, ((func_8024B654_StructGlobal *)&D_801BBBF0)->unk4, 0, 1, 0);
            func_80020718(0x122);
            func_80020718(0xA);
        }
        (*arg1)->unk30->unk4 += (f64)func_8001EB64((*arg1)->unk30->unk12) * 1.5;
        (*arg1)->unk30->unkC -= (f64)func_8001EAD0((*arg1)->unk30->unk12) * 1.5;
    }
}
