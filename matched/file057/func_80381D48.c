#include "context.h"
struct func_80381E78_Struct {
    u8 pad0[0x94];
    u8 unk94;
    u8 pad95[0xF];
    void *unkA4;
};
typedef struct func_80385208_Gfx {
    u8 pad0[0xA];
    u16 unkA;
} func_80385208_Gfx;
extern func_80385208_Gfx D_801BBC8E;

extern s32 func_80236788(void);
struct func_80381E78_Struct;
extern void func_8001B204();
void func_80381E78(struct func_80381E78_Struct *arg0, s32 arg1);
extern u8 D_803898E0[];
extern u8 D_8038C9B0[];
extern u8 D_8038C9B8[];
extern u8 D_8038C9C0[];
extern u8 D_8038C9C8[];

void func_80381D48(s32 arg0, s32 arg1) {
    u8 *sp24;
    u8 var_v1;

    var_v1 = func_80236788();
    if ((*(u32 *)(D_801BC03C + 0x38) >> 0x1F) != 0 && var_v1 == 1) {
        var_v1 = 0x16;
    }
    sp24 = D_803898E0 + var_v1 * 0xC;
    func_8001B204(0x10, 0x1C, 0x9E, D_8038C9B0, 4, *(s32 *)(sp24 + 0xE4));
    func_8001B204(0x11, 0x1C, 0xAC, D_8038C9B8, 4, *(s32 *)(sp24 + 0xE8));
    func_8001B204(0x12, 0x1C, 0xBA, D_8038C9C0, 4, *(s32 *)(sp24 + 0xEC));
    func_8001B204(0x13, 0xAA, 0xC8, D_8038C9C8, 2, 0);
    if (*(u16 *)((u8 *)&D_801BBC8E + 2) & 0x4000) {
        func_800058DC((void *)arg0, (void *)func_80381E78);
    }
}
