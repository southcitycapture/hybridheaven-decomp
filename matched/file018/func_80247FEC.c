#include "common.h"
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
typedef struct func_802472C8_StructB {
    u8 pad0[0x30];
    f32 f[6];
} func_802472C8_StructB;
typedef struct func_802472C8_StructA {
    u8 pad0[0x2C];
    func_802472C8_StructB *unk2C;
} func_802472C8_StructA;
extern func_802472C8_StructA *D_801BBCD8;
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern func_80246E60_StructGlobal D_80258F3C;
extern s32 D_80258FD8;
extern s8 D_8025C704;
extern u32 D_8025C708;
extern f32 D_8025C70C;
extern f32 D_8025C714;
extern f32 D_8025C71C;
extern f32 D_8025C720;
extern f32 D_8025C724;
extern u8 D_8025C7E8;
#define LQ(p,l) p##_##l
#define LP(p,l) LQ(p,l)
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
extern s32 func_8001EF38(f32, f32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012A94C(void *, s32);
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);


void func_80248280();

typedef struct func_80247FEC_StructN {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80247FEC_StructN;
typedef struct func_80247FEC_StructM {
    u8 pad0[0x2C];
    func_80247FEC_StructN *unk2C;
} func_80247FEC_StructM;
typedef struct func_80247FEC_StructB {
    u8 pad0[0x78];
    s16 unk78;
} func_80247FEC_StructB;
typedef struct func_80247FEC_Struct {
    u8 pad0[0x24];
    func_80247FEC_StructM *unk24;
    u8 pad28[0x34];
    func_80247FEC_StructB *unk5C;
    u8 pad60[0x30];
    s16 unk90;
} func_80247FEC_Struct;

extern u8 D_8025C414[];
extern s32 D_8013A334(f32 *, s32, s32, s32);

void func_80247FEC(func_80247FEC_Struct *arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;
    u16 v;
    func_80247FEC_StructB *sp80;
    f32 sp74[3];
    f32 var_fa1;
    f32 var_ft4;
    func_802472C8_StructA *p;

    sp80 = arg0->unk5C;
    D_80258FD8 = 0;
    D_8025C708 = 0;
    if (func_8012CE9C(arg1, sp80, D_80258F3C, 0xA) != 0) {
        return;
    }
    {
        func_80010550(arg1, sp80);
        v = (arg0->unk24->unk2C->unk12 - func_8001EF38(D_8025C70C - arg0->unk24->unk2C->unk4, D_8025C714 - arg0->unk24->unk2C->unkC)) & 0x1FFF;
        if (D_8025C7E8 != 0) {
            sp80->unk78 = 1;
            arg0->unk90 = 0x20;
            func_800058DC(arg0, func_80248280);
            return;
        }
        if ((v < 0x200) || ((v >= 0x1E01) && (v < 0x1FFF))) {
            sp80->unk78 = 1;
            arg0->unk90 = 0x20;
            D_8013A334(sp74, arg1, (s32)sp80, 6);
            D_8025C71C = sp74[0];
            D_8025C720 = sp74[1];
            D_8025C724 = sp74[2];
            p = D_801BBCD8;
            temp_fv0 = p->unk2C->f[0];
            if (temp_fv0 < D_8025C71C) {
                var_ft4 = -(temp_fv0 - D_8025C71C);
            } else {
                var_ft4 = temp_fv0 - D_8025C71C;
            }
            temp_fv1 = p->unk2C->f[2];
            if (temp_fv1 < D_8025C724) {
                var_fa1 = -(temp_fv1 - D_8025C724);
            } else {
                var_fa1 = temp_fv1 - D_8025C724;
            }
            if ((var_fa1 + var_ft4) > 50.0f) {
                D_8025C704 = 0;
                func_8011AAF4(D_8025C414, 0x59D, arg0, 0, 1, 4.0f, p->unk2C->f[0], p->unk2C->f[1], p->unk2C->f[2], 4294967296.0f, D_8025C71C, D_8025C720, D_8025C724, 0.0f, 35.0f, -1, -1);
            }
            func_800058DC(arg0, func_80248280);
        }
        func_8012A94C(arg0, 0x80);
    }
}
