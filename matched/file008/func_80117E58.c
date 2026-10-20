#include "context.h"

extern f32 func_8002FC20(f32);
extern void func_80119F9C(void *, void *);
extern void func_8011A0F0(void *);

typedef struct func_80117E58_StructB {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80117E58_StructB;
typedef struct func_80117E58_StructA {
    u8 pad0[0x2C];
    func_80117E58_StructB *unk2C;
} func_80117E58_StructA;

extern u8 D_801BBB98[];
extern f32 D_801BBB9C;
extern f32 D_801BBBA0;
extern f32 D_801BBBA4;
extern f32 D_801BBBA8;
extern f32 D_801BBBAC;
extern f32 D_801BBBB0;

void func_80117E58(void) {
    f32 a;
    f32 b;
    f32 c;

    func_80119F9C(D_801BBB90, D_801BBB92);
    func_8011A0F0(D_801BBB94);
    D_801BBBA8 = ((func_80117E58_StructA *)D_801BBCD8)->unk2C->unk3C;
    D_801BBBAC = ((func_80117E58_StructA *)D_801BBCD8)->unk2C->unk40;
    D_801BBBB0 = ((func_80117E58_StructA *)D_801BBCD8)->unk2C->unk44;
    D_801BBB9C = ((func_80117E58_StructA *)D_801BBCD8)->unk2C->unk30;
    D_801BBBA0 = ((func_80117E58_StructA *)D_801BBCD8)->unk2C->unk34;
    D_801BBBA4 = ((func_80117E58_StructA *)D_801BBCD8)->unk2C->unk38;
    func_80119F9C(D_801BBB94 + 2, D_801BBB98);
    a = D_801BBBA8 - D_801BBB9C;
    b = D_801BBBAC - D_801BBBA0;
    c = D_801BBBB0 - D_801BBBA4;
    D_801BBBB4 = func_8002FC20(a * a + b * b + c * c);
}
