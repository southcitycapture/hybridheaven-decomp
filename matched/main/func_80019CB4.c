#include "context.h"

typedef struct func_80019CB4_Struct {
    u8 pad0[0x10];
    u8 unk10;
    u8 unk11;
    u8 pad12[0xA];
    s16 unk1C;
    s16 unk1E;
    u8 pad20[6];
} func_80019CB4_Struct;

void func_80019CB4(s32 arg0, s32 arg1) {
    extern void func_8001A804();
    s16 temp_t1;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_a2;
    s32 temp_a3;
    s32 index;
    func_80019CB4_Struct *temp_v0;

    switch ((u16)D_8008EBD2) {
    case 0:
        index = D_8008EBC2;
        temp_v0 = (func_80019CB4_Struct *)&D_8008EC18[index];
        temp_a2 = temp_v0->unk10;
        temp_a3 = temp_v0->unk11;
        temp_v1 = temp_a2 * 0x10;
        temp_a0 = temp_a3 * 0x10;
        temp_v0->unk1C = temp_v0->unk1C + (temp_v1 / 10);
        temp_v0->unk1E = temp_v0->unk1E + (temp_a0 / 10);
        temp_t1 = temp_v0->unk1C;
        if ((temp_t1 >= temp_v1) || (temp_v1_2 = temp_v0->unk1E, temp_v1_2 >= temp_a0)) {
            func_8001A804(index & 0xFF, "wa fa", temp_a2, temp_a3);
            func_800058DC(arg0, func_80017BB8);
            return;
        }
        func_8001A804(index & 0xFF, "wa fa", temp_t1 >> 4, temp_v1_2 >> 4);
        return;
    case 1:
        func_800058DC(arg0, func_80017BB8);
        return;
    }
}
