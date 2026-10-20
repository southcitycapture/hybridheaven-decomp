#include "context.h"
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
void func_80245360(void *arg0, s32 arg1);
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
struct func_802487AC_StructC {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_802487AC_StructC D_80258F0C;
extern u8 *D_8025C6F0;

typedef struct func_802451EC_Sub {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u8 *unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_802451EC_Sub;
typedef struct func_802451EC_Obj {
    u8 pad0[0x2C];
    func_802451EC_Sub *unk2C;
} func_802451EC_Obj;
typedef struct func_802451EC_Ctl {
    u8 pad0[0xC];
    u16 unkC;
    u8 pad0E[0x6A];
    s16 unk78;
    u8 pad7A[0x1A];
    s16 unk94;
} func_802451EC_Ctl;
extern u8 D_80258E90[];
extern u8 D_80258F88[];
extern f32 D_8025C590;
extern s32 D_801BBC30[];
extern void func_80005670();

void func_802451EC(u8 *arg0, func_802451EC_Obj **arg1) {
    func_802451EC_Ctl *s0;
    s32 i;
    func_802451EC_Obj **p;
    u8 *a3;
    f32 k;

    s0 = *(func_802451EC_Ctl **)(arg0 + 0x5C);
    D_8025C6F0 = arg0;
    if (func_8012CE9C((s32)arg1, s0, *(func_80246E60_StructGlobal *)&D_80258F0C, 10) == 0) {
        func_80010550(arg1, s0);
        k = D_8025C590;
        (*arg1)->unk2C->unk18 = k;
        (*arg1)->unk2C->unk1C = k;
        (*arg1)->unk2C->unk20 = k;
        func_80005670(D_801BBC30[1], D_80258E90);
        i = 1;
        p = arg1 + 1;
        a3 = D_80258F88;
        if (s0->unkC >= 2) {
            a3 = (u8 *)((u32)D_80258F88 | 0x40000000);
            do {
                i++;
                p++;
                p[-1]->unk2C->unk24 = p[-1]->unk2C->unk24 | 0x100;
                p[-1]->unk2C->unk30 = a3;
                p[-1]->unk2C->unk48 = 0xFF;
                p[-1]->unk2C->unk49 = 0x96;
                p[-1]->unk2C->unk4A = 0x96;
                p[-1]->unk2C->unk4B = 0xFF;
            } while (i < s0->unkC);
        }
        s0->unk78 = 1;
        *(s16 *)(arg0 + 0x94) = 0x90;
        func_800058DC(arg0, (void *)func_80245360);
    }
}
