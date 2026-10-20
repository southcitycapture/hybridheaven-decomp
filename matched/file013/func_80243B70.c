#include "context.h"

typedef struct func_80243B70_StructB {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_80243B70_StructB;
typedef struct func_80243B70_Struct {
    u8 pad0[0x38];
    func_80243B70_StructB *unk38;
} func_80243B70_Struct;
typedef struct func_80243B70_StructA {
    u8 pad0[0x14];
    u32 unk14;
} func_80243B70_StructA;
typedef struct func_80243B70_StructP {
    u8 pad0[0x38];
    void *unk38;
} func_80243B70_StructP;
typedef struct func_80243B70_StructQ {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    f32 unk90;
    f32 unk94;
    f32 unk98;
} func_80243B70_StructQ;
typedef struct func_80243B70_StructR {
    u8 pad0[0x38];
    func_80243B70_StructA *unk38;
} func_80243B70_StructR;
struct func_80243C6C_Struct;
void func_80243C6C(struct func_80243C6C_Struct *arg0, s32 arg1);
extern void func_80005700(void *);
extern void func_8001F74C(void *);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80133A24(s32);
extern u8 func_80126EAC[];

void func_80243B70(func_80243B70_StructQ *arg0, s32 arg1) {
    u16 t;
    func_80243B70_StructB *b;
    t = ((func_80243B70_StructR *)arg0)->unk38->unk14 & 0xFFFF;
    if (t != 0 && func_80133A24(t) != 0) {
        func_80005700(arg0);
        return;
    }
    func_8001F74C(arg0);
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        b = (func_80243B70_StructB *)((func_80243B70_Struct *)arg0)->unk38;
        arg0->unk90 = (f32)b->unk6 / 10.0;
        arg0->unk94 = (f32)b->unk8 / 10.0;
        arg0->unk98 = (f32)b->unkA / 10.0;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80243C6C);
    }
}
