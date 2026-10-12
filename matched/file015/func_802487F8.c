#include "context.h"
struct func_8024A434_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_Sub *unkDC;
};
extern void func_800058DC(void *, void *);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801FBB30(void);
extern struct func_8024A434_StructBBF0 D_801BBBF0;
s32 func_80133A24(s32);

extern void *D_8025A2B0;
extern void func_802488BC();

struct func_802487F8_Arg {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad2[0x50];
    f32 unk90;
};

struct func_802487F8_NodeB {
    u8 pad[0x12];
    u16 unk12;
};

struct func_802487F8_NodeA {
    u8 pad[0x2C];
    struct func_802487F8_NodeB *unk2C;
};

struct func_802487F8_Glob {
    u8 pad[0xE0];
    struct func_802487F8_NodeA *unkE0;
    u8 pad2[0x10C];
    f32 unk1F0;
};

struct func_802487F8_E {
    u8 pad[0xC];
    f32 unkC;
};

struct func_802487F8_D {
    u8 pad[0x2C];
    struct func_802487F8_E *unk2C;
};

struct func_802487F8_C {
    u8 pad[0x24];
    struct func_802487F8_D *unk24;
};

void func_802487F8(struct func_802487F8_Arg *arg0, s32 arg1)
{
  s32 temp_v0;
  if (func_80133A24(0x71) != 0)
  {
    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 + 1);
    if ((((s32) temp_v0) >= 5) != ((((s32) temp_v0) >= 5) * 0))
    {
      func_801C3B2C(2);
      func_801C3B10(1);
      ((struct func_802487F8_Glob *) (&D_801BBBF0))->unkE0->unk2C->unk12 = 0x1000;
      arg0->unk90 = (f32) (((f64) ((struct func_802487F8_Glob *) (&D_801BBBF0))->unk1F0) - (((f64) ((struct func_802487F8_C *) D_8025A2B0)->unk24->unk2C->unkC) + 30.0));
      func_801FBB30();
      func_800058DC(arg0, &func_802488BC);
    }
  }
}
