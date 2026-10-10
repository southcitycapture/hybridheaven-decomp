#include "context.h"

typedef struct func_8037BEA4_Struct {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0xAD - 0x10];
    u8 unkAD;
    u8 padAE[0xB0 - 0xAE];
    s16 unkB0;
} func_8037BEA4_Struct;

typedef struct func_8037BEA4_Outer {
    u8 pad[0x30];
    u8 *unk30;
} func_8037BEA4_Outer;

typedef struct func_8037BEA4_Entry {
    func_8037BEA4_Outer *unk0;
    func_8037BEA4_Outer *unk4;
} func_8037BEA4_Entry;

void func_8037BEA4(void *arg0, void *arg1) {
    func_8037BEA4_Struct *self;
    func_8037BEA4_Entry *tbl;
    s32 count;
    s32 idx;
    s32 off;
    s32 val;
    s16 hp;

    void *t = arg1;
    void **pp = &arg1;
    self = arg0;
    hp = self->unkB0;
    self->unkB0 = hp - 1;
    if (hp <= 0 || func_80236BA4((s32) arg0, t) == 0) {
        self->unkC[0xAF] = 0;
        func_80005700(arg0);
        return;
    }
    if (self->unkB0 < 0x28) {
        count = 0;
        idx = 0;
        if (self->unkAD > 0) {
            do {
                off = idx << 1;
                off = off << 2;
                count = (count + 1) & 0xFF;
                val = ((s32) (self->unkB0 * 0xFF) / 40) & 0xFF;
                tbl = (func_8037BEA4_Entry *) ((u8 *) &D_8008DA88 + off);
                tbl->unk4->unk30[0xB] = val;
                tbl->unk0->unk30[0xB] = val;
                idx = count;
            } while (count < self->unkAD);
        }
    }
}
