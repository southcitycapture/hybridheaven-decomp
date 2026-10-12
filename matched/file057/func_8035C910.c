#include "context.h"

typedef struct func_8035C910_Leaf {
    u8 pad0[0x6C];
    u16 unk6C;
} func_8035C910_Leaf;

typedef struct func_8035C910_Mid {
    u8 pad0[0x2C];
    func_8035C910_Leaf *unk2C;
} func_8035C910_Mid;

typedef struct func_8035C910_Struct {
    u8 pad0[0x1C];
    func_8035C910_Mid *unk1C;
    func_8035C910_Mid *unk20;
    func_8035C910_Mid *unk24;
    func_8035C910_Mid *unk28;
    func_8035C910_Mid *unk2C;
    func_8035C910_Mid *unk30;
} func_8035C910_Struct;

void func_8035C910(func_8035C910_Struct *arg0)
{
  short new_var;
  new_var = 0xFDFF;
  {
    func_8035C910_Leaf *temp_v0 = arg0->unk1C->unk2C;
    temp_v0->unk6C = (u16) (temp_v0->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_v1 = arg0->unk20->unk2C;
    temp_v1->unk6C = (u16) (temp_v1->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_a1 = arg0->unk24->unk2C;
    temp_a1->unk6C = (u16) (temp_a1->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_a2 = arg0->unk28->unk2C;
    temp_a2->unk6C = (u16) (temp_a2->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_a3 = arg0->unk2C->unk2C;
    temp_a3->unk6C = (u16) (temp_a3->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_t0 = arg0->unk30->unk2C;
    temp_t0->unk6C = (u16) (temp_t0->unk6C & new_var);
  }
}
