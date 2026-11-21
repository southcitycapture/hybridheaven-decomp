#include "common.h"
extern void *func_800058DC(void *, void *);
extern void func_80229500(void);
typedef struct func_8038CFF4_StructB {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x98 - 0x10];
    s16 unk98;
} func_8038CFF4_StructB;
typedef struct func_8038CFF4_StructA {
    u8 pad0[0xC];
    func_8038CFF4_StructB *unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 pad2[2];
    u8 unk95;
    s16 unk96;
    s16 unk98;
} func_8038CFF4_StructA;
typedef struct func_8038CFF4_StructO {
    u8 pad0[6];
    s16 unk6;
    u8 pad8[0x30 - 0x8];
    union {
        struct {
            u32 x0 : 3;
            u32 c3 : 4;
            u32 x7 : 2;
            u32 b9 : 2;
            u32 b11 : 2;
            u32 rest : 19;
        } bf;
        u16 h;
        u8 b[4];
    } u30;
    u8 pad34[0x2FC - 0x34];
    u8 unk2FC;
    u8 pad2FD[0x312 - 0x2FD];
    s16 unk312;
} func_8038CFF4_StructO;
void func_8038CFF4(func_8038CFF4_StructA *arg0, func_8038CFF4_StructO *arg1);


void func_8038CFC0(void *arg0, s32 arg1)
{
  (void)(!arg0 && !arg0);
  func_80229500();
  func_800058DC(arg0, (void *)func_8038CFF4);
}
