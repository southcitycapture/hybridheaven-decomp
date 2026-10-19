#include "context.h"
typedef struct func_801C6294_S3 {
    u8 pad[0x4B];
    u8 unk4B;
} func_801C6294_S3;
typedef struct func_801C6294_S2 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x0D];
    func_801C6294_S3 *unk30;
} func_801C6294_S2;
typedef struct func_801C6294_S1 {
    u8 pad[0x90];
    u16 unk90;
} func_801C6294_S1;
struct func_801C63B4_Struct;
void func_801C63B4(struct func_801C63B4_Struct *arg0, void *arg1);
extern f32 D_801DA508;
extern f32 D_801DD238;

void func_801C6294(func_801C6294_S1 *arg0, func_801C6294_S2 **arg1) {
    func_80006214(arg0);
    (*arg1)->unk30->unk4B = (u32)(2.0f * D_801DA508);
    D_801DA508 -= D_801DD238;
    if (D_801DA508 <= 1.5f) {
        (*arg1)->unk22 = 0;
        D_800892B0.unkA6 = 0;
        D_800892B0.unkA4 = 0;
        arg0->unk90 = 0;
        func_800058DC(arg0, func_801C63B4);
    }
}
