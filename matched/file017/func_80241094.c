#include "common.h"
struct func_80241094_StructB {
    u8 pad[0x12];
    s16 unk12;
};
struct func_80241094_StructA {
    u8 pad[0x2C];
    struct func_80241094_StructB *unk2C;
};
typedef struct {
    u8 pad0[0x9E];
    u16 unk9E;
    u16 unkA0;
    u8 padA2[2];
    u16 unkA4;
} func_80241144_Struct;
void func_80241144(func_80241144_Struct *arg0, s32 arg1);


struct func_80241094_StructC {
    u8 pad[0x9C];
    u16 unk9C;
};

struct func_80241094_StructD {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

extern struct func_80241094_StructA *D_801BBCD0;
extern s16 func_801FD284(s16, s16, s32);
extern s32 func_801C3044(void);
extern void func_801C2F0C(s32, void *);
extern void func_800058DC(void *, void *);

void func_80241094(struct func_80241094_StructC *arg0, void *arg1) {
    struct func_80241094_StructD sp18;

    D_801BBCD0->unk2C->unk12 = func_801FD284(D_801BBCD0->unk2C->unk12, (s16) ((s16) (arg0->unk9C + 0x1000) & 0x1FFF), 0x3DCCCCCD);
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x0168002D;
        sp18.unk8 = 3.0f;
        func_801C2F0C(4, &sp18);
        func_800058DC(arg0, &func_80241144);
    }
}
