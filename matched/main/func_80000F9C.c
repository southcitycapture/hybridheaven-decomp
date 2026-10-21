#include "context.h"

struct func_80001010_Struct;
void func_80001010(s32 arg0, s32 arg1, struct func_80001010_Struct *arg2);

extern u8 D_80037358[];
extern u8 D_800374A8[];
extern u8 D_8003761C[];
extern u8 D_8004B414[];
extern u8 D_8004B41C[];
extern u8 D_8004B5B8[];

typedef struct func_80000F9C_StructSub {
    u8 pad[0xF8];
    s32 unkF8;
    u8 pad2[0x10];
    s32 unk10C;
} func_80000F9C_StructSub;

typedef struct func_80000F9C_Struct {
    u8 pad[0x20];
    func_80000F9C_StructSub sub;
    u8 pad2[0x120 - 0x20 - sizeof(func_80000F9C_StructSub)];
    s32 unk120;
} func_80000F9C_Struct;

void func_80000F9C(func_80000F9C_Struct *arg0) {
    func_80000F9C_StructSub *p;

    p = &arg0->sub;
    func_80001010(arg0->unk120, (s32)D_8004B414, (struct func_80001010_Struct *)D_80037358);
    func_80001010(p->unkF8, (s32)D_8004B41C, (struct func_80001010_Struct *)D_800374A8);
    func_80001010(p->unk10C, (s32)D_8004B5B8, (struct func_80001010_Struct *)D_8003761C);
}
