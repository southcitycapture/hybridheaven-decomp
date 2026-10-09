#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800201D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800203C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_8002059C.s")


extern s32 func_800207D0(s32, s32, s32);

void func_80020718(s32 arg0) {
    s32 *p = &arg0;
    func_800207D0(arg0 & 0xFFFF, 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020770.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800207A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800207D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800208C4.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800211B4.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022874.s")


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
extern s32 D_800CBB48;

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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022C2C.s")


extern s8 D_800CBACD;
extern u8 D_800CBACE;

void func_80022C44(void) {
    if (D_800CBACE == 0) {
        D_800CBACD = -4;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022C68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022C8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022D20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022DC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80023174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80023520.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80023958.s")

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

extern void *D_800CBDA4;

extern void func_80023BF4(void);
extern void func_80023D04(void);
extern void func_80024358(void);
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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80024180.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_8002420C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80024278.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800242C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_8002430C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80024358.s")

