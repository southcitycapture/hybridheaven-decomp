#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
typedef struct func_80358964_StructA {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad1[0x4C - 0x31];
    s16 unk4C;
} func_80358964_StructA;
extern func_80358964_StructA *D_8038CC10;
extern void func_80005700();
void func_800058DC(void *arg0, void *arg1);
struct func_80358A40_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};

extern void func_80359F54();
void func_8035A038(s32 arg1, s32 arg2);

typedef struct func_80359CD0_StructObj {
    u8 pad[0x64];
    s32 unk64;
} func_80359CD0_StructObj;

typedef struct func_80359CD0_StructGlobals {
    u8 pad0[0xDC];
    func_80359CD0_StructObj *unkDC;
    u8 pad1[0xEC - 0xE0];
    func_80359CD0_StructObj *unkEC;
    u8 pad2[0x1035 - 0xF0];
    u8 unk1035;
} func_80359CD0_StructGlobals;

#define GL_ ((func_80359CD0_StructGlobals *)D_801BBBF0)

void func_80359CD0(void *arg0, s32 arg1) {
    func_80359CD0_StructObj *other;
    func_80359CD0_StructGlobals *g;
    void *state;
    s32 v;

    other = (arg0 != (void *)GL_->unkDC) ? GL_->unkDC : GL_->unkEC;
    state = (arg0 != (void *)GL_->unkDC) ? D_801BC03C : D_801BC3D8;
    if ((s32)((struct func_80358A40_Struct *)D_8038CC10)->unk4C >= 4) {
        v = other->unk64;
        if (v != 0) {
            func_80005700(v, other, state, arg0);
            other->unk64 = 0;
        }
        ((struct func_80358A40_Struct *)D_8038CC10)->unk4C |= 0x8000;
        g = GL_;
        g->unk1035 = 0;
        func_800058DC(arg0, func_80359F54);
        *(void (**)(s32, s32))((u8 *)state + 0x324) = func_8035A038;
    }
}
