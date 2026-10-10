#include "context.h"

extern void func_80020718(s32);
extern void func_80370500(void *);
extern void func_8037073C(void);
extern void func_803709A8(void);

void func_80370884(void *arg0, s32 arg1) {
    func_8036F898_StructB *a;
    func_8036F898_StructB *b;
    void *p = *(void **)((u8 *)arg0 + 0xC);
    void *d = D_801BBBF0.unkDC;

    a = (d == p) ? (func_8036F898_StructB *)D_801BC03C : (func_8036F898_StructB *)D_801BC3D8;
    b = (d != p) ? (func_8036F898_StructB *)D_801BC03C : (func_8036F898_StructB *)D_801BC3D8;
    if ((D_801BBBF0.unk1031 >= 0xB && D_801BBBF0.unk1031 != 0xF) || a->unk2 <= 0 || ((a->unk30 << 1) >> 30) != 0 || b->unk2 <= 0 || ((b->unk30 << 1) >> 30) != 0) {
        func_80020718(0x6B8);
        func_800058DC((s32)arg0, func_803709A8);
        return;
    }
    if (a->unk390 != 5 || ((a->unk30 << 27) >> 30) != 2) {
        func_80020718(0x6B8);
        func_800058DC((s32)arg0, func_8037073C);
        return;
    }
    func_80370500(p);
}
