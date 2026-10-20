#include "context.h"

typedef struct func_801E2AC4_Q {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
    u8 pad14[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801E2AC4_Q;
typedef struct func_801E2AC4_O {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801E2AC4_Q *unk30;
} func_801E2AC4_O;
typedef struct func_801E2AC4_Ret {
    u8 pad0[0xC];
    s32 unkC;
} func_801E2AC4_Ret;

struct func_801E397C_Struct_A;
extern struct func_801E397C_Struct_A *D_8038D8D0;
extern s32 D_8038D8CC;
extern u8 D_8038D8BC[];
extern u8 D_8038D88C[];
extern u8 D_8038D89C[];
extern u8 D_8017B710[];
extern u8 D_8017B148[];
extern u8 D_801E8BC8[];
extern f32 D_801E94E0;
extern f32 D_801E94E4;
extern f32 D_801E94E8;
extern f32 D_801E94EC;
extern f32 D_801E94F0;
extern f32 D_801E94F4;
extern f32 D_801E94F8;

#define OBJ(i) ((*lst)[i])
#define Q(i) (OBJ(i)->unk30)
#define COMMON(i)               \
    Q(i)->unk18 = 1.0f;         \
    Q(i)->unk1C = 1.0f;         \
    Q(i)->unk20 = 1.0f;         \
    Q(i)->unk24 = 0x13;         \
    Q(i)->unk30 = (s32)D_8017AF38; \
    Q(i)->unk4C = 0;            \
    Q(i)->unk4D = 0;            \
    Q(i)->unk4E = 0;            \
    Q(i)->unk4F = 0xAD;
#define TAIL(i, sym)                 \
    Q(i)->unk30 = (s32)sym | 0x40000000; \
    Q(i)->unk18 = 1.0f;              \
    Q(i)->unk1C = 1.0f;              \
    Q(i)->unk20 = 1.0f;              \
    Q(i)->unk4 = 0.0f;               \
    Q(i)->unk8 = 0.0f;               \
    Q(i)->unkC = 0.0f;               \
    OBJ(i)->unk22 = 0;

s32 func_801E2AC4(s32 arg0, s32 arg1) {
    s32 i;
    func_801E2AC4_O ***lst;
    f32 e0;
    f32 e4;
    f32 e8;

    if (((func_801E2AC4_Ret *)func_801BF6B0(2))->unkC <= 0) {
        return 1;
    }
    func_80005E44(D_8038D8CC, D_8038D8BC);
    for (i = 0; i < 5; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    *(s32 *)(D_8038D8BC + 4) = 0x80000B00;
    for (i = 0; i != 2; i++) {
        func_80005E44(D_8038D8CC, D_8038D8BC);
    }
    *(s32 *)(D_8038D89C + 4) = 0x80000A00;
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, D_8038D8BC);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x294, 0);
    func_8012C89C(D_8038D8CC, 1, 0x298, 2);
    func_8012C89C(D_8038D8CC, 2, 0x298, 3);
    func_8012C89C(D_8038D8CC, 3, 0x298, 0);
    func_8012C89C(D_8038D8CC, 4, 0x298, 1);
    func_8012C89C(D_8038D8CC, 5, 0x295, 0);
    func_8012C89C(D_8038D8CC, 6, 0x288, 8);
    func_8012C89C(D_8038D8CC, 7, 0x288, 3);
    func_8012C89C(D_8038D8CC, 8, 0x288, 6);
    func_8012C89C(D_8038D8CC, 9, 0x288, 7);
    lst = (func_801E2AC4_O ***)&D_8038D8D0;
    e0 = D_801E94E0;
    e4 = D_801E94E4;
    e8 = D_801E94E8;

    Q(0)->unk4 = -42.0f;
    Q(0)->unk8 = -470.0f;
    Q(0)->unkC = 272.0f;
    Q(0)->unk12 = 0;
    COMMON(0)

    Q(1)->unk4 = e0;
    Q(1)->unk8 = -470.0f;
    Q(1)->unkC = e4;
    Q(1)->unk12 = 0xC00;
    COMMON(1)

    Q(2)->unk4 = e0;
    Q(2)->unk8 = -470.0f;
    Q(2)->unkC = e4;
    Q(2)->unk12 = 0xC00;
    COMMON(2)

    Q(3)->unk4 = e8;
    Q(3)->unk8 = -470.0f;
    Q(3)->unkC = D_801E94EC;
    Q(3)->unk12 = 0xC00;
    COMMON(3)

    Q(4)->unk4 = e8;
    Q(4)->unk8 = -470.0f;
    Q(4)->unkC = D_801E94F0;
    Q(4)->unk12 = 0xC00;
    COMMON(4)

    Q(5)->unk4 = D_801E94F4;
    Q(5)->unk8 = -470.0f;
    Q(5)->unkC = D_801E94F8;
    Q(5)->unk12 = 0xC00;
    COMMON(5)

    TAIL(6, D_801E8BC8)
    TAIL(7, D_801E8BC8)
    TAIL(8, D_8017B710)
    TAIL(9, D_8017B148)
    return 2;
}
