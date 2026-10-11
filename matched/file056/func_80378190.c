#include "context.h"

extern void func_8012D7A8(void);
extern void func_801CD878(void *, void **);
extern void func_801CD994(u8, u8, u8, u8);
extern void func_80378034(void);
extern u16 D_8038A8F8;

struct func_80378190_Glob {
    u8 pad0[0xDC];
    struct func_80378190_A *unkDC;
};
struct func_80378190_A {
    u8 pad0[0x24];
    struct func_80378190_B *unk24;
};
struct func_80378190_B {
    u8 pad0[0x2C];
    u8 *unk2C;
};
struct func_80378190_Hdr {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80378190_Msg {
    u8 pad0[0x30];
    struct func_80378190_Hdr *unk30;
};
struct func_80378190_Inner {
    u8 pad0[0x2C];
    u16 unk2C;
};
struct func_80378190_Ctx {
    u8 pad0[0xC];
    struct func_80378190_Inner *unkC;
    u8 pad10[0x68];
    u8 unk78[4];
    u8 unk7C[4];
    u8 unk80[4];
    u8 unk84[4];
    u8 pad88[8];
    u16 unk90;
    u16 unk92;
};

void func_80378190(struct func_80378190_Ctx *arg0, void **arg1) {
    struct func_80378190_Hdr *temp_v1;
    u8 i;
    u8 tmp[4];

    temp_v1 = ((struct func_80378190_Msg *) *arg1)->unk30;
    func_8012D7A8();
    func_801CD878(arg0, arg1);
    ((struct func_80378190_Glob *) &D_801BBBF0)->unkDC->unk24->unk2C[0x4C] = ((struct func_80378190_Msg *) *arg1)->unk30->unk4C;
    ((struct func_80378190_Glob *) &D_801BBBF0)->unkDC->unk24->unk2C[0x4D] = ((struct func_80378190_Msg *) *arg1)->unk30->unk4D;
    ((struct func_80378190_Glob *) &D_801BBBF0)->unkDC->unk24->unk2C[0x4E] = ((struct func_80378190_Msg *) *arg1)->unk30->unk4E;
    ((struct func_80378190_Glob *) &D_801BBBF0)->unkDC->unk24->unk2C[0x4F] = ((struct func_80378190_Msg *) *arg1)->unk30->unk4F;
    func_801CD994(temp_v1->unk48, temp_v1->unk49, temp_v1->unk4A, temp_v1->unk4B);
    if ((arg0->unk92++ > arg0->unk90 - 1) || (arg0->unkC->unk2C & 0x8000)) {
        for (i = 0; i < 4; i++) {
            tmp[i] = arg0->unk78[i];
            arg0->unk78[i] = arg0->unk7C[i];
            arg0->unk7C[i] = tmp[i];
            tmp[i] = arg0->unk80[i];
            arg0->unk80[i] = arg0->unk84[i];
            arg0->unk84[i] = tmp[i];
            arg0->unk92 = 0;
        }
    }
    if (D_8038A8F8++ >= 0x50) {
        D_803887E4[0] = 0;
    }
    if (D_803887E4[0] == 0) {
        func_800058DC(arg0, (void *) func_80378034);
    }
}
