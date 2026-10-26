#include "common.h"
typedef struct func_80242F38_StructGlobal func_80242F38_StructGlobal;
typedef struct func_8024148C_StructArg func_8024148C_StructArg;
#define func_8024443C func_8024443C__ctx
extern void func_800058DC(void *, void *);
extern s32 func_80010550(s32, s32, s32);
extern s32 func_8013A1B4();
typedef struct func_802444F8_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_802444F8_Struct;
void func_802444F8(func_802444F8_Struct *arg0, s32 arg1, s32 arg2);

#undef func_8024443C

typedef struct func_8024443C_StructArg {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_8024443C_StructArg;

typedef struct func_8024443C_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_8024443C_StructInner;

typedef struct func_8024443C_StructNode {
    u8 pad[0x2C];
    func_8024443C_StructInner *unk2C;
} func_8024443C_StructNode;

struct func_80243290_StructTriple { s32 a; s32 b; s32 c; };
extern struct func_80243290_StructTriple D_8025240C;
extern u8 D_80252618[];
extern void func_800179B0(void *);

void func_8024443C(func_8024443C_StructArg *arg0, func_8024443C_StructNode ** volatile arg1)
{
  s32 temp;
  func_8024443C_StructInner *inner;
  temp = arg0->unk5C;
  if ((arg0->unk90++) >= 30)
  {
    inner = (*arg1)->unk2C;
    inner->unk12 += 0x3A;
    if (func_80010550((s32) arg1, temp ^ 0, temp))
    {
      func_8013A1B4(arg1, D_8025240C, 0xFFFFFF);
      func_800179B0(D_80252618);
      func_800058DC(arg0, func_802444F8);
    }
  }
}
