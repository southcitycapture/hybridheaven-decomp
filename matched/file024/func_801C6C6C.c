#include "context.h"

extern void func_80152BC8(u8, s8);
extern void func_80152CC8(u8, u16);
extern void func_801C6D94(void);
extern s8 D_801CD0C8[];
extern func_801C659C_Obj *D_801CFD80[];

void func_801C6C6C(void *arg0, s32 arg1) {
    u8 i;
    s32 v;

    if (func_801C5B38() != 0) {
        i = 0;
        do {
            D_801CFD80[i]->unk30->unk10 += 0x155;
            v = D_801CFD80[i]->unk30->unk10;
            if (v > 0x2000) {
                D_801CFD80[i]->unk30->unk10 = 0x2000;
                i = 0;
                do {
                    func_80152CC8(i, D_801CFDAC[i]);
                    func_80152BC8(i, D_801CD0C8[i]);
                    i++;
                } while (i < 2);
                D_800058DC(arg0, func_801C6D94);
            }
            i++;
        } while (i < 2);
        func_801C655C();
        func_801C5C18();
    }
}
