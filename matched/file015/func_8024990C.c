#include "context.h"

typedef struct func_8024990C_Sub {
    u8 pad[4];
    f32 unk4;
} func_8024990C_Sub;

typedef struct func_8024990C_Inner {
    u8 pad[0x2C];
    func_8024990C_Sub *unk2C;
} func_8024990C_Inner;

typedef struct func_8024990C_Obj {
    u8 pad[0x5C];
    void *unk5C;
} func_8024990C_Obj;

extern void func_80010550(void *arg0, void *arg1);
extern void func_80249970(void);

void func_8024990C(func_8024990C_Obj *arg0, func_8024990C_Inner **arg1) {
    void *tmp;

    tmp = arg0->unk5C;
    func_80010550(arg1, tmp);
    if (((*arg1)->unk2C)->unk4 >= 80.0f) {
        func_800058DC(arg0, func_80249970);
    }
}
