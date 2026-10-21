#include "context.h"

extern f32 func_8001EAD0(s32);
extern f32 func_8001EB64(s32);
extern void func_800208C4(s32);
extern void func_801C1508();
extern void *D_801CC8A0;
extern s32 D_801CC8AC;
extern s32 D_801CC8B0;
extern u8 D_801CC9BC[];
extern u8 D_801CC9E4[];
extern u8 D_801CCA0C[];
extern u8 D_801CEAE0[];
extern s32 D_801C11BC(s32);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_801C134C_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C134C_Struct;

void func_801C134C(void *arg0, s32 arg1) {
    f32 temp;
    f32 t;
    f32 z;
    f32 pad;
    f32 sp5C;
    f32 v;

    v = func_8001EAD0(0x266);
    temp = func_8001EB64(0x266);
    D_801CC8A0 = arg0;
    sp5C = v / temp;
    D_801C11BC(0x64);
    if (D_801CC8CC == 2) {
        func_80116E80(0x100);
        D_801CC8A8 = func_80005670((s32)arg0, D_801CC9BC);
        D_801CC8AC = func_80005670((s32)arg0, D_801CC9E4);
        D_801CC8B0 = func_80005670((s32)arg0, D_801CCA0C);
        t = 10.0f;
        z = 0.0f;
        v = (t < 0.0f) ? -t : t;
        func_8011AAF4(D_801CEAE0, 0x205, (s32)arg0, 0, 1, 3.0f, t, z, 2.0f, 3.0f, z, v * sp5C + z, 2.0f, z, 30.0f, -1, 0xFFFFFFFF);
        func_801C125C(-3);
        ((func_801C134C_Struct *)arg0)->unk3C = 0;
        ((func_801C1308_Struct *)&D_801BBBF0)->unk17 = 0;
        ((func_801C1308_Struct *)&D_801BBBF0)->unk18 = 1;
        ((func_801C1308_Struct *)&D_801BBBF0)->unk19 = 1;
        ((func_801C1308_Struct *)&D_801BBBF0)->unk1A = 0;
        ((func_801C1308_Struct *)&D_801BBBF0)->unk1B = 1;
        ((func_801C1308_Struct *)&D_801BBBF0)->unk1C = 1;
        func_80002364(0x0C000C0C, 0xA, 2, 0);
        func_800208C4(0x87);
        func_800058DC((s32)arg0, func_801C1508);
    }
}
