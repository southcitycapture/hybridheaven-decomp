#include "common.h"
extern s32 func_800058DC(void *, void *);
extern void func_80136F30();
typedef struct func_80137180_StructInner {
    u8 pad0[0x10];
    u32 unk10;
    u32 unk14;
} func_80137180_StructInner;

extern f32 func_8001EB64(s16);
extern f32 func_8001EAD0(s16);

typedef struct func_801371E0_Struct1 {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801371E0_Struct1;

typedef struct func_801371E0_Struct2 {
    u8 pad[0x30];
    func_801371E0_Struct1 *unk30;
} func_801371E0_Struct2;

typedef struct func_801371E0_Struct0 {
    u8 pad0[0x24];
    func_801371E0_Struct2 *unk24;
    u8 pad28[0x10];
    func_80137180_StructInner *unk38;
    u8 pad3C[0x90 - 0x3C];
    u16 unk90;
} func_801371E0_Struct0;

void func_801371E0(func_801371E0_Struct0 *arg0, void *arg1) {
    if (((arg0->unk38->unk10 >> 8) & 0xFF) < 0x80) {
        f32 a = func_8001EB64(arg0->unk24->unk30->unk12);
        arg0->unk24->unk30->unk4 = arg0->unk24->unk30->unk4 - (a * ((arg0->unk38->unk10 >> 8) & 0xFF)) / 10.0f;
        a = func_8001EAD0(arg0->unk24->unk30->unk12);
        arg0->unk24->unk30->unkC = arg0->unk24->unk30->unkC + (a * ((arg0->unk38->unk10 >> 8) & 0xFF)) / 10.0f;
    } else {
        f32 a = func_8001EB64(arg0->unk24->unk30->unk12);
        arg0->unk24->unk30->unk4 = arg0->unk24->unk30->unk4 - (a * (((arg0->unk38->unk10 >> 8) & 0xFF) - 0x80)) / -10.0f;
        a = func_8001EAD0(arg0->unk24->unk30->unk12);
        arg0->unk24->unk30->unkC = arg0->unk24->unk30->unkC + (a * (((arg0->unk38->unk10 >> 8) & 0xFF) - 0x80)) / -10.0f;
    }
    if (arg0->unk90--) {
    } else {
        func_800058DC(arg0, func_80136F30);
    }
}
