#include "context.h"

extern f64 D_80219648;
extern f64 D_80219650;

struct func_80203254_StructM { u8 pad0[8]; f32 unk8; };
struct func_80203254_StructO { u8 pad0[0x30]; struct func_80203254_StructM *unk30; };
struct func_80203254_StructP { u8 pad0[4]; struct func_80203254_StructO *unk4; };
struct func_80203254_Struct {
    u8 pad0[0x74];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad8A[6];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 unk9E;
    u8 pad9F_;
    u16 padA0;
    s16 unkA2;
    u8 *unkA4;
};

void func_80203254(struct func_80203254_Struct *arg0, struct func_80203254_StructP *arg1)
{
  f32 fv;
  f32 v;
  s16 t;
  s32 f;
  struct func_80203254_StructM *m;
  u8 s;
  s = arg0->unk9E;
 do { if (s != 1) { if (s != 3) { v = arg0->unk94; do { goto done; } while (0); } goto three; } { if ((arg0->unkA2++) == 0) { func_80020718(0x114); } m = arg1->unk4->unk30; fv = m->unk8 + D_80219648; m->unk8 = fv; v = arg0->unk94; if ((v + 8.0f) <= fv) { arg0->unk9E = 2; arg0->unk74 = func_8012C97C(0xCD, 6); *arg0->unkA4 |= 8; *arg0->unkA4 &= 0xFFFB; v = arg0->unk94; } goto done; } three: { if ((arg0->unkA2++) == 0) { func_80020718(0x115); } m = arg1->unk4->unk30; fv = m->unk8 - D_80219650; m->unk8 = fv; v = arg0->unk94; if (fv <= v) { arg1->unk4->unk30->unk8 = v; arg0->unk9E = 0; arg0->unk74 = func_8012C97C(0xCD, 5); *arg0->unkA4 &= 0xFFF3; v = arg0->unk94; } } done: arg0->unk7C = v; arg0->unk84 = 0; arg0->unk88 = 0; arg0->unk78 = arg0->unk90; } while (0);
  arg0->unk80 = arg0->unk98;
  arg0->unk86 = arg0->unk9C;
}
