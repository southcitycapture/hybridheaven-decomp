#include "common.h"
#define MYCAT2(a, b) a##b
#define MYCAT(a, b) MYCAT2(a, b)
#define func_8024F188 MYCAT(func_8024F188_x, __LINE__)
#define func_8024F24C MYCAT(func_8024F24C_x, __LINE__)
#define func_8024F818 MYCAT(func_8024F818_x, __LINE__)
#define func_8024FECC MYCAT(func_8024FECC_x, __LINE__)
#define func_80250334 MYCAT(func_80250334_x, __LINE__)
extern s32 D_80010550(void *, s32);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
struct func_8024EACC_Sub2 {
    u8 pad[0xC];
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};
struct func_8024EACC_Sub {
    u8 pad[0x2C];
    struct func_8024EACC_Sub2 *unk2C;
};
struct func_8024EACC_Glob {
    u8 pad[0xE0];
    struct func_8024EACC_Sub *unkE0;
};
extern struct func_8024EACC_Glob D_801BBBF0;
#define GG(i) (*(f32 *)((u8 *)&D_801BBBF0 + 0x1E8 + 4 * (i)))
extern void func_800058DC(void *, void *);
extern void func_800179B0(void *);
extern void func_8013A1B4();
typedef struct func_8024EF6C_Vec {
    s32 x;
    s32 y;
    s32 z;
} func_8024EF6C_Vec;
extern u8 func_8024F188[];
extern void func_8024F24C(void);
extern u8 func_8024F818[];
typedef struct func_8024FE38_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024FE38_Struct;
void func_8024FE38(func_8024FE38_Struct *arg0, s32 arg1, s32 arg2);
void func_8024FECC(struct func_802433D4_Struct *arg0, s32 arg1);
extern u8 func_80250334[];


extern u8 D_80255078[];
extern u8 D_80259CBC[];
extern func_8024EF6C_Vec D_80254B18;
extern f32 D_8025A0EC__load_func_8024FCC0;
extern f32 D_8025A0F0__load_func_8024FCC0;

typedef struct func_8024FCC0_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    u16 unk90;
} func_8024FCC0_Struct;

void func_8024FCC0(func_8024FCC0_Struct *arg0, s32 arg1) {
    s32 a2;
    s32 v1;
    s32 sp5C;

    a2 = arg0->unk5C;
    v1 = arg0->unk90++;
    if (v1 == 0x1E) {
        func_800179B0(D_80255078);
    }
    if (v1 >= 0x1E) {
        sp5C = D_80010550((void *)arg1, a2);
    }
    if ((D_8011AAF4(D_80259CBC, 0x4E5, arg0, 0, 2, D_8025A0EC__load_func_8024FCC0, GG(0), D_8025A0F0__load_func_8024FCC0, GG(2), D_8025A0EC__load_func_8024FCC0, GG(3), -114.5f, GG(5), 0.0f, 35.0f, -1, -1) == 0) && (v1 >= 0x1F) && (sp5C != 0)) {
        func_8013A1B4(arg1, D_80254B18, 0xFFFFFF);
        func_800058DC(arg0, func_8024FE38);
    }
}
