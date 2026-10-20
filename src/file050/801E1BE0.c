#include "common.h"

extern void func_8038BEC8(f32);
extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, f32);
extern void D_8038BD88(f32, f32, f32);
extern f32 D_801E3B20;
extern f32 D_801E3B24;
extern f32 D_801E3B28;
extern f32 D_801E3B2C;
extern f32 D_801E3B30;
extern f32 D_801E3B34;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0x53EC60) != 0) {
        func_8038BE98(D_801E3B20);
        func_8038BD50(D_801E3B24, D_801E3B28, 45.4f);
        D_8038BD88(-143.0f, 14.5f, 0.0f);
        return 1;
    }
    func_8038BE98(D_801E3B2C);
    func_8038BD50(D_801E3B30, D_801E3B34, 0.0f);
    D_8038BD88(182.0f, 20.0f, 0.0f);
    return 0;
}


extern void D_8038C158();

s32 func_801E1CA8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x90F560) != 0) {
        D_8038C158();
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E1CF4.s")


s32 func_801E1DC8(s32 arg0, s32 arg1) {
    return 3;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E1DD8(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


extern void func_801CCE0C(s32);
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);

s32 func_801E1E14(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(0, -0x40, -0x40, 0x1A);
    func_801CCE88(1, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(1, 0x40, 0x40, -0x1A);
    func_801CCE50(0x28, 0x28, 0x28);
    return 2;
}


s32 func_801E1EA0(s32 arg0, s32 arg1) {
    return 2;
}

extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern s32 func_801C2420(s32 arg0, void *arg1);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 D_8038DF70[];

s32 func_801E1EB0(s32 arg0, s32 arg1) {
    func_801C2420(0x463, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x464, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x46E, D_8038DDC0);
    D_8038BA70();
    ((s32 *)D_8038DF70)[1] = 0x2800;
    if (func_801C2570(0x46F, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E1F44.s")


extern u32 D_8038D8D0;
extern s32 D_801E3A74;
extern s32 D_801E3A78;

s32 func_801E2970(s32 arg0, s32 arg1) {
    *(u8 *)(*(u32 *)(*(u32 *)(D_8038D8D0 + 0x18) + 0x30) + 0x4B) = 0xFF;
    D_801E3A74 = 0;
    D_801E3A78 = 0;
    return 3;
}


typedef struct { u8 pad[0x4B]; u8 unk4B; } func_801E29A8_S3;
typedef struct { u8 pad[0x30]; func_801E29A8_S3 *unk30; } func_801E29A8_S2;
typedef struct { u8 pad[0x18]; func_801E29A8_S2 *unk18; } func_801E29A8_S1;

s32 func_801E29A8(s32 arg0, s32 arg1) {
    f32 t;
    f32 a;
    f32 b;
    f32 d;
    f32 c;

    t = (f32)D_801E3A74 / 30.0f;
    if (D_801E3A78 != 0) {
        a = 255.0f * t;
        b = 215.0f * t + 40.0f;
        d = -40.0f * t + 40.0f;
        c = d;
    } else {
        a = -255.0f * t + 255.0f;
        b = -100.0f * t + 140.0f;
        d = 40.0f * t;
        c = d;
    }
    ((func_801E29A8_S1 *)*(u32 *)&D_8038D8D0)->unk18->unk30->unk4B = (u32)a;
    func_801CCE50((u8)(u32)b, (u8)(u32)d, (u8)(u32)c);
    D_801E3A74++;
    if (D_801E3A74 >= 30) {
        if (D_801E3A78 != 0) {
            D_801E3A78 = 0;
        } else {
            D_801E3A78 = 1;
        }
        D_801E3A74 = 0;
    }
    return 3;
}


extern void func_801BF628(s32 arg0, void *arg1);
extern void func_8038D28C(s32 arg0);

s32 func_801E2CF0(s32 arg0, s32 arg1) {
    u8 sp18[0x1F8];

    func_801BF628(3, sp18);
    if (*(s32 *)(sp18 + 0xC) >= 2) {
        func_8038D28C(0x502);
        return 1;
    }
    return 0;
}

extern s32 D_801E3D90[];

typedef struct func_801E2D40_Struct1 {
    u8 pad[0x22];
    u8 flag;
} func_801E2D40_Struct1;
typedef struct func_801E2D40_Struct0 {
    u8 pad[0x20];
    func_801E2D40_Struct1 *items[14];
} func_801E2D40_Struct0;
extern s32 D_801E3D94;
extern s32 D_801E3D98[];
extern s32 D_801E3DC8[];
extern s32 D_801E3DCC;
extern s32 D_801E3DD0[];
extern s32 D_801E3E00;

void func_801E2D40(void) {
    s32 i;

    for (i = 0; i < 14; i++) {
        D_801E3D90[i] = 0;
        D_801E3DC8[i] = 0;
        ((func_801E2D40_Struct0 *)D_8038D8D0)->items[i]->flag = 0;
    }
}



void func_801E2E14(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 temp_v0;

    temp_v0 = arg0 * 4;
    D_801E3D90[arg0] = arg1;
    if (arg1 != 0) {
        *(u8 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x22) = 1;
    } else {
        *(u8 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x22) = 0;
    }
    *(f32 *)(*(s32 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x30) + 4) = arg2;
    *(f32 *)(*(s32 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x30) + 8) = arg3;
    *(f32 *)(*(s32 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x30) + 0xC) = arg4;
}

extern s32 D_8038D8CC;
extern s32 D_801E3A8C;
extern s32 D_801E3B00[];
extern void func_8012CF8C(s32, s32, s32, s32);

s32 func_801E2EAC(s32 arg0) {
    if (D_801E3D90[arg0] != 0) {
        func_8012CF8C(D_8038D8CC, *(s32 *)(((s32 *)D_8038D8D0)[arg0 + 8] + 0x30) + 0x40, 0x46F, D_801E3B00[D_801E3DC8[arg0]]);
        D_801E3DC8[arg0] += 1;
        D_801E3DC8[arg0] %= D_801E3A8C;
    }
}


typedef struct {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801E2F70_Struct2;

typedef struct {
    u8 pad0[0x30];
    func_801E2F70_Struct2 *unk30;
} func_801E2F70_Struct1;

typedef struct {
    u8 pad0[0x20];
    func_801E2F70_Struct1 *unk20[14];
} func_801E2F70_Struct0;


s32 func_801E2F70(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 6; i++) {
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk10 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk12 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk14 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk18 = 1.0f;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk1C = 1.0f;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk20 = 1.0f;
    }
    for (i = 6; i < 14; i++) {
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk10 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk12 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk14 = 0x1800;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk18 = 0.5f;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk1C = 0.5f;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk20 = 1.0f;
    }
    func_801E2D40();
    return 2;
}

extern void func_801C1000(s32 a0, s32 a1);

s32 func_801E3420(s32 arg0, s32 arg1) {
    func_801C1000(3, 1);
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E3450.s")



s32 func_801E37B8(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i != 0xE; i++) {
        func_801E2EAC(i);
    }
    return 4;
}

s32 func_801C0B8C(u64 time);

extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E3804(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0x7A120) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801E388C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E38BC(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E38CC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 3;
    }
    if (func_801C0B8C(0xCDFE60) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
        return 4;
    }
    return 3;
}



s32 func_801E3954(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 4;
    }
    return 5;
}


s32 func_801E397C(s32 arg0, s32 arg1) {
    return 5;
}

