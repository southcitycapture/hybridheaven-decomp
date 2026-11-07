#include "common.h"
typedef struct func_80235FF8_StructP { s16 x; s16 y; s16 w; s16 h; } func_80235FF8_P;
typedef struct func_80235FF8_StructS { u8 pad[0x10]; s32 unk10; u8 pad2[0x1C]; func_80235FF8_P *unk30; } func_80235FF8_S;
extern void (*D_80216D10[])(void *, s32);
extern func_80235FF8_S *D_8023448C(void *, s32 *, s32, s16, s32, s32, s32);
struct func_802348C8_StructPart {
    s16 unk0;
    s16 unk2;
    s16 unk4;
};
struct func_802348C8_StructNode {
    u8 pad0[0x30];
    struct func_802348C8_StructPart *unk30;
};
extern struct func_802348C8_StructNode **D_80240864;
extern struct func_802348C8_StructNode **D_80240868;
u8 func_80006214();
void func_80234450(void);
struct func_802348C8_StructArg {
    struct func_802348C8_StructNode *unk0;
    struct func_802348C8_StructNode *unk4;
};
void func_802348C8(struct func_802348C8_StructArg *arg0, s16 arg1, s16 arg2);
typedef struct func_80234934_Obj {
    u8 pad[0x98];
    s32 unk98;
    u8 pad2[0x6];
    s8 unkA2;
    s8 unkA3;
} func_80234934_Obj;
typedef struct func_80234934_Tgt {
    u8 pad[0x22];
    u8 unk22;
} func_80234934_Tgt;
void func_80234934(func_80234934_Obj *arg0, func_80234934_Tgt **arg1);
typedef struct func_80234AFC_Obj {
    u8 pad[0xA1];
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    u8 pad2[0xC];
    u8 *unkB0;
} func_80234AFC_Obj;
typedef struct func_80234AFC_Tgt {
    u8 pad[0x22];
    u8 unk22;
} func_80234AFC_Tgt;
void func_80234AFC(func_80234AFC_Obj *arg0, func_80234AFC_Tgt **arg1);
typedef struct func_80234D70_Struct {
    u8 pad[0xA9];
    u8 unkA9;
} func_80234D70_Struct;
typedef struct func_80234D70_Struct2 {
    u8 pad[0x10];
    s32 unk10;
} func_80234D70_Struct2;
void func_80234D70(func_80234D70_Struct *arg0, func_80234D70_Struct2 *arg1);
typedef struct func_80234DD4_Struct {
    u8 pad[0xA9];
    u8 unkA9;
} func_80234DD4_Struct;
typedef struct func_80234DD4_Struct1 {
    u8 pad[0x10];
    s32 unk10;
} func_80234DD4_Struct1;
void func_80234DD4(func_80234DD4_Struct *arg0, func_80234DD4_Struct1 *arg1);
struct func_80234E30_Node {
    u8 pad[0x10];
    struct func_80234E30_Node *unk10;
};
struct func_80234E30_Struct {
    u8 pad[0xA3];
    s8 unkA3;
};
void func_80234E30(struct func_80234E30_Struct *arg0, struct func_80234E30_Node *arg1);


typedef struct func_80234ED4_Struct {
    u8 pad[0xA2];
    s8 unkA2;
    s8 unkA3;
} func_80234ED4_Struct;

extern u8 D_8023E400[];
extern void D_802345B0(void *, s32 *, s32, s16, s32, s32);

void func_80234ED4(func_80234ED4_Struct *arg0, s32 *arg1, u8 *arg2, u8 arg3, u8 arg4) {
    s8 i;
    s8 sp5E;
    s8 sp5D;
    s16 x;
    s16 y;

    x = arg0->unkA2 * -0x118;
    y = (arg0->unkA3 * -9) + 9;
    func_80234450();
    sp5E = func_80006214(arg0);
    switch (arg4) {
    case 1:
        x -= 0x46;
        sp5D = func_80006214(arg0);
        for (i = 0; i < arg0->unkA3; i++) {
            D_8023448C(arg0, arg1, D_8023E400[arg3], x + i * 0x8C, 0, 1, 7);
        }
        func_80234D70((void *)arg0, (void *)arg1[sp5D]);
        sp5D = func_80006214(arg0);
        for (i = 0; i < arg0->unkA3; i++) {
            D_802345B0(arg0, arg1, arg2[i], x + i * 0x8C, 0, 1);
        }
        func_80234DD4((void *)arg0, (void *)arg1[sp5D]);
        break;
    case 2:
        sp5D = func_80006214(arg0);
        for (i = 0; i < arg0->unkA3; i++) {
            D_8023448C(arg0, arg1, D_8023E400[arg3], x, y + i * 0x12, 8, 9);
        }
        func_80234AFC((void *)arg0, (void *)arg1);
        func_80234E30((void *)arg0, (void *)arg1[sp5D]);
        break;
    case 0:
        for (i = 0; i < arg0->unkA3; i++) {
            D_8023448C(arg0, arg1, D_8023E400[arg3], x, y + i * 0x12, 8, 9);
        }
        for (i = 0; i < arg0->unkA3; i++) {
            D_802345B0(arg0, arg1, arg2[i], x, y + i * 0x12, 2);
        }
        break;
    case 3:
        sp5D = func_80006214(arg0);
        for (i = 0; i < arg0->unkA3; i++) {
            D_8023448C(arg0, arg1, D_8023E400[arg3], x, y + i * 0x12, 8, 9);
        }
        func_80234934((void *)arg0, (void *)arg1);
        func_80234E30((void *)arg0, (void *)arg1[sp5D]);
        break;
    }
    D_80240864 = (void *)(sp5E + arg1);
    D_80240868 = (void *)((arg0->unkA3 + sp5E) + arg1);
    if (arg4 == 1) {
        func_802348C8((void *)arg1, -0xB, 0xC);
        return;
    }
    if (arg4 == 2 || arg4 == 3) {
        func_802348C8((void *)arg1, -0x78, 0x78);
        return;
    }
    func_802348C8((void *)arg1, -0x50, 0x50);
}
