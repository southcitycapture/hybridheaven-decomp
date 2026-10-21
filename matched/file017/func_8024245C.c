#include "context.h"

extern u8 D_8025C35C[];
extern f32 D_8025C6E4;
extern f32 D_8025C6E8;
extern u8 func_802425DC[];

struct func_8024245C_Struct { s16 a; s16 pad; s32 b; f32 c; };

void func_8024245C(u8 *arg0, u8 *arg1) {
    u8 pad[20];
    struct func_8024245C_Struct sp60;
    s32 sp5C;

    sp5C = (*(u16 *)(arg0 + 0x3C))++;
    func_80243CC0(arg0, (s32)arg1);
    func_80243E48(arg0, arg1);
    if (sp5C == 3) {
        sp60.a = 0x1100;
        sp60.b = 0x04100043;
        sp60.c = 5.0f;
        func_801C2F0C(4, &sp60);
    }
    if (sp5C >= 0x96) {
        func_8011AAF4(D_8025C35C, 0x258, arg0, 0, 1, 0.0f, 55.0f, D_8025C6E4, 84.0f, 0.0f, -35.0f, D_8025C6E8, -39.0f, 0.0f, 55.0f, -1, -1);
        *(u8 *)(*(u8 **)(arg1 + 0x14) + 0x22) = 0;
        *(u16 *)(arg0 + 0x3C) = 0;
        sp60.a = 0x1100;
        sp60.b = 0x01B80026;
        sp60.c = 3.0f;
        func_801C2F0C(4, &sp60);
        func_802441AC();
        func_80020718(0x195);
        func_80020718(0x6C5);
        func_800058DC(arg0, func_802425DC);
    }
}
