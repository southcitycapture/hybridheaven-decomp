#include "context.h"
struct func_8013BCD8_Struct {
    u8 pad[0x18];
    u16 unk18;
    u8 pad1a[0x83];
    u8 unk9D;
};
struct func_8013BCD8_Obj {
    u8 pad[0x3F];
    u8 unk3F;
    u8 pad40[0xF];
    u8 unk4F;
    u8 pad50[4];
    s32 unk54;
    u8 pad58[4];
    struct func_8013BCD8_Struct *unk5C;
};
extern u8 D_801BBBF0[];
extern u8 func_8013ADD4[];
extern u8 func_8021D8D0[];
extern void func_800058DC(void *, void *);
void func_8013BCD8(struct func_8013BCD8_Obj *arg0, s32 arg1) {
    struct func_8013BCD8_Struct *s = arg0->unk5C;
    s->unk9D = 2;
    if ((s->unk18 & 0x3000) == 0x1000) {
        if (*(void **)(D_801BBBF0 + 0xDC) == (void *)arg0) {
            arg0->unk3F = 0;
            arg0->unk4F = 1;
            arg0->unk54 = *(s32 *)(D_801BBBF0 + 0xEFC) = 0xE7F;
        }
        func_800058DC(arg0, func_8021D8D0);
        return;
    }
    func_800058DC(arg0, func_8013ADD4);
}
