#include "common.h"
struct func_8013B19C_Struct {
    u8 pad[4];
    u16 unk4;
    u8 pad6[0x1A];
};
extern struct func_8013B19C_Struct D_8017D460[];
extern u8 D_801BBBF0[];
extern u8 D_801BD980[];
extern u8 D_801BEB00[];
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
