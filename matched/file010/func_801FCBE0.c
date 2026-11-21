#include "common.h"
extern void func_800058DC();
extern u8 func_80126EAC[];
extern s32 (*D_802171F0[])();
extern s32 func_80133A24(s32, void *);
struct func_801FCD4C_Struct {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0x91 - 0x3C];
    u8 unk91;
    u8 pad2[0xB0 - 0x92];
    u8 unkB0;
};
void func_801FCD4C(struct func_801FCD4C_Struct *arg0, s32 arg1);
void func_801FCF14(u8 *arg0, void *arg1);


struct func_801FCBE0_Struct {
    u8 pad0[6];
    s16 src6, src8, srcA, srcC;
    u8 padE[2];
    s32 src10;
    u32 src14, src18;
    u8 pad1C[0x1C];
    struct func_801FCBE0_Struct *unk38;
    s16 unk3C;
    u8 pad3E[2];
    f32 unk40, unk44, unk48;
    u8 pad4C[0x44];
    u8 unk90, unk91;
    s16 unk92;
    f32 unk94, unk98, unk9C;
    s16 unkA0, unkA2, unkA4, unkA6;
    u32 unkA8;
    u8 unkAC;
};
extern s32 func_80126CC0(void *, void *);

void func_801FCBE0(struct func_801FCBE0_Struct *arg0, s32 arg1) {
    struct func_801FCBE0_Struct *inner;
    u32 upper;
    u32 bits;
    s32 id;
    u16 flag;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        inner = arg0->unk38;
        upper = inner->src18 >> 16;
        id = (u16)upper;
        if (upper == 0) {
            bits = inner->src10;
            id = (u16)((bits >> 8) & 0xFF);
        } else {
            bits = inner->src10;
        }
        flag = (u16)(bits >> 16);
        if ((flag & 4) && id != 0 &&
            (bits = bits % 1U + (u32)id, func_80133A24(bits, (void *)upper) != 0)) {
                    func_800058DC(arg0, func_801FCF14);
                    return;
        }
        inner = arg0->unk38;
        arg0->unk90 = 2;
        arg0->unk91 = (u32)inner->src10 >> 24;
        arg0->unk94 = (f32)((f64)(f32)inner->src6 / 10.0);
        arg0->unk98 = (f32)((f64)(f32)inner->src8 / 10.0);
        arg0->unk9C = (f32)((f64)(f32)inner->srcA / 10.0);
        arg0->unkA0 = 0;
        arg0->unk40 = 0.0f;
        arg0->unk44 = 0.0f;
        arg0->unk48 = 0.0f;
        arg0->unkA2 = inner->srcC;
        arg0->unkA4 = 0;
        arg0->unk3C = 0;
        arg0->unk92 = 0;
        arg0->unkA6 = 0;
        arg0->unkAC = (u16)((u32)inner->src10 >> 16);
        arg0->unkA8 = inner->src14;
        func_800058DC(arg0, func_801FCD4C);
    }
}
