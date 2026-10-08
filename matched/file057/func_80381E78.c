#include "common.h"

struct func_80381E78_Struct {
    u8 pad0[0x94];
    u8 unk94;
    u8 pad95[0xF];
    void *unkA4;
};

extern void func_80005700(void *);
extern void func_800058DC(void *, void *);
extern void func_8001B204(s32, s32, s32, void *);
extern void func_8001F6FC(void);
extern u8 D_8038C9DC[];
extern u8 D_8038C9E0[];
extern u8 D_8038C9E4[];
extern u8 D_8038C9E8[];
extern u8 func_8021BF74[];
extern u8 func_8021C198[];

void func_80381E78(struct func_80381E78_Struct *arg0, s32 arg1) {
    func_8001B204(0x10, 0x1C, 0x9E, D_8038C9DC);
    func_8001B204(0x11, 0x1C, 0xAC, D_8038C9E0);
    func_8001B204(0x12, 0x1C, 0xAC, D_8038C9E4);
    func_8001B204(0x13, 0x1C, 0xAC, D_8038C9E8);
    if (arg0->unk94 == 0) {
        func_800058DC(arg0->unkA4, func_8021BF74);
    } else {
        func_800058DC(arg0->unkA4, func_8021C198);
    }
    func_8001F6FC();
    func_80005700(arg0);
}
