#include "context.h"

struct func_8038D420_StructObj {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x8A];
    s16 unk9A;
};

extern s32 func_8022DA7C(s32, s32);
extern u8 D_801BCC21;
struct func_8038D4D8_Obj;
void func_8038D4D8(struct func_8038D4D8_Obj *arg0, s32 arg1);

void func_8038D420(struct func_8038D420_StructObj *arg0, s32 arg1) {
    s32 result;
    s16 flags;
    s32 value;

    value = arg0->unkC;
    result = func_8022DA7C(value, arg0->unkC);
    if (D_801BCC21 == 6) {
        func_800058DC((s32)arg0, func_8038D4D8);
        return;
    }
    if ((result != 0) && !(arg0->unk9A & 0x80)) {
        func_800058DC((s32)arg0, func_8038D2C0);
        return;
    }
    if (result == 0) {
        flags = arg0->unk9A;
        if (flags & 0x80) {
            arg0->unk9A = flags ^ 0x80;
            func_800058DC((s32)arg0, func_8038D2C0);
        }
    }
}
