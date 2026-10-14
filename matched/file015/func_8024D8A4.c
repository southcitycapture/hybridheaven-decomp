#include "context.h"
extern s32 D_8025A2E4;
void func_8024DA04(void *arg0, s32 arg1);

struct func_8024D8A4_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad3[8];
    void *unk30;
    u8 pad4[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};

struct func_8024D8A4_Top {
    u8 pad[0x30];
    struct func_8024D8A4_Sub *unk30;
};

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern s32 func_8015105C(s32);
struct func_8024D8A4_Words {
    s32 w0;
    s32 w1;
    s32 w2;
    s32 w3;
};

extern struct func_8024D8A4_Words D_80164F40;
extern u8 D_80254260[];

void func_8024D8A4(s32 arg0, struct func_8024D8A4_Top **arg1) {
    struct func_8024D8A4_Words sp20;

    sp20 = D_80164F40;
    sp20.w1 = 0x80000C00;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 1);
    (*arg1)->unk30->unk30 = D_80254260;
    (*arg1)->unk30->unk24 = 0x100;
    (*arg1)->unk30->unk4 = -600.0f;
    (*arg1)->unk30->unk8 = 0.0f;
    (*arg1)->unk30->unkC = -20.0f;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk18 = 1.0f;
    (*arg1)->unk30->unk1C = 1.0f;
    (*arg1)->unk30->unk20 = 1.0f;
    D_8025A2E4 = func_8015105C(0x30);
    func_800058DC((void *) arg0, (void *) func_8024DA04);
}
