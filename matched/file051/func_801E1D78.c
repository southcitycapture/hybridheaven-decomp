#include "common.h"
typedef struct func_801E1BE0_StructB {
    u8 pad0[0x34];
    f32 unk34;
} func_801E1BE0_StructB;
typedef struct func_801E1BE0_StructA {
    u8 pad0[0x2C];
    func_801E1BE0_StructB *unk2C;
} func_801E1BE0_StructA;
extern func_801E1BE0_StructA *D_801BBCD8;
extern f32 D_801E7950[];
extern f32 D_801E7960[];
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_801E1C28(void);


typedef struct func_801E1D78_StructB { u8 pad[0x30]; f32 f[6]; } func_801E1D78_StructB;
typedef struct func_801E1D78_StructA { u8 pad[0x2C]; func_801E1D78_StructB *p; } func_801E1D78_StructA;

s32 func_801E1D78(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.899999976158142f, -111.5f, 14.899999618530273f, 335.0f, -51.0f, 14.899999618530273f, 335.0f, -89.9000015258789f, 13.0f, 335.0f, -29.399999618530273f, 13.0f, 335.0f, 33.29999923706055f, 33.29999923706055f) != 0) {
        D_801E7950[0] = ((func_801E1D78_StructA *)D_801BBCD8)->p->f[0];
        D_801E7950[1] = ((func_801E1D78_StructA *)D_801BBCD8)->p->f[1];
        D_801E7950[2] = ((func_801E1D78_StructA *)D_801BBCD8)->p->f[2];
        D_801E7960[0] = ((func_801E1D78_StructA *)D_801BBCD8)->p->f[3];
        D_801E7960[1] = ((func_801E1D78_StructA *)D_801BBCD8)->p->f[4];
        D_801E7960[2] = ((func_801E1D78_StructA *)D_801BBCD8)->p->f[5];
        return 2;
    }
    func_801E1C28();
    return 1;
}
