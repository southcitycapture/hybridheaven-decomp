#include "context.h"

typedef struct func_801F4AA0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F4AA0_Struct;

typedef struct func_801F4AA0_Inner {
    u8 pad0[0x18];
    s32 unk18;
} func_801F4AA0_Inner;

typedef struct func_801F4AA0_Obj {
    u8 pad0[0x38];
    func_801F4AA0_Inner *unk38;
    u8 pad1[0xAE - 0x3C];
    u8 unkAE;
} func_801F4AA0_Obj;

s32 func_801DBE94(void *arg0, s32 arg1);
extern func_801F4AA0_Struct D_80216EE8;
extern func_801F4AA0_Struct D_8021B018;

/* K&R-style definition: keeps the function unprototyped so the zero-argument
   call to func_801F4AA0() elsewhere in this file still type-checks. */
void func_801F4AA0(arg0)
void *arg0;
{
  s32 temp_v0;
  temp_v0 = func_801DBE94(arg0, 0);
  D_80216EE8.unk0 = temp_v0;
  D_8021B018 = D_80216EE8;
  ((func_801F4AA0_Obj *) arg0)->unkAE = ((func_801F4AA0_Obj *) arg0)->unk38->unk18 & 0xFFFFu;
}
