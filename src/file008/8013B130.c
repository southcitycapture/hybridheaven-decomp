#include "common.h"

extern u8 D_801BEB00[];

extern void func_800279F0(void *a0, s32 a1);

void func_8013B130(void) {
    func_800279F0(&D_801BEB00, 0x14);
}



s32 func_8013B158(void) {
    s32 var_v1;

    for (var_v1 = 0; var_v1 < 0x14; var_v1 = (var_v1 + 1) & 0xFF) {
        if (D_801BEB00[var_v1] == 0) {
            return var_v1;
        }
    }
    return 0xFF;
}


struct func_8013B19C_Struct {
    u8 pad[4];
    u16 unk4;
    u8 pad6[0x1A];
};

extern struct func_8013B19C_Struct D_8017D460[];

s32 func_8013B19C(u16 arg0) {
    u8 i;

    i = 0;
    arg0 &= 0xFFF;
    for (; D_8017D460[i].unk4 != 0xFFFF; i++) {
        if (arg0 == D_8017D460[i].unk4) {
            return i;
        }
    }
    return 0xFF;
}


struct func_8013B208_Struct {
    u8 pad[0x60];
    u8 unk60;
};

extern u8 D_801BD980[];

s32 func_8013B208(struct func_8013B208_Struct *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk60;
    if ((s32) temp_v0 < 0x14) {
        D_801BEB00[temp_v0] = 0;
        func_800279F0(&D_801BD980[arg0->unk60 * 0xE0], 0xE0);
        return 0;
    }
    return 1;
}

#define D_80089474 D_80089474__func_8013B268
#define D_8017BDF4 D_8017BDF4__func_8013B268
#define D_8017BE08 D_8017BE08__func_8013B268
#define D_8017D08C D_8017D08C__func_8013B268
#define D_8017D460 D_8017D460__func_8013B268
#define D_801BBBF0 D_801BBBF0__func_8013B268
#define D_801BBC8C D_801BBC8C__func_8013B268
#define D_801BBCAC D_801BBCAC__func_8013B268
#define D_801BC034 D_801BC034__func_8013B268
#define D_801BC038 D_801BC038__func_8013B268
#define T_D_801BBBF0 T_D_801BBBF0__func_8013B268
#define T_func_80107830_a0 T_func_80107830_a0__func_8013B268
#define T_func_8012636C_a0 T_func_8012636C_a0__func_8013B268
#define T_func_8012CE9C_a1 T_func_8012CE9C_a1__func_8013B268
#define func_80005670 func_80005670__func_8013B268
#define func_800058DC func_800058DC__func_8013B268
#define func_80126944 func_80126944__func_8013B268
#define func_8013B158 func_8013B158__func_8013B268
#define func_8013B19C func_8013B19C__func_8013B268
#define func_8013B19C_Struct func_8013B19C_Struct__func_8013B268
#define func_8013B8E0 func_8013B8E0__func_8013B268
#define func_8013B8E0_StructO func_8013B8E0_StructO__func_8013B268
#define func_8013B8E0_StructT func_8013B8E0_StructT__func_8013B268
#define func_8013BCD8 func_8013BCD8__func_8013B268
#define func_8013BCD8_Obj func_8013BCD8_Obj__func_8013B268
#define func_8013BCD8_Struct func_8013BCD8_Struct__func_8013B268
#define G ((T_D_801BBBF0 *)D_801BBBF0)
struct func_8013B19C_Struct {
    u8 pad[4];
    u16 unk4;
    u8 pad6[0x1A];
};
extern struct func_8013B19C_Struct D_8017D460[];
extern u8 D_801BBBF0[];
typedef struct T_func_80107830_a0 { /* size >= 0xB4; compacted: the 1 of 53 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_801451C0_a0 *mid; /* 369 uses */
    /* 0x028 */ u8 pad28[0x8C];
} T_func_80107830_a0;
typedef struct T_D_801BBBF0 { /* size >= 0x1154; compacted: the 16 of 458 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ u16 unk2C; /* 68 uses */
    /* 0x02E */ u8 pad2E[0x4];
    /* 0x032 */ s16 unk32; /* 18 uses */
    /* 0x034 */ u8 pad34[0xA8];
    /* 0x0DC */ struct T_func_80107830_a0 *inner; /* 406 uses */
    /* 0x0E0 */ struct T_func_801451C0_a0 *unkE0; /* 1028 uses */
    /* 0x0E4 */ u8 padE4[0x8];
    /* 0x0EC */ struct T_func_80107830_a0 *unkEC; /* 117 uses */
    /* 0x0F0 */ struct T_func_801451C0_a0 *unkF0; /* 24 uses */
    /* 0x0F4 */ u8 padF4[0x1];
    /* 0x0F5 */ u8 unkF5; /* 19 uses */
    /* 0x0F6 */ u8 padF6[0xA2];
    /* 0x198 */ f32 unk198; /* 63 uses */
    /* 0x19C */ f32 unk19C; /* 24 uses */
    /* 0x1A0 */ f32 unk1A0; /* 63 uses */
    /* 0x1A4 */ u8 pad1A4[0x8C];
    /* 0x230 */ u8 unk230; /* 27 uses */
    /* 0x231 */ u8 unk231; /* 7 uses */
    /* 0x232 */ u8 pad232[0xEEA];
    /* 0x111C */ f32 unk111C; /* 3 uses */
    /* 0x1120 */ f32 unk1120; /* 3 uses */
    /* 0x1124 */ f32 unk1124; /* 3 uses */
    /* 0x1128 */ f32 unk1128; /* 3 uses */
    /* 0x112C */ u8 pad112C[0x28];
} T_D_801BBBF0;
#define G ((T_D_801BBBF0 *)D_801BBBF0)
extern s32 func_80005670(void *, void *);
extern void func_800058DC(void *, void *);
extern s32 func_80126944(void);
s32 func_8013B158(void);
s32 func_8013B19C(u16 arg0);
typedef struct T_func_8012CE9C_a1 { /* size >= 0xE0; compacted: the 5 of 64 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ u16 count; /* 91 uses */
    /* 0x00E */ u16 unkE; /* 25 uses */
    /* 0x010 */ u8 pad10[0x64];
    /* 0x074 */ u8 mode; /* 29 uses */
    /* 0x075 */ u8 pad75[0x29];
    /* 0x09E */ u16 unk9E; /* 8 uses */
    /* 0x0A0 */ u16 unkA0; /* 9 uses */
    /* 0x0A2 */ u8 padA2[0x3E];
} T_func_8012CE9C_a1;
typedef struct T_func_8012636C_a0 { /* size >= 0xB0 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_8012636C_a0_pC *unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ u8 pad1C[0x4];
    /* 0x020 */ s32 unk20; /* 1 use */
    /* 0x024 */ struct T_func_8012C9C0_ret *unk24; /* 88 uses */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ s32 unk2C; /* 33 uses */
    /* 0x030 */ s32 unk30; /* 30 uses */
    /* 0x034 */ u8 pad34[0x2];
    /* 0x036 */ u16 unk36; /* 22 uses */
    /* 0x038 */ struct T_func_8012636C_a0_p38 *unk38; /* 109 uses */
    /* 0x03C */ u8 pad3C[0x2];
    /* 0x03E */ u8 unk3E; /* 2 uses */
    /* 0x03F */ u8 unk3F; /* 2 uses */
    /* 0x040 */ f32 unk40; /* 15 uses */
    /* 0x044 */ f32 unk44; /* 31 uses */
    /* 0x048 */ f32 unk48; /* 15 uses */
    /* 0x04C */ u8 unk4C; /* 7 uses */
    /* 0x04D */ u8 unk4D; /* 9 uses */
    /* 0x04E */ u8 unk4E; /* 7 uses */
    /* 0x04F */ s8 unk4F; /* 13 uses */
    /* 0x050 */ s8 unk50; /* 11 uses */
    /* 0x051 */ u8 pad51[0x3];
    /* 0x054 */ s32 unk54; /* 1 use */
    /* 0x058 */ s32 unk58; /* 2 uses */
    /* 0x05C */ struct T_func_8012CE9C_a1 *obj; /* 34 uses */
    /* 0x060 */ u8 pad60[0x1];
    /* 0x061 */ u8 unk61; /* 2 uses */
    /* 0x062 */ u8 pad62[0x1];
    /* 0x063 */ u8 unk63; /* 2 uses */
    /* 0x064 */ struct T_func_8010E680_a0 *unk64; /* 3 uses */
    /* 0x068 */ u8 pad68[0x8];
    /* 0x070 */ u16 unk70; /* 2 uses */
    /* 0x072 */ u8 pad72[0x2];
    /* 0x074 */ struct T_func_801395E4_a1_elem *unk74; /* 11 uses */
    /* 0x078 */ f32 unk78; /* 7 uses */
    /* 0x07C */ f32 unk7C; /* 7 uses */
    /* 0x080 */ f32 unk80; /* 7 uses */
    /* 0x084 */ s16 unk84; /* 7 uses */
    /* 0x086 */ s16 unk86; /* 7 uses */
    /* 0x088 */ s16 unk88; /* 7 uses */
    /* 0x08A */ u8 pad8A[0x2];
    /* 0x08C */ s32 unk8C; /* 1 use */
    /* 0x090 */ void *unk90; /* 3 uses */
    /* 0x094 */ f32 unk94; /* 3 uses */
    /* 0x098 */ f32 unk98; /* 3 uses */
    /* 0x09C */ f32 unk9C; /* 1 use */
    /* 0x0A0 */ s32 unkA0; /* 1 use */
    /* 0x0A4 */ u8 padA4[0xB];
    /* 0x0AF */ u8 unkAF; /* 1 use */
} T_func_8012636C_a0;
typedef struct func_8013B8E0_StructT {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[0x58];
    u16 unk6C;
} func_8013B8E0_StructT;
typedef struct func_8013B8E0_StructO {
    u8 pad[0x2C];
    func_8013B8E0_StructT *unk2C;
} func_8013B8E0_StructO;
void func_8013B8E0(T_func_8012636C_a0 *arg0, func_8013B8E0_StructO **arg1);
struct func_8013BCD8_Struct {
    u8 pad[0x18];
    u16 unk18;
    u8 pad1a[0x83];
    u8 unk9D;
};
struct func_8013BCD8_Obj {
    u8 pad[0x3F];
    u8 unk3F;
    u8 pad40[0xF];
    u8 unk4F;
    u8 pad50[4];
    s32 unk54;
    u8 pad58[4];
    struct func_8013BCD8_Struct *unk5C;
};
void func_8013BCD8(struct func_8013BCD8_Obj *arg0, s32 arg1);


typedef struct func_8013B268_Vec { s32 x, y, z; } func_8013B268_Vec;
typedef struct func_8013B268_Entry {
    s32 unk0;
    u16 unk4, unk6;
    s32 unk8, unkC;
    u8 unk10;
    u8 pad11[3];
    s32 unk14;
    s32 unk18;
    u16 unk1C;
    u8 pad1E[2];
} func_8013B268_Entry;
typedef struct func_8013B268_Data {
    u8 pad0[4];
    s32 unk4;
    u8 pad8[4];
    u16 unkC, unkE;
    s32 unk10, unk14;
    u8 pad18[2];
    u16 unk1A;
    func_8013B268_Vec unk1C;
    u8 pad28[0x4C];
    u8 unk74, unk75;
    u8 pad76[0x26];
    u8 unk9C, unk9D;
    u16 unk9E, unkA0;
    u8 padA2[0x3E];
} func_8013B268_Data;
typedef struct func_8013B268_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[6];
    u16 unk36;
    u8 pad38[0x14];
    u8 unk4C, unk4D, unk4E;
    u8 pad4F[5];
    s32 unk54;
    u8 pad58[4];
    func_8013B268_Data *unk5C;
    u8 unk60, unk61, unk62, unk63;
    void *unk64, *unk68;
    u8 pad6C[4];
    u16 unk70;
} func_8013B268_Obj;

extern u8 D_8017BE08[];
extern u8 D_8017BDF4[];
extern func_8013B268_Vec D_8017D08C;
extern void *D_801BC034;
extern void *D_801BC038;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern u8 D_80089474[];

func_8013B268_Obj *func_8013B268(func_8013B268_Obj *arg0, u16 arg1, u8 arg2, u8 arg3, void *arg4, u16 arg5)
{
    s32 temp;
    func_8013B268_Data *data;
    func_8013B268_Obj *obj;
    u8 source, index;
#define entry ((func_8013B268_Entry *)&D_8017D460[source])

    index = func_8013B158();
    temp = func_8013B19C(arg1);
    source = temp;
    if (index == 0xFF || temp * 1 == 0xFF) return NULL;
    if ((arg2 & 0xF) == 2 || (arg2 & 0xF) == 0) {
        obj = arg0;
        func_800058DC(obj, func_8013B8E0);
    } else if (arg2 & 0x80) {
        obj = (func_8013B268_Obj *)func_80005670(arg0, D_8017BE08);
    } else {
        obj = (func_8013B268_Obj *)func_80005670(arg0, D_8017BDF4);
    }
    if (obj != NULL) {
        obj->unk36 = arg1 & 0xFFF;
        D_801BEB00[index] = 1;
        data = &((func_8013B268_Data *)D_801BD980)[index];
        data->unkC = entry->unk10;
        data->unkE = arg1;
        data->unk4 = entry->unk0;
        data->unk10 = entry->unk8;
        data->unk14 = entry->unkC;
        data->unk75 = entry->unk6;
        data->unk1C = D_8017D08C;
        data->unk9D = 0;
        data->unk9C = 0;
        data->unk9E = 1;
        data->unkA0 = 1;
        data->unk74 = arg3;
        data->unk1A = entry->unk1C;
        obj->unk5C = data;
        obj->unk60 = index;
        obj->unk61 = arg2;
        obj->unk63 = 0;
        if (arg3 != 0 && (G->unk2C == 5 || G->unk2C == 10 ||
                          G->unk2C == 11 || G->unk2C == 15 ||
                          (G->unk2C == 4 && func_80126944() != 0))) {
            obj->unk2C |= 0x3E0;
        }
        switch (arg3) {
        case 0:
            *(func_8013B268_Obj **)(D_801BBBF0 + 0xDC) = obj;
            D_801BC034 = data;
            obj->unk68 = D_801BBC8C;
            obj->unk2C |= 0x3E0;
            break;
        case 2:
            *(func_8013B268_Obj **)(D_801BBBF0 + 0xDC) = obj;
            D_801BC034 = data;
            obj->unk68 = D_801BBC8C;
            arg0->unk2C |= 0x3E0;
            obj->unk54 |= 0x1E1;
            break;
        case 1:
        case 3:
            *(func_8013B268_Obj **)(D_801BBBF0 + 0xEC) = obj;
            D_801BC038 = data;
            obj->unk68 = D_801BBCAC;
            obj->unk54 |= 0x1E1;
            break;
        case 4:
        default:
            obj->unk68 = D_80089474;
            obj->unk54 |= 0x1E1;
            break;
        }
        obj->unk4C = 10;
        obj->unk4D = 18;
        obj->unk4E = 10;
        if (arg4) obj->unk64 = arg4;
        else obj->unk64 = func_8013BCD8;
        obj->unk70 = arg5;
    }
    return obj;
}
#undef G
#undef entry
#undef D_80089474
#undef D_8017BDF4
#undef D_8017BE08
#undef D_8017D08C
#undef D_8017D460
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC034
#undef D_801BC038
#undef T_D_801BBBF0
#undef T_func_80107830_a0
#undef T_func_8012636C_a0
#undef T_func_8012CE9C_a1
#undef func_80005670
#undef func_800058DC
#undef func_80126944
#undef func_8013B158
#undef func_8013B19C
#undef func_8013B19C_Struct
#undef func_8013B8E0
#undef func_8013B8E0_StructO
#undef func_8013B8E0_StructT
#undef func_8013BCD8
#undef func_8013BCD8_Obj
#undef func_8013BCD8_Struct

#define func_8013B570 func_8013B570_ctx
#undef func_8013B570

extern void D_8013B268(void *, u16, u8, u8, s32, s32);

void func_8013B570(void *arg0, u16 arg1, u8 arg2, u8 arg3, s32 arg4) {
    D_8013B268(arg0, arg1, arg2, arg3, arg4, 0x1000);
}

extern void D_8013B570(void *, u16, s32, s32, s32);
#define func_8013B570 D_8013B570

/* hh-block asm/nonmatchings/file008/8013B130/_mrg_keep_text_func_8013B5B4.s {"functions":["func_8013B5B4"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/_mrg_keep_text_func_8013B5B4.s")


void func_8013B5B4(s32 arg0, u16 arg1);
extern void func_8013C7F8(s32 arg0, s32 arg1, u8 arg2);

void func_8013B808(s32 arg0, s32 arg1, u16 arg2) {
    func_8013C7F8(arg0, arg1, 1);
    func_8013B5B4(arg0, arg2);
}


struct func_8013B83C_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_8013B83C_Obj {
    u8 pad[0x2C];
    struct func_8013B83C_Target *unk2C;
};

struct func_8013B83C_Inner {
    s16 pad[3];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
};

struct func_8013B83C_Mid {
    u8 pad[0x38];
    struct func_8013B83C_Inner *unk38;
};

struct func_8013B83C_Outer {
    u8 pad[0xC];
    struct func_8013B83C_Mid *unkC;
};

extern struct func_8013B83C_Obj *D_8008DA88[];

void func_8013B83C(struct func_8013B83C_Outer *arg0, s32 arg1) {
    struct func_8013B83C_Inner *temp_v0;

    temp_v0 = arg0->unkC->unk38;
    D_8008DA88[arg1]->unk2C->unk4 = (f32) ((f64) (f32) temp_v0->unk6 / 10.0);
    D_8008DA88[arg1]->unk2C->unk8 = (f32) ((f64) (f32) temp_v0->unk8 / 10.0);
    D_8008DA88[arg1]->unk2C->unkC = (f32) ((f64) (f32) temp_v0->unkA / 10.0);
    D_8008DA88[arg1]->unk2C->unk12 = temp_v0->unkC;
}

#define D_8017D1D4 D_8017D1D4__func_8013B8E0
#define D_8017D244 D_8017D244__func_8013B8E0
#define D_8017D460 D_8017D460__func_8013B8E0
#define D_8017DBC0 D_8017DBC0__func_8013B8E0
#define D_801BBBF0 D_801BBBF0__func_8013B8E0
#define D_801E1460 D_801E1460__func_8013B8E0
#define func_80005670 func_80005670__func_8013B8E0
#define func_80005700 func_80005700__func_8013B8E0
#define func_800058DC func_800058DC__func_8013B8E0
#define func_8012636C func_8012636C__func_8013B8E0
#define func_8012B1E4 func_8012B1E4__func_8013B8E0
#define func_8012D844 func_8012D844__func_8013B8E0
#define func_8012D894 func_8012D894__func_8013B8E0
#define func_801394CC func_801394CC__func_8013B8E0
#define func_80139528 func_80139528__func_8013B8E0
#define func_80139894 func_80139894__func_8013B8E0
#define func_8013B19C func_8013B19C__func_8013B8E0
#define func_8013B19C_Struct func_8013B19C_Struct__func_8013B8E0
#define func_8013B83C func_8013B83C__func_8013B8E0
#define func_8013B83C_Inner func_8013B83C_Inner__func_8013B8E0
#define func_8013B83C_Mid func_8013B83C_Mid__func_8013B8E0
#define func_8013B83C_Outer func_8013B83C_Outer__func_8013B8E0
#define func_8013C6FC func_8013C6FC__func_8013B8E0
#define func_8013C6FC_Struct func_8013C6FC_Struct__func_8013B8E0
#define func_8013C6FC_StructInner func_8013C6FC_StructInner__func_8013B8E0
extern u16 D_8017D1D4[];
typedef struct T_D_8017D244 { /* size >= 0x6 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ u16 unk4; /* 1 use */
} T_D_8017D244;
extern T_D_8017D244 D_8017D244;
struct func_8013B19C_Struct {
    u8 pad[4];
    u16 unk4;
    u8 pad6[0x1A];
};
extern struct func_8013B19C_Struct D_8017D460[];
extern u16 D_8017DBC0[];
extern u8 D_801BBBF0[];
typedef struct T_D_80162DD0 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 3 uses */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 3 uses */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80162DD0;
extern T_D_80162DD0 D_801E1460;
typedef struct T_D_8017D1D4 { /* size >= 0x6 */
    /* 0x000 */ u16 unk0; /* 3 uses */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ u16 unk4; /* 2 uses */
} T_D_8017D1D4;
typedef struct T_D_8017D460_elem_p14 { /* size >= 0x6 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ u16 unk4; /* 1 use */
} T_D_8017D460_elem_p14;
typedef struct T_D_8017D460_elem { /* size 0x20 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 3 uses */
    /* 0x006 */ u16 unk6; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ u8 unk10; /* 1 use */
    /* 0x011 */ u8 unk11; /* 1 use */
    /* 0x012 */ u8 pad12[0x2];
    /* 0x014 */ struct T_D_8017D460_elem_p14 *unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ u16 unk1C; /* 1 use */
    /* 0x01E */ u8 pad1E[0x2];
} T_D_8017D460_elem;
typedef struct T_func_80107830_a0 { /* size >= 0xB4; compacted: the 1 of 53 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_801451C0_a0 *mid; /* 369 uses */
    /* 0x028 */ u8 pad28[0x8C];
} T_func_80107830_a0;
typedef struct T_D_801BBBF0 { /* size >= 0x1154; compacted: the 16 of 458 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ u16 unk2C; /* 68 uses */
    /* 0x02E */ u8 pad2E[0x4];
    /* 0x032 */ s16 unk32; /* 18 uses */
    /* 0x034 */ u8 pad34[0xA8];
    /* 0x0DC */ struct T_func_80107830_a0 *inner; /* 406 uses */
    /* 0x0E0 */ struct T_func_801451C0_a0 *unkE0; /* 1028 uses */
    /* 0x0E4 */ u8 padE4[0x8];
    /* 0x0EC */ struct T_func_80107830_a0 *unkEC; /* 117 uses */
    /* 0x0F0 */ struct T_func_801451C0_a0 *unkF0; /* 24 uses */
    /* 0x0F4 */ u8 padF4[0x1];
    /* 0x0F5 */ u8 unkF5; /* 19 uses */
    /* 0x0F6 */ u8 padF6[0xA2];
    /* 0x198 */ f32 unk198; /* 63 uses */
    /* 0x19C */ f32 unk19C; /* 24 uses */
    /* 0x1A0 */ f32 unk1A0; /* 63 uses */
    /* 0x1A4 */ u8 pad1A4[0x8C];
    /* 0x230 */ u8 unk230; /* 27 uses */
    /* 0x231 */ u8 unk231; /* 7 uses */
    /* 0x232 */ u8 pad232[0xEEA];
    /* 0x111C */ f32 unk111C; /* 3 uses */
    /* 0x1120 */ f32 unk1120; /* 3 uses */
    /* 0x1124 */ f32 unk1124; /* 3 uses */
    /* 0x1128 */ f32 unk1128; /* 3 uses */
    /* 0x112C */ u8 pad112C[0x28];
} T_D_801BBBF0;
typedef struct T_func_8012CE9C_a1 { /* size >= 0xE0; compacted: the 5 of 64 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ u16 count; /* 91 uses */
    /* 0x00E */ u16 unkE; /* 25 uses */
    /* 0x010 */ u8 pad10[0x64];
    /* 0x074 */ u8 mode; /* 29 uses */
    /* 0x075 */ u8 pad75[0x29];
    /* 0x09E */ u16 unk9E; /* 8 uses */
    /* 0x0A0 */ u16 unkA0; /* 9 uses */
    /* 0x0A2 */ u8 padA2[0x3E];
} T_func_8012CE9C_a1;
typedef struct T_func_8012636C_a0 { /* size >= 0xB0 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_8012636C_a0_pC *unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ u8 pad1C[0x4];
    /* 0x020 */ s32 unk20; /* 1 use */
    /* 0x024 */ struct T_func_8012C9C0_ret *unk24; /* 88 uses */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ s32 unk2C; /* 33 uses */
    /* 0x030 */ s32 unk30; /* 30 uses */
    /* 0x034 */ u8 pad34[0x2];
    /* 0x036 */ u16 unk36; /* 22 uses */
    /* 0x038 */ struct T_func_8012636C_a0_p38 *unk38; /* 109 uses */
    /* 0x03C */ u8 pad3C[0x2];
    /* 0x03E */ u8 unk3E; /* 2 uses */
    /* 0x03F */ u8 unk3F; /* 2 uses */
    /* 0x040 */ f32 unk40; /* 15 uses */
    /* 0x044 */ f32 unk44; /* 31 uses */
    /* 0x048 */ f32 unk48; /* 15 uses */
    /* 0x04C */ u8 unk4C; /* 7 uses */
    /* 0x04D */ u8 unk4D; /* 9 uses */
    /* 0x04E */ u8 unk4E; /* 7 uses */
    /* 0x04F */ s8 unk4F; /* 13 uses */
    /* 0x050 */ s8 unk50; /* 11 uses */
    /* 0x051 */ u8 pad51[0x3];
    /* 0x054 */ s32 unk54; /* 1 use */
    /* 0x058 */ s32 unk58; /* 2 uses */
    /* 0x05C */ struct T_func_8012CE9C_a1 *obj; /* 34 uses */
    /* 0x060 */ u8 pad60[0x1];
    /* 0x061 */ u8 unk61; /* 2 uses */
    /* 0x062 */ u8 pad62[0x1];
    /* 0x063 */ u8 unk63; /* 2 uses */
    /* 0x064 */ struct T_func_8010E680_a0 *unk64; /* 3 uses */
    /* 0x068 */ u8 pad68[0x8];
    /* 0x070 */ u16 unk70; /* 2 uses */
    /* 0x072 */ u8 pad72[0x2];
    /* 0x074 */ struct T_func_801395E4_a1_elem *unk74; /* 11 uses */
    /* 0x078 */ f32 unk78; /* 7 uses */
    /* 0x07C */ f32 unk7C; /* 7 uses */
    /* 0x080 */ f32 unk80; /* 7 uses */
    /* 0x084 */ s16 unk84; /* 7 uses */
    /* 0x086 */ s16 unk86; /* 7 uses */
    /* 0x088 */ s16 unk88; /* 7 uses */
    /* 0x08A */ u8 pad8A[0x2];
    /* 0x08C */ s32 unk8C; /* 1 use */
    /* 0x090 */ void *unk90; /* 3 uses */
    /* 0x094 */ f32 unk94; /* 3 uses */
    /* 0x098 */ f32 unk98; /* 3 uses */
    /* 0x09C */ f32 unk9C; /* 1 use */
    /* 0x0A0 */ s32 unkA0; /* 1 use */
    /* 0x0A4 */ u8 padA4[0xB];
    /* 0x0AF */ u8 unkAF; /* 1 use */
} T_func_8012636C_a0;
extern void func_80005700(s32);
extern void func_800058DC(void *, void *);
extern void func_8012D844(void *, u16, u16);
extern void func_8012D894(void *, u16, u16);
s32 func_8013B19C(u16 arg0);
struct func_8013B83C_Inner {
    s16 pad[3];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
};
struct func_8013B83C_Mid {
    u8 pad[0x38];
    struct func_8013B83C_Inner *unk38;
};
struct func_8013B83C_Outer {
    u8 pad[0xC];
    struct func_8013B83C_Mid *unkC;
};
void func_8013B83C(struct func_8013B83C_Outer *arg0, s32 arg1);
struct func_8013C6FC_StructInner {
    u8 pad[0xC];
    u16 unkC;
};
struct func_8013C6FC_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x24];
    struct func_8013C6FC_StructInner *unk5C;
};
void func_8013C6FC(struct func_8013C6FC_Struct *arg0, s32 arg1, u8 arg2);


typedef struct func_8013B8E0_StructT {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[0x58];
    u16 unk6C;
} func_8013B8E0_StructT;

typedef struct func_8013B8E0_StructO {
    u8 pad[0x2C];
    func_8013B8E0_StructT *unk2C;
} func_8013B8E0_StructO;
extern s32 func_80005670(void *, void *);
extern void func_8012636C(void *, s32);
extern void func_8012B1E4(void *, s32);
extern void func_801394CC(void);
extern void func_80139528(s32);
extern s32 func_80139894(void *, void *, s32, u16);

#define G ((T_D_801BBBF0 *)D_801BBBF0)

void func_8013B8E0(T_func_8012636C_a0 *arg0, func_8013B8E0_StructO **arg1) {
    s32 pad[2];
    T_D_8017D460_elem *e;
    s32 pad2;
    u16 sp26;
    s32 t;
    s32 d;
    u8 i;
    T_func_8012CE9C_a1 *obj;
    func_8013B8E0_StructT *v1;
    T_D_8017D460_elem_p14 *p;

    obj = arg0->obj;
    sp26 = arg0->unk70;
    e = (T_D_8017D460_elem *)&D_8017D460[func_8013B19C(arg0->unk36)];
    func_801394CC();
    d = e->unk11;
    if (d != 0) {
        if (d != 1) {
            if (d != 2) goto zero;
            func_80139528(0x13);
        }
        func_80139528(6);
    } else {
zero:;
    }
    if (func_80139894(arg0, obj, e->unk18, sp26) != 0) {
        func_80005700((s32)arg0);
        return;
    }
    v1 = (*arg1)->unk2C;
    if (obj->mode == 0) {
        v1->unk4 = G->unk198;
        v1->unk8 = G->unk19C;
        v1->unkC = G->unk1A0;
        v1->unk12 = G->unk32;
        G->unkF5 = 1;
    } else if (obj->mode == 1 && G->unk2C == 10) {
        v1->unk4 = G->unk111C;
        v1->unk8 = G->unk1120;
        v1->unkC = G->unk1124;
        v1->unk12 = G->unk1128;
    } else {
        if ((arg0->unk61 & 0xF) == 2) {
            func_8012636C(arg0, 0);
        } else if ((arg0->unk61 & 0xF) == 3) {
            func_8013B83C((void *)arg0, 0);
        }
        if (obj->mode == 2) {
            G->unkF5 = 1;
        }
    }
    p = e->unk14;
    if (p != NULL) {
        func_8012D844(arg0, p->unk0, p->unk4);
        obj->unk9E = 1;
    }
    if (obj->unkE == 0x11D) {
        func_8012D844(arg0, D_8017D244.unk0, D_8017D244.unk4);
        obj->unkA0 = 1;
    }
    if (obj->unkE == 0x141 || obj->unkE == 0x142) {
        func_8012D894(arg0, ((T_D_8017D1D4 *)D_8017D1D4)->unk0, ((T_D_8017D1D4 *)D_8017D1D4)->unk4);
        obj->unkA0 = 1;
    }
    if (obj->mode == 0 || obj->mode == 2) {
        G->unkE0 = G->inner->mid;
        G->unk230 = 1;
    } else if (obj->mode == 1 || obj->mode == 3) {
        G->unkF0 = G->unkEC->mid;
        G->unk231 = 1;
        func_8012B1E4(arg0, 0);
    }
    for (i = 0; i < obj->count; i++) {
        arg1[i]->unk2C->unk6C = D_8017DBC0[i];
        if (obj->mode == 0 || obj->mode == 2) {
            arg1[i]->unk2C->unk6C |= 2;
        } else {
            arg1[i]->unk2C->unk6C |= 4;
        }
    }
    arg0->unk70 = 0;
    arg0->unk63 = 1;
    func_800058DC(arg0, arg0->unk64);
    arg0->unk64 = 0;
    if (G->unk2C == 4 || G->unk2C == 10 || G->unk2C == 11 || G->unk2C == 15 || G->unk2C == 5) {
        arg0->unk64 = (void *)func_80005670(arg0, &D_801E1460);
    }
    func_8013C7F8((s32)arg0, (s32)arg1, 0);
    func_8013C6FC((void *)arg0, (s32)arg1, 1);
}
#undef G
#undef D_8017D1D4
#undef D_8017D244
#undef D_8017D460
#undef D_8017DBC0
#undef D_801BBBF0
#undef D_801E1460
#undef func_80005670
#undef func_80005700
#undef func_800058DC
#undef func_8012636C
#undef func_8012B1E4
#undef func_8012D844
#undef func_8012D894
#undef func_801394CC
#undef func_80139528
#undef func_80139894
#undef func_8013B19C
#undef func_8013B19C_Struct
#undef func_8013B83C
#undef func_8013B83C_Inner
#undef func_8013B83C_Mid
#undef func_8013B83C_Outer
#undef func_8013C6FC
#undef func_8013C6FC_Struct
#undef func_8013C6FC_StructInner

struct func_8013BCD8_Struct {
    u8 pad[0x18];
    u16 unk18;
    u8 pad1a[0x83];
    u8 unk9D;
};
struct func_8013BCD8_Obj {
    u8 pad[0x3F];
    u8 unk3F;
    u8 pad40[0xF];
    u8 unk4F;
    u8 pad50[4];
    s32 unk54;
    u8 pad58[4];
    struct func_8013BCD8_Struct *unk5C;
};
extern u8 D_801BBBF0[];
extern u8 func_8013ADD4[];
extern u8 func_8021D8D0[];
extern void func_800058DC(void *, void *);
void func_8013BCD8(struct func_8013BCD8_Obj *arg0, s32 arg1) {
    struct func_8013BCD8_Struct *s = arg0->unk5C;
    s->unk9D = 2;
    if ((s->unk18 & 0x3000) == 0x1000) {
        if (*(void **)(D_801BBBF0 + 0xDC) == (void *)arg0) {
            arg0->unk3F = 0;
            arg0->unk4F = 1;
            arg0->unk54 = *(s32 *)(D_801BBBF0 + 0xEFC) = 0xE7F;
        }
        func_800058DC(arg0, func_8021D8D0);
        return;
    }
    func_800058DC(arg0, func_8013ADD4);
}


extern void func_80005700(s32);

void func_8013BD58(s32 arg0, s32 arg1) {
    func_8013B208((struct func_8013B208_Struct *) arg0);
    func_80005700(arg0);
}



struct func_8013BD84_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct func_8013BD84_Entry {
    struct func_8013BD84_Struct *unk0;
    u8 pad[0x1C];
};

extern struct func_8013BD84_Entry D_8017D478[];

struct func_8013BD84_Struct *func_8013BD84(struct func_8013BD84_Struct *arg0, void *arg1) {
    struct func_8013BD84_Struct *temp_v1;

    temp_v1 = arg0;
    *temp_v1 = *D_8017D478[func_8013B19C(((u16 *)arg1)[0x36 / 2])].unk0;
    return temp_v1;
}


struct func_8013BDD8_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[6];
    u16 unk36;
    u8 pad2[0x14];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};


void func_8013BDD8(struct func_8013BDD8_Struct *arg0, s32 arg1) {
    arg0->unk2C = 0;
    arg0->unk4C = 0xA;
    arg0->unk4D = 0x12;
    arg0->unk4E = 0xA;
    func_8013B570(arg0, arg0->unk36, 2, 4, 0);
}


extern u16 D_801BBC1C;

void func_8013BE20(u8 *arg0, s32 arg1) {
    s32 var_v0;

    arg0[0x4C] = 0xA;
    arg0[0x4D] = 0x12;
    arg0[0x4E] = 0xA;
    arg0[0x3E] = 5;
    arg0[0x4F] = 1;
    if ((D_801BBC1C == 0xA) || (D_801BBC1C == 0xB)) {
        var_v0 = 1;
    } else {
        var_v0 = 3;
    }
    func_8013B570(arg0, *(u16 *)(arg0 + 0x36), 2, var_v0 & 0xFF, 0);
}


struct func_8013BE9C_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[6];
    u16 unk36;
    u8 pad2[6];
    u8 unk3E;
    u8 pad3[0xD];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
    u8 pad4[4];
    s32 unk54;
};

void func_8013BE9C(struct func_8013BE9C_Struct *arg0, s32 arg1) {
    arg0->unk2C = 0x3E0;
    arg0->unk4C = 0xA;
    arg0->unk4D = 0x12;
    arg0->unk4E = 0xA;
    arg0->unk3E = 5;
    arg0->unk4F = 1;
    arg0->unk54 = arg0->unk54 | 0xE1;
    func_8013B570(arg0, arg0->unk36, 2, 2, 0);
}


struct func_8013BF04_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x3E - 0x38];
    u8 unk3E;
    u8 pad2[0x4D - 0x3F];
    u8 unk4D;
    u8 pad3[0x4F - 0x4E];
    u8 unk4F;
};

extern void func_8013BF54();

void func_8013BF04(struct func_8013BF04_Struct *arg0, s32 arg1) {
    arg0->unk4D = 0x12;
    arg0->unk3E = 5;
    arg0->unk4F = 1;
    func_8013B570(arg0, arg0->unk36, 2, 0, (s32)func_8013BF54);
}

struct func_8013BF54_Struct {
    u8 pad[0x2C];
    u32 unk2C;
    u8 pad2[0xF];
    u8 unk3F;
    u8 pad3[0xF];
    u8 unk4F;
    u8 pad4[4];
    s32 unk54;
};
extern void func_801C4A5C(void *, s32);

void func_8013BF54(struct func_8013BF54_Struct *arg0, volatile s32 arg1)
{
  u8 *g = D_801BBBF0;
  arg0->unk3F = 0;
  arg0->unk4F = 1;
  arg0->unk54 = (*((s32 *) (g + 0xEFC)) = 0xE7F);
  arg0->unk2C |= 0x3E0;
  func_801C4A5C(arg0, 0);
  func_800058DC(arg0, func_8021D8D0);
}


struct func_8013BFB8_Struct { u8 pad0[0x5C]; struct func_8013BFB8_Struct2 *unk5C; };
struct func_8013BFB8_Struct2 { u8 pad0[0xE]; u16 unkE; u8 pad1[0x8E]; u16 unk9E; u16 unkA0; };
extern s32 func_8012C6B4(s32);
extern void func_8012D844(void *, u16, u16);
extern void func_8012D894(void *, u16, u16);
extern u16 D_8017D1D4[];
extern u16 D_8017D1D6;
extern u16 D_8017D1DC[];
extern u16 D_801BBC20;

void func_8013BFB8(struct func_8013BFB8_Struct *arg0, u16 *arg1) {
    s32 padv[1];
    u16 sp2A;
    s32 sp24;
    s32 v0;
    s32 v1;
    struct func_8013BFB8_Struct2 *s0;

    s0 = arg0->unk5C;
    sp2A = s0->unkE;
    if (s0->unk9E != 0) {
        s0->unk9E--;
        if (s0->unk9E == 0) {
            func_8012D844(arg0, arg1[0], arg1[2]);
        }
    } else {
        if (D_801BBC20 & 1) return;
        sp24 = func_8012C6B4(0x2BC);
        if ((arg1[1] & 0x100) && sp24 >= 0x119 && sp24 < 0x12D) {
            func_8012D844(arg0, arg1[0], arg1[3]);
            s0->unk9E = func_8012C6B4(0xA) + 5;
        }
        v0 = arg1[1] & 0xFF;
        if (v0 != 0) {
            v1 = (sp24 / 20) & 0xFF;
            if (v1 < v0) {
                func_8012D844(arg0, arg1[0], arg1[4 + v1]);
                s0->unk9E = func_8012C6B4(0xA) + 5;
            }
        }
    }
    if (sp2A == 0x141 || sp2A == 0x142) {
        if (s0->unkA0 != 0) {
            s0->unkA0--;
            if (s0->unkA0 == 0) {
                func_8012D894(arg0, D_8017D1D4[0], D_8017D1D4[2]);
            }
        } else if (D_801BBC20 & 1) {
            if (func_8012C6B4(0x2BC) < 0x28) {
                func_8012D894(arg0, arg1[0], D_8017D1DC[func_8012C6B4(D_8017D1D6 & 0xFF) & 0xFF]);
                s0->unkA0 = func_8012C6B4(0xA) + 5;
            }
        }
    }
}


void func_8013C184(struct func_8013BFB8_Struct *arg0, u16 *arg1) {
    struct func_8013BFB8_Struct2 *temp_v1;
    u16 temp_v0;
    u16 temp_t7;

    temp_v1 = arg0->unk5C;
    if (temp_v1->unk9E != 0) {
        if (--temp_v1->unk9E == 0) {
            func_8012D844(arg0, arg1[0], arg1[2]);
        }
    } else if ((arg1[1] & 0x100) && (D_801BBC20 & 1)) {
        if (func_8012C6B4(0x2BC) < 0x14) {
            func_8012D844(arg0, arg1[0], arg1[3]);
            temp_v1->unk9E = func_8012C6B4(0xA) + 5;
        }
    }
}


struct func_8013C244_Pair { u16 a; u16 b; };
struct func_8013C244_Tbl { struct func_8013C244_Pair e[11]; };
struct func_8013C244_In { u8 pad[0xE]; u16 unkE; };
struct func_8013C244_Obj { u8 pad[0x5C]; struct func_8013C244_In *unk5C; };
extern struct func_8013C244_Tbl D_8017DBF4;
extern u16 D_801BBF3E;

s32 func_8013C244(struct func_8013C244_Obj *arg0) {
    struct func_8013C244_In *q;
    s32 g;
    struct func_8013C244_Tbl t;
    u16 v;
    s32 i;

    q = arg0->unk5C;
    v = q->unkE;
    t = D_8017DBF4;
    g = D_801BBF3E;
    if (g == 1) {
        if (v == 0x29 || v == 0x2A || v == 0x2B || v == 0x2C) {
            return 1;
        } else {
            return 0;
        }
    } else if (g == 6) {
        if (v == 0x11B || v == 0x11C) {
            return 1;
        } else {
            return 0;
        }
    } else if (g == 8) {
        if (v == 0x33 || v == 0x34) {
            return 1;
        } else {
            return 0;
        }
    } else if (g == 2) {
        if (v == 0x141 || v == 0x142) {
            return 1;
        } else {
            return 0;
        }
    }
    for (i = 0; t.e[i].a != 0; i++) {
        if (g == t.e[i].a) break;
    }
    if (t.e[i].a == 0) {
        return 0;
    }
    if (v != t.e[i].b) {
        return 0;
    }
    return 1;
}

#define func_8013BFB8_Struct func_8013BFB8_Struct__func_8013C3CC
#define func_8013BFB8_Struct2 func_8013BFB8_Struct2__func_8013C3CC
#define func_8013C244 func_8013C244__func_8013C3CC
#define func_8013C244_In func_8013C244_In__func_8013C3CC
#define func_8013C244_Obj func_8013C244_Obj__func_8013C3CC
struct func_8013BFB8_Struct2 { u8 pad0[0xE]; u16 unkE; u8 pad1[0x8E]; u16 unk9E; u16 unkA0; };
struct func_8013BFB8_Struct { u8 pad0[0x5C]; struct func_8013BFB8_Struct2 *unk5C; };
struct func_8013C244_In { u8 pad[0xE]; u16 unkE; };
struct func_8013C244_Obj { u8 pad[0x5C]; struct func_8013C244_In *unk5C; };
s32 func_8013C244(struct func_8013C244_Obj *arg0);


typedef struct func_8013C3CC_G {
    u8 pad0[0x34E];
    u16 unk34E;
    u16 unk350;
} func_8013C3CC_G;

s32 func_8013C3CC(void *arg0, u16 *arg1)
{
    struct func_8013BFB8_Struct2 *inner;
    u16 id;
    u8 result;

    inner = ((struct func_8013BFB8_Struct *)arg0)->unk5C;
    id = inner->unkE;
    switch (((func_8013C3CC_G *)D_801BBBF0)->unk350) {
    case 0x10:
        result = 4;
        break;
    case 0x30:
    case 0x40:
    case 0x50:
        if (id == 0x36) {
            result = 4;
        } else {
            result = 5;
        }
        break;
    case 0x20:
    case 0x60:
    default:
        result = 2;
        break;
    }
    if ((((func_8013C3CC_G *)D_801BBBF0)->unk34E == 0) ||
        (func_8013C244((struct func_8013C244_Obj *)arg0) == 0)) {
        result = 2;
        inner->unkA0 = 1;
    } else if (--inner->unkA0 != 0) {
        return result;
    } else {
        inner->unkA0 = 3;
    }
    if ((id == 0x141) || (id == 0x142)) {
        func_8012D894(arg0, D_8017D1D4[0], D_8017D1D4[result]);
    } else {
        if ((arg1[1] & 0xFF) == 0) {
            return result;
        }
        func_8012D844(arg0, arg1[0], arg1[result]);
    }
    return result;
}
#undef func_8013BFB8_Struct
#undef func_8013BFB8_Struct2
#undef func_8013C244
#undef func_8013C244_In
#undef func_8013C244_Obj


extern s32 func_80126944(void);
extern f64 D_8018E288;
extern f64 D_8018E290;
extern void *D_801BBCCC;
struct func_8013C52C_Struct {
    s16 unk0;
    s16 unk2;
};
extern struct func_8013C52C_Struct D_801BC03C;
extern struct func_8013C52C_Struct D_801BC3D8;

void func_8013C52C(void *arg0, u16 *arg1) {
    struct func_8013C52C_Struct *ptr;
    s32 index;

    if (func_80126944() != 1) {
        index = 2;
    } else {
        ptr = (arg0 == D_801BBCCC) ? &D_801BC03C : &D_801BC3D8;
        if ((f64)ptr->unk0 * (0.7) < (f64)ptr->unk2) {
            index = 2;
        } else if ((f64)ptr->unk0 * (0.3) < (f64)ptr->unk2) {
            index = 4;
        } else {
            index = 5;
        }
    }
    func_8012D844(arg0, *arg1, arg1[index]);
}

#define D_8013BFB8 D_8013BFB8__func_8013C608
#define D_8013C184 D_8013C184__func_8013C608
#define D_8013C52C D_8013C52C__func_8013C608
#define D_8017D474 D_8017D474__func_8013C608
#define D_801BCAE0 D_801BCAE0__func_8013C608
#define T_func_80107830_a0 T_func_80107830_a0__func_8013C608
#define T_func_8012CE9C_a1 T_func_8012CE9C_a1__func_8013C608
#define func_8013B19C func_8013B19C__func_8013C608
#define func_8013BFB8_Struct func_8013BFB8_Struct__func_8013C608
#define func_8013BFB8_Struct2 func_8013BFB8_Struct2__func_8013C608
#define func_8013C184 func_8013C184__func_8013C608
#define func_8013C3CC func_8013C3CC__func_8013C608
typedef struct T_D_8017D474_elem { /* size 0x20 */
    /* 0x000 */ u16 *unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x1C];
} T_D_8017D474_elem;
typedef struct T_func_8012CE9C_a1 { /* size >= 0xE0; compacted: the 2 of 64 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0xE];
    /* 0x00E */ u16 unkE; /* 25 uses */
    /* 0x010 */ u8 pad10[0x8D];
    /* 0x09D */ u8 unk9D; /* 2 uses */
    /* 0x09E */ u8 pad9E[0x42];
} T_func_8012CE9C_a1;
typedef struct T_func_80107830_a0 { /* size >= 0xB4; compacted: the 1 of 53 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0x5C];
    /* 0x05C */ struct T_func_8012CE9C_a1 *anim; /* 532 uses */
    /* 0x060 */ u8 pad60[0x54];
} T_func_80107830_a0;
s32 func_8013B19C(u16 arg0);
struct func_8013BFB8_Struct2 { u8 pad0[0xE]; u16 unkE; u8 pad1[0x8E]; u16 unk9E; u16 unkA0; };
struct func_8013BFB8_Struct { u8 pad0[0x5C]; struct func_8013BFB8_Struct2 *unk5C; };
void func_8013C184(struct func_8013BFB8_Struct *arg0, u16 *arg1);

extern u16 D_801BCAE0;
extern T_D_8017D474_elem D_8017D474[];
extern s32 func_8013C3CC(void *arg0, u16 *arg1);
extern void D_8013C52C(void *, u16 *, u16);
extern void D_8013BFB8(void *, u16 *, u16);
extern void D_8013C184(void *, u16 *, u16);

void func_8013C608(T_func_80107830_a0 *arg0) {
    T_func_8012CE9C_a1 *v;
    s32 i;
    u16 *a;
    u16 t;

    v = arg0->anim;
    t = v->unkE;
    if (!(D_801BCAE0 & 0x10)) {
        if ((u32)t != 0) {
            i = func_8013B19C(t);
            if (i != 0xFF) {
                a = D_8017D474[i].unk0;
                if (a != NULL) {
                    if (t == 0x11D) {
                        D_8013C52C(arg0, a, t);
                        return;
                    }
                    if (v->unk9D == 2) {
                        D_8013BFB8(arg0, a, t);
                        return;
                    }
                    if (v->unk9D == 1) {
                        D_8013C184(arg0, a, t);
                        return;
                    }
                    if (func_8013C3CC(arg0, a) == 2) {
                        func_8013C184((void *)arg0, a);
                    }
                }
            }
        }
    }
}
#undef D_8013BFB8
#undef D_8013C184
#undef D_8013C52C
#undef D_8017D474
#undef D_801BCAE0
#undef T_func_80107830_a0
#undef T_func_8012CE9C_a1
#undef func_8013B19C
#undef func_8013BFB8_Struct
#undef func_8013BFB8_Struct2
#undef func_8013C184
#undef func_8013C3CC


struct func_8013C6FC_StructInner {
    u8 pad[0xC];
    u16 unkC;
};
struct func_8013C6FC_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x24];
    struct func_8013C6FC_StructInner *unk5C;
};
extern struct func_8013BD84_Struct D_8017DC20;
extern void func_8013A1B4();

void func_8013C6FC(struct func_8013C6FC_Struct *arg0, s32 arg1, u8 arg2) {
    u8 pad[4];
    u32 temp;
    struct func_8013BD84_Struct sp2C;
    u8 pad2[4];

    temp = (u32) arg0->unk5C;
    if (((struct func_8013C6FC_StructInner *) temp)->unkC >= 0x18) {
        if (arg2 != 0) {
            sp2C = D_8017DC20;
            temp = arg0->unk36;
            if (temp == 0xF9 || temp == 0xFA || temp == 0xFB || temp == 0xF0) {
                sp2C.unk0 = 0x019100B3;
            }
        } else {
            sp2C = *D_8017D478[func_8013B19C(arg0->unk36)].unk0;
        }
        func_8013A1B4(arg1, sp2C, 0xE00000);
    }
}

#define func_8013C7F8 func_8013C7F8_ctx
#undef func_8013C7F8

struct func_8013C7F8_Leaf {
    u8 pad[0x4C];
    s32 unk4C;
};
struct func_8013C7F8_Inner {
    u8 pad0[4];
    struct func_8013C7F8_Leaf *unk4;
    u8 pad1[4];
    u16 unkC;
};
struct func_8013C7F8_Obj {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x24];
    struct func_8013C7F8_Inner *unk5C;
};
extern struct func_8013BD84_Struct D_8017DC2C;

void func_8013C7F8(s32 arg0, s32 arg1, u8 arg2) {
    s32 pad[2];
    struct func_8013BD84_Struct sp2C;
    u16 temp_a0;
    struct func_8013C7F8_Inner *temp_v0;

    temp_v0 = ((struct func_8013C7F8_Obj *)arg0)->unk5C;
    if (temp_v0->unkC >= 0x14 && temp_v0->unk4->unk4C >= 0) {
        temp_a0 = ((struct func_8013C7F8_Obj *)arg0)->unk36;
        if ((temp_a0 & 0xFFF) != 0x57) {
            if (arg2 != 0) {
                sp2C = D_8017DC2C;
            } else {
                sp2C = *D_8017D478[func_8013B19C(temp_a0)].unk0;
            }
            func_8013A1B4(arg1, sp2C, 0x40000);
        }
    }
}


extern u16 D_8017DCDC;

u16 func_8013C8E0(void) {
    return D_8017DCDC;
}


/* Original readonly objects; named loads retain their original addresses. */




static const unsigned char rodata_8013B130[] = {
    0x4D, 0x4F, 0x44, 0x45, 0x4C, 0x53, 0xB9, 0xBD, 0xC2, 0xA4, 0xC2, 0xCE, 0xA4, 0xCE, 0x20, 0x25,
    0x64, 0xC8, 0xD6, 0xA4, 0xF2, 0xBB, 0xC8, 0xCD, 0xD1, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xB9, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0x4D, 0x4F, 0x44, 0x45, 0x4C, 0x53, 0xA4, 0xCB, 0xB6, 0xF5, 0xA4, 0xAD,
    0xA4, 0xAC, 0xA4, 0xA2, 0xA4, 0xEA, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00,
    0xB3, 0xBA, 0xC5, 0xF6, 0xA4, 0xB9, 0xA4, 0xEB, 0x20, 0x62, 0x5F, 0x6B, 0x69, 0x6E, 0x64, 0x20,
    0x3D, 0x3D, 0x20, 0x25, 0x64, 0x28, 0x25, 0x30, 0x34, 0x78, 0x29, 0x20, 0xA4, 0xAC, 0xA4, 0xDF,
    0xA4, 0xC4, 0xA4, 0xAB, 0xA4, 0xEA, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00,
    0x4D, 0x4F, 0x44, 0x45, 0x4C, 0x53, 0xB9, 0xBD, 0xC2, 0xA4, 0xC2, 0xCE, 0xA4, 0xCE, 0x20, 0x25,
    0x64, 0xC8, 0xD6, 0xA4, 0xF2, 0xB2, 0xF2, 0xCA, 0xFC, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xB7, 0xA4,
    0xBF, 0x0A, 0x00, 0x00, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x20, 0x4D, 0x4F, 0x44, 0x45, 0x4C, 0x53,
    0xB9, 0xBD, 0xC2, 0xA4, 0xC2, 0xCE, 0xA4, 0xF2, 0xB2, 0xF2, 0xCA, 0xFC, 0xA4, 0xC7, 0xA4, 0xAD,
    0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x65, 0x72, 0x72, 0x20, 0x43, 0x61, 0x6E, 0x27,
    0x74, 0x20, 0x6D, 0x61, 0x6B, 0x65, 0x20, 0x6D, 0x6F, 0x64, 0x65, 0x6C, 0x20, 0x20, 0x25, 0x64,
    0x0A, 0x00, 0x00, 0x00, 0xA5, 0xD7, 0xA5, 0xEC, 0xA5, 0xA4, 0xA5, 0xE4, 0xA1, 0xBC, 0xA4, 0xCE,
    0xBD, 0xE9, 0xB4, 0xFC, 0xBA, 0xC2, 0xC9, 0xB8, 0xA4, 0xF2, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8,
    0x20, 0x00, 0x00, 0x00, 0xA5, 0xD7, 0xA5, 0xEC, 0xA5, 0xA4, 0xA5, 0xE4, 0xA1, 0xBC, 0x32, 0xA4,
    0xCE, 0xBD, 0xE9, 0xB4, 0xFC, 0xBA, 0xC2, 0xC9, 0xB8, 0xA4, 0xF2, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5,
    0xC8, 0x20, 0x00, 0x00, 0xA5, 0xE2, 0xA5, 0xC7, 0xA5, 0xEB, 0xA4, 0xCE, 0xBD, 0xE9, 0xB4, 0xFC,
    0xBA, 0xC2, 0xC9, 0xB8, 0xA4, 0xF2, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8, 0x20, 0x00, 0x00, 0x00,
    0x78, 0x20, 0x3D, 0x20, 0x25, 0x66, 0x20, 0x79, 0x20, 0x3D, 0x20, 0x25, 0x66, 0x20, 0x7A, 0x20,
    0x3D, 0x20, 0x25, 0x66, 0x20, 0x72, 0x79, 0x20, 0x3D, 0x20, 0x25, 0x30, 0x78, 0x0A, 0x00, 0x00,
    0xB1, 0xC6, 0xA4, 0xF2, 0xBA, 0xEE, 0xA4, 0xEA, 0xA4, 0xDE, 0xA4, 0xB9, 0x0A, 0x00, 0x00, 0x00,
};
/* hh-owned-pool func_8013B268 8018E130 8018E144 */
/* hh-owned-pool func_8013C3CC 8018E144 8018E288 */
/* hh-owned-pool func_8013C52C 8018E288 8018E298 */
