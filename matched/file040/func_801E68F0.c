#include "common.h"
struct func_801E5D38_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};
struct func_801E5D38_Struct_D {
    u8 pad[0x2C];
    struct func_801E5D38_Struct_F *unk2C;
};
struct func_801E5D38_Struct_C {
    u8 pad[0x24];
    struct func_801E5D38_Struct_D *unk24;
};
struct func_801E5D38_Struct_B {
    u8 pad[0x8];
    struct func_801E5D38_Struct_C *unk8;
};
extern struct func_801E5D38_Struct_B *D_801DAB14;
extern s32 func_801C0B8C(u64 time);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);


s32 func_801E68F0(s32 arg0, s32 arg1)
{
  if (func_801C0B8C(0x019D012B) != 0)
  {
    D_801DAB14->unk8->unk24->unk2C->unk4 = -28.0f;
    D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
    D_801DAB14->unk8->unk24->unk2C->unkC = 31.0f;
    D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1C00;
    func_801CC470(0, 0x03480046, 0, 1, 1.0f);
    return 0x24;
  }
  return 0x23;
}
