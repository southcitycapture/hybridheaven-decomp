#include "common.h"

extern f32 D_801CF260;
extern f32 D_801CF290;
extern f32 D_801CF294;
extern f32 func_8001EAD0(s32);
extern f32 func_8001EB64(s32);
extern s32 D_80006214(void *);
extern s32 D_801BBC2C;
extern s32 D_801C11BC(s32);
extern s32 D_801CC8A4;
extern s32 D_801CC8A8;
extern s32 D_801CC8AC;
extern s32 D_801CC8B0;
extern s32 D_801CC8B4;
extern s32 D_801CC8B8;
extern s32 D_801CC8BC;
extern s32 D_801CC8C0;
extern s32 func_80005670(s32, void *);
extern s32 func_8000C3B0(void *);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_80126A0C(s32, s32, s32);
extern s32 func_8012FE50();
extern s32 func_80130290();
extern s32 func_801302CC();
extern s32 func_8013E770();
extern s32 func_8013E794(void);
extern s32 func_8013E7C0();
extern s32 func_8013EA54();
extern s32 func_8013EFF0();
extern s32 func_80140368();
extern s32 func_801403F8();
extern s32 func_801406A4();
extern s32 func_80153008();
extern s32 func_801C1088(s32, s8);
extern s32 func_801C11BC();
extern s32 func_801C1334(void);
extern u16 D_80037754;
extern u16 D_801BBBF4;
extern u16 D_801CFD0E;
extern u16 func_80001060();
extern u8 D_80044090[];
extern u8 D_80089474[];
extern u8 D_801BBC0D;
extern u8 D_801BBF0A[];
extern u8 D_801CC8C4;
extern u8 D_801CC8C8;
extern u8 D_801CC8CC;
extern u8 D_801CC9BC[];
extern u8 D_801CC9E4[];
extern u8 D_801CC9F8[];
extern u8 D_801CCA0C[];
extern u8 D_801CCA20[];
extern u8 D_801CCA34[];
extern u8 D_801CE978[];
extern u8 D_801CE994[];
extern u8 D_801CE9B0[];
extern u8 D_801CE9CC[];
extern u8 D_801CEAE0[];
extern u8 D_801CEB18[];
extern u8 D_801CEB88[];
extern u8 D_801CEB9C[];
extern u8 D_801CEBB4[];
extern u8 D_801CEBC4[];
extern u8 D_801CEBD4[];
extern u8 D_801CEBE4[];
extern u8 D_801CEBF4[];
extern u8 D_801CEC04[];
extern u8 D_801CEC14[];
extern u8 D_801CEC34[];
extern u8 D_801CEC6C[];
extern u8 D_801CEC7C[];
extern u8 D_801CEC8C[];
extern u8 D_801CEC9C[];
extern u8 D_801CECAC[];
extern u8 D_801CECBC[];
extern u8 D_801CECCC[];
extern u8 D_801CED10[];
extern u8 D_801CED20[];
extern u8 D_801CED2C[];
extern u8 D_801CED38[];
extern u8 D_801CED44[];
extern u8 D_801CED48[];
extern u8 D_801CED4C[];
extern u8 D_801CEDA4[];
extern u8 D_801CEDB8[];
extern u8 D_801CEDCC[];
extern u8 D_801CEDE0[];
extern u8 D_801CEDF4[];
extern u8 D_801CEE08[];
extern u8 D_801CEE0C[];
extern u8 D_801CEE24[];
extern u8 D_801CEE38[];
extern u8 D_801CEE44[];
extern u8 D_801CEE50[];
extern u8 D_801CEE5C[];
extern u8 D_801CEE60[];
extern u8 D_801CEE64[];
extern u8 D_801CEE68[];
extern u8 D_801CEE74[];
extern u8 D_801CEE80[];
extern u8 D_801CEE8C[];
extern u8 D_801CEE98[];
extern u8 D_801CEEA4[];
extern u8 D_801CEEA8[];
extern u8 D_801CEEAC[];
extern u8 D_801CEEEC[];
extern u8 D_801CEEF8[];
extern u8 D_801CEF04[];
extern u8 D_801CEF10[];
extern u8 D_801CEF1C[];
extern u8 D_801CEF28[];
extern u8 D_801CEF34[];
extern u8 D_801CEF40[];
extern u8 D_801CEF4C[];
extern u8 D_801CEF58[];
extern u8 D_801CEF64[];
extern u8 D_801CEF70[];
extern u8 D_801CEF74[];
extern u8 D_801CEFF0[];
extern u8 D_801CEFF4[];
extern u8 D_801CEFF8[];
extern u8 D_801CF008[];
extern u8 D_801CF01C[];
extern u8 D_801CF024[];
extern u8 D_801CF034[];
extern u8 D_801CF048[];
extern u8 D_801CF050[];
extern u8 D_801CF060[];
extern u8 D_801CF074[];
extern u8 D_801CF07C[];
extern u8 D_801CF084[];
extern u8 D_801CF110[];
extern u8 D_801CF120[];
extern u8 D_801CF130[];
extern u8 D_801CF140[];
extern u8 D_801CF150[];
extern u8 D_801CF160[];
extern u8 D_801CF170[];
extern u8 D_801CF190[];
extern u8 func_8013E850();
#define func_801C1624 func_801C1624__decl
extern u8 func_801C1624[];
#define func_801C220C func_801C220C__decl
extern u8 func_801C220C[];
extern u8 func_801C3F48[];
extern void *D_801CC8A0;
extern void func_80002364(s32, s32, s32, s32);
extern void func_800023A8(s32);
extern void func_800023EC(void);
extern void func_80005700(s32);
extern void func_800058DC(s32 arg0, void (*arg1)(void));
extern void func_800179B0(s32);
extern void func_8001B204();
extern void func_80020718(s32);
extern void func_800208C4(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012D918(s32, s32, s32, u8, s32);
extern void func_8012FFCC(s32);
extern void func_80133830();
extern void func_80133950();
extern void func_80133A70();
extern void func_8013EF54();
extern void func_80140600();
extern void func_80142570();
extern void func_801451C0(void *, s32);
extern void func_80145310(void *, s32, s32);
extern void func_80145348(u8 *, s32, s32);
extern void func_80145390(s32);
extern void func_801453CC();
extern void func_80145E78(s32, s32, s32);
extern void func_80146208(u8 *, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8014AC60();
extern void func_8014AD20();
extern void func_80152240();
extern void func_80152D0C();
extern void func_80152D3C();
extern void func_80152D4C();
extern void func_80152F7C();
extern void func_801C0F98();
extern void func_801C1034();
extern void func_801C1308();
extern void func_801C1508();
extern void func_801C17C8();
extern void func_801C184C();
extern void func_801C18FC();
extern void func_801C1A30(s32 arg0, s32 arg1);
extern void func_801C1A98();
extern void func_801C1BDC(s32 arg0, s32 arg1);
extern void func_801C1D7C();
extern void func_801C1DB8();
extern void func_801C2050();
extern void func_801C258C();
extern void func_801C2684();
extern void func_801C27D0();
extern void func_801C27DC();
extern void func_801C2A38(s32 arg0, s32 arg1);
extern void func_801C2FDC(s32 arg0, s32 *arg1);
extern void func_801C3288();
extern void func_801C33C8();
extern void func_801C3934();
extern void func_801C3A40();
extern void func_801C3BD8();
extern void func_801C3C14();
extern void func_801C3CD0();
extern void func_801C3D50();
extern void func_801C3D84();
extern void func_801C3E24();
extern void func_801C4074();
extern void func_801C40EC(s32 arg0, s32 arg1);
extern void func_801C4200();
extern void func_801C44C4();
extern void func_801C45C8(s32 arg0, s32 arg1);
extern void func_801C4640();
extern void func_801C4674();
extern void func_801C47C4(s32 arg0, s32 arg1);
extern void func_801C4840();
extern void func_801C48A4(s32 arg0, s32 arg1);
extern void func_801C4954();
extern void func_801C4AA8();
extern void func_801C4E90();
extern void func_801C5378();
extern void func_801C5824();
extern void func_801C5910(s32 arg0, s32 arg1);
extern void func_801C5944();
extern void func_801C59F4();
extern void func_801C5A00();

#define D_80005E44 D_80005E44__func_801C0B30
#define D_80164F40 D_80164F40__func_801C0B30
#define D_801CC858 D_801CC858__func_801C0B30
#define func_8000522C func_8000522C__func_801C0B30
#define func_800058DC func_800058DC__func_801C0B30
#define func_80006214 func_80006214__func_801C0B30
#define func_8001F430 func_8001F430__func_801C0B30
#define func_80116E80 func_80116E80__func_801C0B30
#define func_801C0F64 func_801C0F64__func_801C0B30
#define func_801C2DB8_V func_801C2DB8_V__func_801C0B30
typedef struct func_801C2DB8_V { s32 a, b, c, d; } func_801C2DB8_V;
extern func_801C2DB8_V D_80164F40;
extern void func_800058DC(s32, void *);
extern void func_80006214(void *);


typedef union func_801C0B30_StructGfx {
    struct { unsigned int w0, w1; } words;
    long long force_structure_alignment;
} func_801C0B30_StructGfx;
typedef struct func_801C0B30_StructInner {
    s16 unk0; u8 pad2[0x26]; func_801C0B30_StructGfx *unk28;
} func_801C0B30_StructInner;
typedef struct func_801C0B30_StructOuter {
    u8 pad[0x24]; u32 unk24; s16 unk28; u8 pad2A[6];
    func_801C0B30_StructInner *unk30;
} func_801C0B30_StructOuter;
extern void func_80116E80(s32);
extern void *func_8001F430(s32);
extern u32 func_8000522C(s32, s32);
extern s32 D_801CC858[][5];
extern s32 D_80005E44(s32, void *);
void func_801C0F64(s32 arg0, s32 arg1);

#define CMD(a,b) { func_801C0B30_StructGfx *g = p++; g->words.w0 = (a); g->words.w1 = (b); }
#define REV(a,b) CMD(a,b)
#define LTB(img) { CMD(0xFD100000, img); CMD(0xF5100000, 0x0709C260); CMD(0xE6000000, 0); CMD(0xF3000000, 0x077FF080); CMD(0xE7000000, 0); CMD(0xF5102000, 0x9C260); CMD(0xF2000000, 0xFC07C); }
#define TRECT(a,b) { CMD(a, b); CMD(0xE1000000, 0); CMD(0xF1000000, 0x04000400); }
void func_801C0B30(s32 arg0, func_801C0B30_StructOuter **arg1) {
    func_801C0B30_StructGfx *p;

    func_80116E80(0x80);
    if (D_80005E44(arg0, &D_80164F40) != 0) {
        s32 i;
        s32 j;

        func_80006214((void *)arg0);
        (*arg1)->unk28 = 0x80;
        p = func_8001F430(0x1000);
        (*arg1)->unk30->unk28 = p;
        (*arg1)->unk30->unk0 = 0;
        (*arg1)->unk24 = 0x80000600;
        func_800058DC(arg0, (void *)func_801C0F64);
        CMD(0xE7000000, 0);
        CMD(0xE3000A01, 0);
        REV(0xE3000C00, 0x80000);
        CMD(0xD9F1FBFF, 0);
        if (func_80001060()) {
            CMD(0xED000000, 0x9FC77C);
        } else {
            CMD(0xED000000, 0x4FC3BC);
        }
        CMD(0xE200001C, 0x0F0A4000);
        CMD(0xFCFFFFFF, 0xFFFCF67B);
        REV(0xD7000002, -1);
        CMD(0xE3000F00, 0);
        CMD(0xE2001E01, 0);
        CMD(0xF9000000, 1);
        REV(0xE3001201, 0x2000);
        CMD(0xE3001001, 0);
        CMD(0xE3000C00, 0);
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 3; j++) {
                LTB(func_8000522C(0x79, D_801CC858[j][i]));
                TRECT(0xE4000000 | (((((i + 1) * 64) << 2) & 0xFFF) << 12) | (((j * 32 + 0x58) << 2) & 0xFFF), ((((i * 64) << 2) & 0xFFF) << 12) | (((j * 32 + 0x38) << 2) & 0xFFF));
            }
        }
        CMD(0xD7000000, 0x80008000);
        CMD(0xDF000000, 0);
    }
}
#undef CMD
#undef REV
#undef LTB
#undef TRECT
#undef D_80005E44
#undef D_80164F40
#undef D_801CC858
#undef func_8000522C
#undef func_800058DC
#undef func_80006214
#undef func_8001F430
#undef func_80116E80
#undef func_801C0F64
#undef func_801C2DB8_V


void func_801C0F64(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_801C0F98 func_801C0F98__func_801C0F70

extern void func_801C0F98();

void func_801C0F70(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_801C0F98);
}
#undef func_801C0F98

#define func_801C1034 func_801C1034__func_801C0F98

typedef struct func_801C0F98_Struct {
    u8 pad[0x90];
    f32 unk90;
} func_801C0F98_Struct;

extern void func_801C1034();

void func_801C0F98(func_801C0F98_Struct *arg0, s32 arg1) {
    arg0->unk90 = 150.0f;
    func_8001B204(1, 0x7D0, 0x50, D_801CE978);
    func_8001B204(2, 0x7D0, 0x5A, D_801CE994);
    func_8001B204(3, 0x7D0, 0x64, D_801CE9B0);
    func_8001B204(4, 0x7D0, 0x6E, D_801CE9CC);
    func_800058DC((s32)arg0, func_801C1034);
}
#undef func_801C1034


void func_801C1034(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_801C1040_Struct {
    u8 pad[0x10];
    struct func_801C1040_Struct *unk10;
    u8 pad2[0x1C];
    u8 *unk30;
} func_801C1040_Struct;

void func_801C1040(arg0, arg1, arg2)
s32 arg0;
s8 arg1;
s32 arg2;
{
    func_801C1040_Struct *p;
    u8 i;
    s32 n;

    p = (func_801C1040_Struct *)arg0;
    i = 0;
    n = *(u32 *)&arg2 & 0xFF;
    for (; i < n; ) {
        i++;
        p->unk30[0xB] = arg1;
        p = p->unk10;
    }
}


typedef struct func_801C1088_StructInner {
    u8 pad[0xB];
    u8 unkB;
} func_801C1088_StructInner;

typedef struct func_801C1088_StructOuter {
    u8 pad[0x30];
    func_801C1088_StructInner *unk30;
} func_801C1088_StructOuter;

s32 func_801C1088(s32 arg0, s8 arg1) {
    s16 var_v1;
    s32 ret;

    var_v1 = ((func_801C1088_StructOuter *)arg0)->unk30->unkB;
    var_v1 += arg1;
    if (var_v1 < 0) {
        var_v1 = 0;
        ret = 1;
    } else if (var_v1 >= 0x100) {
        var_v1 = 0xFF;
        ret = 1;
    } else {
        ret = 0;
    }
    ((func_801C1088_StructOuter *)arg0)->unk30->unkB = var_v1;
    return ret;
}

#define func_801C1088 func_801C1088__func_801C10DC
s32 func_801C1088(s32, s8);

u8 func_801C10DC(void *arg0, u8 arg1, s8 arg2) {
    u8 pad;
    u8 ret;
    s32 count;
    s32 i;
    void *p;

    count = arg1;
    p = arg0;
    i = 0;
    if (count > 0) {
        do {
            ret = func_801C1088((s32)p, arg2);
            i = (i + 1) & 0xFF;
            p = ((void **)p)[4];
        } while (i < count);
    }
    return ret;
}
#undef func_801C1088

#define func_800058DC func_800058DC__func_801C1160
#define func_801C258C func_801C258C__func_801C1160
extern void func_800058DC(s32, void *);

typedef struct func_801C1160_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1160_Struct;

extern void func_801C258C();

s32 func_801C1160(void) {
    if (D_801CC8A8 != 0) {
        func_80145390(0x1800);
        ((func_801C1160_Struct *) D_801CC8A8)->unk3C = 0;
        func_800058DC(D_801CC8A8, func_801C258C);
        return 1;
    }
    return 0;
}
#undef func_800058DC
#undef func_801C258C


struct func_801C11BC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

extern struct func_801C11BC_Struct D_801CC9D0;
s32 func_8012C4D0(s32, struct func_801C11BC_Struct, s32);

s32 func_801C11BC(arg0)
s8 arg0;
{
    if (D_801CC8A4 == 0) {
        D_801CC8A4 = func_8012C4D0(D_801BBC2C, D_801CC9D0, 3);
        if (D_801CC8A4 != 0) {
            ((s8 *)D_801CC8A4)[0x90] = arg0;
            return 1;
        }
    }
    return 0;
}

#define func_801C3410 func_801C3410__func_801C125C
struct func_801C3410_Struct {
    u8 pad[0x90];
    s8 unk90;
};
void func_801C3410(struct func_801C3410_Struct *arg0, s32 *arg1);

s32 func_801C125C(s8 arg0) {
    if (D_801CC8A4 != 0) {
        ((struct func_801C3410_Struct *)D_801CC8A4)->unk90 = arg0;
        func_800058DC(D_801CC8A4, (void *)func_801C3410);
        return 1;
    }
    return 0;
}
#undef func_801C3410

#define func_80005700 func_80005700__func_801C12B0
extern s32 func_80005700(s32);


s32 func_801C12B0(void) {
    s32 ret;
    s32 b;

    ret = 0;
    if ((s32)D_801CC8A0 != 0) {
        b = D_801CC8A4;
        if (b != 0) {
            func_80005700(b);
        }
        func_80005700((s32)D_801CC8A0);
        return 1;
    }
    return ret;
}
#undef func_80005700

typedef struct func_801C3C14_Struct {
    u8 pad[0x2];
    u16 unk2;
    u16 unk4;
    u8 pad2[0x4];
    u16 unkA;
    u16 unkC;
    u8 pad3[0x3A2 - 0xE];
    u16 unk3A2;
    u8 pad4[0xEF2 - 0x3A4];
    u16 unkEF2;
} func_801C3C14_Struct;
extern func_801C3C14_Struct D_801BBBF0;

typedef struct func_801C1308_Struct {
    u8 pad[0x17];
    s8 unk17;
    s8 unk18;
    s8 unk19;
    s8 unk1A;
    u8 unk1B;
    u8 unk1C;
} func_801C1308_Struct;

void func_801C1308(void) {
    func_801C1308_Struct *p = (func_801C1308_Struct *)&D_801BBBF0;

    p->unk17 = 0;
    p->unk18 = 1;
    p->unk1A = 0;
    p->unk19 = 1;
    p->unk1B = 1;
    p->unk1C = 1;
}

s32 func_801C1334(void) {
    return *(u16 *)(D_80089474 + 4);
}



u16 func_801C1340(void) {
    return *(u16 *)(D_80089474 + 0xC);
}

#define func_801C1508 func_801C1508__func_801C134C

extern void func_801C1508();

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
#undef func_801C1508

#define func_801C11BC func_801C11BC__func_801C1508
#define func_801C1334 func_801C1334__func_801C1508
#define func_801C1A30 func_801C1A30__func_801C1508
s32 func_801C1334(void);
extern s32 func_801C11BC();

typedef struct func_801C1508_StructB {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    u8 pad2[4];
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801C1508_StructB;
typedef struct func_801C1508_StructA {
    u8 pad[0x2C];
    func_801C1508_StructB *unk2C;
} func_801C1508_StructA;
typedef struct func_801C1508_StructP {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C1508_StructP;
extern func_801C1508_StructA *D_801BBCD8;
void func_801C1A30(s32 arg0, s32 arg1);

void func_801C1508(func_801C1508_StructP *arg0, s32 arg1) {
    func_801C1508_StructB *p;
    f32 t;

    if (func_801C1334() & 0xB000) {
        func_800058DC((s32)arg0, (void *)func_801C1A30);
    }
    func_8011AAF4(D_801CEB18, 0x219, (s32)arg0, 0, 1, 3.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk44 + D_801CF260, 3.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44 + D_801CF260, 0.0f, 30.0f, -1, -1);
    arg0->unk3C++;
    if (arg0->unk3C == 0x1C2) {
        func_801C11BC(3);
    }
    if (D_801CC8CC == 2) {
        func_800058DC((s32)arg0, (void *)func_801C1624);
    }
}
#undef func_801C11BC
#undef func_801C1334
#undef func_801C1A30

#undef func_801C1624
#define D_801CEB50 D_801CEB50__func_801C1624
#define func_80005700 func_80005700__func_801C1624
#define func_800058DC func_800058DC__func_801C1624
#define func_801C1160 func_801C1160__func_801C1624
#define func_801C125C func_801C125C__func_801C1624
#define func_801C1764 func_801C1764__func_801C1624
#define func_801C1764_Struct func_801C1764_Struct__func_801C1624
extern s32 func_80005700(s32);
extern void func_800058DC(s32, void *);
s32 func_801C1160(void);
s32 func_801C125C(s8 arg0);
typedef struct func_801C1764_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1764_Struct;
void func_801C1764(func_801C1764_Struct *arg0, s32 arg1);

extern u8 D_801CEB50[];

void func_801C1624(s32 arg0, s32 arg1) {
    if (func_801C1334() & 0xB000) {
        func_800058DC(arg0, func_801C1A30);
    }
    func_80005700(D_801CC8AC);
    func_80005700(D_801CC8B0);
    D_801CC8AC = 0;
    D_801CC8B0 = 0;
    func_8011AAF4(D_801CEB50, 0x22B, arg0, 0, 1, 3.0f, 0.0f, 120.0f, -22.0f, 3.0f, 0.0f, 42.5f, 0.0f, 0.0f, 30.0f, -1, -1);
    D_801CC8B4 = func_80005670(arg0, D_801CC9F8);
    D_801CC8B8 = func_80005670(arg0, D_801CCA20);
    func_801C125C(-3);
    func_801C1160();
    func_800058DC(arg0, func_801C1764);
}
#undef D_801CEB50
#undef func_80005700
#undef func_800058DC
#undef func_801C1160
#undef func_801C125C
#undef func_801C1764
#undef func_801C1764_Struct
#define func_801C1624 func_801C1624__decl

#define func_800058DC func_800058DC__func_801C1764
#define func_801C1334 func_801C1334__func_801C1764
#define func_801C17C8 func_801C17C8__func_801C1764
#define func_801C1A30 func_801C1A30__func_801C1764

typedef struct func_801C1764_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1764_Struct;

extern s32 func_801C1334();
extern void func_800058DC(void *, void *);
extern void func_801C17C8();
extern void func_801C1A30();

void func_801C1764(func_801C1764_Struct *arg0, s32 arg1) {
    if (func_801C1334() & 0xB000) {
        func_800058DC(arg0, func_801C1A30);
    }
    if (D_801CC8CC == 0) {
        arg0->unk3C = 0x30;
        func_800058DC(arg0, func_801C17C8);
    }
}
#undef func_800058DC
#undef func_801C1334
#undef func_801C17C8
#undef func_801C1A30

#define func_801C184C func_801C184C__func_801C17C8
#define func_801C1A30 func_801C1A30__func_801C17C8

typedef struct func_801C17C8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C17C8_Struct;

extern void func_801C184C();
extern void func_801C1A30();

void func_801C17C8(func_801C17C8_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_801C1334() & 0xB000) {
        func_800058DC((s32) arg0, func_801C1A30);
    }
    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 - 1;
    if (temp_v0 == 0) {
        arg0->unk3C = 0x384;
        func_8001B204(0, 0x7D0, 0xA2, D_801CEB88);
        func_800058DC((s32) arg0, func_801C184C);
    }
}
#undef func_801C184C
#undef func_801C1A30

#define func_800058DC func_800058DC__func_801C184C
#define func_801C1334 func_801C1334__func_801C184C
#define func_801C18FC func_801C18FC__func_801C184C
#define func_801C2050 func_801C2050__func_801C184C
#define func_801C5A00 func_801C5A00__func_801C184C
extern void func_800058DC(s32, void *);
extern s32 func_801C1334();

extern void func_801C5A00();
extern void func_801C18FC();
extern void func_801C2050();

struct func_801C184C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_801C184C(struct func_801C184C_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_801C1334() & 0xB000) {
        func_8001B204(0, 0x7D0, 0xA2, D_801CEB9C, 4);
        func_800058DC(D_801CC8A8, (void *) func_801C27DC);
        func_800058DC((s32) arg0, (void *) func_801C18FC);
        arg0->unk3C = 0x1E;
    }
    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        func_80020718(8);
        func_801C5A00();
        func_800058DC((s32) arg0, (void *) func_801C2050);
    }
}
#undef func_800058DC
#undef func_801C1334
#undef func_801C18FC
#undef func_801C2050
#undef func_801C5A00



typedef struct func_801C18FC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C18FC_Struct;

void func_801C18FC(func_801C18FC_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        arg0->unk3C = 0x384;
        func_8001B204(0, 0x7D0, (s16) ((D_801CC8C4 * 0xA) + 0x76), D_801CEBB4);
        func_8001B204(1, 0x7D0, 0x76, D_801CEBC4);
        func_8001B204(2, 0x7D0, 0x80, D_801CEBD4);
        func_8001B204(3, 0x7D0, 0x8A, D_801CEBE4);
        func_8001B204(4, 0x7D0, 0x94, D_801CEBF4);
        if (D_80037754 == 1) {
            func_8001B204(5, 0x7D0, 0x9E, D_801CEC04);
        } else {
            func_8001B204(5, 0x7D0, 0x9E, D_801CEC14, 6);
        }
        func_800058DC((s32) arg0, func_801C1DB8);
    }
}

#define func_800058DC func_800058DC__func_801C1A30
#define func_801C11BC func_801C11BC__func_801C1A30
#define func_801C17C8 func_801C17C8__func_801C1A30
#define func_801C1A98 func_801C1A98__func_801C1A30
#define func_801C33C8 func_801C33C8__func_801C1A30

extern void func_800058DC(s32, void *);
extern s32 func_801C11BC();
extern void func_801C17C8();
extern void func_801C33C8();

extern void func_801C1A98();

typedef struct func_801C1A30_Struct {
    u8 pad[0x90];
    s8 unk90;
} func_801C1A30_Struct;

void func_801C1A30(s32 arg0, s32 arg1) {
    if (D_801CC8A4 == 0) {
        func_801C11BC(0x64);
    } else {
        ((func_801C1A30_Struct *) D_801CC8A4)->unk90 = 0x64;
        func_800058DC(D_801CC8A4, (void *) func_801C33C8);
    }
    func_800058DC(arg0, (void *) func_801C1A98);
}
#undef func_800058DC
#undef func_801C11BC
#undef func_801C17C8
#undef func_801C1A98
#undef func_801C33C8


void func_801C1A98(s32 arg0, s32 arg1) {
    if (D_801CC8CC == 2) {
        func_8011AAF4(D_801CEC34, 0x280, arg0, 0, 1, 3.0f, 0.0f, 120.0f, -22.0f, 3.0f, 0.0f, 42.5f, 0.0f, 0.0f, 30.0f, -1, -1);
        if (D_801CC8B4 == 0) {
            D_801CC8B4 = func_80005670(arg0, D_801CC9F8);
        }
        if (D_801CC8B8 == 0) {
            D_801CC8B8 = func_80005670(arg0, D_801CCA20);
        }
        if (D_801CC8AC != 0) {
            func_80005700(D_801CC8AC);
        }
        if (D_801CC8B0 != 0) {
            func_80005700(D_801CC8B0);
        }
        func_800058DC(arg0, func_801C1BDC);
    }
}


extern s32 D_801CFD08;
extern s16 D_801CC8D0;
extern void func_801C1C44();
extern void func_801C28E4();

void func_801C1BDC(s32 arg0, s32 arg1) {
    func_800058DC(D_801CC8A8, &func_801C28E4);
    func_801C1040(D_801CFD08, -1, 5);
    func_801C125C(-0x64);
    D_801CC8D0 = 0;
    func_800058DC(arg0, &func_801C1C44);
}

#define func_801C1D7C func_801C1D7C__func_801C1C44
extern s16 D_801CC8D0;

void func_801C1D7C();

void func_801C1C44(s32 arg0, s32 arg1) {
    u16 *p = (u16 *)&D_801CC8D0;

    *p = *p + 1;
    if (*p >= 0x1E) {
        func_8001B204(0, 0x7D0, (s16) ((D_801CC8C4 * 0xA) + 0x76), D_801CEC6C);
        func_8001B204(1, 0x7D0, 0x76, D_801CEC7C);
        func_8001B204(2, 0x7D0, 0x80, D_801CEC8C);
        func_8001B204(3, 0x7D0, 0x8A, D_801CEC9C);
        func_8001B204(4, 0x7D0, 0x94, D_801CECAC);
        if (D_80037754 == 1) {
            func_8001B204(5, 0x7D0, 0x9E, D_801CECBC);
        } else {
            func_8001B204(5, 0x7D0, 0x9E, D_801CECCC, 6);
        }
        func_800058DC(arg0, func_801C1D7C);
    }
}
#undef func_801C1D7C


typedef struct func_801C1D7C_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1D7C_Struct;


void func_801C1D7C(func_801C1D7C_Struct *arg0, s32 arg1) {
    if (D_801CC8CC == 0) {
        arg0->unk3C = 0x384;
        func_800058DC(arg0, func_801C1DB8);
    }
}

/* hh-block asm/nonmatchings/file024/801C0B30/_mrg_keep_text_func_801C1DB8.s {"functions":["func_801C1DB8"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C0B30/_mrg_keep_text_func_801C1DB8.s")


void func_801C2050(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

extern s32 D_801CFD08;

void func_801C205C(u8 *arg0, s32 *arg1) {
    s32 pad;
    u8 sp5B;
    u8 n;
    u8 i;

    n = D_80006214(arg0);
    for (i = 0; i < 4; i++) {
        func_80146208(arg0, &sp5B, 0x66, (s16)((i << 6) + 0x10), 0xBC, 0x40, 0x20, 0, 0, 0, 0x228, i + 0x15);
        func_80145348(arg0, 1, 0);
    }
    func_80146208(arg0, &sp5B, 0x66, (s16)((i << 6) + 0x10), 0xBC, 0x20, 0x20, 0, 0, 0, 0x228, i + 0x15);
    func_80145348(arg0, 1, 0);
    D_801CFD08 = arg1[n];
    n = D_80006214(arg0);
    for (i = 0; i < n; i++) {
        *(s16 *)((u8 *)arg1[i] + 0x28) = 0x100;
        func_801C1040(arg1[i], 0, 1);
    }
    *(s16 *)(arg0 + 0x3C) = 0;
    func_800058DC((s32)arg0, func_801C220C);
}

#undef func_801C220C
#define D_801CFD08 D_801CFD08__func_801C220C
#define func_801C1040 func_801C1040__func_801C220C


typedef struct func_801C220C_Struct1 { u8 pad[0xB]; u8 unkB; } func_801C220C_Struct1;
typedef struct func_801C220C_Struct0 { u8 pad[0x30]; func_801C220C_Struct1 *unk30; } func_801C220C_Struct0;
typedef struct func_801C220C_Struct2 { u8 pad[0x3C]; u16 unk3C; } func_801C220C_Struct2;
extern func_801C220C_Struct0 *D_801CFD08;
extern void func_801C1040();

void func_801C220C(func_801C220C_Struct2 *arg0, s32 arg1) {
    s32 v;
    v = D_801CFD08->unk30->unkB;
    if (arg0->unk3C >= 0x33) {
        v = (s16)(v + 3);
        if (v >= 0x100) {
            v = 0xFF;
        }
        func_801C1040(D_801CFD08, (s8)v, 5);
        return;
    }
    arg0->unk3C++;
}
#undef D_801CFD08
#undef func_801C1040
#define func_801C220C func_801C220C__decl

/* hh-block asm/nonmatchings/file024/801C0B30/_mrg_keep_text_func_801C2280.s {"functions":["func_801C2280"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C0B30/_mrg_keep_text_func_801C2280.s")

extern struct func_801C2684_Node *D_801CFD04;
typedef struct func_801C2684_Node {
    u8 pad[0x10];
    struct func_801C2684_Node *unk10;
} func_801C2684_Node;

typedef struct func_801C2518_StructA {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C2518_StructA;
typedef struct func_801C2518_StructB {
    u8 pad[0xB];
    u8 unkB;
} func_801C2518_StructB;
typedef struct func_801C2518_StructC {
    u8 pad[0x30];
    func_801C2518_StructB *unk30;
} func_801C2518_StructC;

void func_801C2518(func_801C2518_StructA *arg0, s32 arg1) {
    func_801C2518_StructC *p = (func_801C2518_StructC *)D_801CFD04;
    s16 b = p->unk30->unkB;
    if (arg0->unk3C >= 0xB5) {
        b = b + 3;
        if (b >= 0x100) {
            b = 0xFF;
        }
        func_801C1040((s32)p, (s8)b, 9);
        return;
    }
    arg0->unk3C = arg0->unk3C + 1;
}

#define func_801C2684 func_801C2684__func_801C258C
extern s32 D_801CFCF4;

extern void func_801C2684();

typedef struct func_801C258C_Node {
    u8 pad[0x10];
    struct func_801C258C_Node *unk10;
} func_801C258C_Node;
typedef struct func_801C258C_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C258C_Arg0;

void func_801C258C(func_801C258C_Arg0 *arg0, s32 arg1) {
    func_801C258C_Node *n;
    u8 i;

    n = *(func_801C258C_Node **)((u8 *)&D_801CFCF4 + 0x10);
    func_801453CC((s32)n, 0x100, 0, 0xD, 1, 0xD, 1);
    n = n->unk10;
    i = 0;
    do {
        func_801453CC((s32)n, 0, 0, 0xD, 1, 0xD, 1);
        i++;
        n = n->unk10;
    } while (i < 8);
    func_801C10DC(*(void **)((u8 *)&D_801CFCF4 + 0xC), 0xC, 0x10);
    arg0->unk3C++;
    if (arg0->unk3C >= 0x10) {
        arg0->unk3C = 0;
        func_80145390(0x1800);
        func_800058DC((s32)arg0, (void *)func_801C2684);
    }
}
#undef func_801C2684

#define D_801CFD04 D_801CFD04__func_801C2684
#define func_800058DC func_800058DC__func_801C2684
#define func_801453CC func_801453CC__func_801C2684
#define func_801C27D0 func_801C27D0__func_801C2684


typedef struct func_801C2684_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C2684_Arg0;

extern func_801C2684_Node *D_801CFD00;
extern func_801C2684_Node *D_801CFD04;
extern void func_801C27D0();
extern void func_801453CC(s32, s32, s32, s32, s32, s32, s32);
extern void func_800058DC(s32, void *);

void func_801C2684(func_801C2684_Arg0 *arg0, s32 arg1) {
    u8 i;
    func_801C2684_Node *node;

    node = D_801CFD04;
    func_801453CC(node, 0x80, 0, 1, 0x1D, 1, 0x1E);
    node = node->unk10;
    i = 0;
    do {
        func_801453CC(node, 0, 0, 1, 0x1D, 1, 0x1E);
        i++;
        node = node->unk10;
    } while (i < 8);
    node = D_801CFD00;
    func_801453CC(node, 0x80, 1, 1, 0x1F, 0x1F, 0xD);
    node = node->unk10;
    i = 0;
    do {
        func_801453CC(node, 0, 1, 1, 0x1F, 0x1F, 0xD);
        i++;
        node = node->unk10;
    } while (i < 0xB);
    arg0->unk3C++;
    if (arg0->unk3C >= 0x20) {
        func_800058DC((s32) arg0, func_801C27D0);
    }
}
#undef D_801CFD04
#undef func_800058DC
#undef func_801453CC
#undef func_801C27D0


void func_801C27D0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_801C27DC_StructInner {
    u8 pad[2];
    s16 unk2;
} func_801C27DC_StructInner;
typedef struct func_801C27DC_StructOuter {
    u8 pad[0x30];
    func_801C27DC_StructInner *unk30;
} func_801C27DC_StructOuter;

void func_801C27DC(s32 arg0, func_801C27DC_StructOuter **arg1) {
    s16 unused[6];
    s16 value;
    s32 i;
    s32 j;
    s32 n;

    value = arg1[0]->unk30->unk2;
    if (value >= 0x15) {
        value -= 4;
    } else {
        value = 0x14;
        func_800058DC(arg0, func_801C28E4);
    }
    n = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            arg1[n++]->unk30->unk2 = value + i * 0x20;
        }
    }
    for (i = 0; i < 9; i++) {
        arg1[n++]->unk30->unk2 = value + 0x10;
    }
}

#define func_801C2A38 func_801C2A38__func_801C28E4
void func_801C2A38(s32 arg0, s32 arg1);
typedef struct func_801C28E4_S { u8 pad[0x30]; s16 *unk30; } func_801C28E4_S;
void func_801C28E4(s32 arg0, func_801C28E4_S **arg1)
{
  func_801C28E4_S **p = arg1;
  s32 y;
  s32 i;
  func_801C2684_Node *n;
  for (y = 0x14; y < 0x74; y += 0x20)
  {
    p[0]->unk30[0] = 0x18;
    p[0]->unk30[1] = y;
    p[1]->unk30[0] = 0x58;
    p[1]->unk30[1] = y;
    p[2]->unk30[0] = 0x98;
    p[2]->unk30[1] = y;
    p[3]->unk30[0] = 0xD8;
    p[3]->unk30[1] = y;
    p += 4;
  }

  i = 0x20;
  for (y = 0x18; y < 0x138; y += i)
  {
    p[0]->unk30[0] = y;
    p[0]->unk30[1] = 0x24;
    p++;
  }

  n = D_801CFD04;
  for (i = 0; i < 9; i++)
  {
    func_80145310(n, 0x1D, 0x1E);
    n = n->unk10;
  }

  n = D_801CFD00;
  for (i = 0; i != 12; i++)
  {
    func_80145310(n, 0x1F, 0xD);
    n = n->unk10;
  }

  func_800058DC(arg0, func_801C2A38);
}
#undef func_801C2A38


void func_801C2A38(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define D_80164F40 D_80164F40__func_801C2A44
#define D_801CC8D8 D_801CC8D8__func_801C2A44
#define func_800058DC func_800058DC__func_801C2A44
#define func_80006214 func_80006214__func_801C2A44
#define func_801C2D78 func_801C2D78__func_801C2A44
#define func_801C2D78_Struct_Arg0 func_801C2D78_Struct_Arg0__func_801C2A44
#define func_801C2D78_Struct_Arg1 func_801C2D78_Struct_Arg1__func_801C2A44
#define func_801C2D78_Struct_Inner func_801C2D78_Struct_Inner__func_801C2A44
#define func_801C2D78_Struct_Mid func_801C2D78_Struct_Mid__func_801C2A44
#define func_801C2DB8_V func_801C2DB8_V__func_801C2A44
typedef struct func_801C2DB8_V { s32 a, b, c, d; } func_801C2DB8_V;
extern func_801C2DB8_V D_80164F40;
extern void func_800058DC(s32, void *);
extern void func_80006214(void *);
struct func_801C2D78_Struct_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
};
struct func_801C2D78_Struct_Inner {
    u8 pad[0x4D];
    u8 unk4D;
};
struct func_801C2D78_Struct_Mid {
    u8 pad[0x30];
    struct func_801C2D78_Struct_Inner *unk30;
};
struct func_801C2D78_Struct_Arg1 {
    u8 pad[0x8];
    struct func_801C2D78_Struct_Mid *unk8;
};
void func_801C2D78(struct func_801C2D78_Struct_Arg0 *arg0, struct func_801C2D78_Struct_Arg1 *arg1);


typedef struct func_801C2A44_Props {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C2A44_Props;

typedef struct func_801C2A44_Obj {
    u8 pad[0x30];
    func_801C2A44_Props *unk30;
} func_801C2A44_Obj;

typedef struct func_801C2A44_Arg1 {
    func_801C2A44_Obj *unk0;
    func_801C2A44_Obj *unk4;
    func_801C2A44_Obj *unk8;
} func_801C2A44_Arg1;

typedef struct func_801C2A44_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C2A44_Arg0;

extern u8 D_801CC8D8[];
#define D_801CF27C 0.009999999776f
#define D_801CF280 0.0700000003f
#define D_801CF284 0.009999999776f
#define D_801CF288 0.0700000003f
#define D_801CF28C 0.009999999776f

void func_801C2A44(func_801C2A44_Arg0 *arg0, func_801C2A44_Arg1 *arg1) {
    func_801C2DB8_V sp28;

    sp28 = D_80164F40;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C((s32)arg0, 0, 0x228, 0x2B);
    arg1->unk0->unk30->unk24 = 0x14;
    arg1->unk0->unk30->unk30 = func_8000C3B0(arg1->unk0);
    arg1->unk0->unk30->unk4 = 0;
    arg1->unk0->unk30->unk8 = 0;
    arg1->unk0->unk30->unkC = 0;
    arg1->unk0->unk30->unk18 = D_801CF27C;
    arg1->unk0->unk30->unk1C = D_801CF27C;
    arg1->unk0->unk30->unk20 = D_801CF27C;
    arg1->unk0->unk30->unk12 = 0;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C((s32)arg0, 1, 0x228, 0x2C);
    arg1->unk4->unk30->unk24 = 0x14;
    arg1->unk4->unk30->unk30 = func_8000C3B0(arg1->unk4);
    arg1->unk4->unk30->unk4 = -500.0f;
    arg1->unk4->unk30->unk8 = 200.0f;
    arg1->unk4->unk30->unkC = 0.0f;
    arg1->unk4->unk30->unk18 = D_801CF280;
    arg1->unk4->unk30->unk1C = D_801CF284;
    arg1->unk4->unk30->unk20 = D_801CF280;
    arg1->unk4->unk30->unk12 = 0x1800;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C((s32)arg0, 2, 0x228, 0x2D);
    func_8012D918((s32)arg0, 0x228, 0x2E, 2, 0);
    arg1->unk8->unk30->unk24 |= 0x4100;
    arg1->unk8->unk30->unk30 = (u32)D_801CC8D8 | 0x40000000;
    arg1->unk8->unk30->unk4 = -500.0f;
    arg1->unk8->unk30->unk8 = 190.0f;
    arg1->unk8->unk30->unkC = 0.0f;
    arg1->unk8->unk30->unk18 = D_801CF288;
    arg1->unk8->unk30->unk1C = D_801CF28C;
    arg1->unk8->unk30->unk20 = D_801CF288;
    arg1->unk8->unk30->unk12 = 0x1800;
    arg1->unk8->unk30->unk48 = 0x90;
    arg1->unk8->unk30->unk49 = 0x40;
    arg1->unk8->unk30->unk4A = 0x30;
    arg1->unk8->unk30->unk4B = 0xFF;
    arg1->unk8->unk30->unk4C = 0;
    arg1->unk8->unk30->unk4D = 0;
    arg1->unk8->unk30->unk4E = 0xFF;
    arg1->unk8->unk30->unk4F = 0xFF;
    arg0->unk3C = 0;
    func_800058DC((s32)arg0, func_801C2D78);
}
#undef D_801CF27C
#undef D_801CF280
#undef D_801CF284
#undef D_801CF288
#undef D_801CF28C
#undef D_80164F40
#undef D_801CC8D8
#undef func_800058DC
#undef func_80006214
#undef func_801C2D78
#undef func_801C2D78_Struct_Arg0
#undef func_801C2D78_Struct_Arg1
#undef func_801C2D78_Struct_Inner
#undef func_801C2D78_Struct_Mid
#undef func_801C2DB8_V


struct func_801C2D78_Struct_Inner {
    u8 pad[0x4D];
    u8 unk4D;
};

struct func_801C2D78_Struct_Mid {
    u8 pad[0x30];
    struct func_801C2D78_Struct_Inner *unk30;
};

struct func_801C2D78_Struct_Arg1 {
    u8 pad[0x8];
    struct func_801C2D78_Struct_Mid *unk8;
};

struct func_801C2D78_Struct_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_801C2D78(struct func_801C2D78_Struct_Arg0 *arg0, struct func_801C2D78_Struct_Arg1 *arg1)
{
  s32 temp_t7;
  ;
  if (((++arg0->unk3C) % 3) == 0)
  {
    struct func_801C2D78_Struct_Inner *temp_v0 = arg1->unk8->unk30;
    temp_v0->unk4D = (u8) (temp_v0->unk4D + 1);
  }
 ;
}

#define func_801C2FDC func_801C2FDC__func_801C2DB8
void func_801C2FDC(s32 arg0, s32 *arg1);

typedef struct func_801C2DB8_Row { f32 f[5]; } func_801C2DB8_Row;
typedef struct func_801C2DB8_Tab { func_801C2DB8_Row r[7]; } func_801C2DB8_Tab;
typedef struct func_801C2DB8_V { s32 a, b, c, d; } func_801C2DB8_V;
typedef struct func_801C2DB8_P {
    u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; u8 pad14[4];
    f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad28[8]; s32 unk30;
} func_801C2DB8_P;
typedef struct func_801C2DB8_O { u8 pad[0x30]; func_801C2DB8_P *unk30; } func_801C2DB8_O;

extern func_801C2DB8_V D_80164F40;
extern func_801C2DB8_Tab D_801CCA48;

void func_801C2DB8(s32 arg0, func_801C2DB8_O **A) {
    func_801C2DB8_V spE8;
    func_801C2DB8_Tab sp5C;
    f32 k;
    u8 i;

    spE8 = D_80164F40;
    sp5C = D_801CCA48;
    if (func_80126A0C(arg0, 0x74, 0) != 0) {
        i = 0;
        k = D_801CF290;
        do {
            func_80005E44((void *)arg0, &spE8);
            func_80006214((void *)arg0);
            func_8012C89C(arg0, i, 3, 4);
            func_8012D918(arg0, 0x228, 0x2F, i, 0);
            A[i]->unk30->unk24 = 0x12;
            A[i]->unk30->unk30 = func_8000C3B0(A[i]);
            A[i]->unk30->unk4 = sp5C.r[i].f[0];
            A[i]->unk30->unk8 = sp5C.r[i].f[1];
            A[i]->unk30->unkC = sp5C.r[i].f[2];
            A[i]->unk30->unk18 = sp5C.r[i].f[3];
            A[i]->unk30->unk1C = sp5C.r[i].f[4];
            A[i]->unk30->unk20 = k;
            A[i]->unk30->unk12 = 0x800;
            func_801451C0(A[i], 3);
            i++;
        } while (i < 7);
        func_80145390(0);
        func_800058DC(arg0, func_801C2FDC);
    }
}
#undef func_801C2FDC

#define func_801453CC func_801453CC__func_801C2FDC

extern void func_801453CC(s32, s32, s32, s32, s32, s32, s32);

void func_801C2FDC(s32 arg0, s32 *arg1) {
    func_801453CC(arg1[0], 0x1A0, 0, 3, 0x21, 0x22, 0x22);
    func_80145E78(arg1[1], 0xC0, 1);
    func_80145E78(arg1[2], 0xA0, 2);
    func_80145E78(arg1[3], 0, 2);
    func_80145E78(arg1[4], 0x80, 3);
    func_80145E78(arg1[5], 0, 3);
    func_80145E78(arg1[6], 0, 3);
}
#undef func_801453CC

#define func_801C3288 func_801C3288__func_801C3090

typedef struct func_801C3090_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C3090_Sub;
typedef struct func_801C3090_Obj {
    u8 pad[0x30];
    func_801C3090_Sub *unk30;
} func_801C3090_Obj;
void func_801C3288();

void func_801C3090(s32 arg0, func_801C3090_Obj **arg1) {
    func_801C2DB8_V sp60;
    u8 i;
    f32 k;

    sp60 = D_80164F40;
    for (i = 0, k = D_801CF294; i < 3; i++) {
        func_80005E44((void *)arg0, &sp60);
        func_80006214((void *)arg0);
        func_8012C89C(arg0, i, 0x228, 0x2A);
        arg1[i]->unk30->unk24 = 0x15;
        arg1[i]->unk30->unk30 = func_8000C3B0(arg1[i]);
        arg1[i]->unk30->unk4 = 0.0f;
        arg1[i]->unk30->unk8 = -(i * 0xA0);
        arg1[i]->unk30->unkC = 0.0f;
        arg1[i]->unk30->unk18 = k;
        arg1[i]->unk30->unk1C = k;
        arg1[i]->unk30->unk20 = k;
        arg1[i]->unk30->unk10 = 0;
        arg1[i]->unk30->unk12 = 0;
        arg1[i]->unk30->unk14 = 0;
        arg1[i]->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
        arg1[i]->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
        arg1[i]->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
        arg1[i]->unk30->unk4F = 0x61;
    }
    func_800058DC(arg0, func_801C3288);
}
#undef func_801C3288


typedef struct func_801C3288_Sub {
    u8 pad[0x8];
    f32 unk8;
    u8 pad2[0x6];
    s16 unk12;
} func_801C3288_Sub;

typedef struct func_801C3288_Obj {
    u8 pad[0x30];
    func_801C3288_Sub *unk30;
} func_801C3288_Obj;

void func_801C3288(func_801C3288_Sub *arg0, func_801C3288_Obj **arg1) {
    s32 var_v0;
    s32 temp_t6;
    s32 temp_t0;
    func_801C3288_Obj **temp_v1;

    temp_t6 = 0xAA;
    temp_t0 = -0x136;
    var_v0 = 0;
    do {
        temp_v1 = (func_801C3288_Obj **) ((s32) arg1 + (var_v0 << 2));
        arg0 = (*temp_v1)->unk30;
        arg0->unk8 = arg0->unk8 + 0.625f;
        arg0 = (*temp_v1)->unk30;
        if ((f32) temp_t6 <= arg0->unk8) {
            arg0->unk8 = (f32) temp_t0;
            arg0 = (*temp_v1)->unk30;
        }
        var_v0 = (var_v0 + 1) & 0xFF;
        arg0->unk12 = (s16) (s32) ((f32) arg0->unk12 + 16.0f);
    } while (var_v0 < 3);
}

#define func_80006214 func_80006214__func_801C3334
#define func_80116E80 func_80116E80__func_801C3334
#define func_80146178 func_80146178__func_801C3334
#define func_801C33C8 func_801C33C8__func_801C3334
extern void func_801C33C8();

typedef struct func_801C3334_StructInner {
    u8 pad[0x28];
    s16 unk28;
} func_801C3334_StructInner;
extern void func_80116E80(s32);
extern void func_80146178(s32, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80006214(s32);

void func_801C3334(s32 arg0, func_801C3334_StructInner **arg1) {
    u8 sp3F;

    func_80116E80(0x800);
    func_80146178(arg0, &sp3F, 0, 0, 0x140, 0xF0, 2, 0, 0, 0, 0);
    func_80006214(arg0);
    (*arg1)->unk28 = 0x800;
    D_801CC8A4 = arg0;
    func_800058DC(arg0, (void *)func_801C33C8);
}
#undef func_80006214
#undef func_80116E80
#undef func_80146178
#undef func_801C33C8

#define func_801C1088 func_801C1088__func_801C33C8

typedef struct func_801C33C8_Struct {
    u8 pad[0x90];
    s8 unk90;
} func_801C33C8_Struct;

s32 func_801C1088(s32, s8);

void func_801C33C8(func_801C33C8_Struct *arg0, s32 *arg1) {
    if (func_801C1088(*arg1, arg0->unk90) != 0) {
        D_801CC8CC = 2;
        return;
    }
    D_801CC8CC = 1;
}
#undef func_801C1088

#define func_801C1088 func_801C1088__func_801C3410


extern s32 func_801C1088(s32, s8);

void func_801C3410(struct func_801C3410_Struct *arg0, s32 *arg1) {
    if (func_801C1088(*arg1, arg0->unk90) != 0) {
        D_801CC8CC = 0;
        D_801CC8A4 = 0;
        func_80005700(arg0);
        return;
    }
    D_801CC8CC = 1;
}
#undef func_801C1088

#define func_801C3934 func_801C3934__func_801C346C

extern void func_801C3934();

void func_801C346C(u8 *arg0, u8 **arg1) {
    u8 sp4F;

    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x40, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x27);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x50, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x60, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x70, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x80, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0x1D, 0x90, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x29);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x40, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x27);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x50, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x60, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x70, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x80, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x28);
    func_80145348(arg0, 2, 0xF);
    func_80146208(arg0, &sp4F, 0x66, 0xA3, 0x90, 0x80, 0x10, 0, 0, 0xFF, 0x228, 0x29);
    func_80145348(arg0, 2, 0xF);
    for (sp4F = 0; sp4F < 0xC; sp4F++) {
        *(s16 *)(arg1[sp4F] + 0x28) = 0x100;
    }
    func_800058DC((s32)arg0, &func_801C3934);
}
#undef func_801C3934


void func_801C3934(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



void func_801C3940(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CED10);
    func_8001B204(1, 0x7D0, 0x8A, D_801CED20);
    func_8001B204(2, 0x7D0, 0x94, D_801CED2C);
    func_8001B204(3, 0x7D0, 0x9E, D_801CED38);
    func_8001B204(4, 0, 0, D_801CED44);
    func_8001B204(5, 0, 0, D_801CED48);
    func_8001B204(6, 0, 0, D_801CED4C);
    func_800058DC(arg0, func_801C3A40);
}

#define D_801C56B8 D_801C56B8__func_801C3A40
#define D_801CED50 D_801CED50__func_801C3A40
#define func_801C3BA4 func_801C3BA4__func_801C3A40
#define func_801C4C7C func_801C4C7C__func_801C3A40
#define func_801C56B8 func_801C56B8__func_801C3A40

extern u8 D_801CED50[];
extern u8 D_801C56B8[];
void func_801C3BA4();
void func_801C4C7C();
void func_801C56B8();

void func_801C3A40(s32 arg0, s32 arg1) {
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 2;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 2) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x7D0, (s16)(D_801CC8C8 * 10 + 0x8A), D_801CED50);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, D_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
        arg1 = D_801CC8C8;
        if (arg1 == 0) goto choice0;
        if (arg1 == 1) goto choice1;
        if (arg1 != 2) goto end;
        goto choice2;
choice0:
        func_80005670(arg0, D_80044090);
        func_800058DC(arg0, func_801C3BA4);
        goto end;
choice1:
        func_800058DC(arg0, func_801C4C7C);
        goto end;
choice2:
        func_800058DC(arg0, func_801C56B8);
        goto end;
    }
end:
    ;
}
#undef D_801C56B8
#undef D_801CED50
#undef func_801C3BA4
#undef func_801C4C7C
#undef func_801C56B8

#define func_800058DC func_800058DC__func_801C3BA4
#define func_801C3BD8 func_801C3BD8__func_801C3BA4

extern s32 func_800058DC(s32, void *);
extern void func_801C3BD8();

void func_801C3BA4(s32 arg0, s32 arg1) {
    func_8013E770();
    func_800058DC(arg0, &func_801C3BD8);
}
#undef func_800058DC
#undef func_801C3BD8

#define func_801C3C14 func_801C3C14__func_801C3BD8
extern void func_801C3C14();

void func_801C3BD8(s32 arg0, s32 arg1) {
    if (func_8013E794() == 1) {
        func_800058DC(arg0, (void *) func_801C3C14);
    }
}
#undef func_801C3C14

#define func_800058DC func_800058DC__func_801C3C14
#define func_801C1308 func_801C1308__func_801C3C14
#define func_801C3CD0 func_801C3CD0__func_801C3C14
extern void func_800058DC(s32, void *);


extern void func_801C3CD0();
extern void func_801C1308();

void func_801C3C14(s32 arg0, s32 arg1) {
    func_800023A8(0);
    func_80020718(8);
    D_801BBBF0.unkA = 0;
    D_801BBBF0.unkC = 0;
    func_8012FE50(0x15, (u16)(D_801BBBF0.unk4 = 0x104), 0, 1, 0);
    D_801BBBF0.unk3A2 = 0;
    D_801BBBF0.unk2 = 1;
    func_80133830();
    func_80133950();
    func_80133A70();
    func_8014AC60();
    D_801BBBF0.unkEF2 = 0;
    func_8012FFCC(0);
    func_801C1308();
    func_80152240();
    func_800058DC(arg0, &func_801C3CD0);
}
#undef func_800058DC
#undef func_801C1308
#undef func_801C3CD0


void func_801C3CD0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_80005700 func_80005700__func_801C3CDC
#define func_800058DC func_800058DC__func_801C3CDC
#define func_801C3D50 func_801C3D50__func_801C3CDC
extern s32 func_80005700(s32);
extern void func_800058DC(s32, void *);

extern void func_801C3D50();

void func_801C3CDC(s32 arg0, s32 arg1) {
    func_80005700(D_801CC8A8);
    func_80005700(D_801CC8B8);
    D_801CC8A8 = 0;
    D_801CC8B8 = 0;
    D_801CC8BC = func_80005670(arg0, &D_80044090);
    func_80152240();
    func_800058DC(arg0, func_801C3D50);
}
#undef func_80005700
#undef func_800058DC
#undef func_801C3D50

#define func_800058DC func_800058DC__func_801C3D50
#define func_801C3D84 func_801C3D84__func_801C3D50

extern s32 func_800058DC(s32, void *);
extern void func_801C3D84();

void func_801C3D50(s32 arg0, s32 arg1) {
    func_8013E7C0();
    func_800058DC(arg0, &func_801C3D84);
}
#undef func_800058DC
#undef func_801C3D84

#define func_801C3E24 func_801C3E24__func_801C3D84
#define func_801C40EC func_801C40EC__func_801C3D84
void func_801C40EC(s32 arg0, s32 arg1);

extern void func_801C3E24();

void func_801C3D84(s32 arg0, s32 arg1) {
    u8 sp27;
    u8 temp_v0;

    temp_v0 = func_8013E850();
    sp27 = temp_v0;
    if (temp_v0 & 0xFF) {
        func_80142570();
        func_800179B0(0);
        if (sp27 == 1) {
            func_801C11BC(0xA);
            func_800058DC(arg0, &func_801C3E24);
        }
        if (sp27 == 2) {
            func_8012FE50(0x17, 0x73, 1, 1, 0);
            func_800058DC(arg0, &func_801C40EC);
        }
    }
}
#undef func_801C3E24
#undef func_801C40EC


typedef struct func_801C3E24_Struct { u8 b[11]; } func_801C3E24_Struct;
extern func_801C3E24_Struct D_801CCAD4;
typedef struct func_801C3E24_S2 { u8 pad[0x28]; s16 unk28; } func_801C3E24_S2;

void func_801C3E24(s32 arg0, func_801C3E24_S2 **arg1) {
    u8 c;
    u8 v;
    func_801C3E24_Struct sp40;

    sp40 = D_801CCAD4;
    if (D_801CC8CC == 2) {
        if (func_8013EA54() == 0xFF) {
            func_8012FE50(0x15, 0x10D, 6, 1, 0);
            func_800058DC(arg0, func_801C40EC);
            return;
        }
        v = sp40.b[func_8013EA54() - 1];
        if (v != 0) {
            v = (v - 1) & 0xFF;
            func_80146208((u8 *)arg0, &c, 0x66, 0x20, 0x64, 0x100, 0x10, 0, 0, 0, 0x228, v + 0x1A);
            func_80006214((void *)arg0);
            (*arg1)->unk28 = 0x100;
        }
        func_800058DC(arg0, func_801C3F48);
    }
}

/* hh-block asm/nonmatchings/file024/801C0B30/_mrg_keep_tail_2ac8bdf1c44b0000.s {"functions":["func_801C3F48"],"rodata":[],"rodata_bytes":[2149380752,7019696,16]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C0B30/_mrg_keep_tail_2ac8bdf1c44b0000.s")

#define func_800058DC func_800058DC__func_801C4018
#define func_801C1334 func_801C1334__func_801C4018
#define func_801C4074 func_801C4074__func_801C4018

struct func_801C4018_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_800058DC(void *, void *);
extern s32 func_801C1334(void);
extern void func_801C4074();

void func_801C4018(struct func_801C4018_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_801C1334() & 0xB000) {
        func_800058DC(arg0, func_801C4074);
    }
    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 - 1;
    if (temp_v0 != 0) {
        return;
    }
    func_800058DC(arg0, func_801C4074);
}
#undef func_800058DC
#undef func_801C1334
#undef func_801C4074


void func_801C4074(s32 arg0, s32 arg1) {
    func_8012FE50(0x18, D_801BBBF4, 6, 1, 2);
    func_8014AD20();
    if (D_801CC8BC != 0) {
        func_80005700(D_801CC8BC);
        D_801CC8BC = 0;
    }
    func_800058DC(arg0, func_801C40EC);
}


void func_801C40EC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_800058DC func_800058DC__func_801C40F8
extern void func_800058DC(s32, void *);


void func_801C40F8(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEDA4);
    func_8001B204(1, 0x7D0, 0x8A, D_801CEDB8);
    func_8001B204(2, 0x7D0, 0x94, D_801CEDCC);
    func_8001B204(3, 0x7D0, 0x9E, D_801CEDE0);
    func_8001B204(4, 0x7D0, 0xA8, D_801CEDF4);
    func_8001B204(5, 0, 0, D_801CEE08);
    func_8001B204(6, 0, 0, D_801CEE0C);
    func_80152240();
    func_800058DC(arg0, func_801C4200);
}
#undef func_800058DC

#define D_801C56B8 D_801C56B8__func_801C4200
#define D_801CEE10 D_801CEE10__func_801C4200
#define func_801C43B0 func_801C43B0__func_801C4200
#define func_801C43BC func_801C43BC__func_801C4200
#define func_801C47D0 func_801C47D0__func_801C4200
#define func_801C56B8 func_801C56B8__func_801C4200

extern u8 D_801CEE10[];
extern u8 D_801C56B8[];
void func_801C43B0();
void func_801C43BC();
void func_801C47D0();
void func_801C56B8();

void func_801C4200(s32 arg0, s32 arg1) {
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 3;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 3) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x7D0, (s16)(D_801CC8C8 * 10 + 0x8A), D_801CEE10);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, D_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
        if (D_801CC8C8 == 0) goto case0;
        if (D_801CC8C8 == 1) goto case1;
        if (D_801CC8C8 == 2) goto case2;
        if (D_801CC8C8 != 3) goto end;
        goto case3;
case0:
        func_800023A8(0);
        func_80020718(10);
        func_8012FE50(20, 190, 1, 1, 0);
        func_800058DC(arg0, func_801C43B0);
        return;
case1:
        func_800058DC(arg0, func_801C43BC);
        return;
case2:
        func_800023A8(0);
        func_80020718(8);
        func_800058DC(arg0, func_801C47D0);
        return;
case3:
        func_800058DC(arg0, func_801C56B8);
        return;
    }
end:
    ;
}
#undef D_801C56B8
#undef D_801CEE10
#undef func_801C43B0
#undef func_801C43BC
#undef func_801C47D0
#undef func_801C56B8


void func_801C43B0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_800058DC func_800058DC__func_801C43BC
#define func_801C44C4 func_801C44C4__func_801C43BC

extern void func_800058DC(s32, void *);
extern void func_801C44C4();

void func_801C43BC(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    func_8001B204(0, 0x7D0, 0x8A, D_801CEE24, 2);
    func_8001B204(1, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x94), D_801CEE38);
    func_8001B204(2, 0x7D0, 0x94, D_801CEE44);
    func_8001B204(3, 0x7D0, 0x9E, D_801CEE50);
    func_8001B204(4, 0, 0, D_801CEE5C);
    func_8001B204(5, 0, 0, D_801CEE60);
    func_8001B204(6, 0, 0, D_801CEE64);
    func_800058DC(arg0, func_801C44C4);
}
#undef func_800058DC
#undef func_801C44C4

#define func_801C45C8 func_801C45C8__func_801C44C4
#define func_801C56B8 func_801C56B8__func_801C44C4
void func_801C45C8(s32 arg0, s32 arg1);
struct func_801C56B8_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};
void func_801C56B8(struct func_801C56B8_Struct *arg0, s32 arg1);


void func_801C44C4(s32 arg0, s32 arg1) {
    if ((func_801C1340() & 0x800) && (D_801CC8C8 == 1)) {
        D_801CC8C8 = 0;
    }
    if ((func_801C1340() & 0x400) && (D_801CC8C8 == 0)) {
        D_801CC8C8 = 1;
    }
    func_8001B204(1, 0x7D0, (s16) (D_801CC8C8 * 10 + 0x94), D_801CEE68);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, func_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
        func_80020718(8);
        func_80152CF8(D_801CC8C8);
        func_800058DC(arg0, func_801C45C8);
    }
}
#undef func_801C45C8
#undef func_801C56B8

#define func_80005700 func_80005700__func_801C45C8
#define func_800058DC func_800058DC__func_801C45C8
#define func_801C4640 func_801C4640__func_801C45C8
extern s32 func_80005700(s32);
extern void func_800058DC(s32, void *);

extern void func_801C4640();

void func_801C45C8(s32 arg0, s32 arg1) {
    func_800023A8(0);
    func_80005700(D_801CC8A8);
    func_80005700(D_801CC8B8);
    D_801CC8A8 = 0;
    D_801CC8B8 = 0;
    D_801CC8BC = func_80005670(arg0, &D_80044090);
    func_800058DC(arg0, &func_801C4640);
}
#undef func_80005700
#undef func_800058DC
#undef func_801C4640

#define func_800058DC func_800058DC__func_801C4640
#define func_801C4674 func_801C4674__func_801C4640

extern s32 func_800058DC(s32, void *);
extern void func_801C4674();

void func_801C4640(s32 arg0, s32 arg1) {
    func_80140368();
    func_800058DC(arg0, &func_801C4674);
}
#undef func_800058DC
#undef func_801C4674

#define func_801C47C4 func_801C47C4__func_801C4674
void func_801C47C4(s32 arg0, s32 arg1);

void func_801C4674(s32 arg0, s32 arg1) {
    u8 sp27;

    if ((sp27 = func_801403F8()) == 1) {
        func_80142570();
        func_800179B0(0);
        if (D_801CC8BC != 0) {
            func_80005700(D_801CC8BC);
            D_801CC8BC = 0;
        }
        if (func_8013EA54() < 3) {
            func_80152D0C(0);
        } else {
            func_80152D0C(1);
        }
        if (func_8013EA54() == 0xFF) {
            func_80152D3C(1);
        } else {
            func_80152D3C(0);
        }
        if (D_801CC8C8 == 0) {
            func_80152D4C();
        }
        func_80152F7C();
        func_80020718(0xA);
        arg1 = func_80153008();
        func_8012FE50(0x20, arg1 & 0xFFFF, 1, 1, 0);
        func_800058DC(arg0, func_801C47C4);
    }
    if (sp27 == 2) {
        func_8012FE50(0x17, 0x73, 1, 1, 0);
        func_800058DC(arg0, func_801C47C4);
    }
}
#undef func_801C47C4


void func_801C47C4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_80005700 func_80005700__func_801C47D0
#define func_800058DC func_800058DC__func_801C47D0
#define func_801C4840 func_801C4840__func_801C47D0

extern s32 func_80005700(s32);
extern s32 func_800058DC(s32, void *);
extern void func_801C4840();

void func_801C47D0(s32 arg0, s32 arg1) {
    func_80005700(D_801CC8A8);
    func_80005700(D_801CC8B8);
    D_801CC8A8 = 0;
    D_801CC8B8 = 0;
    D_801CC8BC = func_80005670(arg0, D_80044090);
    func_800058DC(arg0, func_801C4840);
}
#undef func_80005700
#undef func_800058DC
#undef func_801C4840

#define func_801C48A4 func_801C48A4__func_801C4840
void func_801C48A4(s32 arg0, s32 arg1);


void func_801C4840(s32 arg0, s32 arg1) {
    func_80140600();
    D_801CC8C0 = func_80005670(arg0, D_801CCA34);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800058DC(arg0, func_801C48A4);
}
#undef func_801C48A4

#define func_800058DC func_800058DC__func_801C48A4
#define func_801C4954 func_801C4954__func_801C48A4

extern void func_800058DC(s32, void *);
extern void func_801C4954();

void func_801C48A4(s32 arg0, s32 arg1) {
    if (func_801406A4() & 0xFF) {
        func_80142570();
        func_800179B0(0);
        if (D_801CC8BC != 0) {
            func_80005700(D_801CC8BC);
            D_801CC8BC = 0;
        }
        if (D_801CC8C0 != 0) {
            func_80005700(D_801CC8C0);
            D_801CC8C0 = 0;
        }
        func_800023A8(0);
        func_8012FE50(0x17, 0x73, 1, 1, 0);
        func_800058DC(arg0, func_801C4954);
    }
}
#undef func_800058DC
#undef func_801C4954


void func_801C4954(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



void func_801C4960(s32 arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    if (D_801BBF0A[0x32] == 0) {
        var_v0 = 2;
        var_v1 = 6;
        D_801CC8C8 = 0;
    } else {
        var_v0 = 6;
        var_v1 = 2;
        D_801CC8C8 = 1;
    }
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEE74);
    func_8001B204(1, 0x7D0, 0x8A, D_801CEE80, var_v0);
    func_8001B204(2, 0x7D0, 0x94, D_801CEE8C, var_v1);
    func_8001B204(3, 0x7D0, 0x9E, D_801CEE98);
    func_8001B204(4, 0, 0, D_801CEEA4);
    func_8001B204(5, 0, 0, D_801CEEA8);
    func_8001B204(6, 0, 0, D_801CEEAC);
    func_800058DC(arg0, func_801C4AA8);
}

#define D_801C56B8 D_801C56B8__func_801C4AA8
#define D_801CEEB0 D_801CEEB0__func_801C4AA8
#define D_801CEEBC D_801CEEBC__func_801C4AA8
#define D_801CEEC8 D_801CEEC8__func_801C4AA8
#define D_801CEED4 D_801CEED4__func_801C4AA8
#define D_801CEEE0 D_801CEEE0__func_801C4AA8
#define func_801C56B8 func_801C56B8__func_801C4AA8
#define func_801C56B8_Struct func_801C56B8_Struct__func_801C4AA8
extern u8 D_801C56B8[];
struct func_801C56B8_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};
extern void func_801C56B8(struct func_801C56B8_Struct *arg0, s32 arg1);

extern u8 D_801CEEB0[];
extern u8 D_801CEEBC[];
extern u8 D_801CEEC8[];
extern u8 D_801CEED4[];
extern u8 D_801CEEE0[];

void func_801C4AA8(s32 arg0, s32 arg1) {
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 2;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 2) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x7D0, (s16)(D_801CC8C8 * 0xA + 0x8A), D_801CEEB0);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, D_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
        if (D_801CC8C8 == 0) goto c0;
        if (D_801CC8C8 == 1) goto c1;
        if (D_801CC8C8 != 2) goto end;
        if (1) goto c2;
c0:
        func_80020718(5);
        func_8001B204(1, 0x7D0, 0x8A, D_801CEEBC, 2);
        func_8001B204(2, 0x7D0, 0x94, D_801CEEC8, 6);
        D_801BBF0A[0x32] = 0;
        goto end;
c1:
        func_80020718(6);
        func_8001B204(1, 0x7D0, 0x8A, D_801CEED4, 6);
        func_8001B204(2, 0x7D0, 0x94, D_801CEEE0, 2);
        D_801BBF0A[0x32] = 1;
        goto end;
c2:
        func_800058DC(arg0, (void *)func_801C56B8);
    }
end:
    return;
}
#undef D_801C56B8
#undef D_801CEEB0
#undef D_801CEEBC
#undef D_801CEEC8
#undef D_801CEED4
#undef D_801CEEE0
#undef func_801C56B8
#undef func_801C56B8_Struct



void func_801C4C7C(s32 arg0, s32 arg1) {
    if (D_801BBC0D != 0) {
        if (D_801BBC0D != 1) {
            if (D_801BBC0D == 2) {
                func_8001B204(1, 0x7D0, 0x8A, D_801CEEEC, 2);
                func_8001B204(2, 0x7D0, 0x94, D_801CEEF8, 6);
                func_8001B204(3, 0x7D0, 0x9E, D_801CEF04, 6);
                D_801CC8C8 = 0;
            }
        } else {
            func_8001B204(1, 0x7D0, 0x8A, D_801CEF10, 6);
            func_8001B204(2, 0x7D0, 0x94, D_801CEF1C, 2);
            func_8001B204(3, 0x7D0, 0x9E, D_801CEF28, 6);
            D_801CC8C8 = 1;
        }
    } else {
        func_8001B204(1, 0x7D0, 0x8A, D_801CEF34, 6);
        func_8001B204(2, 0x7D0, 0x94, D_801CEF40, 6);
        func_8001B204(3, 0x7D0, 0x9E, D_801CEF4C, 2);
        D_801CC8C8 = 2;
    }
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEF58);
    func_8001B204(4, 0x7D0, 0xA8, D_801CEF64);
    func_8001B204(5, 0, 0, D_801CEF70);
    func_8001B204(6, 0, 0, D_801CEF74);
    func_800058DC(arg0, func_801C4E90);
}

#define D_801C3940 D_801C3940__func_801C4E90
#define D_801CEF78 D_801CEF78__func_801C4E90
#define D_801CEF84 D_801CEF84__func_801C4E90
#define D_801CEF90 D_801CEF90__func_801C4E90
#define D_801CEF9C D_801CEF9C__func_801C4E90
#define D_801CEFA8 D_801CEFA8__func_801C4E90
#define D_801CEFB4 D_801CEFB4__func_801C4E90
#define D_801CEFC0 D_801CEFC0__func_801C4E90
#define D_801CEFCC D_801CEFCC__func_801C4E90
#define D_801CEFD8 D_801CEFD8__func_801C4E90
#define D_801CEFE4 D_801CEFE4__func_801C4E90

extern u8 D_801CEF78[];
extern u8 D_801CEF84[];
extern u8 D_801CEF90[];
extern u8 D_801CEF9C[];
extern u8 D_801CEFA8[];
extern u8 D_801CEFB4[];
extern u8 D_801CEFC0[];
extern u8 D_801CEFCC[];
extern u8 D_801CEFD8[];
extern u8 D_801CEFE4[];
extern u8 D_801C3940[];

void func_801C4E90(s32 arg0, s32 arg1) {
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 3;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 3) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x7D0, (s16)(D_801CC8C8 * 10 + 0x8A), D_801CEF78);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, D_801C3940);
    }
    if (func_801C1334() & 0xB000) {
        if (D_801CC8C8 == 0) goto c0;
        if (D_801CC8C8 == 1) goto c1;
        if (D_801CC8C8 == 2) goto c2;
        if (D_801CC8C8 != 3) goto end;
        goto c3;
c0:
        func_8001B204(1, 0x7D0, 0x8A, D_801CEF84, 2);
        func_8001B204(2, 0x7D0, 0x94, D_801CEF90, 6);
        func_8001B204(3, 0x7D0, 0x9E, D_801CEF9C, 6);
        D_801BBC0D = 2;
        goto end;
c1:
        func_8001B204(1, 0x7D0, 0x8A, D_801CEFA8, 6);
        func_8001B204(2, 0x7D0, 0x94, D_801CEFB4, 2);
        func_8001B204(3, 0x7D0, 0x9E, D_801CEFC0, 6);
        D_801BBC0D = 1;
        goto end;
c2:
        func_8001B204(1, 0x7D0, 0x8A, D_801CEFCC, 6);
        func_8001B204(2, 0x7D0, 0x94, D_801CEFD8, 6);
        func_8001B204(3, 0x7D0, 0x9E, D_801CEFE4, 2);
        D_801BBC0D = 0;
        goto end;
c3:
        func_800058DC(arg0, func_801C3940);
    }
end:
    return;
}
#undef D_801C3940
#undef D_801CEF78
#undef D_801CEF84
#undef D_801CEF90
#undef D_801CEF9C
#undef D_801CEFA8
#undef D_801CEFB4
#undef D_801CEFC0
#undef D_801CEFCC
#undef D_801CEFD8
#undef D_801CEFE4



void func_801C5108(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    if (func_801302CC() != 0) {
        D_801CC8C8 = 1;
    } else if (func_80130290() != 0) {
        D_801CC8C8 = 0;
    } else {
        D_801CC8C8 = 2;
    }
    func_8001B204(0, 0x6B, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEFF0);
    func_8001B204(1, 0, 0, D_801CEFF4);
    D_801CFD0E = func_80001060();
    if (func_801302CC() != 0) {
        D_801CFD0E = 2;
    }
    if (D_801CFD0E == 0) goto case0;
    if (D_801CFD0E == 1) goto case1;
    if (D_801CFD0E != 2) goto done;
    goto case2;
case0:
    func_8001B204(2, 0x73, 0x8A, D_801CEFF8, 6);
    func_8001B204(3, 0x73, 0x94, D_801CF008, 6);
    func_8001B204(4, 0x73, 0x9E, D_801CF01C, 2);
    goto done;
case1:
    func_8001B204(2, 0x73, 0x8A, D_801CF024, 2);
    func_8001B204(3, 0x73, 0x94, D_801CF034, 6);
    func_8001B204(4, 0x73, 0x9E, D_801CF048, 6);
    goto done;
case2:
    func_8001B204(2, 0x73, 0x8A, D_801CF050, 6);
    func_8001B204(3, 0x73, 0x94, D_801CF060, 2);
    func_8001B204(4, 0x73, 0x9E, D_801CF074, 6);
done:
    func_8001B204(5, 0x73, 0xA8, D_801CF07C);
    func_8001B204(6, 0, 0, D_801CF084);
    func_800058DC(arg0, func_801C5378);
}

#define D_80037750 D_80037750__func_801C5378
#define D_801CF088 D_801CF088__func_801C5378
#define D_801CF08C D_801CF08C__func_801C5378
#define D_801CF09C D_801CF09C__func_801C5378
#define D_801CF0B0 D_801CF0B0__func_801C5378
#define D_801CF0B8 D_801CF0B8__func_801C5378
#define D_801CF0C8 D_801CF0C8__func_801C5378
#define D_801CF0DC D_801CF0DC__func_801C5378
#define D_801CF0E4 D_801CF0E4__func_801C5378
#define D_801CF0F4 D_801CF0F4__func_801C5378
#define D_801CF108 D_801CF108__func_801C5378
#define func_80130254 func_80130254__func_801C5378
#define func_80130264 func_80130264__func_801C5378
#define func_801C56AC func_801C56AC__func_801C5378
#define func_801C56B8 func_801C56B8__func_801C5378
#define func_801C56B8_Struct func_801C56B8_Struct__func_801C5378
struct func_801C56B8_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};
extern void func_801C56B8(struct func_801C56B8_Struct *arg0, s32 arg1);
extern void func_80130254(s32);
extern s32 func_80130264(void);
extern s16 D_80037750;
extern u8 D_801CF088[];
extern u8 D_801CF08C[];
extern u8 D_801CF09C[];
extern u8 D_801CF0B0[];
extern u8 D_801CF0B8[];
extern u8 D_801CF0C8[];
extern u8 D_801CF0DC[];
extern u8 D_801CF0E4[];
extern u8 D_801CF0F4[];
extern u8 D_801CF108[];
void func_801C56AC(s32 arg0, s32 arg1);

void func_801C5378(s32 arg0, s32 arg1) {
    s32 selection;
    if (func_801C1340() & 0x800) {
        if (D_801CC8C8 == 0) {
            D_801CC8C8 = 3;
        } else {
            D_801CC8C8 -= 1;
        }
    }
    if (func_801C1340() & 0x400) {
        if (D_801CC8C8 == 3) {
            D_801CC8C8 = 0;
        } else {
            D_801CC8C8 += 1;
        }
    }
    func_8001B204(0, 0x6B, (s16)(D_801CC8C8 * 10 + 0x8A), D_801CF088);
    if (func_801C1334() & 0x4000) {
        func_800058DC(arg0, func_801C56B8);
    }
    if (func_801C1334() & 0xB000) {
      do {
        selection = D_801CC8C8;
        if (selection == 0) goto choice0;
        if (selection == 1) goto choice1;
        if (selection == 2) goto choice2;
        if (selection != 3) goto def;
        goto choice3;
        choice0: {
            func_8001B204(2, 0x73, 0x8A, D_801CF08C, 2);
            func_8001B204(3, 0x73, 0x94, D_801CF09C, 6);
            func_8001B204(4, 0x73, 0x9E, D_801CF0B0, 6);
            D_801CFD0E = 1;
            break;
        } choice1: {
            func_8001B204(2, 0x73, 0x8A, D_801CF0B8, 6);
            func_8001B204(3, 0x73, 0x94, D_801CF0C8, 2);
            func_8001B204(4, 0x73, 0x9E, D_801CF0DC, 6);
            D_801CFD0E = 2;
            break;
        } choice2: {
            func_8001B204(2, 0x73, 0x8A, D_801CF0E4, 6);
            func_8001B204(3, 0x73, 0x94, D_801CF0F4, 6);
            func_8001B204(4, 0x73, 0x9E, D_801CF108, 2);
            D_801CFD0E = 0;
            break;
        } choice3: {
            if (((D_801CFD0E == 1) && func_80130290()) ||
                ((D_801CFD0E == 2) && func_801302CC()) ||
                ((D_801CFD0E == 0) && !func_80130264())) {
                func_800058DC(arg0, func_801C56B8);
                return;
            }
            if (D_801CFD0E == 2) {
                func_80130254(1);
                D_801CFD0E = 1;
            } else {
                func_80130254(0);
            }
            D_80037750 = D_801CFD0E + 1;
            func_800058DC(arg0, func_801C56AC);
            break;
        }
      } while (0);
    }
def:;
}
#undef D_80037750
#undef D_801CF088
#undef D_801CF08C
#undef D_801CF09C
#undef D_801CF0B0
#undef D_801CF0B8
#undef D_801CF0C8
#undef D_801CF0DC
#undef D_801CF0E4
#undef D_801CF0F4
#undef D_801CF108
#undef func_80130254
#undef func_80130264
#undef func_801C56AC
#undef func_801C56B8
#undef func_801C56B8_Struct


void func_801C56AC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}




void func_801C56B8(struct func_801C56B8_Struct *arg0, s32 arg1) {
    arg0->unk3C = 0x384;
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C4 * 0xA) + 0x76), D_801CF110);
    func_8001B204(1, 0x7D0, 0x76, D_801CF120);
    func_8001B204(2, 0x7D0, 0x80, D_801CF130);
    func_8001B204(3, 0x7D0, 0x8A, D_801CF140);
    func_8001B204(4, 0x7D0, 0x94, D_801CF150);
    if (D_80037754 == 1) {
        func_8001B204(5, 0x7D0, 0x9E, D_801CF160);
    } else {
        func_8001B204(5, 0x7D0, 0x9E, D_801CF170, 6);
    }
    func_800058DC(arg0, func_801C1DB8);
}

#define func_801C11BC func_801C11BC__func_801C57D8
#define func_801C5824 func_801C5824__func_801C57D8

extern s32 func_801C11BC();
extern void func_801C5824();

void func_801C57D8(s32 arg0, s32 arg1) {
    D_801CC8BC = func_80005670(arg0, &D_80044090);
    func_801C11BC(0x64);
    func_800058DC(arg0, &func_801C5824);
}
#undef func_801C11BC
#undef func_801C5824

#define func_801C5910 func_801C5910__func_801C5824
void func_801C5910(s32 arg0, s32 arg1);


void func_801C5824(s32 arg0, s32 arg1) {
    if (D_801CC8CC == 2) {
        func_8011AAF4(&D_801CF190, 0x833, arg0, 0, 1, 3.0f, 0.0f, 120.0f, -22.0f, 3.0f, 0.0f, 42.5f, 0.0f, 0.0f, 30.0f, -1, -1);
        func_8013EF54();
        D_801CC8B4 = func_80005670(arg0, D_801CC9F8);
        func_801C125C(-0x14);
        func_800058DC(arg0, (void *)func_801C5910);
    }
}
#undef func_801C5910

#define func_801C5944 func_801C5944__func_801C5910

extern void func_801C5944();

void func_801C5910(s32 arg0, s32 arg1) {
    if (D_801CC8CC == 0) {
        func_800058DC(arg0, func_801C5944);
    }
}
#undef func_801C5944

#define func_801C59F4 func_801C59F4__func_801C5944

extern void func_801C59F4();

void func_801C5944(s32 arg0, s32 arg1) {
    s32 sp24;

    sp24 = func_8013EFF0();
    if (sp24 == 1) {
        func_80142570();
        func_800179B0(0);
        func_8012FE50(0x20, 0xC0, 1, 1, 0);
        func_800058DC(arg0, func_801C59F4);
    }
    if (sp24 == 2) {
        func_80142570();
        func_800179B0(0);
        func_8012FE50(0x17, 0x73, 1, 1, 0);
        func_800058DC(arg0, func_801C59F4);
    }
}
#undef func_801C59F4


void func_801C59F4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



typedef struct func_801C5A00_StructEntry {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
} func_801C5A00_StructEntry;

typedef struct func_801C5A00_StructState {
    u8 pad[4];
    u16 unk4;
    u8 pad6[0x172];
    u16 unk178;
} func_801C5A00_StructState;

extern func_801C5A00_StructEntry D_801CC988[];

void func_801C5A00(void) {
    u16 temp_t8;
    u16 var_t0;
    func_801C5A00_StructEntry *temp_v0;

    var_t0 = ((func_801C5A00_StructState *)&D_801BBBF0)->unk178;
    if ((s32)var_t0 >= 4) {
        var_t0 = ((func_801C5A00_StructState *)&D_801BBBF0)->unk178 = 0;
    }
    temp_v0 = &D_801CC988[var_t0];
    func_8012FE50(temp_v0->unk1, D_801BBBF0.unk4 = temp_v0->unk2, temp_v0->unk5, 1, (s32)temp_v0->unk6);
    ((func_801C5A00_StructState *)&D_801BBBF0)->unk178++;
    func_80133830();
    func_80133950();
    func_80133A70();
    func_801C1308();
    func_80152240();
    func_800023EC();
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_801C0B30[] = {
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x74, 0x69, 0x74, 0x6C, 0x65, 0x73,
    0x63, 0x72, 0x65, 0x65, 0x6E, 0x2E, 0x63, 0x00, 0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F,
    0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61,
    0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63,
    0x65, 0x2F, 0x74, 0x69, 0x74, 0x6C, 0x65, 0x73, 0x63, 0x72, 0x65, 0x65, 0x6E, 0x2E, 0x63, 0x00,
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x74, 0x69, 0x74, 0x6C, 0x65, 0x73,
    0x63, 0x72, 0x65, 0x65, 0x6E, 0x2E, 0x63, 0x00, 0x50, 0x52, 0x45, 0x53, 0x53, 0x20, 0x53, 0x54,
    0x41, 0x52, 0x54, 0x20, 0x42, 0x55, 0x54, 0x54, 0x4F, 0x4E, 0x00, 0x00, 0x25, 0x66, 0x50, 0x52,
    0x45, 0x53, 0x53, 0x20, 0x53, 0x54, 0x41, 0x52, 0x54, 0x20, 0x42, 0x55, 0x54, 0x54, 0x4F, 0x4E,
    0x00, 0x00, 0x00, 0x00, 0xA1, 0xFC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x00, 0x00, 0x00, 0x20, 0x4E, 0x45, 0x57, 0x20, 0x47, 0x41, 0x4D, 0x45, 0x20, 0x20, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x43, 0x4F, 0x4E, 0x54, 0x49, 0x4E, 0x55, 0x45, 0x20, 0x20, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x42, 0x41, 0x54, 0x54, 0x4C, 0x45, 0x20, 0x4D, 0x4F, 0x44, 0x45,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x53, 0x4F, 0x55, 0x4E, 0x44, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x52, 0x45, 0x53, 0x4F, 0x4C, 0x55, 0x54, 0x49, 0x4F, 0x4E, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x25, 0x70, 0x20, 0x52, 0x45, 0x53, 0x4F, 0x4C, 0x55, 0x54, 0x49, 0x4F,
    0x4E, 0x20, 0x00, 0x00, 0x20, 0x44, 0x45, 0x42, 0x55, 0x47, 0x20, 0x4D, 0x4F, 0x44, 0x45, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75,
    0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69,
    0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x74, 0x69,
    0x74, 0x6C, 0x65, 0x73, 0x63, 0x72, 0x65, 0x65, 0x6E, 0x2E, 0x63, 0x00, 0xA1, 0xFC, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x20, 0x4E, 0x45, 0x57,
    0x20, 0x47, 0x41, 0x4D, 0x45, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x20, 0x43, 0x4F, 0x4E,
    0x54, 0x49, 0x4E, 0x55, 0x45, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x20, 0x42, 0x41, 0x54,
    0x54, 0x4C, 0x45, 0x20, 0x4D, 0x4F, 0x44, 0x45, 0x00, 0x00, 0x00, 0x00, 0x20, 0x53, 0x4F, 0x55,
    0x4E, 0x44, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x20, 0x52, 0x45, 0x53,
    0x4F, 0x4C, 0x55, 0x54, 0x49, 0x4F, 0x4E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x25, 0x70, 0x20, 0x52,
    0x45, 0x53, 0x4F, 0x4C, 0x55, 0x54, 0x49, 0x4F, 0x4E, 0x20, 0x00, 0x00, 0x20, 0x44, 0x45, 0x42,
    0x55, 0x47, 0x20, 0x4D, 0x4F, 0x44, 0x45, 0x20, 0x00, 0x00, 0x00, 0x00, 0x55, 0x31, 0x30, 0x33,
    0x31, 0x38, 0x31, 0x36, 0x30, 0x33, 0x36, 0x33, 0x32, 0x32, 0x00, 0x00, 0xA1, 0xFC, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xA1, 0xFC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x47, 0x41, 0x4D, 0x45, 0x20, 0x53, 0x54, 0x41, 0x52, 0x54, 0x00, 0x20, 0x44, 0x49, 0x46,
    0x46, 0x49, 0x43, 0x55, 0x4C, 0x54, 0x59, 0x00, 0x20, 0x45, 0x58, 0x49, 0x54, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xA1, 0xFC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00,
    0xA1, 0xF4, 0xA1, 0xF4, 0xA1, 0xF4, 0xA1, 0xF4, 0xA1, 0xF4, 0xA1, 0xF4, 0xA1, 0xF4, 0xA1, 0xF4,
    0xA1, 0xF4, 0xA1, 0xF4, 0xA1, 0xF4, 0x6E, 0x65, 0x77, 0x20, 0x67, 0x61, 0x6D, 0x65, 0x20, 0xA4,
    0xCA, 0xA4, 0xCE, 0xA4, 0xC7, 0xBD, 0xE9, 0xB4, 0xFC, 0xB2, 0xBD, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4,
    0xB9, 0xA1, 0xA3, 0xA1, 0xF4, 0x0A, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x61, 0x41, 0x52, 0x45, 0x41,
    0x20, 0x25, 0x64, 0x00, 0xA1, 0xFC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x20, 0x56, 0x53, 0x20, 0x4D, 0x4F, 0x44, 0x45,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x20, 0x43, 0x52, 0x45,
    0x41, 0x54, 0x55, 0x52, 0x45, 0x20, 0x42, 0x41, 0x54, 0x54, 0x4C, 0x45, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x44, 0x41, 0x54, 0x41, 0x20, 0x45, 0x44, 0x49, 0x54, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x45, 0x58, 0x49, 0x54, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xA1, 0xFC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x00, 0x00, 0x00, 0x25, 0x6D, 0x43, 0x52, 0x45, 0x41, 0x54, 0x55, 0x52, 0x45, 0x20, 0x42,
    0x41, 0x54, 0x54, 0x4C, 0x45, 0x00, 0x00, 0x00, 0xA1, 0xFC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x00, 0x20, 0x35, 0x20, 0x4D, 0x41, 0x54, 0x43, 0x48, 0x45, 0x53, 0x00, 0x00,
    0x20, 0x53, 0x55, 0x52, 0x56, 0x49, 0x56, 0x41, 0x4C, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA1, 0xFC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x00, 0xA1, 0xFC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00,
    0x25, 0x70, 0x20, 0x53, 0x54, 0x45, 0x52, 0x45, 0x4F, 0x20, 0x20, 0x00, 0x25, 0x70, 0x20, 0x4D,
    0x4F, 0x4E, 0x41, 0x55, 0x52, 0x41, 0x4C, 0x00, 0x20, 0x45, 0x58, 0x49, 0x54, 0x20, 0x20, 0x20,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xA1, 0xFC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x25, 0x70, 0x20, 0x53,
    0x54, 0x45, 0x52, 0x45, 0x4F, 0x20, 0x20, 0x00, 0x25, 0x70, 0x20, 0x4D, 0x4F, 0x4E, 0x41, 0x55,
    0x52, 0x41, 0x4C, 0x00, 0x25, 0x70, 0x20, 0x53, 0x54, 0x45, 0x52, 0x45, 0x4F, 0x20, 0x20, 0x00,
    0x25, 0x70, 0x20, 0x4D, 0x4F, 0x4E, 0x41, 0x55, 0x52, 0x41, 0x4C, 0x00, 0x25, 0x70, 0x20, 0x55,
    0x4C, 0x54, 0x49, 0x4D, 0x41, 0x54, 0x45, 0x00, 0x25, 0x70, 0x20, 0x48, 0x41, 0x52, 0x44, 0x20,
    0x20, 0x20, 0x20, 0x00, 0x25, 0x70, 0x20, 0x4E, 0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x20, 0x20, 0x00,
    0x25, 0x70, 0x20, 0x55, 0x4C, 0x54, 0x49, 0x4D, 0x41, 0x54, 0x45, 0x00, 0x25, 0x70, 0x20, 0x48,
    0x41, 0x52, 0x44, 0x20, 0x20, 0x20, 0x20, 0x00, 0x25, 0x70, 0x20, 0x4E, 0x4F, 0x52, 0x4D, 0x41,
    0x4C, 0x20, 0x20, 0x00, 0x25, 0x70, 0x20, 0x55, 0x4C, 0x54, 0x49, 0x4D, 0x41, 0x54, 0x45, 0x00,
    0x25, 0x70, 0x20, 0x48, 0x41, 0x52, 0x44, 0x20, 0x20, 0x20, 0x20, 0x00, 0x25, 0x70, 0x20, 0x4E,
    0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x20, 0x20, 0x00, 0xA1, 0xFC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x00, 0x00, 0x20, 0x45, 0x58, 0x49, 0x54, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA1, 0xFC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x00, 0x00, 0x25, 0x70, 0x20, 0x55, 0x4C, 0x54, 0x49, 0x4D, 0x41, 0x54, 0x45, 0x00,
    0x25, 0x70, 0x20, 0x48, 0x41, 0x52, 0x44, 0x20, 0x20, 0x20, 0x20, 0x00, 0x25, 0x70, 0x20, 0x4E,
    0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x20, 0x20, 0x00, 0x25, 0x70, 0x20, 0x55, 0x4C, 0x54, 0x49, 0x4D,
    0x41, 0x54, 0x45, 0x00, 0x25, 0x70, 0x20, 0x48, 0x41, 0x52, 0x44, 0x20, 0x20, 0x20, 0x20, 0x00,
    0x25, 0x70, 0x20, 0x4E, 0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x20, 0x20, 0x00, 0x25, 0x70, 0x20, 0x55,
    0x4C, 0x54, 0x49, 0x4D, 0x41, 0x54, 0x45, 0x00, 0x25, 0x70, 0x20, 0x48, 0x41, 0x52, 0x44, 0x20,
    0x20, 0x20, 0x20, 0x00, 0x25, 0x70, 0x20, 0x4E, 0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x20, 0x20, 0x00,
    0xA1, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x70, 0x48, 0x49, 0x47, 0x48, 0x20, 0x4E,
    0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x00, 0x00, 0x00, 0x25, 0x70, 0x48, 0x49, 0x47, 0x48, 0x20, 0x4C,
    0x45, 0x54, 0x54, 0x45, 0x52, 0xA1, 0xB8, 0x42, 0x4F, 0x58, 0x00, 0x00, 0x25, 0x70, 0x4C, 0x4F,
    0x57, 0x00, 0x00, 0x00, 0x25, 0x70, 0x48, 0x49, 0x47, 0x48, 0x20, 0x4E, 0x4F, 0x52, 0x4D, 0x41,
    0x4C, 0x00, 0x00, 0x00, 0x25, 0x70, 0x48, 0x49, 0x47, 0x48, 0x20, 0x4C, 0x45, 0x54, 0x54, 0x45,
    0x52, 0xA1, 0xB8, 0x42, 0x4F, 0x58, 0x00, 0x00, 0x25, 0x70, 0x4C, 0x4F, 0x57, 0x00, 0x00, 0x00,
    0x25, 0x70, 0x48, 0x49, 0x47, 0x48, 0x20, 0x4E, 0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x00, 0x00, 0x00,
    0x25, 0x70, 0x48, 0x49, 0x47, 0x48, 0x20, 0x4C, 0x45, 0x54, 0x54, 0x45, 0x52, 0xA1, 0xB8, 0x42,
    0x4F, 0x58, 0x00, 0x00, 0x25, 0x70, 0x4C, 0x4F, 0x57, 0x00, 0x00, 0x00, 0x45, 0x58, 0x49, 0x54,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA1, 0xFC, 0x00, 0x00, 0x25, 0x70, 0x48, 0x49,
    0x47, 0x48, 0x20, 0x4E, 0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x00, 0x00, 0x00, 0x25, 0x70, 0x48, 0x49,
    0x47, 0x48, 0x20, 0x4C, 0x45, 0x54, 0x54, 0x45, 0x52, 0xA1, 0xB8, 0x42, 0x4F, 0x58, 0x00, 0x00,
    0x25, 0x70, 0x4C, 0x4F, 0x57, 0x00, 0x00, 0x00, 0x25, 0x70, 0x48, 0x49, 0x47, 0x48, 0x20, 0x4E,
    0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x00, 0x00, 0x00, 0x25, 0x70, 0x48, 0x49, 0x47, 0x48, 0x20, 0x4C,
    0x45, 0x54, 0x54, 0x45, 0x52, 0xA1, 0xB8, 0x42, 0x4F, 0x58, 0x00, 0x00, 0x25, 0x70, 0x4C, 0x4F,
    0x57, 0x00, 0x00, 0x00, 0x25, 0x70, 0x48, 0x49, 0x47, 0x48, 0x20, 0x4E, 0x4F, 0x52, 0x4D, 0x41,
    0x4C, 0x00, 0x00, 0x00, 0x25, 0x70, 0x48, 0x49, 0x47, 0x48, 0x20, 0x4C, 0x45, 0x54, 0x54, 0x45,
    0x52, 0xA1, 0xB8, 0x42, 0x4F, 0x58, 0x00, 0x00, 0x25, 0x70, 0x4C, 0x4F, 0x57, 0x00, 0x00, 0x00,
    0xA1, 0xFC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00,
    0x20, 0x4E, 0x45, 0x57, 0x20, 0x47, 0x41, 0x4D, 0x45, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x43, 0x4F, 0x4E, 0x54, 0x49, 0x4E, 0x55, 0x45, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x42, 0x41, 0x54, 0x54, 0x4C, 0x45, 0x20, 0x4D, 0x4F, 0x44, 0x45, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x53, 0x4F, 0x55, 0x4E, 0x44, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x52, 0x45, 0x53, 0x4F, 0x4C, 0x55, 0x54, 0x49, 0x4F, 0x4E, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x25, 0x70, 0x20, 0x52, 0x45, 0x53, 0x4F, 0x4C, 0x55, 0x54, 0x49, 0x4F, 0x4E, 0x20, 0x00, 0x00,
    0x20, 0x44, 0x45, 0x42, 0x55, 0x47, 0x20, 0x4D, 0x4F, 0x44, 0x45, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x74, 0x69, 0x74, 0x6C, 0x65, 0x73,
    0x63, 0x72, 0x65, 0x65, 0x6E, 0x2E, 0x63, 0x00, 0xA1, 0xE3, 0xA1, 0xE3, 0xA5, 0xEB, 0xA1, 0xBC,
    0xA5, 0xD7, 0xA5, 0xC7, 0xA5, 0xE2, 0xA4, 0xCB, 0xB0, 0xDC, 0xB9, 0xD4, 0xA1, 0xE4, 0xA1, 0xE4,
    0x0A, 0x00, 0x00, 0x00, 0xA1, 0xE3, 0xA5, 0xEB, 0xA1, 0xBC, 0xA5, 0xD7, 0xA5, 0xC7, 0xA5, 0xE2,
    0xA5, 0xAB, 0xA5, 0xA6, 0xA5, 0xF3, 0xA5, 0xC8, 0xA4, 0xAC, 0xB4, 0xFB, 0xC4, 0xEA, 0xC3, 0xCD,
    0xA4, 0xF2, 0xB1, 0xDB, 0xA4, 0xA8, 0xA4, 0xDE, 0xA4, 0xB7, 0xA4, 0xBF, 0xA4, 0xCE, 0xA4, 0xC7,
    0xBD, 0xE9, 0xB4, 0xFC, 0xB2, 0xBD, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xB9, 0xA1, 0xE4, 0x0A, 0x00,
    0x5B, 0xA5, 0xEB, 0xA1, 0xBC, 0xA5, 0xD7, 0xA5, 0xC7, 0xA5, 0xE2, 0xA5, 0xAB, 0xA5, 0xA6, 0xA5,
    0xF3, 0xA5, 0xC8, 0x20, 0x3A, 0x20, 0x25, 0x64, 0x5D, 0x0A, 0x00, 0x00, 0x5B, 0xC1, 0xFD, 0xB2,
    0xC3, 0xB8, 0xE5, 0xA5, 0xEB, 0xA1, 0xBC, 0xA5, 0xD7, 0xA5, 0xC7, 0xA5, 0xE2, 0xA5, 0xAB, 0xA5,
    0xA6, 0xA5, 0xF3, 0xA5, 0xC8, 0x20, 0x3A, 0x20, 0x25, 0x64, 0x5D, 0x0A, 0x00, 0x00, 0x00, 0x00,
    0x3D, 0x4C, 0xCC, 0xCD, 0x80, 0x1C, 0x1F, 0x10, 0x80, 0x1C, 0x1F, 0x30, 0x80, 0x1C, 0x1F, 0x58,
    0x80, 0x1C, 0x1F, 0x70, 0x80, 0x1C, 0x1F, 0x88, 0x80, 0x1C, 0x1F, 0xB4,
};
/* hh-owned-pool func_801C2A44 801CF27C 801CF290 */
