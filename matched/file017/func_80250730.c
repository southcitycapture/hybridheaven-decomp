#include "context.h"

typedef struct func_80250730_StructB { u8 pad[0x4B]; u8 unk4B; } func_80250730_StructB;
typedef struct func_80250730_StructA { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; func_80250730_StructB *unk30; } func_80250730_StructA;
typedef struct func_80250730_StructC { u8 pad[0x1C]; func_80250730_StructA *unk1C; } func_80250730_StructC;

extern u8 D_8025D378[];
extern u8 D_80259280[];
extern f64 D_8025D548;
extern f64 D_8025D550;
extern s16 func_80151478(s32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80251750();
extern void func_801C4058(void *, s32, f32, s32);
extern void func_800058DC();
extern void func_80020718(s32);
void func_802508F0(struct func_802503CC_Struct *arg0, void *arg1);
extern void func_8015115C(s32, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_80250730(struct func_802503CC_Struct *arg0, func_80250730_StructC *arg1) {
    s16 sp66;
    s32 sp60;
    s32 pad;
    f32 sp58;

    sp60 = arg0->unk3C++;
    func_80251750(arg0, arg1);
    if (sp60 >= 0x14) {
        if (sp60 == 0x14) {
            sp66 = func_80151478(D_8025DE00);
            sp58 = func_8001EAD0(sp66);
            func_8011AAF4(D_8025D378, 0x362, arg0, 0, 1, 0.0f, (f32) ((f64) (sp58 * 100.0f) + D_8025D548), 45.0f, (f32) ((f64) (func_8001EB64(sp66) * 100.0f) + D_8025D550), 0.0f, 125.0f, 12.0f, -142.0f, 0.0f, 35.0f, -1, -1);
            func_8015115C(D_8025DE00, D_80259280);
            func_80020718(0x227);
        } else {
            func_801C4058(arg0, 0xBE19999A, -0.25f, 0);
        }
        arg1->unk1C->unk30->unk4B -= 4;
        if (arg1->unk1C->unk30->unk4B >= 0xFC) {
            arg1->unk1C->unk22 = 0;
            arg0->unk3C = 0;
            func_800058DC(arg0, func_802508F0);
        }
    }
}
