#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800201D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800203C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_8002059C.s")


extern void func_800207D0(u16 arg0, s32 arg1, u8 arg2);

void func_80020718(s32 arg0) {
    s32 *p = &arg0;
    func_800207D0(arg0 & 0xFFFF, 0, 0);
}



void func_80020744(s32 arg0) {
    s32 *p = &arg0;
    func_800207D0(arg0 & 0xFFFF, 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020770.s")



void func_800207A0(u16 arg0, u8 arg1) {
    func_800207D0(arg0, 0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800207D0.s")


extern u8 D_800CBAB1;
extern u8 D_800CBDA8[];
extern u8 D_800CBDAC[];
extern u8 D_80153032[];

void func_800208C4(u16 arg0) {
    u8 index;

    if (arg0 != 0) {
        D_800CBAB1 = 0xFF;
        index = D_80153032[arg0 * 4];
        if (index != 0) {
            index--;
            D_800CBDA8[index] = arg0;
            D_800CBDAC[index] = arg0;
            D_800CBAB1 = 0;
        } else {
            for (index = 0; index < 3; index++) {
                D_800CBDA8[index] = 0;
            }
            D_800CBAB1 = 0;
            func_800207D0(arg0, 0, 0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_8002096C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800209E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020A7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020B98.s")


extern u8 D_800CBAD0[];

void func_80020BE4(void) {
    D_800CBAD0[1] = 0;
    D_800CBAD0[0] = 0;
}


extern void func_80020C20(s32, s32);

void func_80020BF8(s32 arg0) {
    s32 *p = &arg0;
    func_80020C20(arg0 & 0xFFFF, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020C20.s")


extern u8 D_800CBB90[];

void func_80020D2C(s32 arg0) {
    D_800CBB90[arg0] = 0;
}



u8 func_80020D3C(s32 arg0) {
    return D_800CBB90[arg0];
}


extern u8 D_800CBBD8[];

s32 func_80020D4C(s32 arg0) {
    return D_800CBBD8[arg0] + D_800CBB90[arg0];
}


extern u16 D_800CBABE;
extern u16 D_800CBAC2;
extern u32 D_801B5520;

s32 func_80020D6C(void) {
    s32 var_v1;

    var_v1 = D_800CBABE + D_800CBAC2;
    if ((var_v1 == 0) && (D_801B5520 != 0) && ((u32) D_801B5520 < 0x100U)) {
        var_v1 = -1;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020DAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020EA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020F60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80021094.s")

typedef struct { u16 w; u8 pad; u8 a; u8 b; u8 c; } Lim;
typedef struct { u16 flags; u16 pad; Lim *lim; u16 hi; u16 pad2; } Ent;
extern u8 D_800CBDB3;
extern Ent D_800CBDB8[];
extern s16 D_800CBAD8[];
extern s32 D_800CBB48;
void func_80021968(s32);

void func_800211B4(void) {
    Ent *e;
    Lim *l;
    s16 x, y, z, t, u;
    s32 q;
    s32 m;
    u16 f;
    while (D_800CBDB3 != 0) {
        D_800CBDB3--;
        e = &D_800CBDB8[D_800CBDB3];
        f = e->flags;
        l = e->lim;
        t = f >> 3;
        x = t & 0x3FFF;
        t = t >> 3;
        y = t & 0xFF;
        u = t >> 3;
        z = u & 0x7F;
        if (l->pad != 0) {
            s16 m = l->pad << 8;
            if (m < x) { do { x >>= 1; } while (m < x); }
        } else x = 0;
        q = l->a;
        if (q != 0) {
            if (q < y) { m = q; do { y >>= 1; } while (m < y); }
        } else y = 0;
        q = l->b;
        if (q != 0) {
            if (q < z) { m = q; do { z >>= 1; } while (m < z); }
        } else z = 0;
        if (f & 1) x = -x;
        if (f & 2) y = -y;
        if (f & 4) z = -z;
        D_800CBB48 = (e->hi << 16) + l->w;
        D_800CBAD8[6] = x;
        D_800CBAD8[7] = y;
        D_800CBAD8[8] = z;
        if ((u32)(D_800CBB48 & 0x7FFF) >= 0x100) func_80021968(1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/D_8004D040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800213DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80021518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80021824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80021968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80021C10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80021D50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80021EB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022128.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022214.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022528.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022778.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800227EC.s")

extern void *D_800CBDA4;

typedef struct func_80022874_Struct {
    s32 unk0;
    u8 unk4;
    u8 pad5[0xE - 0x5];
    u8 unkE;
    u8 unkF;
    u8 padF[0xB4 - 0x10];
    u16 unkB4;
    u16 unkB6;
} func_80022874_Struct;

extern s32 D_800498F0;
extern u8 D_800CBBE0[];
void func_80026950(s32, void *, s32, s32);

void func_80022874(s32 arg0) {
    D_800CBDA4 = (func_80022874_Struct *)((arg0 * 0xD8) + (s32)&D_801B5520);
    ((func_80022874_Struct *)D_800CBDA4)->unk0 = 0;
    ((func_80022874_Struct *)D_800CBDA4)->unk4 = 0;
    if (arg0 < 0x10) {
        if (((func_80022874_Struct *)D_800CBDA4)->unkE != 0) {
            ((func_80022874_Struct *)D_800CBDA4)->unkF = 2;
            ((func_80022874_Struct *)D_800CBDA4)->unkB4 = 0;
            ((func_80022874_Struct *)D_800CBDA4)->unkB6 = 0;
            func_80026950(D_800498F0, (u8 *)D_800CBBE0 + arg0 * 0x1C, 0, 0x1388);
        }
    }
}


extern s8 D_800CBAB6;
extern u8 D_800CBAB7;

void func_80022930(void) {
    if (D_800CBAB7 != 0x7F) {
        D_800CBAB6 = -4;
    }
}



void func_80022954(void) {
    if (D_800CBAB7 != 0) {
        D_800CBAB6 = 4;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022978.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800229FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022A84.s")


typedef struct func_80022B6C_Struct {
    u16 unk0;
    u16 unk2;
} func_80022B6C_Struct;

extern u16 D_80047E3A[];
extern func_80022B6C_Struct D_800CBABC;
extern func_80022B6C_Struct D_800CBAC0;

void func_80022B6C(void) {
    if (D_800CBB48 != 0xA) {
        if (D_800CBABC.unk2 == 0) {
            D_800CBABC.unk2 = 0xFFFFU;
        }
        D_800CBABC.unk0 = D_80047E3A[D_800CBB48];
        return;
    }
    if (D_800CBAC0.unk2 == 0) {
        D_800CBAC0.unk2 = 0xFFFFU;
    }
    D_800CBAC0.unk0 = D_80047E3A[D_800CBB48];
}


struct func_80022BE0_Struct {
    u16 unk0;
    u16 unk2;
};


void func_80022BE0(void) {
    if (D_800CBAC0.unk2 == 0) {
        D_800CBAC0.unk2 = 0xFFFF;
    }
    D_800CBAC0.unk0 = 0x199;
}


extern u16 D_800CBACA;
extern s8 D_800CBACC;

void func_80022C08(void) {
    if ((s32) D_800CBACA < 0x100) {
        D_800CBACC = 0x10;
    }
}



void func_80022C2C(void)
{
  s16 *new_var;
  volatile s16 *p;
  new_var = &D_800CBACA;
  new_var = &D_800CBACA;
  p = new_var;
  new_var[0] = 0;
  D_800CBACC = 0;
  if (!new_var)
  {
  }
}


extern s8 D_800CBACD;
extern u8 D_800CBACE;

void func_80022C44(void) {
    if (D_800CBACE == 0) {
        D_800CBACD = -4;
    }
}



void func_80022C68(void) {
    if (D_800CBACE != 0) {
        D_800CBACD = 4;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022C8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022D20.s")


typedef struct func_80022DC0_Struct {
    u32 unk0;
    u8 pad4;
    u8 unk5;
    u8 pad6[0xE - 0x6];
    u8 unkE;
    u8 unkF;
    u8 pad10[0x1A - 0x10];
    u16 unk1A;
    u8 pad1C[0xD8 - 0x1C];
} func_80022DC0_Struct;

extern void func_80022528(void);
extern void func_80022694(void);
extern void func_80022D20(u16);
extern void func_80023174(void);
extern void func_80034EE0(s32, void *);
extern u32 D_801B61C8;
extern u16 D_800CBAB2;
extern u8 D_800CBAB4;
extern u8 D_800CBAB5;
extern func_80022B6C_Struct D_800CBAC4[];
extern u16 D_800CBAC8[];

#define CUR ((func_80022DC0_Struct *)D_800CBDA4)

void func_80022DC0(void) {
    s32 i;
    u16 *p;

    if (D_800CBBD8[0] == 2 && (D_801B61C8 & 0x7FFF) < 0x607) {
        D_800CBBD8[0] = 0;
    }
    if (D_800CBAB6 != 0 && !(D_800CBAB2 & 3)) {
        D_800CBAB7 += D_800CBAB6;
        if (D_800CBAB7 < 0x80) {
            if (D_800CBAB6 < 0) {
                D_800CBAB7 = 0x7F;
            } else {
                D_800CBAB7 = 0;
            }
            D_800CBAB6 = 0;
        }
    }
    if (D_800CBAC0.unk2 != 0 && D_800CBAB5 == 0 && !(D_800CBAB2 & 3)) {
        D_800CBAC0.unk2 -= D_800CBAC0.unk0;
        if (D_800CBAC0.unk2 < 0x1000) {
            func_80022528();
        }
    }
    if (D_800CBABC.unk2 != 0 && D_800CBAB5 == 0 && !(D_800CBAB2 & 3)) {
        D_800CBABC.unk2 -= D_800CBABC.unk0;
        if (D_800CBABC.unk2 < 0x1000) {
            func_80022694();
        }
    }
    if (D_800CBAB5 == 0 && !(D_800CBAB2 & 3)) {
        p = D_800CBAC8;
        i = 0;
        do {
            if (*p != 0) {
                D_800CBAC4[i].unk2 -= D_800CBAC4[i].unk0;
                if (D_800CBAC4[i].unk2 < 0x1000) {
                    func_80022D20(i);
                }
            }
            i++;
            p++;
        } while (i != 1);
    }
    if (*(u8 *)&D_800CBACC != 0 && D_800CBAB5 == 0 && !(D_800CBAB2 & 7)) {
        (*(u8 *)&D_800CBACC)--;
        D_800CBACA++;
    }
    if (D_800CBACD != 0 && !(D_800CBAB2 & 3)) {
        D_800CBACE += D_800CBACD;
        if (D_800CBACE < 0xB1) {
            if (D_800CBACD < 0) {
                D_800CBACE = 0xB0;
            } else {
                D_800CBACE = 0;
            }
            D_800CBACD = 0;
        }
    }
    for (D_800CBAB4 = 0; D_800CBAB4 < 20; D_800CBAB4++) {
        D_800CBDA4 = &((func_80022DC0_Struct *)&D_801B5520)[D_800CBAB4];
        if (CUR->unkF != 0) {
            CUR->unkF--;
            if (CUR->unkF == 0 && CUR->unkE != 0) {
                CUR->unkE = 0;
                func_80034EE0(D_800498F0, &D_800CBBE0[D_800CBAB4 * 0x1C]);
            }
        }
        if (CUR->unk0 != 0) {
            if (CUR->unk5 != 0) {
                CUR->unk5--;
            } else if ((CUR->unk0 & 0x7FFF) < 0x100) {
                if (D_800CBAB5 == 0) {
                    CUR->unk1A += D_800CBACA;
                    func_80023174();
                }
            } else {
                func_80023174();
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80023174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80023520.s")


extern void func_800255FC(void);
extern void func_800250D4(void);
extern void func_80023BF4(void);
extern void func_8002430C(void);
extern void func_800242C8(void);
extern void func_80024358(void);
extern s32 func_80023D04();
extern void func_80023A74(void);

typedef struct func_80023958_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x1A];
    u8 unk21;
    u8 unk22;
    u8 pad23;
    u8 unk24;
    u8 pad25[0x4C - 0x25];
    u16 unk4C;
    u8 pad4E[0x7D - 0x4E];
    u8 unk7D;
    u8 pad7E[0x9A - 0x7E];
    u16 unk9A;
} func_80023958_Struct;

void func_80023958(void) {
    u8 temp_v1;

    if (((func_80023958_Struct *) D_800CBDA4)->unk7D != 0) {
        func_800255FC();
    }
    if (((func_80023958_Struct *) D_800CBDA4)->unk9A != 0) {
        func_800250D4();
    }
    if (((func_80023958_Struct *) D_800CBDA4)->unk6 & 2) {
        func_80023BF4();
    }
    if ((((func_80023958_Struct *) D_800CBDA4)->unk22 != 0) && (((func_80023958_Struct *) D_800CBDA4)->unk21 == 1)) {
        func_8002430C();
        return;
    }
    temp_v1 = ((func_80023958_Struct *) D_800CBDA4)->unk24;
    if (temp_v1 != 0) {
        ((func_80023958_Struct *) D_800CBDA4)->unk24 = (u8) (temp_v1 - 1);
        if (((func_80023958_Struct *) D_800CBDA4)->unk24 == 0) {
            func_800242C8();
            return;
        }
    }
    if (((func_80023958_Struct *) D_800CBDA4)->unk4C != 0) {
        func_80024358();
    }
    if (((func_80023958_Struct *) D_800CBDA4)->unk6 & 1) {
        func_80023D04();
        return;
    }
    func_80023A74();
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80023A74.s")


struct func_80023B48_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x45];
    u16 unk4C;
    u8 pad4E[0x2F];
    u8 unk7D;
    u8 pad7E[0x1C];
    u16 unk9A;
};


extern void func_80025150(void);
extern void func_80025694(void);

void func_80023B48(void) {
    struct func_80023B48_Struct *temp_v0;

    temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    if (temp_v0->unk7D != 0) {
        func_80025694();
        temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    }
    if (temp_v0->unk9A != 0) {
        func_80025150();
        temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    }
    if (temp_v0->unk6 & 2) {
        func_80023BF4();
        temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    }
    if (temp_v0->unk4C != 0) {
        func_80024358();
        temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    }
    if (temp_v0->unk6 & 1) {
        func_80023D04();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80023BF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80023D04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80024114.s")


extern void func_8002420C(void);

struct func_80024180_Struct {
    u8 pad[0x49];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u16 unk4E;
};

void func_80024180(void) {
    ((struct func_80024180_Struct *) D_800CBDA4)->unk4C = 0;
    if (((struct func_80024180_Struct *) D_800CBDA4)->unk4E != 0) {
        ((struct func_80024180_Struct *) D_800CBDA4)->unk4A = 0x20;
        func_80023D04();
        ((struct func_80024180_Struct *) D_800CBDA4)->unk49 = 0;
        ((struct func_80024180_Struct *) D_800CBDA4)->unk4A = 0x100;
        ((struct func_80024180_Struct *) D_800CBDA4)->unk4C = ((struct func_80024180_Struct *) D_800CBDA4)->unk4E;
        func_80023D04();
        return;
    }
    ((struct func_80024180_Struct *) D_800CBDA4)->unk4A = 0x100;
    func_80023D04();
    func_8002420C();
}


struct func_8002420C_Struct {
    u8 pad0[0x49];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[0x50 - 0x4E];
    u16 unk50;
    u8 pad52[0x54 - 0x52];
    u16 unk54;
};

extern void func_80024278(void);

void func_8002420C(void) {
    if (((struct func_8002420C_Struct *) D_800CBDA4)->unk54 != 0) {
        ((struct func_8002420C_Struct *) D_800CBDA4)->unk49 = 1;
        ((struct func_8002420C_Struct *) D_800CBDA4)->unk4A = ((struct func_8002420C_Struct *) D_800CBDA4)->unk4A - ((struct func_8002420C_Struct *) D_800CBDA4)->unk54;
        ((struct func_8002420C_Struct *) D_800CBDA4)->unk4C = ((struct func_8002420C_Struct *) D_800CBDA4)->unk50;
        func_80023D04();
        return;
    }
    func_80024278();
}


typedef struct func_80024278_Struct {
    u8 pad0[0x49];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[0x52 - 0x4E];
    u16 unk52;
} func_80024278_Struct;

void func_80024278(void) {
    ((func_80024278_Struct *) D_800CBDA4)->unk49 = 2;
    if (((func_80024278_Struct *) D_800CBDA4)->unk52 != 0) {
        ((func_80024278_Struct *) D_800CBDA4)->unk4A = 0;
        ((func_80024278_Struct *) D_800CBDA4)->unk4C = ((func_80024278_Struct *) D_800CBDA4)->unk52;
        func_80023D04();
    }
}


struct func_800242C8_Struct {
    u8 pad0[0x49];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[8];
    u16 unk56;
};

void func_800242C8(void) {
    ((struct func_800242C8_Struct *) D_800CBDA4)->unk49 = 3;
    ((struct func_800242C8_Struct *) D_800CBDA4)->unk4A = 0;
    ((struct func_800242C8_Struct *) D_800CBDA4)->unk4C = ((struct func_800242C8_Struct *) D_800CBDA4)->unk56;
    func_80023D04();
}


struct func_8002430C_Struct {
    u8 pad0[0xF];
    u8 unkF;
    u8 pad10[0x49 - 0x10];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
};


void func_8002430C(void) {
    ((struct func_8002430C_Struct *)D_800CBDA4)->unkF = 1;
    ((struct func_8002430C_Struct *)D_800CBDA4)->unk49 = 3;
    ((struct func_8002430C_Struct *)D_800CBDA4)->unk4A = 0;
    ((struct func_8002430C_Struct *)D_800CBDA4)->unk4C = 1;
    func_80023D04();
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80024358.s")

