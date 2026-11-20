#include "common.h"
struct func_80244444_Inner {
    u8 pad[0x4B];
    u8 unk4B;
};
struct func_80244444_Outer {
    u8 pad[0x30];
    struct func_80244444_Inner *unk30;
};
struct func_80244444_Struct {
    u8 pad[0xA0];
    s8 unkA0;
};
void func_80244444(struct func_80244444_Struct *arg0, struct func_80244444_Outer **arg1);


typedef struct func_80244218_StructConfig {
    s32 unk0, unk4, unk8, unkC;
} func_80244218_StructConfig;

typedef struct func_80244218_StructObject {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad10[8];
    f32 unk18, unk1C, unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E;
} func_80244218_StructObject;

typedef struct func_80244218_StructOuter {
    u8 pad0[0x30];
    func_80244218_StructObject *unk30;
} func_80244218_StructOuter;

typedef struct func_80244218_StructActor {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x52];
    f32 unk90, unk94, unk98;
} func_80244218_StructActor;

extern func_80244218_StructConfig D_80164F40;
extern u8 D_802503C8[];
extern void func_80005E44(func_80244218_StructActor *, func_80244218_StructConfig *);
extern void func_80006214(func_80244218_StructActor *);
extern void func_8012C89C(func_80244218_StructActor *, s32, s32, s32);
extern void func_8012D8C8(func_80244218_StructActor *, s32, u32, f32, u16, s32);
extern void func_800058DC(func_80244218_StructActor *, void (*)(struct func_80244444_Struct *, struct func_80244444_Outer **));

void func_80244218(func_80244218_StructActor *arg0, void *arg1) {
    func_80244218_StructConfig config;
    s32 pad0, pad1, pad2, pad3;
    func_80244218_StructOuter **items = arg1;
    func_80244218_StructOuter **cur;
    s32 i;

    config = D_80164F40;
    config.unk4 = 0x80000300;
    i = 0;
    do {
        func_80005E44(arg0, &config);
        i++;
    } while (i <= 0);
    func_80006214(arg0);
    for (i = 0, cur = items; i <= 0; i = (s32)((i | 0U) + 1), cur = (func_80244218_StructOuter **)((u8 *)cur + 4)) {
        func_8012C89C(arg0, i, 0x4B2, 0);
        func_8012D8C8(arg0, 0x4B2, 1U, 1.0f, (u8)1, i);
        (*cur)->unk30->unk24 = 0x60300;
        (*cur)->unk30->unk30 = (s32) D_802503C8 | 0x40000000;
        (*cur)->unk30->unk48 = 0xFF;
        (*cur)->unk30->unk49 = 0xE6;
        (*cur)->unk30->unk4A = 0;
        (*cur)->unk30->unk4B = 0xC8;
        (*cur)->unk30->unk4C = 0xFF;
        (*cur)->unk30->unk4D = 0;
        (*cur)->unk30->unk4E = 0;
    }
    items[0]->unk30->unk18 = 0.3f;
    items[0]->unk30->unk1C = 0.4f;
    items[0]->unk30->unk20 = 0.3f;
    items[0]->unk30->unk4 = arg0->unk90;
    items[0]->unk30->unk8 = arg0->unk94 + 17.0f;
    items[0]->unk30->unkC = arg0->unk98;
    arg0->unk3C = 0;
    func_800058DC(arg0, func_80244444);
}
