#include "common.h"
struct func_8022811C_Glob {
    u8 pad[0xE];
    u8 unkE;
    u8 unkF;
};
extern struct func_8022811C_Glob D_801BEC68;
extern s16 D_80240760[];
extern void func_800058DC(void *, void *);
void func_802281BC(s32 arg0, u8 arg1);
struct func_80228884_Obj {
    u8 pad[0x2A];
    u16 unk2A;
    u8 pad2C[4];
    void *unk30;
};
struct func_80228884_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[3];
    u16 unk94;
};
void func_80228884(struct func_80228884_Struct *arg0, struct func_80228884_Obj **arg1);


struct func_80228710_StructInner {
    s16 unk0;
    s16 unk2;
    f32 unk4;
};

struct func_80228710_StructEntry {
    u8 pad[0x2A];
    u16 unk2A;
    u8 pad2[4];
    struct func_80228710_StructInner *unk30;
};

void func_80228710(void *arg0, struct func_80228710_StructEntry **arg1) {
    struct func_80228710_StructEntry *entry;
    s8 i;

    for (i = 0; i < (&D_801BEC68)[1].unkE; i++) {
        entry = arg1[i];
        if (entry->unk2A == 12) {
            D_80240760[i] = (s16)entry->unk30->unk4 - 300;
        } else if (entry->unk2A == 13) {
            D_80240760[i] = entry->unk30->unk0 - 300;
        }
    }
    for (; i < (&D_801BEC68)[1].unkF; i++) {
        entry = arg1[i];
        if (entry->unk2A == 12) {
            D_80240760[i] = (s16)entry->unk30->unk4 + 300;
        } else if (entry->unk2A == 13) {
            D_80240760[i] = entry->unk30->unk0 + 300;
        }
    }
    func_802281BC((s32)arg1, 0);
    func_800058DC(arg0, (void *)func_80228884);
}
