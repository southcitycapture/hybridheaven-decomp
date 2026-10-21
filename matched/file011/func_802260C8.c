#include "context.h"

extern s32 func_802257F4(s32, s16, s16);
extern s32 func_80225930(s32, s16, s16);

struct func_802260C8_StructInner {
    u8 pad[0x2C];
    s32 unk2C;
};
struct func_802260C8_Struct {
    u8 pad[0x24];
    struct func_802260C8_StructInner *unk24;
    u8 pad28[0x4C - 0x28];
    u8 unk4C;
    u8 pad4D;
    u8 unk4E;
};

s32 func_802260C8(struct func_802260C8_Struct *arg0) {
    s32 inner;
    u8 first;
    u8 second;

    first = arg0->unk4C;
    second = arg0->unk4E;
    inner = arg0->unk24->unk2C;
    arg0->unk4E = first;
    arg0->unk4C = second;
    if (func_802257F4(inner, (s16) first, arg0->unk4C)) {
        return 1;
    }
    if (func_802257F4(inner, (s16) -first, (s16) -arg0->unk4C)) {
        return 2;
    }
    if (func_80225930(inner, (s16) second, arg0->unk4E)) {
        return 1;
    }
    if (func_80225930(inner, (s16) -second, (s16) -arg0->unk4E)) {
        return 2;
    }
    return 0;
}
