#include "context.h"

extern s32 func_80024114(s32, u8, s8, ...);
typedef struct func_80023D04_Struct {
    u32 unk0;
    u8 pad4[2];
    u8 unk6;
    u8 pad7[0x3A - 7];
    u16 unk3A;
    u8 pad3C[4];
    s16 unk40;
    s16 unk42;
    u8 pad44[4];
    u8 unk48;
    u8 pad49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[0xAA - 0x4E];
    s16 unkAA;
    u8 padAC[8];
    s16 unkB4;
    u16 unkB6;
    u8 padB8[6];
    u8 unkBE;
    u8 padBF[9];
    s16 unkC8;
} func_80023D04_Struct;
#define Q ((func_80023D04_Struct *) D_800CBDA4)

s32 func_80023D04(void) {
    s32 value;
    s16 modifier;
    s16 factor;
    s32 sound;
    s32 id;
    s32 firstId;
    s32 scale;
    s32 i;
    u16 *ids;
    func_80022B6C_Struct *entry;

    Q->unk6 &= 0xFE;
    value = Q->unk48 + Q->unk40 + Q->unk42;
    value *= Q->unk3A;
    if (value >= 0x800000) {
        value = 0x7FFF;
    } else if (value < 0) {
        value = 0;
    } else {
        value >>= 8;
    }
    modifier = Q->unkAA;
    sound = Q->unk4C;
    value = (Q->unk4A * value) >> 8;
    if (modifier != 0) {
        value = ((modifier + 0x100) * value) >> 8;
        if (value >= 0x8000) value = 0x7FFF;
    }
    modifier = Q->unkC8;
    if (modifier != 0) {
        factor = modifier / 64;
        if (factor < -0xFF) {
            value = 0;
        } else {
            value = ((factor + 0x100) * value) >> 8;
            if (value >= 0x8000) value = 0x7FFF;
        }
    }
    if (Q->unkBE != 0) {
        value = (Q->unkBE * value) >> 8;
        sound = func_80024114(sound, Q->unkBE, 2);
    }
    scale = D_800CBAC0.unk2;
    if (scale != 0) {
        switch (Q->unk0 & 0x7FFF) {
        case 0x11E:
        case 0x122:
        case 0x125:
        case 0x12A:
        case 0x213:
        case 0x214:
            break;
        default:
            value = (scale * value) >> 16;
            sound = func_80024114(sound, scale >> 8, 4 - (D_800CBAC0.unk0 >> 8), &D_800CBAC0);
            break;
        }
    }
    if ((Q->unk0 & 0x7FFF) < 0x100U) {
        scale = D_800CBABC.unk2;
        if (scale != 0) {
            value = (scale * value) >> 16;
            sound = func_80024114(sound, scale >> 8, 4 - (D_800CBABC.unk0 >> 8), &D_800CBABC);
        }
        if (D_800CBACE != 0) {
            value = (D_800CBACE * value) >> 8;
            if (D_800CBACD < 0) sound = func_80024114(sound, D_800CBACE, 2);
        }
    }
    id = Q->unk0 & 0x7FFF;
    if (D_800CBAB7 != 0 && id != 0x104 && id != 0x300) {
        value = (D_800CBAB7 * value) >> 8;
        if (D_800CBAB6 < 0) {
            sound = func_80024114(sound, D_800CBAB7, 1);
            id = Q->unk0 & 0x7FFF;
        }
    }
    ids = D_800CBAC8;
    i = 0;
    do {
        if (id == *ids) {
            entry = &D_800CBAC4[i];
            value = (entry->unk2 * value) >> 16;
            sound = func_80024114(sound, entry->unk2, 4 - (entry->unk0 >> 8));
            break;
        }
        i++;
        ids++;
    } while (i != 1);
    if (Q->unkB4 != (s16)value || Q->unkB6 != (sound & 0xFFFF)) {
        Q->unkB4 = value;
        Q->unkB6 = sound;
        func_80026950(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C, (s16)value, sound * 0x1388);
    }
}
