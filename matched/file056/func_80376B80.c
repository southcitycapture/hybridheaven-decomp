#include "context.h"
struct func_80376C24_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    s32 unk5C;
};
extern u16 D_801BBBF8;
void func_80376C24(struct func_80376C24_Struct *arg0, s32 arg1);
typedef struct func_8037769C_Glob {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037769C_Glob;
extern void func_80011140(s32, void *, func_8037769C_Glob, s32);
extern struct func_8037769C_Glob D_80216B90;
extern void func_8014C138(u16);

struct func_80376B80_Obj {
    u8 pad0[0x1C];
    s32 unk1C;
};
struct func_80376B80_Struct {
    u8 pad0[0x5C];
    struct func_80376B80_Obj *unk5C;
};
extern s32 func_80126A0C(void *, s32, s32);

void func_80376B80(struct func_80376B80_Struct *arg0, s32 arg1) {
    struct func_80376B80_Obj *temp_a1;

    temp_a1 = arg0->unk5C;
    func_80011140(arg1, temp_a1, D_80216B90, 0xA);
    if ((temp_a1->unk1C == 0x01680041) && (func_80126A0C(arg0, 0x1AB, 0) != 0)) {
        func_8014C138(D_801BBBF8);
        func_800058DC(arg0, (void *)func_80376C24);
    }
}
