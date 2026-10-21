#include "context.h"

struct func_80372708_Struct {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x1C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    u8 unk7C;
};
extern u8 D_80387C28[];
extern void *D_80005670(void *, void *);

void func_80372708(void *arg0, void *arg1) {
    s32 pad[4];
    func_80372654_StructVec pos;
    struct func_80372708_Struct *obj;

    if (arg0) {}
    func_80372654((f32 *)&pos, arg0, arg1);
    obj = D_80005670(arg0, D_80387C28);
    if (obj != NULL) {
        obj->unk4C = 0;
        obj->unk4E = 0;
        obj->unk6C = pos.x;
        obj->unk70 = pos.y;
        obj->unk74 = pos.z;
        obj->unk78 = 0;
        obj->unk79 = 0;
        obj->unk7A = 0;
        obj->unk7B = 0;
        obj->unk7C = 0;
    }
}
