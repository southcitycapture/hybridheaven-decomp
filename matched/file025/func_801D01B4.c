#include "context.h"

extern void func_801D0528(void *);
extern s32 D_801DAF34;
extern u8 D_801D01B4[];

struct func_801D01B4_In {
    u8 pad[0x76];
    u8 unk76;
};
struct func_801D01B4_A0 {
    u8 pad[0x5C];
    struct func_801D01B4_In *unk5C;
};
void func_801D01B4(struct func_801D01B4_A0 *arg0, struct func_801CEA50_O *arg1) {
    struct func_801CEA50_F3 *p;

    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D01B4);
        return;
    }
    if (D_801DAF18 != 0) {
        func_80006214(arg0);
        func_8013A28C(D_8008DA88, *(struct func_801CEA50_S3 *)D_801DAF18);
        p = (struct func_801CEA50_F3 *)arg0->unk5C;
        ((struct func_801D01B4_In *)p)->unk76 = 1;
        D_801DAF18 = 0;
    }
    p = (struct func_801CEA50_F3 *)D_801DAF1C;
    if (p != 0) {
        if (func_80011140(arg1, arg0->unk5C, *p, (u32)p->c) != 0) {
            D_801DAF1C = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->unk5C) != 0) {
            D_801DAF40 = 1;
        } else {
            D_801DAF40 = 0;
        }
        *(struct func_801CEA50_S3 *)&D_801E12D8 = *(struct func_801CEA50_S3 *)&arg1->u4->u2C->u5C;
        *(struct func_801CEA50_S3 *)&D_801E12C8 = *(struct func_801CEA50_S3 *)(D_801BC025 + 3);
    }
    if (D_801DAF38 != 0) {
        *(u8 *)(D_801DAF34 + 0x22) = D_801DAF3C;
    }
    if (D_801DAF00 != 0) {
        func_801D0528(arg0);
    }
}
