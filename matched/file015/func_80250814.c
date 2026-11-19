#include "common.h"
struct func_8024EACC_Sub2 {
    u8 pad[0xC];
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};
struct func_8024EACC_Sub {
    u8 pad[0x2C];
    struct func_8024EACC_Sub2 *unk2C;
};
struct func_8024EACC_Glob {
    u8 pad[0xE0];
    struct func_8024EACC_Sub *unkE0;
};
extern struct func_8024EACC_Glob D_801BBBF0;
extern void func_800058DC(void *, void *);

void *func_80251E44(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
extern s32 func_80133A24(s32);
extern s32 func_8015105C(s32);
extern void func_80250914();
extern s32 D_8025A2FC;
extern f32 D_8025A160;
extern f32 D_8025A164;

void func_80250814(s32 arg0, s32 arg1)
{
  if (func_80133A24(0x7B) != 0)
  {
    D_8025A2FC = func_8015105C(0x149);
    func_80251E44(-160.0f, -123.0f, 460.0f, 0.0f, 0.0f, D_8025A160);
    func_80251E44(-162.0f, -123.0f, 440.0f, 0.0f, 0.0f, D_8025A164);
    ((s8 *)&D_801BBBF0)[0xF20] = 0x20;
    ((s8 *)&D_801BBBF0)[0xF21] = 0x20;
    ((s8 *)&D_801BBBF0)[0xF22] = 0x20;
    ((u8 *)&D_801BBBF0)[0xF23] = 0xFF;
    ((u8 *)&D_801BBBF0)[0xF24] = 0xFF;
    ((u8 *)&D_801BBBF0)[0xF25] = 0xFF;
    ((s8 *)&D_801BBBF0)[0xF26] = -0x40;
    ((s8 *)&D_801BBBF0)[0xF27] = 0;
    ((s8 *)&D_801BBBF0)[0xF28] = 0;
    ((s8 *)&D_801BBBF0)[0xF29] = 0;
    ((s8 *)&D_801BBBF0)[0xF2A] = 0;
    ((s8 *)&D_801BBBF0)[0xF2B] = 0;
    ((s8 *)&D_801BBBF0)[0xF2C] = -0x40;
    ((s8 *)&D_801BBBF0)[0xF2D] = 0;
    ((s8 *)&D_801BBBF0)[0xF2E] = 0;
    func_800058DC((void *) arg0, (void *) func_80250914);
  }
}
