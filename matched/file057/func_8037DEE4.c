#include "common.h"
extern u8 *D_8008DA88;
extern u16 D_801BBC1C;
extern s32 func_800058DC(void *, void *);
extern void func_8001B204();
extern s32 func_8037D320(void *, u8);


struct func_8037DEE4_Arg {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[0x99 - 0x91];
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[0xA4 - 0x9C];
    s16 unkA4;
    s16 unkA6;
    u8 padA8[0xB0 - 0xA8];
    s16 unkB0;
};

struct func_8037DEE4_Ent {
    s16 unk0;
    s16 unk2;
};
struct func_8037DEE4_Tab {
    u8 pad[0x30];
    struct func_8037DEE4_Ent *unk30;
};
struct func_8037DEE4_Glob {
    u8 pad[4];
    struct func_8037DEE4_Tab *unk4;
};

extern u8 D_8038BC38[];
extern f32 D_8038BC7C;
extern f32 D_8038BC80;
extern f32 D_8038BC84;
extern void func_8037E0A4();

#define GG ((struct func_8037DEE4_Glob *)&D_8008DA88)

void func_8037DEE4(struct func_8037DEE4_Arg *arg0, s32 arg1) {
    f32 var_fv1;
    struct func_8037DEE4_Ent *temp_v1;
    s32 var_a0;
    s32 var_v1;

    if ((D_801BBC1C == 0xA) || (var_v1 = 0x11, (D_801BBC1C == 0xB))) {
        var_fv1 = D_8038BC7C;
        var_v1 = 0x10;
        var_a0 = 0x1E;
    } else {
        var_fv1 = D_8038BC80;
        var_a0 = 0x20;
    }
    if (var_a0 < arg0->unkB0) {
        arg0->unkB0 = 8;
        func_800058DC(arg0, func_8037E0A4);
        return;
    }
    if (var_v1 < arg0->unkB0) {
        arg0->unkB0++;
        return;
    }
    GG->unk4->unk30->unk0 = (((f32)arg0->unkB0 * (D_8038BC84 * (f32)arg0->unkB0)) / 2) + (f32) (arg0->unkA4 + (arg0->unkB0 * -0xE));
    GG->unk4->unk30->unk2 = (((f32)arg0->unkB0 * (var_fv1 * (f32)arg0->unkB0)) / 2) + (f32) arg0->unkA6;
    var_a0 = func_8037D320(arg0, arg0->unk90 ^ 1);
    temp_v1 = GG->unk4->unk30;
    func_8001B204(0xE, (s16) (temp_v1->unk0 + 0x468), (s16) ((temp_v1->unk2 - arg0->unk9B) + 3), D_8038BC38, arg0->unk99, var_a0);
    arg0->unkB0++;
}
