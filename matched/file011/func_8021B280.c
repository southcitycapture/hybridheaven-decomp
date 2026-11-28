#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern void func_800058DC(void *obj, void *fn);
extern s32 func_80151BC4(void);
typedef struct func_8021B560_StructO { u8 pad[0x90]; u8 unk90; u8 pad2[0x9C-0x91]; s32 unk9C; } func_8021B560_StructO;
void func_8021B560(func_8021B560_StructO *arg0, s32 arg1);
extern void func_8022C7A4(void *);
typedef struct func_8021B150_Struct {
    u8 pad0[0x16];
    u8 unk16;
    u8 pad1[0x24 - 0x17];
    u32 unk24;
} func_8021B150_Struct;
extern func_8021B150_Struct D_8017DD7C;
typedef struct func_8021D36C_Struct {
    u8 pad0[0x12];
    u16 unk12;
    u16 unk14;
    u8 unk16;
    u8 unk17;
    u8 pad1[0x22 - 0x18];
    u8 unk22;
} func_8021D36C_Struct;
#define s ((func_8021D36C_Struct *)&D_8017DD7C)


typedef struct func_8021B280_StructBitsA { u8 a:1,b:2,c:4,d:1; } func_8021B280_StructBitsA;
typedef struct func_8021B280_StructBitsB { u8 a:1,b:2,c:2,d:3; } func_8021B280_StructBitsB;
typedef struct func_8021B280_StructBitsC { u8 e:3,f:1,rest:4; } func_8021B280_StructBitsC;
typedef struct func_8021B280_StructBitsD { u8 a:1,b:2,rest:5; } func_8021B280_StructBitsD;
typedef struct func_8021B280_StructG {
    u8 pad0[0x2C]; u16 unk2C; u8 pad2E[2]; u16 unk30;
    u8 pad32[0x44C - 0x32]; s16 unk44C, unk44E;
    u8 pad450[0x479 - 0x450]; u8 unk479; u8 pad47A[2];
    func_8021B280_StructBitsA unk47C;
    func_8021B280_StructBitsB unk47D;
    func_8021B280_StructBitsC unk47E;
    u8 pad47F[5]; func_8021B280_StructBitsD unk484;
    u8 pad485[0x784 - 0x485]; u8 unk784[0x2D];
    u8 pad7B1[0x815 - 0x7B1]; u8 unk815; u8 pad816[2];
    func_8021B280_StructBitsA unk818;
    func_8021B280_StructBitsB unk819;
    func_8021B280_StructBitsC unk81A;
    u8 pad81B[5]; func_8021B280_StructBitsD unk820;
    u8 pad821[0x1031 - 0x821]; u8 unk1031, unk1032;
} func_8021B280_StructG;
typedef struct func_8021B280_StructL { u8 unk0[0x14],unk14[6],unk1A[6],unk20,unk21,unk22; } func_8021B280_StructL;
typedef struct func_8021B280_StructO { u8 pad0[0x90],unk90,pad91[0xAE-0x91],unkAE,padAF[3],unkB2; } func_8021B280_StructO;
extern s32 func_80152890(s32);
extern u16 D_8017DDA4[];
extern func_8021B280_StructL D_80240730;
#define gg ((func_8021B280_StructG *)D_801BBBF0)
void func_8021B280(func_8021B280_StructO *arg0, s32 arg1) {
    u8 i;
    s32 v;
    if (s->unk16 != 0) {
        v = s->unk16;
        if (v == 1) s->unk14 = 5;
        if (v == 2) s->unk14 = func_80152890(0) - 2;
        if (s->unk22 == 0) {
            for (i = 0; i < 0x2D; i++) gg->unk784[i] = 0;
        }
        goto reset;
    }
reset:
    arg0->unkAE = 0;
    arg0->unkB2 = 0;
    arg0->unk90 = 0;
    func_8022C7A4(D_801BC03C);
    if (s->unk22 == 0 && s->unk16 != 0) gg->unk44E = gg->unk44C;
    gg->unk47C.a = 0;
    gg->unk47C.b = 0;
    gg->unk47C.c = 0;
    gg->unk47C.d = 0;
    gg->unk47D.a = 0;
    gg->unk47E.f = 0;
    gg->unk47D.b = 0;
    gg->unk47D.c = 0;
    gg->unk47D.d = 0;
    gg->unk47E.e = 0;
    gg->unk484.a = 0;
    gg->unk484.b = 0;
    gg->unk818.a = 0;
    gg->unk818.b = 0;
    gg->unk818.c = 0;
    gg->unk818.d = 0;
    gg->unk819.a = 0;
    gg->unk81A.f = 0;
    gg->unk819.b = 0;
    gg->unk819.c = 0;
    gg->unk819.d = 0;
    gg->unk81A.e = 0;
    gg->unk820.a = 0;
    gg->unk820.b = 0;
    gg->unk479 = (gg->unk30 + 0x80) & 0xFF;
    gg->unk815 = gg->unk30 & 0xFF;
    gg->unk1032 = 0;
    if (D_8017DDA4[2] < 0xFFFF && func_80151BC4() != 2 &&
        (s->unk16 == 0 || (s->unk16 != 0 && s->unk17 != 0)) && gg->unk2C != 0xA) D_8017DDA4[2]++;
    for (i = 0; i < 0x14; i++) D_80240730.unk0[i] = 0;
    for (i = 0; i < 6; i++) D_80240730.unk14[i] = 0;
    for (i = 0; i < 6; i++) D_80240730.unk1A[i] = 0;
    D_80240730.unk20 = D_80240730.unk21 = D_80240730.unk22 = 0;
    func_800058DC(arg0, func_8021B560);
    gg->unk1031 = 1;
}
