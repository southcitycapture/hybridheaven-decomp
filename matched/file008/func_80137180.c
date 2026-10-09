#include "context.h"

typedef struct func_80137180_StructInner {
    u8 pad0[0x10];
    u32 unk10;
    u32 unk14;
} func_80137180_StructInner;

typedef struct func_80137180_Struct {
    u8 pad0[0x38];
    func_80137180_StructInner *unk38;
    u8 pad1[0x90 - 0x3C];
    s16 unk90;
} func_80137180_Struct;

extern s32 func_80133A24(u32);
extern void func_801371E0(void);

void func_80137180(void *arg0, void *arg1) {
    func_80137180_Struct *s;

    s = arg0;
    if (func_80133A24(s->unk38->unk14 >> 16) == 0) {
        s->unk90 = (s16) ((s->unk38->unk10 >> 16) & 0xFF);
        func_800058DC(s, func_801371E0);
    }
}
