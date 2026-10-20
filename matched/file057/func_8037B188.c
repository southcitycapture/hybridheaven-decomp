#include "context.h"
extern void func_8037B23C();
struct func_8037EB58_Struct {
    u8 pad[0xA8];
    u8 unkA8;
    u8 padA9[7];
    s16 unkB0;
};
extern s32 func_80006214(void *);

extern void func_8037B0B0(void *, s16, s16, s8 *);

void func_8037B188(struct func_8037EB58_Struct *arg0, s32 arg1) {
    s8 sp25[4];
    u8 *var_t0;
    s32 var_v0;
    s32 var_v1;

    sp25[1] = 0;
    var_v0 = arg0->unkA8;
    if (var_v0 == 0) {
        var_t0 = D_801BC03C;
    } else {
        var_t0 = D_801BC3D8;
    }
    var_v1 = 0xBA;
    if (var_v0 == 0) {
        var_v0 = 0xA0;
        var_v1 = 0x28;
    } else {
        var_v0 = 0x64;
    }
    func_8037B0B0(arg0, (s16)var_v0, (s16)var_v1, &sp25[1]);
    func_80006214(arg0);
    if (*(s16 *)(var_t0 + 6) >= 0x1E) {
        ((struct func_8037AED8_Tab *)D_8008DA88)->unk30->unkB = 0;
    }
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_8037B23C);
}
