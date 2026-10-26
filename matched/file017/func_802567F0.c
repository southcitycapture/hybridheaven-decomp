#include "common.h"
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80254B3C_Ctx LP(CX, __LINE__)
#define func_80254B3C_Args LP(AX, __LINE__)
#define func_80254B3C_Node LP(NX, __LINE__)
typedef struct CXT CX_125, CX_126, CX_130, CX_184, CX_222, CX_250;
typedef struct AXT AX_145, AX_222, AX_284;
typedef struct NXT NX_250;
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);
typedef struct { u8 pad[0x28]; } func_80254B3C_Args;
typedef struct { u8 pad[0x90]; u16 unk90; } func_80254B3C_Ctx;
typedef struct { u8 pad[0x28]; } func_80254B3C_Node;
typedef struct func_80251820_Args { s32 unk0; } func_80251820_Args;
void func_802569D0(s32 arg0, func_80251820_Args *arg1);

#undef func_80254B3C_Ctx
#undef func_80254B3C_Args
#undef func_80254B3C_Node

typedef struct func_802567F0_StructB {
    u8 pad[0x4A];
    u8 unk4A;
    u8 pad2[2];
    u8 unk4D;
} func_802567F0_StructB;
typedef struct func_802567F0_StructA {
    u8 pad[0x30];
    func_802567F0_StructB *unk30;
} func_802567F0_StructA;
typedef struct func_802567F0_Arg0 {
    u8 pad[0x90];
    u16 unk90;
} func_802567F0_Arg0;

void func_802567F0(func_802567F0_Arg0 *arg0, func_802567F0_StructA **arg1)
{
  s16 a;
  u16 t;
  t = arg0->unk90;
  t += 0;
  arg0->unk90 = t + 1;
  a = (t * 0x1E) % 8192;
  (*arg1)->unk30->unk4A = (u32) ((func_8001EAD0(a) * 127.0f) + 128.0f);
  (*arg1)->unk30->unk4D = (u32) ((func_8001EAD0(a) * 127.0f) + 128.0f);
  if (func_80133A24(0x138) != 0)
  {
    func_800058DC(arg0, func_802569D0);
  }
}
