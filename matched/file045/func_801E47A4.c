#include "context.h"
extern s32 D_8017AE98;
extern u8 D_8038D840[];
extern s32 D_8038D850;
extern struct func_801E26A4_Node *D_8038D854;
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);

struct func_801E47A4_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad3[0xC];
    void *unk30;
};

struct func_801E47A4_Obj {
    u8 pad0[0x2C];
    struct func_801E47A4_Data *unk2C;
};

struct func_801E47A4_Node {
    struct func_801E47A4_Obj *unk0;
};


s32 func_801E47A4(s32 arg0, s32 arg1) {
    struct func_801E47A4_Node **v;

    func_80005E44(D_8038D850, D_8038D840);
    func_80006214(D_8038D850);
    func_8012C89C(D_8038D850, 0, 0x463, 0);
    v = &D_8038D854;
    (*v)->unk0->unk2C->unk4 = 0.0f;
    (*v)->unk0->unk2C->unk8 = 0.0f;
    (*v)->unk0->unk2C->unkC = 0.0f;
    (*v)->unk0->unk2C->unk18 = 1.0f;
    (*v)->unk0->unk2C->unk1C = 1.0f;
    (*v)->unk0->unk2C->unk20 = 1.0f;
    (*v)->unk0->unk2C->unk12 = 0;
    (*v)->unk0->unk2C->unk30 = &D_8017AE98;
    return 2;
}
