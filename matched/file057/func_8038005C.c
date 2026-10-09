#include "common.h"

typedef struct func_8038005C_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_8038005C_Struct;

extern s32 func_80006214(void *);
extern s32 func_80147250(s32, s32, s32, s32, s32);
extern s32 D_8008DA88[];
extern void *D_8038CFB0;

void func_8038005C(func_8038005C_Struct *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4)
{
  s32 *temp_s3;
  s32 *temp_v0;
  s32 *temp_s2;
  s32 var_s0;
  temp_v0 = *((s32 **) (((u8 *) D_8038CFB0) + 0x5C));
  temp_s3 = (s32 *) temp_v0[1];
 func_80006214(D_8038CFB0); temp_s2 = (s32 *) D_8008DA88; var_s0 = 1; if (arg0->unk94 >= 2) { do {
      if (temp_s3[var_s0] >= 0)
      {
        func_80147250(temp_s2[var_s0], arg1 & 0xFF, arg2 & 0xFF, arg3 & 0xFF, arg4);
      }
      var_s0 = (var_s0 + 1) & 0xFF;
    }
    while (var_s0 < arg0->unk94);
  }
}
