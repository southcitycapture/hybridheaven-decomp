#include "context.h"

extern s32 func_801C2FF8(void);
extern void func_80245758();
extern u8 D_802587C0[];
extern f32 D_80258AA8, D_80258AAC;
extern f32 D_80258AB0, D_80258AB4, D_80258AB8;
extern f32 D_80258ABC, D_80258AC0, D_80258AC4;

typedef struct func_80245588_StructObj {
    u8 pad[0x3C];
    u16 counter;
} func_80245588_StructObj;

typedef union func_80245588_StructData {
    u8 storage[0x20];
    struct {
        f32 x, y, z;
        s16 type;
        s32 id;
        f32 scale;
        s16 a, b;
    } first;
    struct {
        s16 type;
        s32 id;
        f32 scale;
        s16 a;
    } second;
} func_80245588_StructData;

void func_80245588(func_80245588_StructObj *arg0, s32 arg1)
{
  func_80245588_StructData data;
  u16 temp_v0;
  if (func_801C2FF8() != 0)
  {
    temp_v0 = arg0->counter;
    arg0->counter = temp_v0 + 1;
    if (temp_v0 >= 12)
    {
      if (temp_v0 == 12)
      {
        data.first.type = 0x1100;
        data.first.id = 0x0168003F;
        data.first.a = 0;
        data.first.b = 0;
        data.first.x = -304.0f;
        data.first.y = D_80258AA8;
        data.first.z = 0.0f;
        data.first.scale = D_80258AAC;
        func_801C2F0C(2, &data);
      }
      if (!D_801BBBF0.f1EC)
      {
      }
      if (func_801C3B5C() == 4)
      {
        data.second.type = 0x1000;
        data.second.id = 0x01680041;
        data.second.a = 10;
        data.second.scale = 1.0f;
        func_801C2F0C(3, &data);
        D_801BBBF0.f1E8 = D_80258AB0;
        D_801BBBF0.f1EC = D_80258AB4;
        D_801BBBF0.f1F0 = D_80258AB8;
        D_801BBBF0.f1F4 = D_80258ABC;
        D_801BBBF0.f1F8 = D_80258AC0;
        D_801BBBF0.f1FC = D_80258AC4;
        func_8011AAF4(D_802587C0, 0x24C, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        arg0->counter = 0;
        func_80020718(7);
        func_800058DC(arg0, func_80245758);
      }
    }
  }
}
