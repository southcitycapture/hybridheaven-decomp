#include "common.h"
typedef struct func_801FCB44_Struct {
    u8 pad[0x18];
    u8 *unk18;
} func_801FCB44_Struct;
extern struct func_801FCB44_Struct *D_8038D8D0;
extern s32 func_801C0B8C(u64);


struct func_801FCBF8_StructData {
    u8 pad0[8];
    f32 unk8;
    u8 padC[6];
    s16 unk12;
};
struct func_801FCBF8_StructMid {
    u8 pad0[0x30];
    struct func_801FCBF8_StructData *unk30;
};
struct func_801FCBF8_StructRoot {
    u8 pad0[0x1C];
    struct func_801FCBF8_StructMid *unk1C;
};
extern f32 D_80208DB8;
extern f32 D_80208DBC;

s32 func_801FCBF8(s32 arg0, s32 arg1) {
    struct func_801FCBF8_StructData *temp_v0;

    if (func_801C0B8C(0x3D0900) != 0) {
        return 3;
    }
    if (func_801C0B8C(0x1E8480) != 0) {
        temp_v0 = ((struct func_801FCBF8_StructRoot *)D_8038D8D0)->unk1C->unk30;
        temp_v0->unk8 = (f32)(temp_v0->unk8 + D_80208DB8);
        temp_v0 = ((struct func_801FCBF8_StructRoot *)D_8038D8D0)->unk1C->unk30;
        temp_v0->unk12 = (s16)(temp_v0->unk12 + (s16)((2048.0f * D_80208DBC) / 90.0f));
    }
    return 2;
}
