#include "context.h"

struct func_8037EDF4_Struct {
    u8 pad0[0x10];
    struct func_8037EDF4_Struct *unk10;
    struct func_8037EDF4_Struct *unk14;
    u8 pad1[0x18];
    u8 *unk30;
};

void func_8037EDF4(void *arg0) {
    u8 i;
    u8 v;
    struct func_8037EDF4_Struct *s;
    struct func_8037EDF4_Struct *t;
    s = (struct func_8037EDF4_Struct *)D_8038A9C8;
    for (i = 0; i < 6; i++) {
        if (D_8038A950[i] == 1) {
            func_80145310(s, 0x10, 0x11);
        } else {
            func_80145310(s, 2, 0);
        }
        s = s->unk10;
        if (D_8038A950[i] == 2U) {
            func_80145310(s, 0x10, 0x11);
        } else {
            func_80145310(s, 2, 0);
        }
        s = s->unk10;
        if (i == ((s8 *)arg0)[0x96]) {
            v = 0xFF;
        } else {
            v = 0x6E;
        }
        s->unk14->unk14->unk30[0xB] = v;
        t = s->unk14;
        t->unk30[0xB] = t->unk14->unk30[0xB];
    }
}
