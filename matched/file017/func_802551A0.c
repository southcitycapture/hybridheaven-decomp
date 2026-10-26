#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80254B3C_Ctx LP(CX, __LINE__)
#define func_80254B3C_Args LP(AX, __LINE__)
#define func_80254B3C_Node LP(NX, __LINE__)
#define CX_116 func_80254B3C_CtxA
#define CX_125 func_80254B3C_CtxA
#define CX_126 func_80254B3C_CtxA
#define CX_130 func_80254B3C_CtxA
#define CX_213 func_80254B3C_CtxA
#define CX_227 func_80254B3C_CtxB
#define CX_241 func_80254B3C_CtxB
#define AX_117 func_80254B3C_ArgsA
#define AX_145 func_80254B3C_ArgsA
#define AX_213 func_80254B3C_ArgsA
#define AX_228 func_80254B3C_ArgsB
#define AX_293 func_80254B3C_ArgsB
#define NX_118 func_80254B3C_NodeA
#define NX_229 func_80254B3C_NodeB
#define NX_241 func_80254B3C_NodeB
#include "context.h"
#undef func_80254B3C_Ctx
#undef func_80254B3C_Args
#undef func_80254B3C_Node
#define func_8025799C func_8025799C__func_802551A0
extern void func_8025799C();

extern void func_800179B0(void *);
extern void func_800208C4(s32);
extern u8 D_80259A30[];

typedef struct func_802551A0_Ctx { u8 pad0[0x92]; u16 unk92; } func_802551A0_Ctx;

void func_802551A0(func_802551A0_Ctx *arg0) {
    u8 pad[0x20];
    volatile s32 count;
    u16 temp;

    temp = arg0->unk92;
    count = temp;
    arg0->unk92 = temp + 1;
    func_8025799C();
    if (count >= 0x78) {
        func_800179B0(D_80259A30);
        func_800208C4(0x73);
        func_800058DC(arg0, func_80255204);
    }
}
#undef func_8025799C
