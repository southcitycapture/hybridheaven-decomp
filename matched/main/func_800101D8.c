#include "common.h"
extern u8 D_800631F0[];
typedef struct func_800101D8_Ent {
    s16 a, b, c, pad;
    f32 x, y, z;
} func_800101D8_Ent;
extern func_800101D8_Ent D_80063670[];
extern u16 D_80063DF0[];
typedef struct func_800101D8_Struct {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    s32 unk8;
} func_800101D8_Struct;


#undef a

typedef struct func_800101D8_StructSub {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[4];
    s32 unk28;
    u8 pad2C[0x5C - 0x2C];
    func_800101D8_Struct unk5C;
    u8 pad68[2];
    s8 unk6A;
} func_800101D8_StructSub;

typedef struct func_800101D8_StructObj {
    u8 pad0[0x2C];
    func_800101D8_StructSub *unk2C;
} func_800101D8_StructObj;

extern u16 D_80010068(u16, void *, u16, void *, void *, void *, u16 *, u16 *);

u16 func_800101D8(u16 arg0, u32 **arg1, u16 arg2) {
    func_800101D8_Struct *p;
    func_800101D8_Struct sp60;
    u16 n;
    func_800101D8_Ent *entry;
    s32 i;
    u16 sp52;
    u16 sp50;
    u16 sp4E;
    u16 sp4C;
    func_800101D8_StructSub *s;
    u16 *animation_flags_out;

    p = &((func_800101D8_Struct *)D_800631F0)[arg0];
    sp60 = *p;
    sp4C = 0;
    sp4E = sp60.unk6;
    animation_flags_out = &sp52;
    n = D_80010068(arg0, arg1, arg2, D_80063DF0, D_800631F0, D_80063670, animation_flags_out, &sp50);
    if (sp4E & 1) {
        if (p->unk4 >= sp50) {
            p->unk4 = sp50;
            if (sp52 & 0x8000) {
                p->unk4--;
            }
        }
    } else if (sp4E & 2) {
        if ((s32)p->unk4 <= 0) {
            if (sp4E & 0x300) {
                p->unk4 = sp50;
                if (sp52 & 0x8000) {
                    p->unk4--;
                }
                if (sp4E & 0x200) {
                    p->unk6 ^= 0x10;
                }
            } else {
                p->unk4 = 0;
                sp4C = 1;
            }
        } else {
            p->unk4 = p->unk4 - 1;
        }
    } else {
        if ((s32)p->unk4 >= sp50) {
            p->unk4 = sp50;
            if (sp4E & 0x300) {
                if (sp52 & 0x8000) {
                    p->unk4 = 1;
                } else {
                    p->unk4 = 0;
                }
                if (sp4E & 0x200) {
                    p->unk6 ^= 0x10;
                }
            } else {
                sp4C = 1;
            }
        } else {
            p->unk4 = p->unk4 + 1;
        }
    }
    i = 1;
    if (n >= 2) {
        do {
            if (arg0 == D_80063DF0[i]) {
                s = ((func_800101D8_StructObj **)arg1)[i]->unk2C;
                if (s->unk28 != 0) {
                    entry = &D_80063670[i] - 1;
                    s->unk10 = entry->a;
                    s->unk12 = entry->b;
                    s->unk14 = entry->c;
                    s->unk18 = entry->x;
                    s->unk1C = entry->y;
                    s->unk20 = entry->z;
                    s->unk5C = *p;
                    s->unk6A = sp4C;
                }
            }
            i++;
        } while (i != n);
    }
    return sp4C;
}
