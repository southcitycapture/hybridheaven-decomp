#include "common.h"

#undef func_801CD500

u8 func_801CD500(u8 arg0, u8 arg1, f32 arg2) {
    return (u32)arg0 + (arg1 - arg0) * arg2;
}
#define func_801CD500 func_801CD500__decl

#define func_801CD500 func_801CD500__decl
u8 func_801CD500(s32, u8, s32);

typedef struct func_801CD5E0_StructIn {
    u8 pad0[0x78];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    u8 unk7C;
    u8 unk7D;
    u8 unk7E;
    u8 unk7F;
} func_801CD5E0_StructIn;

typedef struct func_801CD5E0_StructOut {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801CD5E0_StructOut;


void func_801CD5E0(func_801CD5E0_StructIn *arg0, func_801CD5E0_StructOut *arg1, s32 arg2) {
    arg1->unk48 = func_801CD500(arg0->unk78, arg0->unk7C, arg2);
    arg1->unk49 = func_801CD500(arg0->unk79, arg0->unk7D, arg2);
    arg1->unk4A = func_801CD500(arg0->unk7A, arg0->unk7E, arg2);
    arg1->unk4B = func_801CD500(arg0->unk7B, arg0->unk7F, arg2);
}


typedef struct func_801CD668_StructIn {
    u8 pad0[0x78];
    u8 unk78, unk79, unk7A, unk7B;
    u8 unk7C, unk7D, unk7E, unk7F;
    u8 pad80[0x14];
    u8 unk94;
} func_801CD668_StructIn;

typedef struct func_801CD668_StructOut {
    u8 pad0[0x48];
    u8 unk48, unk49, unk4A, unk4B;
} func_801CD668_StructOut;

typedef struct func_801CD668_StructEntry {
    u8 pad0[0x30];
    func_801CD668_StructOut *unk30;
} func_801CD668_StructEntry;

void func_801CD668(func_801CD668_StructIn *arg0, func_801CD668_StructEntry **arg1, s32 arg2) {
    volatile u8 pad[8];
    u8 sp27;
    u8 sp26;
    u8 sp25;
    s32 var_a0;
    u8 temp_v0;
    func_801CD668_StructEntry **var_a1;
    func_801CD668_StructEntry *temp_t7;
    func_801CD668_StructOut *temp_v1;

    sp27 = func_801CD500(arg0->unk78, arg0->unk7C, arg2);
    sp26 = func_801CD500(arg0->unk79, arg0->unk7D, arg2);
    sp25 = func_801CD500(arg0->unk7A, arg0->unk7E, arg2);
    temp_v0 = func_801CD500(arg0->unk7B, arg0->unk7F, arg2);
    var_a0 = 0;
    if ((s32)arg0->unk94 > 0) {
        var_a1 = arg1;
        do {
            temp_v1 = (*var_a1)->unk30;
            var_a0 += 1;
            var_a1 += 1;
            temp_v1->unk48 = sp27;
            temp_v1->unk49 = sp26;
            temp_v1->unk4A = sp25;
            temp_v1->unk4B = temp_v0;
        } while (var_a0 < (s32)arg0->unk94);
    }
}


void func_801CD728(u8 *arg0, u8 *arg1, s32 arg2) {
    arg1[0x4C] = func_801CD500(arg0[0x80], arg0[0x84], arg2);
    arg1[0x4D] = func_801CD500(arg0[0x81], arg0[0x85], arg2);
    arg1[0x4E] = func_801CD500(arg0[0x82], arg0[0x86], arg2);
    arg1[0x4F] = func_801CD500(arg0[0x83], arg0[0x87], arg2);
}


typedef struct func_801CD7B0_StructIn {
    u8 pad0[0x80];
    u8 unk80, unk81, unk82, unk83;
    u8 unk84, unk85, unk86, unk87;
    u8 pad88[0xC];
    u8 unk94;
} func_801CD7B0_StructIn;

typedef struct func_801CD7B0_StructOut {
    u8 pad0[0x4C];
    u8 unk4C, unk4D, unk4E, unk4F;
} func_801CD7B0_StructOut;

typedef struct func_801CD7B0_StructEntry {
    u8 pad0[0x30];
    func_801CD7B0_StructOut *unk30;
} func_801CD7B0_StructEntry;

void func_801CD7B0(func_801CD7B0_StructIn *arg0, func_801CD7B0_StructEntry **arg1, s32 arg2) {
    s32 pad;
    s16 sp2A;
    s16 sp28;
    s16 sp26;
    s16 temp_v0;
    s32 var_v1;
    func_801CD7B0_StructEntry **var_a0;
    func_801CD7B0_StructOut *temp_v0_2;

    sp2A = func_801CD500(arg0->unk80, arg0->unk84, arg2);
    sp28 = func_801CD500(arg0->unk81, arg0->unk85, arg2);
    sp26 = func_801CD500(arg0->unk82, arg0->unk86, arg2);
    temp_v0 = func_801CD500(arg0->unk83, arg0->unk87, arg2);
    var_v1 = 0;
    var_a0 = arg1;
    if ((s32) arg0->unk94 > 0) {
        do {
            temp_v0_2 = (*var_a0)->unk30;
            var_v1 += 1;
            var_a0++;
            temp_v0_2->unk4C = sp2A;
            temp_v0_2->unk4D = sp28;
            temp_v0_2->unk4E = sp26;
            temp_v0_2->unk4F = temp_v0;
        } while (var_v1 < (s32) arg0->unk94);
    }
}

#define func_801CD668 func_801CD668__func_801CD878
#define func_801CD7B0 func_801CD7B0__func_801CD878

typedef struct func_801CD878_Struct {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_801CD878_Struct;

extern void func_801CD668(void *, void **, f32);
extern void func_801CD7B0(void *, void **, f32);

void func_801CD878(void *arg0, void **arg1)
{
    f32 ratio;

    ratio = (((func_801CD878_Struct *)arg0)->unk92 + 1.0) /
            (((func_801CD878_Struct *)arg0)->unk90 + 1.0);
    func_801CD668(arg0, arg1, ratio);
    func_801CD7B0(arg0, arg1, ratio);
}
#undef func_801CD668
#undef func_801CD7B0


void func_801CBC70(u8, u8, s32);

void func_801CD924(u8 arg0, u8 arg1, u8 arg2, s32 arg3) {
    u8 sp1F;
    u8 sp1E;

    sp1F = func_801CD500(0x80, arg0, arg3);
    sp1E = func_801CD500(0x80, arg1, arg3);
    func_801CBC70(sp1F, sp1E, func_801CD500(0x80, arg2, arg3) & 0xFF);
}


extern void D_801CD924(u8 arg0, u8 arg1, u8 arg2, f32 arg3);

void func_801CD994(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    D_801CD924(arg0, arg1, arg2, (f32)((f64)(f32)arg3 * 0.00390625));
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CDA0C.s")

typedef struct func_801CE1C8_StructB {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x18];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x10];
    f32 unk60;
    f32 unk64;
    f32 unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78[16];
    f32 unk88;
    s32 unk8C;
    u16 unk90;
    u16 unk92;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
} func_801CE1C8_StructB;

typedef struct func_801CDCE4_StructPair {
    u16 id;
    u16 index;
} func_801CDCE4_StructPair;

typedef struct func_801CDCE4_StructTable {
    func_801CDCE4_StructPair entries[6];
} func_801CDCE4_StructTable;

typedef struct func_801CDCE4_StructResource {
    u8 pad[4];
    s32 *data;
} func_801CDCE4_StructResource;

extern func_801CDCE4_StructTable D_801E13BC;
extern func_801CDCE4_StructResource *D_80171CEC[];
extern s32 func_801CDA0C(void *, u16, s32, s32);
extern void func_8012D8C8(void *, s32, s32, f32, s32, s32);

u8 func_801CDCE4(func_801CE1C8_StructB *arg0, s32 arg1) {
    func_801CDCE4_StructPair *entry;
    s32 i;
    func_801CDCE4_StructTable table = D_801E13BC;
    u16 id;
    s32 ret;
    u8 result;
    u16 index;
    s32 *data;

    entry = &table.entries[arg0->unk97];
    id = entry->id;
    index = entry->index;
    data = D_80171CEC[id]->data;
    ret = func_801CDA0C(arg0, id, data[index], arg1);
    result = ret;
    if (ret != 0) {
        return ret & 0xFF;
    }
    if (arg0->unk97 == 5) {
        for (i = 0; i < arg0->unk94; i++) {
            func_8012D8C8(arg0, 0x371, 0, 1.0f, 1, i);
        }
    }
    return result;
}

#define D_8008DA88 D_8008DA88__func_801CDE00
extern u8 D_8008DA88[];
extern s32 D_801E13D4[];

typedef struct func_801CDE00_StructEntry {
    u8 pad0[0x30];
    u8 *data;
} func_801CDE00_StructEntry;
typedef struct func_801CDE00_Struct {
    u8 pad0[0x24];
    func_801CDE00_StructEntry *entry;
    u8 pad28[0x6C];
    u8 count;
    u8 pad95[2];
    u8 index;
} func_801CDE00_Struct;
typedef struct func_801CDE00_StructTable {
    u16 entries[7][3];
} func_801CDE00_StructTable;
extern func_801CDE00_StructTable D_801E13E4;
extern void func_8012CF8C(void *, s32 *, u16, s32);

u8 func_801CDE00(func_801CDE00_Struct *arg0, s32 arg1) {
    volatile s32 pad;
    s32 *data;
    func_801CDE00_StructTable table = D_801E13E4;
    u16 id;
    s32 value;

    {
        s32 i;
        u8 result;
        u8 index;
        void **entry;

        index = arg0->index - 6;
        id = table.entries[index][0];
        value = table.entries[index][1];
        i =func_801CDA0C(arg0, id, D_801E13D4[table.entries[index][2]], arg1);
        result = i;
        if (i != 0) {
            return result;
        }
        data = (s32 *)(arg0->entry->data + 0x40);
        func_8012CF8C(arg0, data, id, value);
        if (arg0->count >= 2) {
            func_80006214(arg0);
            i = 1;
            if (arg0->count >= 2) {
                entry = (void **)((u8 *)D_8008DA88 + 4);
                do {
                    *(s32 *)(*(u8 **)((u8 *)*entry + 0x30) + 0x40) = *data;
                    i++;
                    entry++;
                } while (i < arg0->count);
            }
        }
        return result;
    }
}
#undef D_8008DA88


typedef struct func_801CDF5C_Struct {
    u8 pad[0x90];
    u16 unk90;
    u8 pad92[2];
    u8 unk94;
    u8 pad95[2];
    u8 unk97;
} func_801CDF5C_Struct;

typedef struct func_801CDF5C_StructTable {
    u16 entries[9][3];
} func_801CDF5C_StructTable;

extern func_801CDF5C_StructTable D_801E1410;
extern s32 D_801E13D4[];

u8 func_801CDF5C(func_801CDF5C_Struct *arg0, s32 arg1) {
    s32 i;
    s32 mode;
    func_801CDF5C_StructTable table;
    u16 first;
    f32 scale;
    s32 second;
    s32 temp;
    u8 result;
    u8 index;

    table = D_801E1410;
    index = arg0->unk97 - 13;
    first = table.entries[index][0];
    second = table.entries[index][1];
    temp = func_801CDA0C(arg0, first, D_801E13D4[table.entries[index][2]], arg1);
    result = temp;
    if (temp != 0) {
        return temp & 0xFF;
    }
    temp = first;
    if (arg0->unk97 == 16) {
        scale = 1.0f;
        mode = 1;
    } else {
        scale = (f32) ((f64) (f32) (u32) arg0->unk90 / 24.0);
        mode = 2;
    }
    for (i = 0; i < arg0->unk94; i++) {
        func_8012D8C8(arg0, temp, second, scale, mode, i);
    }
    return result;
}

extern s32 D_801CDCE4(void *, s32);
extern s32 D_801CDE00(void *, s32);
extern s32 D_801CDF5C(void *, s32);
extern void func_800058DC(void *arg0, s32 arg1);
extern void func_801CE898();
typedef struct func_801CE0E8_Struct { u8 pad[0x97]; u8 unk97; } func_801CE0E8_Struct;
s32 func_801CE0E8(void *arg0, s8 *a1) {
    u8 t;
    s32 r;
    if (((func_801CE0E8_Struct *)arg0)->unk97 < 6) {
        t = r = D_801CDCE4(arg0, (s32)a1);
    } else if (((func_801CE0E8_Struct *)arg0)->unk97 < 0xD) {
        t = r = D_801CDE00(arg0, (s32)a1);
    } else {
        t = r = D_801CDF5C(arg0, (s32)a1);
    }
    if (r != 0) {
        func_800058DC(arg0, (s32)func_801CE898);
    }
    return t;
}


typedef struct func_801CE170_Struct {
    u8 pad0[5];
    u8 unk5;
    u8 pad6[2];
} func_801CE170_Struct;

extern func_801CE170_Struct D_801E1200;

func_801CE170_Struct *func_801CE170(u8 arg0) {
    func_801CE170_Struct *var_v1;
    s32 key;

    key = arg0;
    for (var_v1 = &D_801E1200; var_v1->unk5 != 0xFF; var_v1++) {
        if (key == var_v1->unk5) {
            return var_v1;
        }
    }
    return NULL;
}


typedef struct func_801CE1C8_StructA {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_801CE1C8_StructA;


typedef struct func_801CE1C8_StructC {
    s32 unk0;
    u8 unk4;
} func_801CE1C8_StructC;

extern u8 D_801E1398[];
extern func_801CE1C8_StructB *func_80005670(func_801CE1C8_StructA *, void *);

func_801CE1C8_StructB *func_801CE1C8(func_801CE1C8_StructA *arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, u8 arg19, u8 arg20, u8 arg21, u16 arg22, f32 arg23, f32 arg24, f32 arg25, f32 arg26, u8 arg27) {
    func_801CE1C8_StructB *r;
    func_801CE1C8_StructC *sp18;

    sp18 = (func_801CE1C8_StructC *)func_801CE170(arg1);
    *(s32 *)(D_801E1398 + 0xC) = sp18->unk0;
    r = func_80005670(arg0, &D_801E1398);
    if (r != NULL) {
        arg0->unk4E = arg0->unk4E + 1;
        r->unk30 = 0;
        r->unk2C = 0;
        r->unk4C = 0;
        r->unk4E = 0;
        r->unk60 = arg23;
        r->unk64 = arg24;
        r->unk68 = arg25;
        r->unk6C = arg2;
        r->unk70 = arg3;
        r->unk74 = arg4;
        r->unk78[0] = arg5;
        r->unk78[1] = arg6;
        r->unk78[2] = arg7;
        r->unk78[3] = arg8;
        r->unk78[4] = arg9;
        r->unk78[5] = arg10;
        r->unk78[6] = arg11;
        r->unk78[7] = arg12;
        r->unk78[8] = arg13;
        r->unk78[9] = arg14;
        r->unk78[10] = arg15;
        r->unk78[11] = arg16;
        r->unk78[12] = arg17;
        r->unk78[13] = arg18;
        r->unk78[14] = arg19;
        r->unk78[15] = arg20;
        r->unk8C = sp18->unk0;
        r->unk90 = arg22;
        r->unk92 = 0;
        r->unk94 = arg21;
        r->unk95 = arg1;
        r->unk96 = arg27;
        r->unk97 = sp18->unk4;
        r->unk88 = arg26;
    }
    return r;
}


void func_801CE330(func_801CE1C8_StructA *arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, u8 a5, u8 a6, u8 a7, u8 a8, u8 a9, u8 a10, u8 a11, u8 a12, u8 a13, u16 a14, f32 a15, u8 a16) {
    func_801CE1C8(arg0, arg1, arg2, arg3, arg4, a5, a6, a7, a8, a9, a10, a11, a12, 0, 0, 0, 0, 0, 0, 0, 0, a13, a14, a15, a15, a15, 0.0f, a16);
}


void func_801CE3F8(func_801CE1C8_StructA *arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u16 arg14, f32 arg15, u8 arg16) {
    func_801CE1C8(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg15, arg15, 0.0f, arg16);
}


void func_801CE4D4(func_801CE1C8_StructA *arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4,
    u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11,
    u8 arg12, u8 arg13, u8 arg14, u8 arg15, u16 arg16, f32 arg17, u8 arg18)
{
    func_801CE1C8(arg0, arg1, arg2, arg3, arg4,
        arg5, arg6, arg7, arg8, arg5, arg6, arg7, arg9,
        arg10, arg11, arg12, arg13, arg10, arg11, arg12, arg14, arg15,
        arg16, arg17, arg17, arg17, 0.0f, arg18);
}


extern s32 func_80006088(s32);

typedef struct func_801CE5B0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE5B0_Struct;

void func_801CE5B0(func_801CE5B0_Struct *arg0, s32 *arg1) {
    s32 var_s0;

    var_s0 = 0;
    if (arg0->unk94 > 0) {
        do {
            func_80006088(arg1[var_s0]);
            var_s0 = (var_s0 + 1) & 0xFFFF;
        } while (var_s0 < arg0->unk94);
    }
}


extern s32 func_8012C6B4(s32);
extern f64 D_801E3570;
struct func_801CE6F8_Struct;

typedef struct func_801CE618_In {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_801CE618_In;

typedef struct func_801CE618_Out {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801CE618_Out;

void func_801CE618(s32 arg0, struct func_801CE6F8_Struct *arg1) {
    func_801CE618_In *in = (func_801CE618_In *)arg0;
    func_801CE618_Out *out = (func_801CE618_Out *)arg1;

    out->unk4 = (f32) ((f64) (f32) (func_8012C6B4(0x64) - 0x32) / 10.0 + (f64) in->unk6C);
    out->unk8 = (f32) ((f64) func_8012C6B4(0x14) * D_801E3570 + (f64) in->unk70);
    out->unkC = (f32) ((f64) (f32) (func_8012C6B4(0x64) - 0x32) / 10.0 + (f64) in->unk74);
}


typedef struct func_801CE6F8_Struct {
    u8 pad0[0x8];
    f32 unk8;
} func_801CE6F8_Struct;


void func_801CE6F8(s32 arg0, func_801CE6F8_Struct *arg1) {
    func_801CE618(arg0, arg1);
    arg1->unk8 = (f32) ((f64) arg1->unk8 + 18.0);
}


extern void func_800058DC(void *arg0, s32 arg1);

typedef struct func_801CE73C_Struct {
    u8 pad[0x8C];
    s32 unk8C;
} func_801CE73C_Struct;

void func_801CE73C(func_801CE73C_Struct *arg0, s32 arg1) {
    func_800058DC(arg0, arg0->unk8C);
}


typedef struct func_801CE760_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE760_Struct;

extern void func_801CE7A8();

void func_801CE760(func_801CE760_Struct *arg0, s32 arg1) {
    s8 sp1F;

    sp1F = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1F) == 0) {
        func_800058DC(arg0, (s32) func_801CE7A8);
    }
}


typedef struct func_801CE7A8_StructB {
    u8 pad0[0x30];
    struct func_801CE7A8_StructC *unk30;
} func_801CE7A8_StructB;
typedef struct func_801CE7A8_StructC {
    u8 pad0[0x3E];
    u16 unk3E;
} func_801CE7A8_StructC;
typedef struct func_801CE7A8_StructD {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CE7A8_StructD;
typedef struct func_801CE7A8_Struct {
    u8 pad0[0xC];
    func_801CE7A8_StructD *unkC;
    u8 pad10[0x20];
    s32 unk30;
    u8 pad34[0x5C];
    u16 unk90;
    u16 unk92;
    u8 pad94[3];
    u8 unk97;
} func_801CE7A8_Struct;

extern void func_801CD878(void *arg0, void **arg1);
extern void func_801CE898();

void func_801CE7A8(func_801CE7A8_Struct *arg0, func_801CE7A8_StructB **arg1) {
    u16 temp_v1;
    u16 var_a2;
    u16 temp_v0_2;

    temp_v1 = (*arg1)->unk30->unk3E;
    if (arg0->unk97 >= 0xD || arg0->unk97 == 5) {
        extern void func_8012D7A8();
        func_8012D7A8(arg0);
        if (temp_v1 & 1) {
            var_a2 = 1;
        } else if (arg0->unk30 & 0x20) {
            var_a2 = 1;
        } else {
            var_a2 = 0;
        }
    } else {
        var_a2 = 1;
    }
    func_801CD878(arg0, (void **)arg1);
    if ((arg0->unk90 < arg0->unk92++ && var_a2 != 0) || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}


extern void func_80005700();

typedef struct func_801CE898_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CE898_StructInner;

typedef struct func_801CE898_StructOuter {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
} func_801CE898_StructOuter;

void func_801CE898(func_801CE898_StructOuter *arg0, s32 arg1) {
    func_801CE898_StructInner *temp_v0;

    temp_v0 = arg0->unkC;
    temp_v0->unk4C = temp_v0->unk4C + 1;
    func_80005700();
}


typedef struct func_801CE8C8_StructInner {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_801CE8C8_StructInner;

typedef struct func_801CE8C8_StructOuter {
    u8 pad0[0x30];
    func_801CE8C8_StructInner *unk30;
} func_801CE8C8_StructOuter;

typedef struct func_801CE8C8_Struct {
    u8 pad0[0x94];
    u8 unk94;
} func_801CE8C8_Struct;

extern void func_801CE9DC();

void func_801CE8C8(func_801CE8C8_Struct *arg0, void **arg1) {
    s32 var_a1;
    s8 sp2B;
    s32 var_v1;
    void **var_a2;
    func_801CE8C8_StructInner *temp_v0;

    sp2B = 0;
    if (func_801CE0E8(arg0, &sp2B) == 0) {
        var_a1 = 0;
        var_a2 = arg1;
        var_v1 = 0;
        if ((s32) arg0->unk94 > 0) {
            do {
                var_a1 += 1;
                temp_v0 = ((func_801CE8C8_StructOuter *) *var_a2)->unk30;
                temp_v0->unk10 = (s16) (var_v1 / (s32) arg0->unk94);
                var_a2 += 1;
                temp_v0->unk12 = (s16) (var_v1 / (s32) arg0->unk94);
                temp_v0->unk14 = (s16) (var_v1 / (s32) arg0->unk94);
                var_v1 += 0x2000;
            } while (var_a1 < (s32) arg0->unk94);
        }
        func_800058DC(arg0, (s32) func_801CE9DC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CE9DC.s")

typedef struct func_801CEB64_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CEB64_StructC;
typedef struct func_801CEB64_StructArg0 {
    u8 pad0[0x0C];
    func_801CEB64_StructC *unkC;
    u8 pad10[0x90 - 0x10];
    u16 unk90;
    u16 unk92;
} func_801CEB64_StructArg0;
void func_801CEB64(func_801CEB64_StructArg0 *arg0, void **arg1);
extern s32 func_801CE0E8(void *, s8 *);

typedef struct func_801CEAF8_StructD {
    u8 pad0[0x12];
    s16 unk12;
} func_801CEAF8_StructD;

typedef struct func_801CEAF8_StructC {
    u8 pad0[0x2C];
    func_801CEAF8_StructD *unk2C;
} func_801CEAF8_StructC;

typedef struct func_801CEAF8_StructB {
    u8 pad0[0x24];
    func_801CEAF8_StructC *unk24;
} func_801CEAF8_StructB;

typedef struct func_801CEAF8_StructA {
    u8 pad0[0xC];
    func_801CEAF8_StructB *unkC;
} func_801CEAF8_StructA;

typedef struct func_801CEAF8_StructTop {
    u8 pad0[0xC];
    func_801CEAF8_StructA *unkC;
    u8 pad10[0x94 - 0x10];
    u8 unk94;
} func_801CEAF8_StructTop;

typedef struct func_801CEAF8_StructF {
    u8 pad0[0x12];
    s16 unk12;
} func_801CEAF8_StructF;

typedef struct func_801CEAF8_StructE {
    u8 pad0[0x30];
    func_801CEAF8_StructF *unk30;
} func_801CEAF8_StructE;

void func_801CEAF8(func_801CEAF8_StructTop *arg0, func_801CEAF8_StructE **arg1) {
    func_801CEAF8_StructF *dst;
    s8 sp1B;

    sp1B = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1B) == 0) {
        dst = (*arg1)->unk30;
        dst->unk12 = arg0->unkC->unkC->unk24->unk2C->unk12;
        func_800058DC(arg0, (s32) func_801CEB64);
    }
}


typedef struct func_801CEB64_StructInner {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801CEB64_StructInner;

typedef struct func_801CEB64_StructOuter {
    u8 pad0[0x30];
    func_801CEB64_StructInner *unk30;
} func_801CEB64_StructOuter;



extern void func_8012D7A8(void);
extern void func_801CBD70(void);

void func_801CEB64(func_801CEB64_StructArg0 *arg0, void **arg1) {
    func_801CEB64_StructInner *temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v0 = ((func_801CEB64_StructOuter *) *arg1)->unk30;
    func_8012D7A8();
    func_801CD878(arg0, arg1);
    func_801CD994(temp_v0->unk48, temp_v0->unk49, temp_v0->unk4A, temp_v0->unk4B);
    temp_v0_2 = arg0->unk92;
    temp_v1 = (s32) arg0->unk90 < temp_v0_2;
    arg0->unk92 = (u16) (temp_v0_2 + 1);
    if (temp_v1 || (arg0->unkC->unk4C & 0x8000)) {
        func_801CBD70();
        func_801CE5B0((func_801CE5B0_Struct *) arg0, (s32 *) arg1);
        func_800058DC(arg0, (s32) func_801CE898);
    }
}


typedef struct func_801CEC10_StructInner {
    u8 pad[0x30];
    func_801CE6F8_Struct *unk30;
} func_801CEC10_StructInner;

typedef struct func_801CEC10_StructOuter {
    u8 pad[0x94];
    u8 unk94;
} func_801CEC10_StructOuter;

extern void func_801CECA4();

void func_801CEC10(func_801CEC10_StructOuter *arg0, func_801CEC10_StructInner **arg1) {
    s32 var_s0;
    s8 sp2B;

    sp2B = 0;
    if (func_801CE0E8((void *) arg0, &sp2B) == 0) {
        var_s0 = 0;
        if ((s32) arg0->unk94 > 0) {
            do {
                func_801CE618((s32) arg0, arg1[var_s0]->unk30);
                var_s0 = (var_s0 + 1) & 0xFF;
            } while (var_s0 < (s32) arg0->unk94);
        }
        func_800058DC((void *) arg0, (s32) func_801CECA4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CECA4.s")


typedef struct func_801CEEF0_StructInner {
    u8 pad[0x30];
    func_801CE6F8_Struct *unk30;
} func_801CEEF0_StructInner;

typedef struct func_801CEEF0_StructOuter {
    u8 pad[0x94];
    u8 unk94;
} func_801CEEF0_StructOuter;

extern void func_801CEF84();

void func_801CEEF0(func_801CEEF0_StructOuter *arg0, func_801CEEF0_StructInner **arg1) {
    s32 var_s0;
    s8 sp2B;

    sp2B = 0;
    if (func_801CE0E8((void *) arg0, &sp2B) == 0) {
        var_s0 = 0;
        if ((s32) arg0->unk94 > 0) {
            do {
                func_801CE618((s32) arg0, arg1[var_s0]->unk30);
                var_s0 = (var_s0 + 1) & 0xFF;
            } while (var_s0 < (s32) arg0->unk94);
        }
        func_800058DC((void *) arg0, (s32) func_801CEF84);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CEF84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CF1D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CF2D4.s")


extern void func_801CF758();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_801CF5F0(u8 *arg0, s32 *arg1) {
    f32 *s0;
    s16 temp_s2;
    s16 temp_s3;
    u8 i;
    s8 pad1;
    s8 sp45;

    sp45 = 0;
    if (func_801CE0E8(arg0, &sp45) == 0) {
        temp_s3 = func_8012C6B4(0x2000);
        for (i = 0; i < arg0[0x94]; i++) {
            temp_s2 = (s16)((i << 13) / arg0[0x94] + temp_s3) & 0x1FFF;
            s0 = (f32 *)*(s32 *)(arg1[i] + 0x30);
            s0[1] += 6.5 * func_8001EB64(temp_s2);
            s0[3] += 6.5 * func_8001EAD0(temp_s2);
        }
        func_800058DC(arg0, (s32)func_801CF758);
    }
}


typedef struct func_801CF758_StructConfig {
    u8 pad[0x4C];
    u16 unk4C;
} func_801CF758_StructConfig;

typedef struct func_801CF758_StructLink {
    u8 pad[0xC];
    func_801CF758_StructConfig *unkC;
} func_801CF758_StructLink;

typedef struct func_801CF758_StructObj {
    u8 pad0[0xC];
    func_801CF758_StructLink *unkC;
    u8 pad10[0x20];
    s32 unk30;
    u8 pad34[0x5C];
    u16 unk90;
    u16 unk92;
} func_801CF758_StructObj;

typedef struct func_801CF758_StructData {
    u8 pad[0x3E];
    u16 unk3E;
} func_801CF758_StructData;

typedef struct func_801CF758_StructInput {
    u8 pad[0x30];
    func_801CF758_StructData *unk30;
} func_801CF758_StructInput;

void func_801CF758(func_801CF758_StructObj *arg0, func_801CF758_StructInput **arg1) {
    u16 sp26;
    s32 var_v1;
    u16 temp_v0;

    sp26 = (*arg1)->unk30->unk3E;
    func_8012D7A8();
    func_801CD878(arg0, (void **)arg1);
    if (sp26 & 1) {
        var_v1 = 1;
    } else {
        var_v1 = (arg0->unk30 & 0x20) ? 1 : 0;
    }
    if (((arg0->unk90 < arg0->unk92++) && (var_v1 != 0)) || (arg0->unkC->unkC->unk4C & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}


extern void func_801CF894();

void func_801CF824(void *arg0, void **arg1) {
    s32 i;
    s8 sp23;
    void **p;

    sp23 = 0;
    if (func_801CE0E8(arg0, &sp23) == 0) {
        i = 0;
        p = arg1;
        if (((u8 *) arg0)[0x94] > 0) {
            do {
                ((u8 *) *p)[0x22] = 0;
                i++;
                p++;
            } while (i < (s32) ((u8 *) arg0)[0x94]);
        }
        func_800058DC(arg0, func_801CF894);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CF894.s")


struct func_801CFCA0_Struct {
    u8 pad0[0x78];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad1[0x94 - 0x7B];
    u8 unk94;
};

struct func_801CFCA0_Inner {
    u8 pad0[0x10];
    s16 unk10;
    u8 pad1[0x18 - 0x12];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};

struct func_801CFCA0_Outer {
    u8 pad0[0x30];
    struct func_801CFCA0_Inner *unk30;
};

extern void func_801CFD44();
extern f64 D_801E35A8;

void func_801CFCA0(struct func_801CFCA0_Struct *arg0, struct func_801CFCA0_Outer **arg1) {
    f32 temp_fv0;
    s8 sp2B;
    struct func_801CFCA0_Inner *temp_v0;

    sp2B = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp2B) == 0) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk10 = 0x800;
        temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 * D_801E35A8);
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        temp_v0->unk18 = temp_fv0;
        func_801CD924(arg0->unk78, arg0->unk79, arg0->unk7A, 0x3F4CCCCD);
        func_800058DC(arg0, (s32) func_801CFD44);
    }
}


typedef struct func_801CFD44_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CFD44_StructC;
typedef struct func_801CFD44_StructV {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x27];
    u8 unk4B;
} func_801CFD44_StructV;
typedef struct func_801CFD44_StructE {
    u8 pad0[0x30];
    func_801CFD44_StructV *unk30;
} func_801CFD44_StructE;
typedef struct func_801CFD44_Struct {
    u8 pad0[0xC];
    func_801CFD44_StructC *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[0x14];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad7B[0x15];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801CFD44_Struct;

extern f64 D_801E35B0;

void func_801CFD44(func_801CFD44_Struct *arg0, func_801CFD44_StructE **arg1) {
    func_801CFD44_StructV *v;
    f32 f;
    f32 a;
    u8 i;

    func_801CD878(arg0, (void **)arg1);
    for (i = 0; i < arg0->unk94; i++) {
        v = arg1[i]->unk30;
        f = (((f32)arg0->unk92 + 1.0) / (arg0->unk90 + 1.0)) * arg0->unk60;
        v->unk20 = f;
        v->unk1C = f;
        v->unk18 = f;
    }
    func_801CD994(arg0->unk78, arg0->unk79, arg0->unk7A, (u32)(v->unk4B * D_801E35B0));
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CBD70();
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}


typedef struct func_801CFF50_StructInner {
    u8 pad0[0x10];
    s16 unk10;
    u8 pad12[0x18 - 0x12];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801CFF50_StructInner;

typedef struct func_801CFF50_StructOuter {
    u8 pad0[0x30];
    func_801CFF50_StructInner *unk30;
} func_801CFF50_StructOuter;

typedef struct func_801CFF50_Struct {
    u8 pad0[0x78];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad7B[0x94 - 0x7B];
    u8 unk94;
} func_801CFF50_Struct;

extern f64 D_801E35B8;
extern void func_801CFFF4();

void func_801CFF50(func_801CFF50_Struct *arg0, func_801CFF50_StructOuter **arg1) {
    func_801CFF50_StructInner *temp_v0;
    s8 sp2B;
    f32 temp_fv0;

    sp2B = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp2B) == 0) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk10 = 0x800;
        temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 * D_801E35B8);
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        temp_v0->unk18 = temp_fv0;
        func_801CD924(arg0->unk78, arg0->unk79, arg0->unk7A, 0x3F4CCCCD);
        func_800058DC(arg0, (s32) &func_801CFFF4);
    }
}

extern f64 D_801E35C0;
struct func_801D0164_Struct;
void func_801D0164(struct func_801D0164_Struct *arg0, s32 arg1);

void func_801CFFF4(func_801CE1C8_StructB *arg0, s32 **arg1) {
    f32 r;
    u8 i;

    r = ((f64)(f32)(u32)arg0->unk92 + 1.0) / ((f64)(u32)arg0->unk90 + 1.0);
    for (i = 0; i < arg0->unk94; i++) {
        f32 v = arg0->unk60 * r;
        f32 *p = (f32 *)((func_801CE1C8_StructB *)arg1[i])->unk30;
        p[8] = v;
        p[7] = v;
        p[6] = v;
    }
    D_801CD924(arg0->unk78[0], arg0->unk78[1], arg0->unk78[2], (f32)(r * D_801E35C0));
    {
        func_801CE1C8_StructA *q = *(func_801CE1C8_StructA **)((u8 *)arg0 + 0xC);
        s32 c = q->unk4C;
        if (c & 0x8000) {
            q->unk4C = c + 1;
            func_801CBD70();
            func_801CE5B0((void *)arg0, (s32 *)arg1);
            return;
        }
        q = (func_801CE1C8_StructA *)(u32)arg0->unk92;
        c = (s32)arg0->unk90 < (s32)(u32)q;
        arg0->unk92 = (u32)q + 1;
        if (c) {
            q = *(func_801CE1C8_StructA **)((u8 *)arg0 + 0xC);
            arg0->unk92 = 0;
            q->unk4C++;
            func_800058DC(arg0, (s32)&func_801D0164);
        }
    }
}


typedef struct func_801D0164_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D0164_StructInner;

typedef struct func_801D0164_Struct {
    u8 pad0[0xC];
    func_801D0164_StructInner *unkC;
    u8 pad10[0x90 - 0x10];
    u16 unk90;
    u16 unk92;
} func_801D0164_Struct;

extern void func_801D01DC();

void func_801D0164(func_801D0164_Struct *arg0, s32 arg1)
{
  int new_var;
  s32 temp_t9;
  s32 temp_v0;
  if (arg0->unkC->unk4C & 0x8000)
  {
    func_801CBD70();
    func_801CE5B0((func_801CE5B0_Struct *) arg0, (s32 *) arg1);
    return;
  }
  temp_v0 = arg0->unk92;
  new_var = (arg0->unk90 << 1) < temp_v0;
  temp_t9 = arg0->unk90;
  arg0->unk92 = temp_v0 + 1;
  if (new_var)
  {
    arg0->unk92 = (arg0->unkC->unk4C & 0x8000) * 0;
    func_800058DC(arg0, (s32) func_801D01DC);
  }
}


extern f64 D_801E35C8;
typedef struct func_801D01DC_StructC { u8 pad0[0x4C]; u16 unk4C; } func_801D01DC_StructC;
typedef struct func_801D01DC_StructE { u8 pad0[0x30]; struct func_801D01DC_StructF *unk30; u8 pad34[0x17]; u8 unk4B; } func_801D01DC_StructE;
typedef struct func_801D01DC_StructF { u8 pad0[0x18]; f32 unk18; f32 unk1C; f32 unk20; u8 pad24[0x27]; u8 unk4B; } func_801D01DC_StructF;
typedef struct func_801D01DC_Struct {
    u8 pad0[0xC]; func_801D01DC_StructC *unkC;
    u8 pad10[0x50]; f32 unk60;
    u8 pad64[0x14]; u8 unk78; u8 unk79; u8 unk7A;
    u8 pad7B[0x15]; u16 unk90; u16 unk92; u8 unk94;
} func_801D01DC_Struct;

void func_801D01DC(func_801D01DC_Struct *arg0, func_801D01DC_StructE **arg1) {
    func_801D01DC_StructF *v;
    f32 t;
    f32 m;
    u8 i;
    s32 o;
    s32 c;

    t = 1.0 - (((f64)(f32)arg0->unk92 + 1.0) / ((f64)arg0->unk90 + 1.0));
    func_801CD878(arg0, (void **)arg1);
    for (i = 0; i < arg0->unk94; i++) {
        v = arg1[i]->unk30;
        m = arg0->unk60 * t;
        v->unk20 = m;
        v->unk1C = m;
        v->unk18 = m;
    }
    func_801CD994(arg0->unk78, arg0->unk79, arg0->unk7A, (u32)((f64)v->unk4B * D_801E35C8));
    {
        i = 0;
        o = arg0->unk92;
        c = (s32)arg0->unk90 < o;
        arg0->unk92 = o + 1;
        if (c || (arg0->unkC->unk4C & 0x8000)) {
            func_801CBD70();
            func_801CE5B0((void *)arg0, (s32 *)arg1);
            func_800058DC(arg0, (s32)func_801CE898);
        }
    }
}

#define D_801CD5E0 D_801CD5E0__func_801D03F4
#define D_801CD728 D_801CD728__func_801D03F4
extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);

typedef struct func_801D03F4_StructB {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D03F4_StructB;
typedef struct func_801D03F4_StructC {
    u8 pad0[0x30];
    func_801D03F4_StructB *unk30;
} func_801D03F4_StructC;
extern void func_801D0594();

void func_801D03F4(func_801CEC10_StructOuter *arg0, func_801D03F4_StructC **arg1) {
    f64 d;
    s16 k;
    s8 sp75;
    f32 t;
    s32 i;
    s32 n;
    func_801D03F4_StructB *p;

    sp75 = 0;
    if (func_801CE0E8(arg0, &sp75) == 0) {
        i = 0;
        n = 0;
        if (arg0->unk94 > 0) {
            do {
                k = n % 20;
                d = (f32)k;
                if (d < 10.0) {
                    d = -(d - 10.0);
                } else {
                    d = d - 10.0;
                }
                p = arg1[i]->unk30;
                func_801CE6F8((s32)arg0, (func_801CE6F8_Struct *)p);
                t = d / 10.0;
                D_801CD5E0(arg0, p, t);
                D_801CD728(arg0, p, t);
                i = (i + 1) & 0xFF;
                n = i;
                p->unk20 = p->unk20 * (1.0 - t);
                t = p->unk20;
                p->unk1C = t;
                p->unk18 = t;
            } while (i < arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801D0594);
    }
}
#undef D_801CD5E0
#undef D_801CD728

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D0594.s")


typedef struct func_801D080C_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801D080C_Data;
typedef struct func_801D080C_Obj {
    u8 pad0[0x30];
    func_801D080C_Data *unk30;
} func_801D080C_Obj;
typedef struct func_801D080C_Arg {
    u8 pad0[0x88];
    f32 unk88;
    u8 pad8C[8];
    u8 unk94;
} func_801D080C_Arg;

extern s16 D_801BBE22;

void func_801D080C(func_801D080C_Arg *arg0, func_801D080C_Obj **arg1) {
    f32 fs0;
    f32 fs1;
    f32 fv;
    s16 s0;
    s16 s2;
    s32 j;
    s8 sp53;
    u8 i;
    func_801D080C_Data *d;

    s0 = (s16)(D_801BBE22 - 0x800) & 0x1FFF;
    fs0 = func_8001EB64(s0);
    fs1 = func_8001EAD0(s0);
    sp53 = 0;
    if (func_801CE0E8(arg0, &sp53) == 0) {
        i = 0;
        if (arg0->unk94 > 0) {
            do {
                d = arg1[i]->unk30;
                s2 = func_8012C6B4((0x2000 / arg0->unk94) / 2) + ((i << 13) / arg0->unk94);
                fv = func_8001EB64(s2);
                d->unk4 = d->unk4 + arg0->unk88 * fv * fs0;
                d->unkC = d->unkC + arg0->unk88 * fv * fs1;
                fv = func_8001EAD0(s2);
                d->unk8 = d->unk8 + arg0->unk88 * fv;
                i++;
            } while (i < arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801CE7A8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D09F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D0C1C.s")


typedef struct func_801D0DE4_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801D0DE4_Struct;

extern void func_801D0E2C();

void func_801D0DE4(func_801D0DE4_Struct *arg0, s32 arg1) {
    s8 sp1F;

    sp1F = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1F) == 0) {
        func_800058DC(arg0, (s32) func_801D0E2C);
    }
}


typedef struct func_801D0E2C_Vec {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D0E2C_Vec;

typedef struct func_801D0E2C_Obj {
    u8 pad0[0x30];
    func_801D0E2C_Vec *unk30;
} func_801D0E2C_Obj;

typedef struct func_801D0E2C_Inner {
    u8 pad[0x4C];
    u16 unk4C;
} func_801D0E2C_Inner;

typedef struct func_801D0E2C_Struct {
    u8 pad0[0xC];
    func_801D0E2C_Inner *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[0x2C];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D0E2C_Struct;

void func_801D0E2C(func_801D0E2C_Struct *arg0, func_801D0E2C_Obj **arg1) {
    s32 i;
    func_801D0E2C_Vec *v;
    f32 f;
    u32 t;

    func_801CD878(arg0, (void **)arg1);
    if (arg0->unk92 >= 0x15) {
        i = 0;
        if (arg0->unk94 > 0) {
            do {
                v = arg1[i]->unk30;
                t = arg0->unk90;
                f = ((f64)(s32)(t - arg0->unk92) / ((f64)t - 20.0)) * arg0->unk60;
                i = (i + 1) & 0xFF;
                v->unk20 = f;
                v->unk1C = f;
                v->unk18 = f;
            } while (i < arg0->unk94);
        }
    }
    if (arg0->unk90 < arg0->unk92++ ||(arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D0F54.s")


typedef struct func_801D1080_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[4];
    s16 unk14;
} func_801D1080_StructB;
typedef struct func_801D1080_StructC {
    u8 pad0[0x30];
    func_801D1080_StructB *unk30;
} func_801D1080_StructC;
typedef struct func_801D1080_StructD {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D1080_StructD;
typedef struct func_801D1080_Struct {
    u8 pad0[0xC];
    func_801D1080_StructD *unkC;
    u8 pad10[0x5C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D1080_Struct;

void func_801D1080(func_801D1080_Struct *arg0, func_801D1080_StructC **arg1) {
    u8 i;
    f32 x, y, z;
    func_801D1080_StructB *v0;

    x = arg0->unk6C;
    y = arg0->unk70;
    z = arg0->unk74;
    func_801CD878(arg0, (void **)arg1);
    for (i = 0; i < arg0->unk94;) {
        v0 = arg1[i]->unk30;
        v0->unk4 = v0->unk4 + (v0->unk4 - x) / ((f64)arg0->unk92 + 1.0);
        v0->unk8 = v0->unk8 + (v0->unk8 - y) / ((f64)arg0->unk92 + 1.0);
        v0->unkC = v0->unkC + (v0->unkC - z) / ((f64)arg0->unk92 + 1.0);
        v0->unk14 += (s16)((f32)((f64)(i++ % 8) - 3.5) * 16.0f);
        v0->unk14 = v0->unk14 & 0x1FFF;
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}


extern void func_801D12FC();

typedef struct func_801D12A0_StructInner {
    u8 pad0[0x10];
    s16 unk10;
} func_801D12A0_StructInner;

typedef struct func_801D12A0_StructOuter {
    u8 pad0[0x30];
    func_801D12A0_StructInner *unk30;
} func_801D12A0_StructOuter;

typedef struct func_801D12A0_Struct {
    u8 pad0[0x94];
    u8 unk94;
} func_801D12A0_Struct;

void func_801D12A0(func_801D12A0_Struct *arg0, func_801D12A0_StructOuter **arg1) {
    func_801D12A0_StructInner *inner;
    s8 sp1B;

    sp1B = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1B) == 0) {
        inner = (*arg1)->unk30;
        inner->unk10 = 0x800;
        func_800058DC(arg0, (s32) func_801D12FC);
    }
}


struct func_801D12FC_Sub {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};

struct func_801D12FC_Obj {
    u8 pad0[0x30];
    struct func_801D12FC_Sub *unk30;
};

struct func_801D12FC_Cfg {
    u8 pad0[0x4C];
    u16 unk4C;
};

struct func_801D12FC_Struct {
    u8 pad0[0x0C];
    struct func_801D12FC_Cfg *unkC;
    u8 pad1[0x90 - 0x10];
    u16 unk90;
    u16 unk92;
    u8 unk94;
};

extern f64 D_801E35F8;

void func_801D12FC(struct func_801D12FC_Struct *arg0, s32 *arg1)
{
  struct func_801D12FC_Sub *temp_v0;
  unsigned int new_var;
  f64 temp_fv1;
  f32 temp_fv0;
  s32 var_v1;
  s32 temp_v0_2;
  func_801CD878(arg0, (void **) arg1);
  var_v1 = 0;
  if (arg0->unk94 > 0)
  {
    temp_fv1 = D_801E35F8;
    do
    {
      temp_v0 = ((struct func_801D12FC_Obj *) arg1[var_v1])->unk30;
      var_v1 = (var_v1 + 1) & 0xFF;
      temp_v0->unk20 = (f32) (((f64) temp_v0->unk20) * temp_fv1);
      temp_fv0 = temp_v0->unk20;
      temp_v0->unk1C = temp_fv0;
      temp_v0->unk18 = temp_fv0;
    }
    while (var_v1 < arg0->unk94);
  }
  temp_v0_2 = arg0->unk92;
  new_var = ((s32) arg0->unk90) < ((s32) temp_v0_2);
  arg0->unk92 = (u16) (temp_v0_2 + 1);
  if (new_var || (arg0->unkC->unk4C & 0x8000))
  {
    func_801CE5B0((func_801CE5B0_Struct *) arg0, arg1);
    func_800058DC(arg0, (s32) func_801CE898);
  }
}


extern void func_801D1428();

typedef struct func_801D13CC_StructInner {
    u8 pad0[0x10];
    s16 unk10;
} func_801D13CC_StructInner;

typedef struct func_801D13CC_StructOuter {
    u8 pad0[0x30];
    func_801D13CC_StructInner *unk30;
} func_801D13CC_StructOuter;

typedef struct func_801D13CC_Struct {
    u8 pad0[0x94];
    u8 unk94;
} func_801D13CC_Struct;

void func_801D13CC(func_801D13CC_Struct *arg0, func_801D13CC_StructOuter **arg1) {
    func_801D13CC_StructInner *inner;
    s8 sp1B;

    sp1B = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1B) == 0) {
        inner = (*arg1)->unk30;
        inner->unk10 = 0x800;
        func_800058DC(arg0, (s32) func_801D1428);
    }
}


typedef struct func_801D1428_StructB {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x24];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801D1428_StructB;
typedef struct func_801D1428_StructC {
    u8 pad0[0x30];
    func_801D1428_StructB *unk30;
} func_801D1428_StructC;
typedef struct func_801D1428_StructD {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D1428_StructD;
typedef struct func_801D1428_Struct {
    u8 pad0[0xC];
    func_801D1428_StructD *unkC;
    u8 pad10[0x6B];
    u8 unk7B;
    u8 unk7C;
    u8 unk7D;
    u8 unk7E;
    u8 unk7F;
    u8 pad80[0x10];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D1428_Struct;
extern f64 D_801E3600;
extern u8 D_801CD500(s32, u8, f32);

void func_801D1428(func_801D1428_Struct *arg0, func_801D1428_StructC **arg1) {
    u8 temp_v0;
    u8 i;
    func_801D1428_StructB *v1;
    f32 f;
    f64 k;
    f32 r;

    r = ((f64)(u32)arg0->unk92 + 1.0) / ((f64)(u32)arg0->unk90 + 1.0);
    temp_v0 = D_801CD500(arg0->unk7B, arg0->unk7F, r);
    i = 0;
    if (i < arg0->unk94) {
        k = D_801E3600;
        do {
        v1 = arg1[i]->unk30;
        i++;
        v1->unk48 = arg0->unk7C;
        v1->unk49 = arg0->unk7D;
        v1->unk4A = arg0->unk7E;
        v1->unk4B = temp_v0;
        v1->unk20 = (f32)((f64)v1->unk20 * k);
        f = v1->unk20;
        v1->unk1C = f;
        v1->unk18 = f;
        } while (i < arg0->unk94);
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}


typedef struct func_801D1598_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801D1598_Struct;
typedef struct func_801D1598_Inner {
    u8 pad[0x30];
    f32 *unk30;
} func_801D1598_Inner;

void func_801D1598(func_801D1598_Struct *arg0, func_801D1598_Inner **arg1) {
    f32 *p;
    s8 sp43;
    u8 i;

    sp43 = 0;
    if (func_801CE0E8(arg0, &sp43) == 0) {
        for (i = 0; i < arg0->unk94; i++) {
            p = arg1[i]->unk30;
            p[1] += ((f32)func_8012C6B4(0xC8) - 100.0) / 10.0;
            p[3] += ((f32)func_8012C6B4(0xC8) - 100.0) / 10.0;
        }
        func_800058DC(arg0, (s32)func_801CE7A8);
    }
}


typedef struct func_801D16BC_StructA {
    u8 pad0[0x94];
    u8 unk94;
} func_801D16BC_StructA;
typedef struct func_801D16BC_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D16BC_StructC;
typedef struct func_801D16BC_StructB {
    u8 pad0[0x30];
    func_801D16BC_StructC *unk30;
} func_801D16BC_StructB;


void func_801D16BC(func_801D16BC_StructA *arg0, func_801D16BC_StructB **arg1) {
    f32 temp_fs1;
    f32 temp_fs3;
    f32 temp_fs4;
    s16 temp_s0;
    s32 i;
    s8 sp5B;
    func_801D16BC_StructC *p;

    temp_s0 = (s16)(0x2800 - D_801BBE22) & 0x1FFF;
    temp_fs3 = func_8001EB64(temp_s0);
    temp_fs4 = func_8001EAD0(temp_s0);
    sp5B = 0;
    if (func_801CE0E8(arg0, &sp5B) == 0) {
        i = 0;
        if (arg0->unk94 > 0) {
            do {
                temp_fs1 = func_8012C6B4(0x14) / 20.0;
                p = arg1[i]->unk30;
                p->unk4 += temp_fs3 * temp_fs1 + func_8012C6B4(0x14) / 20.0;
                p->unkC += temp_fs4 * temp_fs1 + func_8012C6B4(0x14) / 20.0;
                p->unk8 += func_8012C6B4(0x14) / 20.0;
                p->unk20 *= func_8012C6B4(8) + 2.0;
                i = (i + 1) & 0xFF;
                p->unk1C = p->unk20;
                p->unk18 = p->unk20;
            } while (i < arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801CE7A8);
    }
}


typedef struct func_801D18BC_StructInner {
    u8 pad0[0x12];
    s16 unk12;
} func_801D18BC_StructInner;

typedef struct func_801D18BC_StructOuter {
    u8 pad0[0x30];
    func_801D18BC_StructInner *unk30;
} func_801D18BC_StructOuter;

typedef struct func_801D18BC_Struct {
    u8 pad0[0x94];
    u8 unk94;
    u8 pad95[0x98 - 0x95];
    s16 unk98;
} func_801D18BC_Struct;

extern void func_801D1918();

void func_801D18BC(func_801D18BC_Struct *arg0, func_801D18BC_StructOuter **arg1) {
    func_801D18BC_StructInner *inner;
    s8 sp1B;

    sp1B = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1B) == 0) {
        inner = (*arg1)->unk30;
        inner->unk12 = arg0->unk98;
        func_800058DC(arg0, (s32) func_801D1918);
    }
}


typedef struct func_801D1918_Struct {
    u8 pad0[0xC];
    func_801CEB64_StructC *unkC;
    u8 pad10[0x7B - 0x10];
    u8 unk7B;
    u8 unk7C;
    u8 unk7D;
    u8 unk7E;
    u8 unk7F;
    u8 pad80[0x10];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D1918_Struct;

extern f64 D_801E3608;

void func_801D1918(func_801D1918_Struct *arg0, func_801CEB64_StructOuter **arg1) {
    f32 r;
    u8 v;
    s32 i;
    u16 t;
    f64 k;
    func_801CEB64_StructInner *p;

    r = (f64)(arg0->unk92 + 1.0) / (f64)(arg0->unk90 + 1.0);
    v = D_801CD500(arg0->unk7B, arg0->unk7F, r);
    i = 0;
    if (arg0->unk94 > 0) {
        k = D_801E3608;
        do {
            p = arg1[i]->unk30;
            i = (i + 1) & 0xFF;
            p->unk48 = arg0->unk7C;
            p->unk49 = arg0->unk7D;
            p->unk4A = arg0->unk7E;
            p->unk4B = v;
            ((f32 *)p)[8] = ((f32 *)p)[8] * k;
            ((f32 *)p)[7] = ((f32 *)p)[8];
            ((f32 *)p)[6] = ((f32 *)p)[8];
        } while (i < arg0->unk94);
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}


typedef struct func_801D1A88_StructA {
    u8 pad0[0x30];
    struct func_801D1A88_StructB *unk30;
} func_801D1A88_StructA;
typedef struct func_801D1A88_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801D1A88_StructB;
typedef struct func_801D1A88_Struct {
    u8 pad0[0x88];
    f32 unk88;
    u8 pad8C[8];
    u8 unk94;
    u8 pad95[3];
    s16 unk98;
} func_801D1A88_Struct;

void func_801D1A88(func_801D1A88_Struct *arg0, func_801D1A88_StructA **arg1) {
    f32 fs0;
    f32 fs1;
    s16 s4;
    u8 i;
    s32 s2;
    func_801D1A88_StructB *s0;
    s8 sp53;
    f32 v;

    fs0 = func_8001EB64(arg0->unk98);
    fs1 = func_8001EAD0(arg0->unk98);
    sp53 = 0;
    if (func_801CE0E8(arg0, &sp53) == 0) {
        s4 = func_8012C6B4(0x2000);
        for (i = 0; i < arg0->unk94; i++) {
            s2 = i << 13;
            s0 = arg1[i]->unk30;
            v = func_8001EB64((s16)(s2 / arg0->unk94 + s4));
            s0->unk4 = s0->unk4 + arg0->unk88 * v * fs0;
            s0->unkC = s0->unkC + arg0->unk88 * v * fs1;
            v = func_8001EAD0((s16)(s2 / arg0->unk94 + s4));
            s0->unk8 = s0->unk8 + arg0->unk88 * v;
        }
        func_800058DC(arg0, (s32)func_801CE7A8);
    }
}

typedef struct func_801D1C44_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801D1C44_StructB;
typedef struct func_801D1C44_StructA {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[8];
    func_801D1C44_StructB *unk30;
} func_801D1C44_StructA;

void func_801D1C44(func_801CDF5C_Struct *arg0, func_801D1C44_StructA **arg1) {
    s32 i;
    s32 j;
    f32 sp6C;
    f32 sp68;
    s32 temp_s2;
    s8 sp63;
    s16 temp_s0 = (s16)(0x2800 - D_801BBE22) & 0x1FFF;
    s16 temp_s3;
    f32 fv;
    func_801D1C44_StructB *p;

    sp6C = func_8001EB64(temp_s0);
    sp68 = func_8001EAD0(temp_s0);
    sp63 = 0;
    if (func_801CDF5C(arg0, (s32)&sp63) != 0) {
        func_800058DC(arg0, (s32)func_801CE898);
        return;
    }
    temp_s3 = func_8012C6B4(0x2000);
    i = 0;
    if (arg0->unk94 > 0) {
        j = 0;
        do {
            temp_s2 = j << 13;
            arg1[i]->unk24 = arg1[i]->unk24 - 1;
            p = arg1[i]->unk30;
            fv = func_8001EB64((s16)((temp_s2 / arg0->unk94) + temp_s3));
            p->unk4 += (f64)fv * sp6C;
            p->unkC += (f64)fv * sp68;
            fv = func_8001EAD0((s16)((temp_s2 / arg0->unk94) + temp_s3));
            p->unk8 += (f64)fv;
            i = (i + 1) & 0xFF;
            j = i;
        } while (i < arg0->unk94);
    }
    func_800058DC(arg0, (s32)func_801CE7A8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D1E64.s")


typedef struct func_801D2088_Struct {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801D2088_Struct;

void func_801D2088(s32 arg0, s32 arg1, s32 arg2) {
    func_801D2088_Struct *p = (func_801D2088_Struct *)arg0;
    f64 d;
    f64 e;

    p->unk4 += (func_8012C6B4(60) - 30.0) / 100.0;
    d = *(f32 *)&arg1;
    if (p->unk4 > d + 1.0) p->unk4 = d + 1.0;
    if (p->unk4 < d - 1.0) p->unk4 = d - 1.0;
    p->unkC += (func_8012C6B4(60) - 30.0) / 100.0;
    e = *(f32 *)&arg2;
    if (p->unkC > e + 1.0) p->unkC = e + 1.0;
    if (p->unkC < e - 1.0) p->unkC = e - 1.0;
}

extern u8 func_801D22B4[];
typedef struct func_801D2200_StructE { u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; struct func_801D2200_StructF *unk30; } func_801D2200_StructE;
typedef struct func_801D2200_StructF { u8 pad0[8]; f32 unk8; u8 padC[4]; u16 unk10; } func_801D2200_StructF;
void func_801D2200(func_801CE5B0_Struct *arg0, func_801D2200_StructE **arg1) {
    s32 i;
    s8 sp23;
    func_801D2200_StructF *t;
    sp23 = 0;
    if (func_801CE0E8(arg0, &sp23) == 0) {
        for (i = 0; i < arg0->unk94; i++) {
            arg1[i]->unk22 = 0;
            t = arg1[i]->unk30;
            t->unk10 = 0x800;
            t->unk8 = t->unk8 + (i + 1) * 3.0;
        }
        func_800058DC(arg0, (s32)func_801D22B4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D22B4.s")


typedef struct func_801D2530_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D2530_StructC;
typedef struct func_801D2530_Struct {
    u8 pad0[0xC];
    func_801D2530_StructC *unkC;
    u8 pad10[0x6C - 0x10];
    s32 unk6C;
    u8 pad70[4];
    s32 unk74;
    u8 pad78[0x88 - 0x78];
    f32 unk88;
    u8 pad8C[0x92 - 0x8C];
    u16 unk92;
    u8 unk94;
} func_801D2530_Struct;
typedef struct func_801D2530_Elem {
    u8 pad0[0x30];
    s32 unk30;
} func_801D2530_Elem;
extern void func_801D2088(s32, s32, s32);
extern void func_80020718(s32);
extern u8 func_801D2638[];
#define func_801D277C func_801D277C__decl2026
extern u8 func_801D277C[];

void func_801D2530(func_801D2530_Struct *arg0, func_801D2530_Elem **arg1) {
    u16 i;
    s32 v;

    for (i = 0; i < arg0->unk94; i++) {
        func_801D2088(arg1[i]->unk30, arg0->unk6C, arg0->unk74);
    }
    v = arg0->unkC->unk4C;
    if (v & 0x8000) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
        return;
    }
    if (v >= 3) {
        arg0->unk92 = 0;
        if (arg0->unk88 == 1.0f) {
            func_80020718(0x10E);
            func_800058DC(arg0, (s32)func_801D2638);
        } else {
            func_80020718(0x10F);
            func_800058DC(arg0, (s32)func_801D277C);
        }
    }
}
#undef func_801D277C

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D2638.s")


extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);

typedef struct func_801D277C_StructConfig {
    u8 pad[0x4C];
    u16 flags;
} func_801D277C_StructConfig;
typedef struct func_801D277C_Struct {
    u8 pad0[0xC];
    func_801D277C_StructConfig *config;
    u8 pad10[0x50];
    f32 value;
    u8 pad64[0x2E];
    u16 timer;
    u8 count;
} func_801D277C_Struct;
typedef struct func_801D277C_StructData {
    u8 pad[0x18];
    f32 x, y, z;
} func_801D277C_StructData;
typedef struct func_801D277C_StructEntry {
    u8 pad[0x22];
    u8 active;
    u8 pad23[0xD];
    func_801D277C_StructData *data;
} func_801D277C_StructEntry;

void func_801D277C(func_801D277C_Struct *arg0, func_801D277C_StructEntry **arg1) {
    f32 fade;
    f32 value;
    f64 fadeD;
    f64 inverse;
    s32 i;
    u32 timer;
    func_801D277C_StructEntry **entry;
    func_801D277C_StructData *data;

    fade = 1.0 - ((f64) (f32) (u32) arg0->timer / 20.0);
    i = 0;
    entry = arg1;
    if (arg0->count > 0) {
        fadeD = fade;
        inverse = 1.0 - fadeD;
        do {
            data = (*entry)->data;
            D_801CD5E0(arg0, data, fade);
            D_801CD728(arg0, data, fade);
            value = ((f64) arg0->value + inverse) - 1.0;
            data->x = data->y = data->z = value;
            if (fadeD <= 0.0) {
                (*entry)->active = 0;
            }
            i++;
            entry++;
        } while (i < arg0->count);
    }
    D_801CD924(0x30, 0x80, 0xA0, fade);
    if (((s32) arg0->timer++ >= 0x15) || (arg0->config->flags & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *) arg0, (s32 *) arg1);
        func_800058DC(arg0, (s32) func_801CE898);
    }
}

void func_801D2AA4();
typedef struct func_801D2914_StructA { u8 pad0[0x30]; u8 *unk30; } func_801D2914_StructA;
typedef struct func_801D2914_StructB { u8 pad0[0x94]; u8 unk94; } func_801D2914_StructB;
typedef struct func_801D2914_StructC { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_801D2914_StructC;

void func_801D2914(func_801D2914_StructB *arg0, func_801D2914_StructA **arg1) {
    f32 spd;
    func_801D2914_StructC *s0;
    s16 ang;
    u8 sp5D;
    s32 i;

    sp5D = 0;
    if (func_801CE0E8(arg0, (s8 *)&sp5D) != 0) {
        func_800058DC(arg0, (s32)func_801CE898);
        return;
    }
    i = 0;
    if (arg0->unk94 > 0) {
        do {
            spd = (f32)((f64)(f32)func_8012C6B4(0x14) / 20.0 + 4.0);
            ang = func_8012C6B4(0x2000);
            s0 = (func_801D2914_StructC *)arg1[i]->unk30;
            s0->unk8 += (f64)(f32)func_8012C6B4(0xB4) / 10.0;
            s0->unk4 += spd * func_8001EB64(ang);
            s0->unkC += spd * func_8001EAD0(ang);
            i = (i + 1) & 0xFF;
        } while (i < arg0->unk94);
    }
    func_800058DC(arg0, (s32)func_801D2AA4);
}


typedef struct func_801D2AA4_Inner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D2AA4_Inner;

typedef struct func_801D2AA4_Obj {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D2AA4_Obj;

typedef struct func_801D2AA4_Struct {
    u8 pad0[0xC];
    func_801D2AA4_Inner *unkC;
    u8 pad10[0x5C];
    f32 unk6C;
    u8 pad70[4];
    f32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D2AA4_Struct;

extern f64 D_801E3638;
extern f64 D_801E3640;

void func_801D2AA4(func_801D2AA4_Struct *arg0, s32 **arg1) {
    s32 i;
    u16 t;
    func_801D2AA4_Obj *o;
    f64 k1;
    f64 k9;
    f32 x;
    f32 z;

    func_801CD878(arg0, arg1);
    i = 0;
    if (arg0->unk94 > 0) {
        k9 = D_801E3638;
        k1 = D_801E3640;
        do {
            o = *(func_801D2AA4_Obj **)((u8 *)arg1[i] + 0x30);
            i = (i + 1) & 0xFF;
            x = o->unk4;
            z = o->unkC;
            goto l;
        l:
            o->unk4 = x + (x - arg0->unk6C) * k1;
            o->unkC = z + (z - arg0->unk74) * k1;
            o->unk20 = o->unk20 * k9;
            o->unk1C = o->unk20;
            goto m;
        m:
            o->unk18 = o->unk20;
        } while (i < arg0->unk94);
    }
    if (arg0->unk90 < arg0->unk92++ ||(arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)&func_801CE898);
    }
}


typedef struct func_801D2BC4_StructInner {
    u8 pad0[0x80];
    f32 unk80;
    f32 unk84;
    f32 unk88;
} func_801D2BC4_StructInner;

typedef struct func_801D2BC4_Struct {
    u8 pad0[0xC];
    func_801D2BC4_StructInner *unkC;
    u8 pad10[0x54 - 0x10];
    f32 unk54;
    f32 unk58;
    f32 unk5C;
    u8 pad60[0x94 - 0x60];
    u8 unk94;
} func_801D2BC4_Struct;

extern void func_801D2C28();

void func_801D2BC4(func_801D2BC4_Struct *arg0, s32 arg1) {
    s8 sp1F;
    func_801D2BC4_StructInner *temp_v0;

    sp1F = 0;
    temp_v0 = arg0->unkC;
    arg0->unk54 = temp_v0->unk80;
    arg0->unk58 = temp_v0->unk84;
    arg0->unk5C = temp_v0->unk88;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1F) == 0) {
        func_800058DC(arg0, (s32) func_801D2C28);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D2C28.s")


typedef struct func_801D2F78_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D2F78_StructInner;

typedef struct func_801D2F78_StructOuter {
    u8 pad0[0xC];
    func_801D2F78_StructInner *unkC;
    u8 pad10[0x4C - 0x10];
    u16 unk4C;
    u16 unk4E;
} func_801D2F78_StructOuter;

void func_801D2F78(func_801D2F78_StructOuter *arg0, s32 *arg1) {
    if (!(arg0->unkC->unk4C & 0x8000)) {
        if ((s32) arg0->unk4C < (s32) arg0->unk4E) {
            return;
        }
    }
    func_801CE5B0((func_801CE5B0_Struct *) arg0, arg1);
    func_800058DC(arg0, (s32) func_801CE898);
}


typedef struct func_801D2FD0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801D2FD0_Struct;


void func_801D2FD0(func_801D2FD0_Struct *arg0, s32 arg1) {
    s8 sp1F;

    sp1F = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1F) == 0) {
        func_800058DC(arg0, (s32) func_801CF758);
    }
}


typedef struct func_801D3018_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801D3018_Struct;


void func_801D3018(func_801D3018_Struct *arg0, s32 arg1) {
    s8 sp1F;

    sp1F = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1F) == 0) {
        func_800058DC(arg0, (s32) func_801D12FC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D3060.s")


extern void func_801D337C();
struct func_801D35BC_StructObj;
extern void func_801D3060(f32 *, void *, struct func_801D35BC_StructObj **);
extern struct func_801D35BC_StructObj *D_8008DA88[];

typedef struct func_801D3200_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    void *unk30;
} func_801D3200_StructObj;

typedef struct func_801D3200_StructB {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x17];
    u8 unk3B;
} func_801D3200_StructB;

typedef struct func_801D3200_StructA {
    u8 pad[0xC];
    void *unkC;
} func_801D3200_StructA;

typedef struct func_801D3200_Struct {
    u8 pad0[0xC];
    func_801D3200_StructA *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[0x30];
    u8 unk94;
} func_801D3200_Struct;

void func_801D3200(func_801D3200_Struct *arg0, s32 arg1) {
    void *s6;
    func_801D3200_StructB *s0;
    f32 sp5C[3];
    s8 sp5B;
    u8 i;

    s6 = arg0->unkC->unkC;
    sp5B = 0;
    if (func_801CE0E8(arg0, &sp5B) == 0) {
        i = 0;
        if (arg0->unk94 > 0) {
            do {
                func_80006214(s6);
                func_801D3060(sp5C, s6, D_8008DA88);
                func_80006214(arg0);
                s0 = ((func_801D3200_StructObj *)D_8008DA88[i])->unk30;
                s0->unk4 = sp5C[0];
                s0->unk8 = sp5C[1];
                s0->unkC = sp5C[2];
                s0->unk18 = s0->unk1C = s0->unk20 = (((f64)func_8012C6B4(0xA) + 5.0) * arg0->unk60) / 10.0;
                s0->unk3B = func_8012C6B4(8);
                if (i >= 2) {
                    ((func_801D3200_StructObj *)D_8008DA88[i])->unk22 = 0;
                }
                i++;
            } while (i < arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801D337C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D337C.s")


typedef struct func_801D35BC_StructPos {
    u8 pad[4];
    f32 x, y, z;
} func_801D35BC_StructPos;
typedef struct func_801D35BC_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801D35BC_StructPos *unk30;
} func_801D35BC_StructObj;
typedef struct func_801D35BC_StructInner {
    u8 pad[0xC];
    void *unkC;
} func_801D35BC_StructInner;
typedef struct func_801D35BC_Struct {
    u8 pad0[0xC];
    func_801D35BC_StructInner *unkC;
    u8 pad10[0x84];
    u8 unk94;
} func_801D35BC_Struct;

extern s32 func_80006214(void *);
extern void func_801D36C0();

void func_801D35BC(func_801D35BC_Struct *arg0, s32 arg1) {
    s32 i;
    void *inner;
    struct { f32 x, y, z; } pos;
    s8 flag;
    func_801D35BC_StructPos *dest;

    inner = arg0->unkC->unkC;
    flag = 0;
    if (func_801CE0E8(arg0, &flag) == 0) {

        i = 0;
        arg1 = 0;
        if ((s32)arg0->unk94 > 0) {
            do {
                func_80006214(inner);
                func_801D3060(&pos.x, inner, D_8008DA88);
                func_80006214(arg0);
                dest = D_8008DA88[i]->unk30;
                dest->x = pos.x;
                dest->y = pos.y;
                dest->z = pos.z;
                if (arg1 >= 2) {
                    D_8008DA88[i]->unk22 = 0;
                }
                i = (i + 1) & 0xFF;
                arg1 = i;
            } while (i < (s32)arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801D36C0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D36C0.s")


typedef struct func_801D3950_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801D3950_Struct;

extern void func_801D3998();

void func_801D3950(func_801D3950_Struct *arg0, s32 arg1) {
    s8 sp1F;

    sp1F = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1F) == 0) {
        func_800058DC(arg0, (s32) func_801D3998);
    }
}


typedef struct func_801D3998_Struct2 {
    u8 pad0[0x4B];
    u8 unk4B;
} func_801D3998_Struct2;
typedef struct func_801D3998_Struct1 {
    u8 pad0[0x30];
    func_801D3998_Struct2 *unk30;
} func_801D3998_Struct1;
typedef struct func_801D3998_Struct0 {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0x6B];
    u8 unk7B;
    u8 pad7C[0x14];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D3998_Struct0;

void func_801D3998(func_801D3998_Struct0 *arg0, func_801D3998_Struct1 **arg1) {
    s32 i;
    f64 t;
    f64 d;
    s32 c;
    func_801D3998_Struct2 *o;

    func_801CD878(arg0, (void **)arg1);
    i = 0;
    if (arg0->unk94 > 0) do {
        o = arg1[i]->unk30;
        d = (2.0 * (f64)(f32)(u32)arg0->unk92) / (f64)(u32)arg0->unk90;
        if (d < 1.0) {
            t = -(d - 1.0);
        } else {
            t = d - 1.0;
        }
        o->unk4B = (u32)((1.0 - t) * (f64)(u32)arg0->unk7B);
        i = (i + 1) & 0xFF;
    } while (i < arg0->unk94);
    {
        i = arg0->unk92;
        c = arg0->unk90 < i;
        arg0->unk92 = i + 1;
        if (c || (((u16 *)arg0->unkC)[0x4C / 2] & 0x8000)) {
            func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
            func_800058DC(arg0, (s32)func_801CE898);
        }
    }
}


extern f64 D_801E3658;
extern f64 D_801E3660;

typedef struct func_801D3B78_StructA {
    u8 pad0[0x60];
    f32 unk60;
    u8 pad64[8];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_801D3B78_StructA;

typedef struct func_801D3B78_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D3B78_StructB;

void func_801D3B78(func_801D3B78_StructA *arg0, func_801D3B78_StructB *arg1) {
    f32 t;

    arg1->unk8 = (f32) (((f64) func_8012C6B4(0xC8) / 10.0) + (f64) arg0->unk70);
    arg1->unk4 = (f32) ((((f64) func_8012C6B4(0x64) - D_801E3658) / 10.0) + (f64) arg0->unk6C);
    arg1->unkC = (f32) ((((f64) func_8012C6B4(0x64) - D_801E3660) / 10.0) + (f64) arg0->unk74);
    arg1->unk10 = func_8012C6B4(0x2000);
    arg1->unk12 = func_8012C6B4(0x2000);
    arg1->unk14 = func_8012C6B4(0x2000);
    t = (f32) ((f64) ((f32) (func_8012C6B4(0x32) + 0x32) * arg0->unk60) / 100.0);
    arg1->unk20 = t;
    arg1->unk1C = t;
    arg1->unk18 = t;
}


typedef struct func_801D3CC8_StructInner {
    u8 pad[0x30];
    func_801CE6F8_Struct *unk30;
} func_801D3CC8_StructInner;

typedef struct func_801D3CC8_StructOuter {
    u8 pad[0x94];
    u8 unk94;
} func_801D3CC8_StructOuter;

extern void func_801D3D5C();

void func_801D3CC8(func_801D3CC8_StructOuter *arg0, func_801D3CC8_StructInner **arg1) {
    s32 var_s0;
    s8 sp2B;

    sp2B = 0;
    if (func_801CE0E8((void *) arg0, &sp2B) == 0) {
        var_s0 = 0;
        if ((s32) arg0->unk94 > 0) {
            do {
                func_801D3B78((s32) arg0, arg1[var_s0]->unk30);
                var_s0 = (var_s0 + 1) & 0xFF;
            } while (var_s0 < (s32) arg0->unk94);
        }
        func_800058DC((void *) arg0, (s32) func_801D3D5C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D3D5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D3FE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D42BC.s")

#define func_801D47E0 func_801D47E0__func_801D4618
#define func_801D47E0_Struct func_801D47E0_Struct__func_801D4618
#define func_801D47E0_StructB func_801D47E0_StructB__func_801D4618
#define func_801D47E0_StructC func_801D47E0_StructC__func_801D4618
#define func_801D47E0_StructD func_801D47E0_StructD__func_801D4618
typedef struct func_801D47E0_StructB {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[4];
    s16 unk14;
} func_801D47E0_StructB;
typedef struct func_801D47E0_StructC {
    u8 pad0[0x30];
    func_801D47E0_StructB *unk30;
} func_801D47E0_StructC;
typedef struct func_801D47E0_StructD {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D47E0_StructD;
typedef struct func_801D47E0_Struct {
    u8 pad0[0xC];
    func_801D47E0_StructD *unkC;
    u8 pad10[0x5C];
    f32 unk6C;
    u8 pad70[4];
    f32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D47E0_Struct;
extern void func_801D47E0(func_801D47E0_Struct *arg0, func_801D47E0_StructC **arg1);

typedef struct func_801D4618_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D4618_StructB;
typedef struct func_801D4618_StructA {
    u8 pad0[0x30];
    func_801D4618_StructB *unk30;
} func_801D4618_StructA;

void func_801D4618(u8 *arg0, func_801D4618_StructA **arg1) {
    func_801D4618_StructB *p;
    s16 ang;
    s8 sp59;
    u8 i;
    extern void func_801D47E0();

    sp59 = 0;
    if (func_801CE0E8(arg0, &sp59) == 0) {
        for (i = 0; i < arg0[0x94]; i++) {
            ang = (i << 13) / arg0[0x94];
            p = arg1[i]->unk30;
            p->unk4 += func_8001EAD0(ang) * 5.0;
            p->unkC += func_8001EB64(ang) * 5.0;
            p->unk8 += func_8012C6B4(200) / 10.0;
            p->unk20 *= func_8012C6B4(2) + 1.0;
            p->unk1C = p->unk20;
            p->unk18 = p->unk20;
        }
        func_800058DC(arg0, (s32)func_801D47E0);
    }
}
#undef func_801D47E0
#undef func_801D47E0_Struct
#undef func_801D47E0_StructB
#undef func_801D47E0_StructC
#undef func_801D47E0_StructD


typedef struct func_801D47E0_StructB {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[4];
    s16 unk14;
} func_801D47E0_StructB;
typedef struct func_801D47E0_StructC {
    u8 pad0[0x30];
    func_801D47E0_StructB *unk30;
} func_801D47E0_StructC;
typedef struct func_801D47E0_StructD {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D47E0_StructD;
typedef struct func_801D47E0_Struct {
    u8 pad0[0xC];
    func_801D47E0_StructD *unkC;
    u8 pad10[0x5C];
    f32 unk6C;
    u8 pad70[4];
    f32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D47E0_Struct;

void func_801D47E0(func_801D47E0_Struct *arg0, func_801D47E0_StructC **arg1) {
    s32 i;
    s32 j;
    s16 ang;
    func_801D47E0_StructB *p;
    u16 t;

    {
        extern void func_801CD878();
        func_801CD878();
    }
    i = 0;
    j = 0;
    if (arg0->unk94 > 0) {
        do {
            ang = arg0->unk92 * 0x180 + (j << 13) / arg0->unk94;
            p = arg1[i]->unk30;
            p->unk4 = func_8001EAD0(ang) * 5.0 + arg0->unk6C;
            p->unkC = func_8001EB64(ang) * 5.0 + arg0->unk74;
            i = (i + 1) & 0xFF;
            p->unk14 = p->unk14 + 4096.0 * ((j - arg0->unk94 / 2) - 0.5);
            j = i;
            p->unk14 = p->unk14 & 0x1FFF;
        } while (i < arg0->unk94);
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}


typedef struct func_801D49F0_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2B];
    u8 unk3B;
    u8 pad3C;
    u8 unk3D;
    u16 unk3E;
} func_801D49F0_Struct;

#define func_801D4B68 func_801D4B68__decl2586
extern u8 func_801D4B68[];

void func_801D49F0(u8 *arg0, s32 *arg1) {
    func_801D49F0_Struct *p;
    u16 t;
    s8 sp49;
    u8 i;

    sp49 = 0;
    if (func_801CE0E8(arg0, &sp49) == 0) {
        for (i = 0; i < arg0[0x94]; i++) {
            t = func_8012C6B4(0x2000);
            p = *(func_801D49F0_Struct **)(arg1[i] + 0x30);
            p->unk4 += func_8001EAD0(t) * 5.0;
            p->unkC += func_8001EB64((s16)t) * 5.0;
            p->unk8 += func_8012C6B4(0xC8) / 10.0;
            p->unk3B = func_8012C6B4(8);
            p->unk3D = 0xA;
            p->unk3E |= 1;
        }
        func_800058DC(arg0, (s32)func_801D4B68);
    }
}
#undef func_801D4B68

#define func_801D4B68 D_801D4B68
#undef func_801D4B68

extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);

typedef struct func_801D4B68_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x3B - 0x10];
    u8 unk3B;
    u8 unk3C;
} func_801D4B68_StructE;
typedef struct func_801D4B68_StructD {
    u8 pad0[0x30];
    func_801D4B68_StructE *unk30;
} func_801D4B68_StructD;
typedef struct func_801D4B68_StructI {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D4B68_StructI;
typedef struct func_801D4B68_StructA {
    u8 pad0[0xC];
    func_801D4B68_StructI *unkC;
    u8 pad10[0x6C - 0x10];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[0x90 - 0x78];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D4B68_StructA;

void func_801D4B68(func_801D4B68_StructA *arg0, func_801D4B68_StructD **arg1) {
    f32 f;
    s32 i;
    u16 a;
    u16 t;
    s32 c;
    func_801D4B68_StructE *s;

    func_8012D7A8();
    i = 0;
    if (arg0->unk94 > 0) {
        do {
            s = arg1[i]->unk30;
            if (s->unk3B == 0 && s->unk3C != 0) {
                a = func_8012C6B4(0x2000);
                s->unk4 = func_8001EAD0(a) * 5.0 + arg0->unk6C;
                s->unkC = func_8001EB64(a) * 5.0 + arg0->unk74;
                s->unk8 = func_8012C6B4(0xC8) / 10.0 + arg0->unk70;
                s->unk3B = func_8012C6B4(3);
            }
            f = (u32)s->unk3B * 0.125;
            D_801CD5E0(arg0, s, f);
            D_801CD728(arg0, s, f);
            i = (i + 1) & 0xFF;
        } while (i < arg0->unk94);
    }
    c = arg0->unk90 < arg0->unk92++;
    if (c || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (void *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}


typedef struct func_801D4D74_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2D];
    u8 unk3D;
    u16 unk3E;
} func_801D4D74_StructB;

typedef struct func_801D4D74_StructC {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801D4D74_StructB *unk30;
} func_801D4D74_StructC;

typedef struct func_801D4D74_StructA {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[0x1C];
    u8 unk94;
} func_801D4D74_StructA;

extern u8 func_801D4F88[];

void func_801D4D74(func_801D4D74_StructA *arg0, func_801D4D74_StructC **arg1) {
    func_801D4D74_StructB *p;
    u16 v;
    s8 sp61;
    u8 i;

    sp61 = 0;
    if (func_801CE0E8(arg0, &sp61) == 0) {
        i = 0;
        if (arg0->unk94 > 0) {
            do {
                v = func_8012C6B4(0x2000);
                p = arg1[i]->unk30;
                p->unk4 = func_8001EAD0(v) * 5.0 + arg0->unk6C;
                p->unkC = func_8001EB64(v) * 5.0 + arg0->unk74;
                p->unk8 = ((func_8012C6B4(0xF) - 7.0) / 10.0 + arg0->unk70) + (u32)i;
                p->unk3E |= 1;
                p->unk3D = (arg0->unk94 * 10) / 24;
                if (i > 0) {
                    arg1[i]->unk22 = 0;
                }
                i++;
            } while (i < arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801D4F88);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D4F88.s")


typedef struct func_801D51C0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801D51C0_Struct;

extern void func_801D5208();

void func_801D51C0(func_801D51C0_Struct *arg0, s32 arg1) {
    s8 sp1F;

    sp1F = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1F) == 0) {
        func_800058DC(arg0, (s32) func_801D5208);
    }
}


typedef struct func_801D5208_StructB {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D5208_StructB;
typedef struct func_801D5208_StructC {
    u8 pad0[0x30];
    func_801D5208_StructB *unk30;
} func_801D5208_StructC;
typedef struct func_801D5208_StructA {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[0x2C];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D5208_StructA;
extern f64 D_801E36A0;

void func_801D5208(func_801D5208_StructA *arg0, func_801D5208_StructC **arg1) {
    func_801D5208_StructB *p;
    s32 i;
    f64 k;
    extern void func_801CD878();

    func_801CD878();
    i = 0;
    if (arg0->unk94 > 0) {
        k = D_801E36A0;
        do {
            p = arg1[i]->unk30;
            i = (i + 1) & 0xFF;
            p->unk20 = (f32)((f64)p->unk20 + (f64)arg0->unk60 * k);
            p->unk12 = p->unk12 + 0x80;
            p->unk12 = p->unk12 & 0x1FFF;
            p->unk1C = p->unk20;
            p->unk18 = p->unk20;
        } while (i < arg0->unk94);
    }
    if (arg0->unk90 < arg0->unk92++ || (*(u16 *)(arg0->unkC + 0x4C) & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}


typedef struct func_801D52FC_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2E];
    u16 unk3E;
} func_801D52FC_StructC;
typedef struct func_801D52FC_StructA {
    u8 pad0[0xC];
    func_801CE618_In *unkC;
    u8 pad10[0x84];
    u8 unk94;
} func_801D52FC_StructA;
typedef struct func_801D52FC_StructB {
    u8 pad0[0x30];
    func_801D52FC_StructC *unk30;
} func_801D52FC_StructB;
extern void func_801D5380();

void func_801D52FC(func_801D52FC_StructA *arg0, func_801D52FC_StructB **arg1) {
    func_801D52FC_StructC *o;
    s8 sp18[2];

    sp18[1] = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp18[1]) == 0) {
        o = (*arg1)->unk30;
        o->unk4 = arg0->unkC->unk6C;
        o->unk8 = arg0->unkC->unk70;
        o->unkC = arg0->unkC->unk74;
        o->unk3E |= 1;
        func_800058DC(arg0, (s32)func_801D5380);
    }
}

extern u8 D_801BCC21;

typedef struct func_801D5380_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
    u8 pad4E[0x1E];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_801D5380_StructC;
typedef struct func_801D5380_StructA {
    u8 pad0[0xC];
    func_801D5380_StructC *unkC;
    u8 pad10[0x80];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D5380_StructA;
typedef struct func_801D5380_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2B];
    u8 unk3B;
} func_801D5380_StructB;
typedef struct func_801D5380_StructE {
    u8 pad0[0x30];
    func_801D5380_StructB *unk30;
} func_801D5380_StructE;
extern void func_8012D40C(void *, s32);
extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);

void func_801D5380(func_801D5380_StructA *arg0, func_801D5380_StructE **arg1) {
    s32 i;
    s32 t;
    s32 c;
    f32 sc;
    func_801D5380_StructB *s;

    if (D_801BCC21 != 6) {
        func_801CD878(arg0, (void **)arg1);
        for (i = 0; i < arg0->unk94; i = (i + 1) & 0xFF) {
            s = arg1[i]->unk30;
            s->unk4 = arg0->unkC->unk6C;
            s->unk8 = arg0->unkC->unk70;
            s->unkC = arg0->unkC->unk74;
            sc = (u32)s->unk3B * 0.125;
            D_801CD5E0(arg0, s, sc);
            D_801CD728(arg0, s, sc);
            func_8012D40C(arg0, i & 0xFF);
        }
        t = arg0->unk92;
        c = arg0->unk90 < t;
        arg0->unk92 = t + 1;
        if (c) {
            arg0->unk92 = 0;
        }
        if (arg0->unkC->unk4C & 0x8000) {
            func_801CE5B0((void *)arg0, (s32 *)arg1);
            func_800058DC(arg0, (s32)func_801CE898);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D54F8.s")


typedef struct func_801D5664_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
    u8 pad4E[0x1E];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_801D5664_StructC;

typedef struct func_801D5664_StructObj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D5664_StructObj;

typedef struct func_801D5664_Struct {
    u8 pad0[0xC];
    func_801D5664_StructC *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[0x2C];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D5664_Struct;

extern u8 D_801BCC21;
extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);
#define func_801CD5E0 D_801CD5E0
#define func_801CD728 D_801CD728

void func_801D5664(func_801D5664_Struct *arg0, func_801D5664_StructObj **arg1) {
    f32 t;
    f32 r;
    f32 q;
    s32 i;
    func_801D5664_StructObj *o;
    s16 *s3;

    if (D_801BCC21 != 6) {
        {
            extern void func_801CD878();
            func_801CD878();
        }
        q = (f32)((f64)(f32)((f64)arg0->unk92 + 1.0) / ((f64)arg0->unk90 + 1.0));
        i = 0;
        s3 = *(s16 **)(*(s32 *)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0xC) + 0x24) + 0x2C);
        if (arg0->unk94 > 0) {
            do {
                t = (f32)(((f64)(u32)i + 1.0) / ((f64)(u32)arg0->unk94 + 1.0) + (f64)q);
                t = t - (f32)(s32)t;
                o = *(func_801D5664_StructObj **)((u8 *)arg1[i] + 0x30);
                o->unk18 = o->unk1C = o->unk20 = (f32)((f64)arg0->unk60 * (1.0 - (f64)t));
                func_801CD5E0(arg0, o, t);
                func_801CD728(arg0, o, t);
                i = (i + 1) & 0xFF;
                o->unk12 = s3[9];
                o->unk4 = arg0->unkC->unk6C;
                o->unk8 = arg0->unkC->unk70;
                o->unkC = arg0->unkC->unk74;
            } while (i < arg0->unk94);
        }
        if (arg0->unk90 < arg0->unk92++) {
            arg0->unk92 = 0;
        }
        if (arg0->unkC->unk4C & 0x8000) {
            func_801CE5B0((void *)arg0, (s32 *)arg1);
            func_800058DC(arg0, (s32)func_801CE898);
        }
    }
}


extern u8 D_801D58B8(f32);
extern f64 D_801E36A8;
extern f64 D_801E36B0;

u8 func_801D58B8(f32 arg0) {
    u8 var_v1;
    f64 temp_fv0;

    temp_fv0 = (f64) arg0;
    var_v1 = (u32) (temp_fv0 / D_801E36A8) & 0xFF;
    arg0 = (f32) (temp_fv0 - D_801E36B0);
    if (arg0 > 0.0f) {
        var_v1 += D_801D58B8(arg0);
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D59A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D5CA8.s")

typedef struct func_801D5ED0_StructB {
    u8 pad0[0x30];
    u8 *unk30;
} func_801D5ED0_StructB;
typedef struct func_801D5ED0_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D5ED0_StructC;
typedef struct func_801D5ED0_Struct {
    u8 pad0[0xC];
    func_801D5ED0_StructC *unkC;
    u8 pad10[0x6B];
    u8 unk7B;
    u8 pad7C[0x14];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D5ED0_Struct;

extern u8 D_801CD500(s32, u8, f32);

void func_801D5ED0(func_801D5ED0_Struct *arg0, func_801D5ED0_StructB **arg1) {
    s32 i;
    f32 f;
    func_801D5ED0_StructB **p;

    func_8012D7A8();
    if (arg0->unk90 - 10 < arg0->unk92) {
        f = (arg0->unk92 - arg0->unk90 + 10) / 10.0;
        for (i = 0, p = *(func_801D5ED0_StructB ***)&arg1; i < arg0->unk94; i++, p++) {
            u8 *s = (*p)->unk30;
            s[0x4B] = D_801CD500(arg0->unk7B, 0, f);
        }
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}


typedef struct func_801D5FE0_StructInner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x63 - 0x28];
    u8 unk63;
} func_801D5FE0_StructInner;

typedef struct func_801D5FE0_StructOuter {
    u8 pad0[0xC];
    func_801D5FE0_StructInner *unkC;
} func_801D5FE0_StructOuter;

extern void func_801D6024();

void func_801D5FE0(func_801D5FE0_StructOuter *arg0, s32 arg1) {
    func_801D5FE0_StructInner *temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0->unk63 != 0 && temp_v0->unk24 != 0) {
        func_800058DC(arg0, func_801D6024);
    }
}

typedef struct func_801D6024_F { u8 p0[4]; f32 u4; f32 u8; f32 uC; u8 p10[8]; f32 u18; f32 u1C; f32 u20; s32 u24; s32 u28; s16 u2C; s32 u30; u8 p34[0x14]; u8 u48; u8 u49; u8 u4A; u8 u4B; } func_801D6024_F;
typedef struct func_801D6024_E { u8 p0[0x22]; u8 u22; u8 p23[0xD]; func_801D6024_F *u30; } func_801D6024_E;
typedef struct func_801D6024_D { u8 p0[0x68]; f32 u68; f32 u6C; f32 u70; u8 p74[0x3C]; f32 uB0; f32 uB4; f32 uB8; f32 uBC; f32 uC0; f32 uC4; } func_801D6024_D;
typedef struct func_801D6024_C { u8 p0[0x22]; u8 u22; } func_801D6024_C;
typedef struct func_801D6024_B { u8 p0[0x24]; func_801D6024_C *u24; u8 p28[0x34]; func_801D6024_D *u5C; } func_801D6024_B;
typedef struct func_801D6024_A { u8 p0[0xC]; func_801D6024_B *uC; u8 p10[0x80]; f32 u90; u8 p94[0xC]; f32 uA0; f32 uA4; } func_801D6024_A;
extern u8 D_801E14B4[];
extern u8 D_801E14C8[];
extern f32 D_801E3704;
extern f64 D_801E3708;
extern f64 D_801E3710;
extern u8 func_801D6280[];
s32 func_80005E44(func_801D6024_A *, void *, func_801D6024_E **, func_801D6024_D *);
void func_800062F8(func_801D6024_E *, s32);

void func_801D6024(func_801D6024_A *arg0, func_801D6024_E **arg1) {
    func_801D6024_D *d = arg0->uC->u5C;
    f32 t;
    f32 k;
    u8 a;
    func_801D6024_F *v;

    if (func_80005E44(arg0, D_801E14B4, arg1, d) == 0) {
        func_80005700(arg0);
        return;
    }
    func_80006214(arg0);
    k = D_801E3704;
    (*arg1)->u30->u2C = 0xE0;
    (*arg1)->u30->u4B = 0xC0;
    (*arg1)->u30->u4A = 0;
    v = (*arg1)->u30;
    a = v->u4A;
    v->u49 = a;
    (*arg1)->u30->u48 = a;
    (*arg1)->u30->u18 = k;
    (*arg1)->u30->u1C = k;
    (*arg1)->u30->u20 = k;
    (*arg1)->u30->u4 = 0.0f;
    (*arg1)->u30->u8 = 0.0f;
    (*arg1)->u30->uC = 0.0f;
    (*arg1)->u30->u24 = 0x100;
    (*arg1)->u30->u30 = (s32)D_801E14C8 | 0x40000000;
    if (arg0->uC->u24->u22 == 0) {
        (*arg1)->u22 = 0;
    } else {
        (*arg1)->u22 = 1;
    }
    arg0->u90 = -0.25f;
    func_800062F8(*arg1, 0x80000A00);
    if (arg0->uC->u24->u22 == 0) {
        arg0->uA0 = (d->uB0 - d->uBC) / 4.5;
        arg0->uA4 = (d->uB8 - d->uC4) / 4.5;
    } else {
        arg0->uA0 = 2.0 * d->u68 * D_801E3708;
        t = arg0->uA0;
        arg0->uA4 = (d->u6C + d->u70) * D_801E3710;
        if (t < arg0->uA4) {
            arg0->uA4 = t;
        }
    }
    func_800058DC(arg0, (s32)func_801D6280);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D6280.s")

