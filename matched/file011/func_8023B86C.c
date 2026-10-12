#include "context.h"

struct func_8023B86C_Struct {
    u8 pad0[0x24];
    s32 unk24;
};

extern void func_80147148(s32, s32);
extern void func_80020744(s32);
extern void func_801471DC(s32);
extern void func_80148FC4(void *, void *, s32, s32);
extern void func_80236BC8(s32);
extern void func_80236A3C(void);
extern void func_80236BD8(void);
extern void func_8023B148(void *, s32);
extern void func_8023B608(void *, void *);
extern void func_80147D60(s32);
extern s32 func_8023639C();
extern void func_80237630(void);
extern void func_8023BA64();
extern void func_8023BBDC();
extern void func_8023BD7C();
extern void func_800058DC(void *, void *);
extern s32 D_80240888;
extern u8 D_802408A1;
extern u8 D_8038CE18[];
extern u8 D_8038CEC0[];

void func_8023B86C(struct func_8023B86C_Struct *arg0, s32 arg1) {
    struct func_8023ADBC_Sub *sp24;
    u8 sp23x[4];
#define sp23 sp23x[3]
    u8 a;

    sp24 = ((struct func_8023ADBC_Struct *)arg0)->unk94;
    sp23 = func_8023ADBC(arg0);
    func_8023AD74();
    func_8023B148(arg0, 0xFF);
    func_80147148(arg0->unk24, 1);
    a = sp23;
    if ((a != 0) && (func_8023B57C(a) != 0)) {
        func_80020744(0x104);
        if (D_802408A0 == 0) {
            if (func_8023639C(arg0) != 0) {
                if (sp23 == 3) {
                    func_801471DC(D_80240888);
                    func_8023B608(arg0, D_8038CEC0);
                    func_800058DC(arg0, func_8023BD7C);
                    return;
                }
                if (sp23 == 2) {
                    func_801471DC(D_80240888);
                    func_8023B608(arg0, D_8038CE18);
                    func_800058DC(arg0, func_8023BD7C);
                    return;
                }
            }
            if (sp23 == 4) {
                func_80147148(arg0->unk24, 0);
                func_80147D60(4);
                func_80236BC8(0);
                func_80236A3C();
                func_80236BD8();
                func_80148FC4(arg0, func_80237630, 6, 0);
                return;
            }
        }
        func_8023B5B4(sp23);
        D_802408A1 = func_8023B4FC(sp23);
        func_800058DC(arg0, func_8023BA64);
        return;
    }
    if (sp24->unk4 & 0x4000) {
        if (D_802408A0 == 0) {
            func_800058DC(arg0, func_8023BBDC);
            return;
        }
        D_802408A1 = func_8023B550();
        func_800058DC(arg0, func_8023BA64);
    }
}
