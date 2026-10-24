extern struct func_80380B30_SA *D_8038CFB4;
extern void func_80020744();
void func_803805A0();
#include "context.h"

typedef struct func_8038047C_StructData {
    u8 pad0[4];
    s32 *entries;
    u8 pad8[4];
    u16 count;
} func_8038047C_StructData;

typedef struct func_8038047C_StructSource {
    u8 pad0[0x24];
    s32 value;
    u8 pad28[0x34];
    func_8038047C_StructData *data;
} func_8038047C_StructSource;

typedef struct func_8038047C_StructState {
    u8 pad0[0x24];
    s32 flags;
    u8 pad28[8];
    s32 callback;
    u8 pad34[0x14];
    u8 r, g, b, a;
} func_8038047C_StructState;

typedef struct func_8038047C_StructObject {
    u8 pad0[0x2C];
    func_8038047C_StructState *state;
} func_8038047C_StructObject;

typedef struct func_8038047C_StructArg {
    u8 pad0[0x90];
    s16 unk90;
    u8 pad92[2];
    u8 unk94;
} func_8038047C_StructArg;

extern u8 D_80389820[];

void func_8038047C(func_8038047C_StructArg *arg0, s32 arg1) {
    s32 pad1;
    func_8038047C_StructSource *src;
    func_8038047C_StructData *data;
    s32 *entries;

    src = (func_8038047C_StructSource *)D_8038CFB0;
    data = src->data;
    entries = data->entries;
    D_8038CFB4 = (void *)src->value;
    arg0->unk90 = 0;
    arg0->unk94 = data->count;
    func_80006214((void *)D_8038CFB0);
    for (arg1 = 1; arg1 < arg0->unk94; arg1 = (u8)(arg1 + 1)) {
        if (entries[arg1] >= 0) {
            func_8038047C_StructObject **object;
            func_8038047C_StructState *state;
            object = &((func_8038047C_StructObject **)D_8008DA88)[arg1];
            state = (*object)->state;
            state->flags |= 0x100;
            (*object)->state->callback = (s32)D_80389820 | 0x40000000;
            (*object)->state->r = 0;
            (*object)->state->g = 0;
            (*object)->state->b = 0;
            (*object)->state->a = 0xFF;
        }
    }
    func_80020744(0x138, arg1);
    func_800058DC(arg0, func_803805A0);
}
