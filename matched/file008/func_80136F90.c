#include "context.h"

struct func_80136F90_Inner {
    u8 pad0[0x10];
    u32 unk10;
};
typedef struct func_80136F90_Pos {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80136F90_Pos;
typedef struct func_80136F90_Mid {
    u8 pad0[0x30];
    func_80136F90_Pos *unk30;
} func_80136F90_Mid;
typedef struct func_80136F90_Struct {
    u8 pad0[0x24];
    func_80136F90_Mid *unk24;
    u8 pad28[0x10];
    struct func_80136F90_Inner *unk38;
    u8 pad3C[0x90 - 0x3C];
    u16 unk90;
} func_80136F90_Struct;
void func_80137180(void *arg0, void *arg1);
extern f32 func_8001EB64(s16);
extern f32 func_8001EAD0(s16);

void func_80136F90(func_80136F90_Struct *arg0, void *arg1) {
    if (((arg0->unk38->unk10 >> 8) & 0xFF) < 0x80) {
        arg0->unk24->unk30->unk4 += func_8001EB64(arg0->unk24->unk30->unk12) * ((arg0->unk38->unk10 >> 8) & 0xFF) / 10.0f;
        arg0->unk24->unk30->unkC -= func_8001EAD0(arg0->unk24->unk30->unk12) * ((arg0->unk38->unk10 >> 8) & 0xFF) / 10.0f;
    } else {
        arg0->unk24->unk30->unk4 += func_8001EB64(arg0->unk24->unk30->unk12) * (((arg0->unk38->unk10 >> 8) & 0xFF) - 0x80) / -10.0f;
        arg0->unk24->unk30->unkC -= func_8001EAD0(arg0->unk24->unk30->unk12) * (((arg0->unk38->unk10 >> 8) & 0xFF) - 0x80) / -10.0f;
    }
    if (arg0->unk90--) {
    } else {
        func_800058DC(arg0, func_80137180);
    }
}
