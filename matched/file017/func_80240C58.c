#include "context.h"
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
typedef struct func_80240DEC_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
} func_80240DEC_Struct;
void func_80240DEC(func_80240DEC_Struct *arg0, s32 arg1);
extern void func_801C2F0C(s32, void *);
struct func_80241094_StructB {
    u8 pad[0x12];
    s16 unk12;
};
struct func_80241094_StructA {
    u8 pad[0x2C];
    struct func_80241094_StructB *unk2C;
};
extern struct func_80241094_StructA *D_801BBCD0;

typedef struct func_80240C58_StructB {
    u8 pad0[4];
    f32 f4, f8, fC;
    u8 pad10[2];
    s16 s12;
    u8 pad14[0x1C];
    f32 f30, f34, f38, f3C, f40, f44;
} func_80240C58_StructB;
typedef struct func_80240C58_StructA {
    u8 pad[0x2C];
    func_80240C58_StructB *p;
} func_80240C58_StructA;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern u8 D_8025C1C0[];
extern f32 D_8025C2C8;
extern func_80240C58_StructA *D_801BBCD8;

void func_80240C58(s32 arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(((func_80240C58_StructA *)D_801BBCD0)->p->s12);
    if (func_801C3DC8((void *)arg0, (f32)((f64)((func_80240C58_StructA *)D_801BBCD0)->p->f4 - (f64)sp50 * 40.0), ((func_80240C58_StructA *)D_801BBCD0)->p->f8 + 20.0f,
                      (f32)((f64)((func_80240C58_StructA *)D_801BBCD0)->p->fC - (f64)func_8001EB64(((func_80240C58_StructA *)D_801BBCD0)->p->s12) * 40.0),
                      ((func_80240C58_StructA *)D_801BBCD0)->p->f4, ((func_80240C58_StructA *)D_801BBCD0)->p->f8 + 17.0f, ((func_80240C58_StructA *)D_801BBCD0)->p->fC, D_8025C2C8, 35.0f) == 0) {
        func_8011AAF4(D_8025C1C0, 0xD8, (void *)arg0, 2, 1, 0.0f, D_801BBCD8->p->f30, D_801BBCD8->p->f34, D_801BBCD8->p->f38, 0.0f, D_801BBCD8->p->f3C, D_801BBCD8->p->f40, D_801BBCD8->p->f44, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_800058DC((void *)arg0, (void *)func_80240DEC);
    }
}
