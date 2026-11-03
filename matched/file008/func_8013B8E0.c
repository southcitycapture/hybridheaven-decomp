#include "common.h"
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
extern void func_8013C7F8(s32 arg0, s32 arg1, u8 arg2);


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
