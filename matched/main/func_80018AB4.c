#include "context.h"

typedef struct func_80018AB4_Struct10 {
    u16 v[5];
} func_80018AB4_Struct10;
typedef struct func_80018AB4_Struct8 {
    u16 v[4];
} func_80018AB4_Struct8;
typedef struct func_80018AB4_StructEntry {
    u8 unk0;
    u8 unk1;
    u8 pad2[4];
    u16 unk6;
    func_80018AB4_Struct10 unk8;
    func_80018AB4_Struct8 unk12;
    u8 pad1A[0x100];
} func_80018AB4_StructEntry;
extern void *func_8001B154(s32);
extern func_80018AB4_Struct10 D_800441A0;
extern func_80018AB4_Struct8 D_800441AC;
extern u16 D_8008EBC2;
extern u8 D_8008EC18[];

void func_80018AB4(void)
{
  u8 i;
  func_80018AB4_StructEntry *p;
  func_80018AB4_Struct10 a;
  func_80018AB4_Struct8 b;
  a = D_800441A0;
 b = D_800441AC; i = 0; p = func_8001B154(D_8008EBC2 * 4); for (; i < D_8008EC18[(D_8008EBC2 * 0x26) + 4]; i++, p++) { p->unk0 = 1; p->unk1 = 0; p->unk6 = 0; p->unk12 = b;
    p->unk8 = a;
  }

}
