#include "context.h"

extern void func_801FC720(u16, u16, s32);

typedef struct func_80139254_StructInner {
    u8 pad[0x10];
    u32 unk10;
    u32 unk14;
    u32 unk18;
} func_80139254_StructInner;

typedef struct func_80139254_Struct {
    u8 pad[0x38];
    func_80139254_StructInner *unk38;
} func_80139254_Struct;

void func_80139254(func_80139254_Struct *arg0, s32 arg1) {
    u32 t;
    func_80139254_StructInner *p;

    p = arg0->unk38;
    if ((p->unk10 & 0xFF) == D_801BBF96) {
        func_801FC720(p->unk14 >> 16, p->unk14 & 0xFFFF, p->unk18 >> 16);
    }
}
