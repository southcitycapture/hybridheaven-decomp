#include "context.h"
struct func_801FB554_Inner {
    u8 pad0[0x9];
    u8 unk9;
    u8 unkA;
};
struct func_801FB554_Sub {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_801FB554_Inner *unk30;
};
struct func_801FB554_Args {
    struct func_801FB554_Sub *unk0;
    struct func_801FB554_Sub *unk4;
};
struct func_801FB554_Obj {
    u8 pad0[0x24];
    void *unk24;
};
void func_801FB554(struct func_801FB554_Obj *arg0, struct func_801FB554_Args *arg1);

struct func_801FB488_Struct {
    u8 pad[0x90];
    u8 unk90;
};
struct func_801FB488_StructArgs {
    s32 unk0;
    s32 unk4;
};

void func_801FB488(struct func_801FB488_Struct *arg0, struct func_801FB488_StructArgs *arg1) {
    s32 value;

    value = ++arg0->unk90;
    if (value == 2) goto two;
    if (value != 4) goto end;
    goto four;
two:
    func_80145310(arg1->unk0, 1, 1);
    func_80145310(arg1->unk4, 1, 1);
    value = arg0->unk90;
    goto end;
four:
    func_80145310(arg1->unk0, 3, 3);
    func_80145310(arg1->unk4, 3, 3);
    value = arg0->unk90;
end:
    if ((s32)value >= 0x3D) {
        func_800058DC((s32)arg0, (void *)func_801FB554);
    }
}
