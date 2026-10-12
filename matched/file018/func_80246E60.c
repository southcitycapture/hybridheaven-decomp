#include "context.h"

typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;

typedef struct func_80246E60_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80246E60_StructInner;

extern func_80246E60_StructGlobal D_80258F48;
extern u32 D_8025C708;
extern void func_8024564C();
extern s32 func_80244AB0(void *);
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
extern void func_8012A94C(void *, s32);
extern s32 func_8012A564(void *, s32);

void func_80246E60(void *arg0, s32 arg1) {
    func_80246E60_StructInner *sp2C;

    sp2C = *(func_80246E60_StructInner **)((u8 *)arg0 + 0x5C);
    if (func_80244AB0(arg0) == 0) {
        if (func_8012CE9C(arg1, sp2C, D_80258F48, 0xA) == 0) {
            func_80010550(arg1, (s32)sp2C);
            func_8012A94C(arg0, 0x80);
            if (func_8012A564(arg0, 0x43220000) != 0) {
                sp2C->unk78 = 1;
                D_8025C708 = 1;
                func_800058DC(arg0, (void *)func_8024564C);
            }
        }
    }
}
