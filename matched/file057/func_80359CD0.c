#include "context.h"
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
    u8 pad[4];
    void *state;
    u8 pad2[4];

    other = (arg0 != (void *)GL_->unkDC) ? GL_->unkDC : GL_->unkEC;
    state = (arg0 != (void *)GL_->unkDC) ? D_801BC03C : D_801BC3D8;
    if ((s32)((struct func_80358A40_Struct *)D_8038CC10)->unk4C >= 4) {
        if (other->unk64 != 0) {
            func_80005700(other->unk64, other, state, arg0);
            other->unk64 = 0;
        }
        ((struct func_80358A40_Struct *)D_8038CC10)->unk4C |= 0x8000;
        GL_->unk1035 = 0;
        func_800058DC(arg0, func_80359F54);
        *(void (**)(s32, s32))((u8 *)state + 0x324) = func_8035A038;
    }
}
