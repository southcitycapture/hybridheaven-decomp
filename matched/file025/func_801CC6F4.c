#include "common.h"
typedef struct func_801CC654_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
} func_801CC654_Struct;
extern func_801CC654_Struct D_801E07A0[];
extern void func_8012D844(void *, s32, s32);
extern void func_8012D894(void *, s32, s32);
typedef struct func_801CC888_Struct {
    u8 pad[0x24];
    s32 unk24;
} func_801CC888_Struct;


typedef struct func_801CC6F4_StructEntry {
    s32 kind;
    s32 duration;
} func_801CC6F4_StructEntry;

extern func_801CC6F4_StructEntry *D_801DAAF4[];

void func_801CC6F4(s32 arg0) {
    func_801CC654_Struct *s;
    func_801CC6F4_StructEntry *entries;
    void *object;
    s32 index;

    index = arg0 - 1;
    if ((&D_801E07A0[arg0].unk0)[-5] != 0) {
        s = &D_801E07A0[index];
        if (s->unk34 == 0) {
            entries = D_801DAAF4[s->unk28];
            if (entries[s->unk38].kind == -1) {
                s->unk38 = 0;
            }
            s->unk3C = entries[s->unk38].kind;
            s->unk40 = entries[s->unk38].duration;
            s->unk38++;
            s->unk34 = 1;
            return;
        }
        object = (void *)s->unk0;
        if (((func_801CC888_Struct *)object)->unk24 != 0) {
            void (*callback)(void *, s32, s32) = NULL;
            s32 kind;

            if (s->unk24 == 1) {
                callback = func_8012D844;
            } else {
                callback = (s->unk24 == 2) ? func_8012D894 : callback;
            }
            kind = s->unk3C;
            switch (kind) {
            case 0:
                if (s->unk2C != 0) {
                    (*callback)(object, s->unk14, s->unk18);
                } else {
                    (*callback)(object, s->unk4, s->unk8);
                }
                break;
            case 1:
                if (s->unk2C != 0) {
                    (*callback)(object, s->unk1C, s->unk20);
                } else {
                    (*callback)(object, s->unkC, s->unk10);
                }
                break;
            }
            s->unk40--;
            if (s->unk40 == 0) {
                s->unk34 = 0;
            }
        }
    }
}
