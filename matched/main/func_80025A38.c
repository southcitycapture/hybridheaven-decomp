#include "context.h"

struct func_80025A38_Struct {
    u8 pad0[0x34];
    s16 unk34;
    u8 pad1[0x42 - 0x36];
    s16 unk42;
    u8 pad2[0x64 - 0x44];
    u8 unk64;
    u8 pad3[3];
    u8 *unk68;
};

#define THIS ((struct func_80025A38_Struct *)D_800CBDA4)

void func_80025A38(void)
{
  u32 temp_v0;
  temp_v0 = *D_800CBDA0;
 D_800CBDA0 += 1; ((struct func_80025A38_Struct *) D_800CBDA4)->unk64++; if ((temp_v0 == 0) || ((temp_v0 ^ 0) != ((struct func_80025A38_Struct *) D_800CBDA4)->unk64)) {
    ((struct func_80025A38_Struct *) D_800CBDA4)->unk42 += *((s8 *) D_800CBDA0);
    D_800CBDA0 += 1;
    ((struct func_80025A38_Struct *) D_800CBDA4)->unk34 += (*((s8 *) D_800CBDA0)) * 8;
    D_800CBDA0 += 1;
    D_800CBDA0 = ((struct func_80025A38_Struct *) D_800CBDA4)->unk68;
    return;
  }
  ((struct func_80025A38_Struct *) D_800CBDA4)->unk42 = 0;
  ((struct func_80025A38_Struct *) D_800CBDA4)->unk34 = ((struct func_80025A38_Struct *) D_800CBDA4)->unk42;
  D_800CBDA0 += 2;
}
