#include "context.h"
extern u8 D_801BCAE0[];
extern void func_802415B8(s32, s32);
extern void func_80241010(void *, void *, void *, u8);
extern void func_80241054(void *, void *, void *, u8, s32, f32);
struct func_80241378_Struct2 { u8 pad[0x6C]; u8 unk6C; };
typedef struct func_80241378_Data {
    u8 unk0, unk1, unk2, unk3, unk4;
    u8 pad[3];
    u8 *unk8;
} func_80241378_Data;
typedef struct func_80241378_Struct {
    u8 pad0[0xC];
    struct func_80241378_Struct2 *unkC;
    u8 pad1[0x20];
    func_80241378_Data *unk30;
    u8 unk34;
    u8 unk35;
} func_80241378_Struct;

void func_80241378(func_80241378_Struct *arg0, s32 arg1) {
    func_80241378_Data *s1;
    u8 *v1;
    f32 f;

    s1 = arg0->unk30;
    v1 = s1->unk8;
    if (arg0->unk35 == 0) goto c0;
    if (arg0->unk35 == 1) goto c1;
    if (arg0->unk35 == 2) goto c2;
c0:
    func_80241010(D_801BCAE0 + 0x30, D_801BCAE0 + 0x31, D_801BCAE0 + 0x32, s1->unk0);
    func_80241010(D_801BCAE0 + 0x33, D_801BCAE0 + 0x34, D_801BCAE0 + 0x35, s1->unk1);
    func_80241010(D_801BCAE0 + 0x39, D_801BCAE0 + 0x3A, D_801BCAE0 + 0x3B, s1->unk2);
    arg0->unk34 = 0;
    arg0->unk35 = arg0->unk35 + 1;
c1:
    arg0->unk34 = arg0->unk34 + 1;
    if (s1->unk3 < arg0->unk34) {
        arg0->unk34 = 0;
        arg0->unk35 = arg0->unk35 + 1;
    }
    goto end;
c2:
    f = ((f64)(u32)arg0->unk34 + 1.0) / ((f64)(u32)s1->unk4 + 1.0);
    func_80241054(D_801BCAE0 + 0x30, D_801BCAE0 + 0x31, D_801BCAE0 + 0x32, s1->unk0, v1[0], f);
    func_80241054(D_801BCAE0 + 0x33, D_801BCAE0 + 0x34, D_801BCAE0 + 0x35, s1->unk1, v1[1], f);
    func_80241054(D_801BCAE0 + 0x39, D_801BCAE0 + 0x3A, D_801BCAE0 + 0x3B, s1->unk2, v1[2], f);
    arg0->unk34 = arg0->unk34 + 1;
    if (arg0->unk34 >= s1->unk4) {
        arg0->unk34 = 0;
        arg0->unk35 = 0;
        arg0->unk30 = (func_80241378_Data *)v1;
    }
end:
    if (arg0->unkC->unk6C != 0) {
        func_800058DC(arg0, func_802415B8);
    }
}
