#include "context.h"

extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern s32 func_8012C97C(s32, s32);
extern void *func_801505AC(s32);
extern void func_80126820(s32);

struct func_80257E48_Mtx;

typedef struct func_80257E48_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    struct func_80257E48_Mtx *unk30;
} func_80257E48_Node;

typedef struct func_80257E48_Arg1 {
    u8 pad0[4];
    func_80257E48_Node *unk4;
    func_80257E48_Node *unk8;
} func_80257E48_Arg1;

typedef struct func_80257E48_Obj {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[6];
    f32 unk44;
    u8 pad2[0x2C];
    s32 unk74;
} func_80257E48_Obj;

typedef struct func_80257E48_Gfx {
    u8 pad0[0x40];
    f32 unk40;
    u8 pad1[4];
    f32 unk48;
} func_80257E48_Gfx;

typedef struct func_80257E48_Mtx {
    u8 pad0[8];
    f32 unk8;
} func_80257E48_Mtx;

typedef struct func_80257E48_Ent {
    u8 pad0[0x24];
    func_80257E48_Node *unk24;
    u8 pad1[0x4C];
    s32 unk74;
} func_80257E48_Ent;

extern void func_80257F34();

void func_80257E48(func_80257E48_Obj *arg0, func_80257E48_Arg1 *arg1) {
    func_80257E48_Ent *temp_v0_2;
    func_80257E48_Mtx *temp_v1;

    if ((s32) arg0->unk3C++ >= 0x258) {
        func_801C3B2C(2);
        func_801C3B10(1);
        ((func_80257E48_Gfx *) *(func_80257E48_Gfx **)((u8 *) D_801BBBF0 + 0xDC))->unk40 = 0.0f;
        ((func_80257E48_Gfx *) *(func_80257E48_Gfx **)((u8 *) D_801BBBF0 + 0xDC))->unk48 = 0.0f;
        arg1->unk4->unk22 = 0;
        arg1->unk8->unk22 = 1;
        arg0->unk3C = 0;
        arg0->unk44 = 0.0f;
        arg0->unk74 = func_8012C97C(0x302, 2);
        temp_v0_2 = func_801505AC(0);
        temp_v0_2->unk24->unk22 = 0;
        temp_v1 = temp_v0_2->unk24->unk30;
        temp_v1->unk8 = temp_v1->unk8 - 20.0f;
        temp_v0_2->unk74 = 0;
        func_80126820(0x20);
        func_80020718(0x18B);
        func_800058DC(arg0, func_80257F34);
    }
}
