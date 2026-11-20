#include "common.h"
extern u16 D_8008EBC2;
typedef struct func_8001800C_Struct {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 pad5;
    s16 unk6;
    s16 unk8;
    u8 unkA;
    u8 padB;
    u16 unkC;
    u16 unkE;
    u8 pad10[0x16];
} func_8001800C_Struct;
extern func_8001800C_Struct D_8008EC18[];

extern void *func_8001B154(s32);
extern s16 D_801BBF40;

typedef struct func_800189C8_StructEntry {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 pad3[2];
    u8 unk5;
    u8 pad6[2];
} func_800189C8_StructEntry;

typedef struct func_800189C8_Struct {
    u8 unk0;
    u8 pad1[5];
    s16 unk6;
    u8 pad8[6];
    s16 unkE;
    s16 unk10;
    func_800189C8_StructEntry entries[33];
} func_800189C8_Struct;

void func_800189C8(void)
{
  u8 i;
  u8 j;
  func_800189C8_Struct *p;
  i = 0;
  p = func_8001B154(D_8008EBC2 * 4);
  while (i < D_8008EC18[D_8008EBC2].unk4)
  {
    j = 0;
    while (p->entries[j].unk0 != 0xFF) {
      p->entries[j].unk1 = 0;
      p->entries[j].unk5 = 0;
      p->entries[j].unk2 = 0xFF;
      j++;
    }
    p->unkE = 0;
    p->unk10 = 0;
    p->unk0 = 1;
    p->unk6 = 0;
    i++;
    p++;
  }

  D_801BBF40 = 0;
}
