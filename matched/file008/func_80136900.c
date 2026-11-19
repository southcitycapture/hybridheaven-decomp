#include "common.h"
void func_800058DC(void *arg0, void *arg1);
typedef struct func_80135DE4_StructInner {
    u8 pad0[0x14];
    u32 unk14;
} func_80135DE4_StructInner;
typedef struct func_80135DE4_Struct {
    u8 pad0[0x38];
    func_80135DE4_StructInner *unk38;
    u8 pad1[0x54];
    u16 unk90;
} func_80135DE4_Struct;
s32 func_8012A630(func_80135DE4_Struct *arg0, f32 arg1);
typedef struct func_801361C8_StructInner {
    u8 pad0[0x10];
    u32 unk10;
} func_801361C8_StructInner;
typedef struct func_801364F4_StructPos {
    u8 pad[4];
    f32 x;
    u8 pad8[4];
    f32 z;
    u8 pad10[2];
    s16 angle;
} func_801364F4_StructPos;
typedef struct func_801364F4_StructLink {
    u8 pad[0x30];
    func_801364F4_StructPos *pos;
} func_801364F4_StructLink;
typedef struct func_801364F4_Struct {
    u8 pad[0x24];
    func_801364F4_StructLink *link;
    u8 pad28[0x10];
    func_801361C8_StructInner *data;
} func_801364F4_Struct;
void func_801364F4(func_801364F4_Struct *arg0, s32 arg1);


typedef struct func_80136900_StructInner {
    u8 pad0[0x10];
    u32 unk10;
} func_80136900_StructInner;

typedef struct func_80136900_Struct {
    u8 pad0[0x38];
    func_80136900_StructInner *unk38;
} func_80136900_Struct;

extern s16 D_801BBD84;

void func_80136900(func_80136900_Struct *arg0, s32 arg1)
{
  D_801BBD84 = 2;
  if (func_8012A630(arg0, (f32) (((arg0->unk38->unk10 >> 0x10) & 0xFF) + 0x1E)) == 0)
  {
    func_800058DC(arg0, &func_801364F4);
  }
}
