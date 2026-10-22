#include "context.h"

extern u8 D_8024F51E[];
extern u8 D_8024F51F;
#define F1 D_8024F51E[1]
#define F2 D_8024F51F
#define F3 D_8024F51E[1]
#define F4 D_8024F51F
#define F5 D_8024F51E[1]
extern void func_80020718(s32);
extern void func_801518D4(s32, s32, s32);
void func_802491C8(s32 arg0, s32 arg1);

typedef struct {
    s32 unk0;
    u8 pad4[2];
    u16 unk6;
} func_80248FBC_StructA3;

typedef struct {
    func_80248DE0_StructCBC *p;
    u8 b;
} func_80248FBC_Ent;

extern func_80248FBC_Ent D_80249DA0[];

void func_80248FBC(s32 arg0, s32 arg1) {
    void *sp2C;
    func_80248FBC_StructA3 *a3;
    func_80248DE0_StructCBC *v;

    sp2C = *(void **)((u8 *)arg0 + 0x5C);
    if (D_8024F518 < 8) {
        a3 = (func_80248FBC_StructA3 *)((u8 *)sp2C + 0x1C);
        if (D_8024F518 >= 5) {
            if (a3->unk6 & 1) {
                a3->unk6 &= 0xFFFE;
            }
            if (*(u8 *)&D_80249CB4 == 0) {
                F1 = 1;
            }
            if (D_80249DA0[*(u8 *)&D_80249CB4].p != NULL) {
                if (F2 != 0 && D_80249DA0[*(u8 *)&D_80249CB4].p->unk0 == a3->unk0) {
                    if (func_80010550(arg1, sp2C, D_80249DA0, a3) != 0) {
                        if (D_80249DA0[*(u8 *)&D_80249CB4 + 1].p == NULL) {
                            if (D_8024F518 == 5) {
                                D_8024F518 = 6;
                                func_80020718(0x174);
                                func_801518D4(0, 7, 6);
                            }
                            func_800111E0(arg1, &a3->unk6);
                            return;
                        }
                        if (D_80249DA0[*(u8 *)&D_80249CB4].p->unk0 == D_80249DA0[*(u8 *)&D_80249CB4 + 1].p->unk0) {
                            F3 = 0;
                        } else {
                            F4 = 1;
                        }
                        (*(u8 *)&D_80249CB4)++;
                    }
                } else {
                    if (D_80249DA0[*(u8 *)&D_80249CB4].b == 0) {
                        F5 = 1;
                        func_8013A28C(arg1, *(struct func_80248F3C_Struct3 *)D_80249DA0[*(u8 *)&D_80249CB4].p);
                        func_80010550(arg1, sp2C);
                        return;
                    }
                    func_80011140(arg1, sp2C, *D_80249DA0[*(u8 *)&D_80249CB4].p,D_80249DA0[*(u8 *)&D_80249CB4].b);
                }
            }
        }
    } else {
        func_800058DC((void *)arg0, func_802491C8);
    }
}
