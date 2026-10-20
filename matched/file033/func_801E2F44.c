#include "context.h"
extern f32 D_801F46A8, D_801F46AC, D_801F46B0, D_801F46B4, D_801F46B8, D_801F46BC, D_801F46C0, D_801F46C4, D_801F46C8, D_801F46CC, D_801F46D0;

struct func_801E2F44_Struct { u8 pad[8]; struct func_801E2F44_Struct *n8; u8 pad2[0x18]; struct func_801E2F44_Struct *n24; u8 pad3[4]; struct func_801E2F44_Struct *n2C; };
struct func_801E2F44_Leaf { u8 pad[8]; f32 f8; };

s32 func_801E2F44(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 1.0f, -23.3f, 54.5f, D_801F46A8, D_801F46AC, D_801F46B0, D_801F46B4, -2.5f, D_801F46B8, -52.5f, D_801F46BC, D_801F46C0, -51.5f) != 0) {
        func_8038BED4();
        func_8038BD50(D_801F46C4, 10.0f, 0xC12E6666);
        D_8038BD88(D_801F46C8, D_801F46CC, 0xC24C6666);
        ((struct func_801E2F44_Leaf *)((struct func_801E2F44_Struct *)((struct func_801E2F44_Struct *)((struct func_801E2F44_Struct *)((struct func_801E2F44_Struct *)D_801DAB14)->n8)->n8)->n8->n24)->n2C)->f8 = D_801F46D0;
        return 0x31;
    }
    return 0x30;
}
