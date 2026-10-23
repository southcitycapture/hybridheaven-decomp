#include "context.h"

typedef struct func_80011678_StructSub {
    u8 pad0[0x1C];
    f32 unk1C;
    u8 pad20[0x10];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
    u8 pad48[0xC];
    f32 unk54;
    f32 *unk58;
} func_80011678_StructSub;
typedef struct func_80011678_StructObj {
    u8 pad0[0x2C];
    func_80011678_StructSub *unk2C;
} func_80011678_StructObj;
typedef struct func_80011678_StructArg {
    u16 unk0, unk2;
    s32 unk4;
} func_80011678_StructArg;

typedef struct func_80011678_Rec {
    f32 v[7];
} func_80011678_Rec;

extern f32 *func_8000522C(u16, s32);

s32 func_80011678(func_80011678_StructObj *arg0, func_80011678_StructArg *arg1) {
    f32 *data;
    f32 frame, limit, duration, integral, value;
    s32 index, count;
    f32 *base, *next, *entry;

    data = func_8000522C(arg1->unk2, arg1->unk4);
    if (data != arg0->unk2C->unk58) {
        arg0->unk2C->unk54 = 0.0f;
        arg0->unk2C->unk58 = data;
    }
    count = arg1->unk0 & 0x7FFF;
    if (count != 0) {
        duration = (f32) count;
    } else {
        duration = *data - 1.0f;
    }
    frame = ((*data - 1.0f) / duration) * arg0->unk2C->unk54;
    if (*data - 1.0f < frame) {
        frame = *data - 1.0f;
    }
    index = (s32) frame;
    integral = (f32) index;
    base = &data[index * 7 + 1];
    next = &data[index * 7 + 8];
    value = frame - integral;
    if (frame != integral) {
        integral = *base++;
        arg0->unk2C->unk30 = (*next++ - integral) * value + integral;
        arg0->unk2C->unk34 = *base + (*next - *base) * value;
        base++, next++;
        arg0->unk2C->unk38 = *base + (*next - *base) * value;
        base++, next++;
        arg0->unk2C->unk3C = *base + (*next - *base) * value;
        base++, next++;
        arg0->unk2C->unk40 = *base + (*next - *base) * value;
        base++, next++;
        arg0->unk2C->unk44 = *base + (*next - *base) * value;
        base++, next++;
        arg0->unk2C->unk1C = *base + (*next - *base) * value;
    } else {
        arg0->unk2C->unk30 = base[0];
        arg0->unk2C->unk34 = base[1];
        arg0->unk2C->unk38 = base[2];
        arg0->unk2C->unk3C = base[3];
        arg0->unk2C->unk40 = base[4];
        arg0->unk2C->unk44 = base[5];
        arg0->unk2C->unk1C = base[6];
    }
    if (duration <= arg0->unk2C->unk54) {
        duration = arg1->unk0 & 0x8000;
        if (duration != 0.0f) {
            arg0->unk2C->unk54 = 0.0f;
        }
        return 1;
    }
    arg0->unk2C->unk54 = arg0->unk2C->unk54 + 1.0f;
    return 0;
}
