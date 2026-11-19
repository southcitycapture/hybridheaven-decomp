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
typedef struct func_80136000_StructPos {
    u8 pad[4];
    f32 x;
    u8 pad8[4];
    f32 z;
    u8 pad10[2];
    s16 angle;
} func_80136000_StructPos;
typedef struct func_80136000_StructLink {
    u8 pad[0x30];
    func_80136000_StructPos *pos;
} func_80136000_StructLink;
typedef struct func_801361C8_StructInner {
    u8 pad0[0x10];
    u32 unk10;
} func_801361C8_StructInner;
typedef struct func_80136000_Struct {
    u8 pad[0x24];
    func_80136000_StructLink *link;
    u8 pad28[0x10];
    func_801361C8_StructInner *data;
} func_80136000_Struct;
void func_80136000(func_80136000_Struct *arg0, s32 arg1);


typedef struct func_8013643C_StructInner {
    u8 pad0[0x10];
    u32 unk10;
} func_8013643C_StructInner;

typedef struct func_8013643C_Struct {
    u8 pad0[0x38];
    func_8013643C_StructInner *unk38;
} func_8013643C_Struct;

extern s16 D_801BBD84;

void func_8013643C(func_8013643C_Struct *arg0, s32 arg1)
{
  D_801BBD84 = 2;
  if (func_8012A630(arg0, (f32) (((((u32) arg0->unk38->unk10) >> 0x10) & 0xFF) + 0x1E)) == 0)
  {
    func_800058DC(arg0, &func_80136000);
  }
}
