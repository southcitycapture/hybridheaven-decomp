#include "common.h"
#define SGP2(a, b) a##b
#define SGP(a, b) SGP2(a, b)
#define func_80242F38_StructGlobal SGP(SG_, __LINE__)
#define SG_348 struct SG_407
#define SG_412 struct SG_407
#define SG_413 struct SG_407
#define SG_584 struct SG_407
#define func_80242A54 SGP(FA_, __LINE__)
#define func_8024315C SGP(FB_, __LINE__)
#define func_8024443C SGP(FC_, __LINE__)
extern void func_800058DC(void *, void *);
extern void func_800179B0(void *);
extern void func_80133980(s32);
extern void func_801C2F0C(s32, s16 *);
extern s32 func_801C3044(void);
extern u8 func_80242A54[];
typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;
void func_8024315C(void);
typedef struct func_802439EC_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
} func_802439EC_Struct;
void func_802439EC(func_802439EC_Struct *arg0, s32 arg1);
extern void func_8024443C(void);


extern u8 D_80252454[];

typedef struct func_802438D8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802438D8_Struct;

typedef struct func_802438D8_StructLocal {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    u8 padC[0x14];
} func_802438D8_StructLocal;

void func_802438D8(func_802438D8_Struct *arg0, s32 arg1) {
    func_802438D8_StructLocal sp20;
#define temp_v0 arg1

    if (func_801C3044() == 0) {
        temp_v0 = arg0->unk3C++;
        if (temp_v0 == 0) goto c0;
        if (temp_v0 == 1) goto c1;
        if (temp_v0 != 2) goto end;
        goto c2;
    c0:
        sp20.unk0 = 0x1000;
        sp20.unk4 = 0x04100036;
        sp20.unk8 = 10.0f;
        func_801C2F0C(4, &sp20.unk0);
        return;
    c1:
        sp20.unk0 = 0x1000;
        sp20.unk4 = 0x04100027;
        sp20.unk8 = 6.0f;
        func_801C2F0C(4, &sp20.unk0);
        return;
    c2:
        sp20.unk0 = 0x1000;
        sp20.unk4 = 0x04100036;
        sp20.unk8 = 10.0f;
        func_801C2F0C(4, &sp20.unk0);
        arg0->unk3C = 0;
        func_800179B0(D_80252454);
        func_80133980(0x73);
        func_800058DC(arg0, func_802439EC);
    }
end:;
}
