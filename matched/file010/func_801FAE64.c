#include "common.h"
struct func_801FA6FC_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
extern struct func_801FA6FC_Local D_80164F40;
extern u8 D_801BBBF0[];
extern u8 D_80216F30[];
extern s32 D_802170C0;
extern s32 func_800058DC(s32, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern s32 func_80126B14(void *, void *, u16, s32);
extern void func_80126EAC(void);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012D8C8(void *, s32, s32, f32, s32, s32);
extern void func_80145310(s32, s32, s32);
struct func_801FB100_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
void func_801FB100(struct func_801FB100_Struct *arg0, s32 arg1);


typedef struct { f32 x, y; } func_801FAE64_Pair;
typedef struct { func_801FAE64_Pair p[4]; } func_801FAE64_Blk;
extern func_801FAE64_Blk D_802170C4;
extern f64 D_80218E38;

typedef struct { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; } func_801FAE64_S3;
typedef struct { u8 pad[0x2C]; func_801FAE64_S3 *unk2C; } func_801FAE64_S2;
typedef struct { u8 pad[0x24]; func_801FAE64_S2 *unk24; } func_801FAE64_S1;
typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
} func_801FAE64_Sub;
typedef struct { u8 pad[0x30]; func_801FAE64_Sub *unk30; } func_801FAE64_Obj;

void func_801FAE64(u8 *arg0, func_801FAE64_Obj **arg1) {
    u8 i;
    func_801FAE64_Blk sp6C;
#define t (&arg1[i])
#define k 0.01

    sp6C = D_802170C4;
    if (func_80126B14(arg0, func_80126EAC, *(u16 *)(arg0 + 0x72), 0x225) != 0) {
        func_8001F74C(arg0);
        D_802170C0 = (s32)arg0;
        for (i = 0; i < 4; i++) {
            func_80005E44(arg0, &D_80164F40);
            func_80006214(arg0);
            func_8012C89C((s32)arg0, i, 0x225, 1);
            (*t)->unk30->unk24 |= 0x300;
            (*t)->unk30->unk30 = (s32)D_80216F30 | 0x40000000;
            func_80145310((s32)*t, 1, 13);
            (*t)->unk30->unk4 = (*(func_801FAE64_S1 **)(D_801BBBF0 + 0xEC))->unk24->unk2C->unk4;
            (*t)->unk30->unk8 = (*(func_801FAE64_S1 **)(D_801BBBF0 + 0xEC))->unk24->unk2C->unk8 - (f32)(i == 3 ? 4 : 0);
            (*t)->unk30->unkC = (*(func_801FAE64_S1 **)(D_801BBBF0 + 0xEC))->unk24->unk2C->unkC;
            (*t)->unk30->unk18 = sp6C.p[i].y * k;
            (*t)->unk30->unk1C = sp6C.p[i].x * k;
            (*t)->unk30->unk20 = sp6C.p[i].y * k;
            func_8012D8C8(arg0, 0x225, 0, 1.0f, 1, (s32)&((u8 *)0)[i]);
        }
        func_800058DC((s32)arg0, func_801FB100);
    }
}
