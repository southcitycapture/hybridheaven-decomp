#include "context.h"

extern u8 D_801CC8C4;
extern u16 D_80037754;
extern u8 D_801CF110[];
extern u8 D_801CF120[];
extern u8 D_801CF130[];
extern u8 D_801CF140[];
extern u8 D_801CF150[];
extern u8 D_801CF160[];
extern u8 D_801CF170[];
extern void func_801C1DB8(void);

struct func_801C56B8_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

void func_801C56B8(struct func_801C56B8_Struct *arg0, s32 arg1) {
    arg0->unk3C = 0x384;
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C4 * 0xA) + 0x76), D_801CF110);
    func_8001B204(1, 0x7D0, 0x76, D_801CF120);
    func_8001B204(2, 0x7D0, 0x80, D_801CF130);
    func_8001B204(3, 0x7D0, 0x8A, D_801CF140);
    func_8001B204(4, 0x7D0, 0x94, D_801CF150);
    if (D_80037754 == 1) {
        func_8001B204(5, 0x7D0, 0x9E, D_801CF160);
    } else {
        func_8001B204(5, 0x7D0, 0x9E, D_801CF170, 6);
    }
    func_800058DC(arg0, func_801C1DB8);
}
