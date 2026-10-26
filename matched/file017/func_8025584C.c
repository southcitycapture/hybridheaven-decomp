#include "common.h"
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
extern s32 func_80005670();
extern void func_800058DC();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern void func_80133980(s32);
typedef struct func_80255B30_A0 {
    u8 pad0[0x40]; f32 unk40; f32 unk44; f32 unk48;
    u8 pad4C[0x92 - 0x4C]; u16 unk92; u8 pad94[4];
    f32 unk98; f32 unk9C; f32 unkA0;
} func_80255B30_A0;
typedef struct func_80255B30_In { u8 pad0[0x4B]; u8 unk4B; } func_80255B30_In;
typedef struct func_80255B30_Node { u8 pad0[0x30]; func_80255B30_In *unk30; } func_80255B30_Node;
typedef struct func_80255B30_A1 { u8 pad0[4]; func_80255B30_Node *unk4; func_80255B30_Node *unk8; } func_80255B30_A1;
void func_80255B30(func_80255B30_A0 *arg0, func_80255B30_A1 *arg1);
extern void func_8025799C();
typedef struct func_8025799C_A0 { u8 pad0[0x90]; u16 unk90; u8 pad92[6]; f32 unk98; f32 unk9C; f32 unkA0; } func_8025799C_A0;
typedef struct func_8025799C_In { u8 pad0[8]; f32 unk8; } func_8025799C_In;
typedef struct func_8025799C_Nd { u8 pad0[0x30]; func_8025799C_In *unk30; } func_8025799C_Nd;
typedef struct func_8025799C_A1 { u8 pad0[4]; func_8025799C_Nd *unk4; func_8025799C_Nd *unk8; } func_8025799C_A1;
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


extern u8 D_8025DAB8[];
extern u8 D_8025DAF4[];
extern u8 D_8025975C[];
extern f32 D_8025DC20;
extern f64 D_8025DC28;
extern s32 D_8025DE24;

typedef struct func_8025584C_Struct {
    u8 pad0[0x92];
    u16 unk92;
    u8 pad94[4];
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
} func_8025584C_Struct;

void func_8025584C(func_8025584C_Struct *arg0, func_8025799C_A1 *arg1) {
    f32 sp74;
    s32 sp70;
    s32 pad;
    s32 sp68;
    f32 sp64;
    f32 temp_fv0;
    f32 zero;

    sp70 = arg0->unk92++;
    func_8025799C((func_8025799C_A0 *)arg0, arg1);
    zero = 0.0f;
    if (sp70 < 0x3C) {
        func_8011AAF4(D_8025DAB8, 0x4F8, arg0, 0, 2, D_8025DC20, -91.0f, 21.0f, -8.0f, 4294967296.0f, 1.0f, 11.0f, 4.0f, zero, 55.0f, -1, -1);
        if ((sp70 % 6) == 0) {
            temp_fv0 = (f32) func_8012C6B4(0x2000);
            sp74 = temp_fv0;
            sp64 = func_8001EAD0((s16) (s32) temp_fv0);
            sp68 = func_8012C6B4(0xB4);
            func_80380F94((f32) (((f64) sp64 * 5.0) + (f64) arg0->unk98), (f32) (((((f64) (f32) sp68 / 10.0) + (f64) arg0->unk9C) - 9.0) + D_8025DC28), (f32) (((f64) func_8001EB64((s16) (s32) sp74) * 5.0) + (f64) arg0->unkA0), zero, zero, zero, 6);
        }
    }
    if (sp70 >= 0x5A) {
        func_80133980(0x13B);
        func_8011AAF4(D_8025DAF4, 0x509, arg0, 0, 1, zero, -90.0f, 12.0f, -30.0f, zero, -43.0f, 15.0f, 15.0f, zero, 55.0f, -1, -1);
        arg0->unk92 = 0;
        D_8025DE24 = func_80005670(arg0, D_8025975C);
        func_80020718(0x18F);
        func_800058DC(arg0, func_80255B30);
    }
}
