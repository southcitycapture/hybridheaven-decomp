#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038D28C(s32 a);


s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038D28C(0x68);
    func_8038BED4();
    return 1;
}


extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E6898;
extern f32 D_801E689C;
extern f32 D_801E68A0;
extern f32 D_801E68A4;
extern f32 D_801E68A8;
extern f32 D_801E68AC;
extern f32 D_801E68B0;

s32 func_801E1C14(s32 arg0, s32 arg1) {
    f32 fv0;
    f32 fv1;
    f32 ft4;

    fv0 = D_801E6898;
    fv1 = D_801E689C;
    ft4 = D_801E68A0;
    if (func_8038BEF8(0.0f, 4.0f, -11.5f, 48.5f, D_801E68A4, D_801E68A8, D_801E68AC, D_801E68B0, fv0, fv1, ft4, fv0, fv1, ft4) != 0) {
        func_8038BED4();
        return 2;
    }
    return 1;
}


extern f32 D_801E68B4;
extern f32 D_801E68B8;
extern f32 D_801E68BC;
extern f32 D_801E68C0;
extern f32 D_801E68C4;
extern f32 D_801E68C8;
extern f32 D_801E68CC;
extern f32 D_801E68D0;

s32 func_801E1CC8(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, -65.1f, 64.9f, 10.5f, D_801E68B4, D_801E68B8,
                      D_801E68BC, D_801E68C0, D_801E68C4, D_801E68C8, -40.5f,
                      D_801E68CC, D_801E68D0) != 0) {
        func_8038BED4();
        return 3;
    }
    return 2;
}


extern f32 D_801E68D4;
extern f32 D_801E68D8;
extern f32 D_801E68DC;
extern f32 D_801E68E0;
extern f32 D_801E68E4;
extern f32 D_801E68E8;
extern f32 D_801E68EC;
extern f32 D_801E68F0;
extern f32 D_801E68F4;

s32 func_801E1D9C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 3.0f, 10.3f, 1.5f, D_801E68D4, D_801E68D8, D_801E68DC, D_801E68E0, D_801E68E4, 10.0f, D_801E68E8, D_801E68EC, D_801E68F0, D_801E68F4) != 0) {
        func_8038BED4();
        return 4;
    }
    return 3;
}


extern f32 D_801E68F8;
extern f32 D_801E68FC;
extern f32 D_801E6900;
extern f32 D_801E6904;
extern f32 D_801E6908;
extern f32 D_801E690C;
extern f32 D_801E6910;
extern f32 D_801E6914;

s32 func_801E1E6C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 2.0f, -5.3f, 46.4f, D_801E68F8, D_801E68FC, D_801E6900, D_801E6904, -44.0f, D_801E6908, D_801E690C, -42.5f, D_801E6910, D_801E6914) != 0) {
        func_8038BED4();
        return 5;
    }
    return 4;
}


extern f32 D_801E6918;
extern f32 D_801E691C;
extern f32 D_801E6920;
extern f32 D_801E6924;
extern f32 D_801E6928;
extern f32 D_801E692C;
extern f32 D_801E6930;
extern f32 D_801E6934;
extern f32 D_801E6938;
extern f32 D_801E693C;

s32 func_801E1F40(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 3.0f, 8.7f, 3.4f,
            D_801E6918, D_801E691C, D_801E6920, D_801E6924,
            D_801E6928, D_801E692C, D_801E6930, D_801E6934,
            D_801E6938, D_801E693C) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E2004(s32 arg0, s32 arg1) {
    return 7;
}

struct func_801E25A4_Struct {
    u8 pad[0xC];
    s32 unkC;
};
struct func_801E25A4_Struct *func_801BF6B0(s32 arg0);
s32 func_801C1B1C(void);

typedef struct func_801E2014_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2014_Struct;

s32 func_801E2014(s32 arg0, s32 arg1) {
    if ((((func_801E2014_Struct *)func_801BF6B0(7))->unkC < 7) || (func_801C1B1C() == 0)) {
        return 7;
    }
    return 8;
}

extern void D_8038BD88(f32, f32, f32);
extern void func_8038BD50(f32, f32, f32);

extern f32 D_801E6940;
extern f32 D_801E6944;

s32 func_801E2068(s32 arg0, s32 arg1) {
    func_8038BD50(D_801E6940, 53.0f, 7.2f);
    D_8038BD88(D_801E6944, 65.5f, 0.0f);
    return 9;
}



s32 func_801E20C0(s32 arg0, s32 arg1) {
    if (((s32)*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0xC) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 0xA;
}


s32 func_801E2114(s32 arg0, s32 arg1) {
    return 11;
}



s32 func_801E2124(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BED4();
        return 0xC;
    }
    return 0xB;
}


extern f32 D_801E6948;
extern f32 D_801E694C;
extern f32 D_801E6950;
extern f32 D_801E6954;
extern f32 D_801E6958;
extern f32 D_801E695C;
extern f32 D_801E6960;

s32 func_801E216C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, D_801E6948, -46.6f, 108.6f, -20.5f, D_801E694C, 37.0f, D_801E6950, D_801E6954, D_801E6958, 14.0f, D_801E695C, D_801E6960, -0.5f) != 0) {
        func_8038BED4();
        return 0xD;
    }
    return 0xC;
}


extern f32 D_801E6964;
extern f32 D_801E6968;
extern f32 D_801E696C;
extern f32 D_801E6970;
extern f32 D_801E6974;
extern f32 D_801E6978;
extern f32 D_801E697C;
extern f32 D_801E6980;
extern f32 D_801E6984;
extern f32 D_801E6988;

s32 func_801E2240(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, -9.2f, 38.2f,
                      D_801E6964, D_801E6968, D_801E696C, D_801E6970,
                      D_801E6974, D_801E6978, D_801E697C, D_801E6980,
                      D_801E6984, D_801E6988) != 0) {
        func_8038BED4();
        return 0xE;
    }
    return 0xD;
}



s32 func_801E2314(s32 arg0, s32 arg1)
{
    f32 temp = 4.7f;

    if (func_8038BEF8(0.0f, 4.000001f, 31.4f, 5.8f, 17.6f, 24.3f, 9.8f, 24.8f, temp, 4.5f, 0.1f, temp, 4.5f, 0.1f) != 0) {
        return 0xF;
    }
    return 0xE;
}


extern void func_8038BE98(f32);
extern f32 D_801E69A8;

s32 func_801E23C0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC35001) != 0) {
        func_8038BED4();
        func_8038BE98((68.4000015258789f));
        return 0x10;
    }
    return 0xF;
}


extern f32 D_801E69AC;
extern f32 D_801E69B0;
extern f32 D_801E69B4;
extern f32 D_801E69B8;
extern f32 D_801E69BC;
extern f32 D_801E69C0;
extern f32 D_801E69C4;
extern f32 D_801E69C8;
extern f32 D_801E69CC;

s32 func_801E2418(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, (3.3999996185302734f), 23.6f, 12.5f, (-15.300000190734863f), (14.899999618530273f), (5.699999809265137f),
                      (-19.899999618530273f), 4.0f, (15.300000190734863f), 6.5f, (2.200000047683716f), (10.100000381469727f),
                      (6.300000190734863f)) != 0) {
        return 0x11;
    }
    return 0x10;
}


s32 func_801E24D8(s32 arg0, s32 arg1) {
    return 18;
}


typedef struct func_801E24E8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E24E8_Struct;

s32 func_801E24E8(s32 arg0, s32 arg1) {
    if ((((func_801E24E8_Struct *)func_801BF6B0(7))->unkC < 0x14) || (func_801C1B1C() == 0)) {
        return 0x12;
    }
    return 0x13;
}


extern f32 D_801E69D0;
extern f32 D_801E69D4;
extern f32 D_801E69D8;
extern f32 D_801E69DC;

s32 func_801E253C(s32 arg0, s32 arg1) {
    func_8038BE98((50.400001525878906f));
    func_8038BD50((-6.699999809265137f), 8.5f, -19.6f);
    D_8038BD88((4.599999904632568f), (5.599999904632568f), 23.3f);
    return 0x14;
}




s32 func_801E25A4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x19) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}


extern void func_8038BEAC(void);
extern f32 D_801E69E0;
extern f32 D_801E69E4;

s32 func_801E25F8(s32 arg0, s32 arg1) {
    func_8038BEAC();
    func_8038BD50(0.0f, 0.0f, -14.4f);
    D_8038BD88((0.8999999761581421f), (6.800000190734863f), 3.2f);
    return 0x16;
}


s32 func_801E2650(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x1E) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}


extern f32 D_801E69E8;
extern f32 D_801E69EC;
extern f32 D_801E69F0;
extern f32 D_801E69F4;
extern f32 D_801E69F8;

s32 func_801E26A4(s32 arg0, s32 arg1) {
    func_8038BE98((55.70000076293945f));
    func_8038BD50((30.399999618530273f), (6.300000190734863f), -19.0f);
    D_8038BD88((5.900000095367432f), (9.899999618530273f), 3.7f);
    return 0x18;
}

/* starting point: func_801F57A0 (file028), whose assembly is 95% the same as this function's */

s32 func_801E2708(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x23) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}


s32 func_801E275C(s32 arg0, s32 arg1) {
    return 26;
}


extern void D_8038C158();

s32 func_801E276C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 0x1B;
    }
    return 0x1A;
}


extern f32 D_801E69FC;
extern f32 D_801E6A00;
extern f32 D_801E6A04;
extern f32 D_801E6A08;
extern f32 D_801E6A0C;
extern f32 D_801E6A10;
extern f32 D_801E6A14;
extern f32 D_801E6A18;
extern f32 D_801E6A1C;

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E27B4(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 5.0f, 0x41F33333, 0x40C9999A, -19.0f, (13.699999809265137f),
                   (1.100000023841858f), (-28.200000762939453f), (5.900000095367432f), (9.899999618530273f), (3.700000047683716f),
                   (6.099999904632568f), 14.0f, (8.899999618530273f), (55.70000076293945f), 40.0f) != 0) {
        return 0x1C;
    }
    return 0x1B;
}



s32 func_801E2890(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5572FF) != 0) {
        func_8038BED4();
        return 0x1D;
    }
    return 0x1C;
}


extern f32 D_801E6A20;
extern f32 D_801E6A24;
extern f32 D_801E6A28;
extern f32 D_801E6A2C;
extern f32 D_801E6A30;
extern f32 D_801E6A34;
extern f32 D_801E6A38;
extern f32 D_801E6A3C;

s32 func_801E28DC(s32 arg0, s32 arg1) {
    f32 sp20;

    sp20 = (4.199999809265137f);
    if (func_8038BEF8(0.0f, (2.799999713897705f), 5.7f, 3.6f, (-78.4000015258789f), (5.599999904632568f), 3.5f, (-72.4000015258789f), sp20, (20.299999237060547f), (-0.30000001192092896f), sp20, (19.299999237060547f), 0.0f) != 0) {
        func_8038BED4();
        return 0x1E;
    }
    return 0x1D;
}


extern f32 D_801E6A40;
extern f32 D_801E6A44;
extern f32 D_801E6A48;
extern f32 D_801E6A4C;
extern f32 D_801E6A50;
extern f32 D_801E6A54;
extern f32 D_801E6A58;

s32 func_801E29A0(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_ft4;

    temp_fv0 = (0.4000000059604645f);
    temp_fv1 = (-0.800000011920929f);
    temp_ft4 = (9.600000381469727f);
    if (func_8038BEF8(0.0f, (0.8000001907348633f), temp_fv0, 8.8f, (-19.899999618530273f), (0.20000000298023224f), (8.899999618530273f), -17.0f, temp_fv1, temp_ft4, temp_fv0, temp_fv1, temp_ft4, temp_fv0) != 0) {
        func_8038BED4();
        return 0x1F;
    }
    return 0x1E;
}

extern f32 D_801E6A5C;
extern f32 D_801E6A60;
extern f32 D_801E6A64;
extern f32 D_801E6A68;
extern f32 D_801E6A6C;
extern f32 D_801E6A70;
extern f32 D_801E6A74;
extern f32 D_801E6A78;
extern f32 D_801E6A7C;
extern f32 D_801E6A80;

s32 func_801E2A58(s32 arg0, s32 arg1) {
    f32 k = (4.199999809265137f);
    if (func_8038BEF8(0.0f, (2.8000001907348633f), 5.5f, 3.5f, (-71.0999984741211f), (5.300000190734863f), (3.299999952316284f), (-56.900001525878906f), k, (19.100000381469727f), (0.10000000149011612f), k, (16.700000762939453f), (0.699999988079071f))) {
        func_8038BED4();
        return 0x20;
    }
    return 0x1F;
}


extern f32 D_801E6A84;
extern f32 D_801E6A88;
extern f32 D_801E6A8C;
extern f32 D_801E6A90;
extern f32 D_801E6A94;
extern f32 D_801E6A98;

s32 func_801E2B1C(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;

    a = (-0.4000000059604645f);
    b = (13.600000381469727f);
    c = (0.30000001192092896f);
    if (func_8038BEF8(0.0f, (0.8000001907348633f), 0.6f, 15.2f, (-16.899999618530273f), 0.5f, 13.0f, (-15.199999809265137f), a, b, c, a, b, c) != 0) {
        func_8038BED4();
        return 0x21;
    }
    return 0x20;
}


extern f32 D_801E6A9C;
extern f32 D_801E6AA0;
extern f32 D_801E6AA4;
extern f32 D_801E6AA8;
extern f32 D_801E6AAC;
extern f32 D_801E6AB0;

s32 func_801E2BD8(s32 arg0, s32 arg1) {
    f32 temp = (4.199999809265137f);
    if (func_8038BEF8(0.0f, 2.0f, 5.3f, 3.3f, (-55.20000076293945f), 5.0f,
            (3.200000047683716f), -41.0f, temp, (16.399999618530273f),
            (0.800000011920929f), temp, (14.100000381469727f), 1.5f) != 0) {
        func_8038BED4();
        return 0x22;
    }
    return 0x21;
}


extern f32 D_801E6AB4;
extern f32 D_801E6AB8;
extern f32 D_801E6ABC;
extern f32 D_801E6AC0;
extern f32 D_801E6AC4;
extern f32 D_801E6AC8;

s32 func_801E2CA4(s32 arg0, s32 arg1) {
    f32 temp_ab4;
    f32 temp_ab8;
    f32 temp_abc;

    temp_ab4 = (-0.4000000059604645f);
    temp_ab8 = (15.600000381469727f);
    temp_abc = (0.20000000298023224f);
    if (func_8038BEF8(0.0f, (0.8000001907348633f), 0.6f, 14.9f, (-16.899999618530273f), 0.5f, 15.0f, (-14.600000381469727f), temp_ab4, temp_ab8, temp_abc, temp_ab4, temp_ab8, temp_abc) != 0) {
        func_8038BED4();
        return 0x23;
    }
    return 0x22;
}

#define D_801E6ACC D_801E6ACC__func_801E2D60
#define D_801E6AD0 D_801E6AD0__func_801E2D60
#define D_801E6AD4 D_801E6AD4__func_801E2D60
#define D_801E6AD8 D_801E6AD8__func_801E2D60
#define D_801E6ADC D_801E6ADC__func_801E2D60
#define D_801E6AE0 D_801E6AE0__func_801E2D60
#define D_801E6AE4 D_801E6AE4__func_801E2D60


extern f32 D_801E6ACC;
extern f32 D_801E6AD0;
extern f32 D_801E6AD4;
extern f32 D_801E6AD8;
extern f32 D_801E6ADC;
extern f32 D_801E6AE0;
extern f32 D_801E6AE4;

s32 func_801E2D60(s32 arg0, s32 arg1) {
    f32 shared = (4.199999809265137f);
    f32 temp = 5.0;
    if (temp) {}
    if (temp) {}
    if (temp) {}
    if (func_8038BEF8(0.0f, 5.0f, temp, 3.1f,
        (-39.70000076293945f), (4.699999809265137f), temp, (-26.600000381469727f),
        shared, (13.899999618530273f), 1.5f, shared,
        (12.899999618530273f), (1.7999999523162842f)) != 0) {
        return 0x24;
    }
    return 0x23;
}
#undef D_801E6ACC
#undef D_801E6AD0
#undef D_801E6AD4
#undef D_801E6AD8
#undef D_801E6ADC
#undef D_801E6AE0
#undef D_801E6AE4


s32 func_801E2E18(s32 arg0, s32 arg1) {
    return 36;
}


s32 func_801E2E28(s32 arg0, s32 arg1) {
    return 37;
}


s32 func_801E2E38(s32 arg0, s32 arg1) {
    return 38;
}


s32 func_801E2E48(s32 arg0, s32 arg1) {
    return 39;
}


s32 func_801E2E58(s32 arg0, s32 arg1) {
    return 40;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E2E68(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


extern void func_801CCE0C(s32 a);
extern void func_801CCE50(s32 a, s32 b, s32 c);
extern void func_801CCE88(s32 a, s32 b, s32 c, s32 d);
extern void func_801CCEC8(s32 a, s32 b, s32 c, s32 d);

s32 func_801E2EA4(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0x4B, 0x7F, 0xFF);
    func_801CCEC8(0, 0, -0x1E, 0x50);
    func_801CCE50(0x28, 0x28, 0x28);
    return 2;
}


s32 func_801E2F08(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2F18(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2F28(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2F38(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E2F48(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E2F58(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E2F68(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E2F78(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E2F88(s32 arg0, s32 arg1) {
    return 10;
}

void func_801C2420(s32 arg0, void *arg1);

extern u8 func_8038DD54[];

s32 func_801E2F98(s32 arg0, s32 arg1) {
    func_801C2420(0x2DB, func_8038DD54 + 0x14);
    return 1;
}


struct func_801E2FCC_Struct3 { u8 pad[0x4]; f32 f4; f32 f8; f32 fC; u8 pad2[0x2]; s16 s12; u8 pad3[4]; f32 f18; f32 f1C; f32 f20; u8 pad4[0xC]; void *p30; };
struct func_801E2FCC_Struct2 { u8 pad[0x2C]; struct func_801E2FCC_Struct3 *u2C; };
struct func_801E2FCC_Struct1 { struct func_801E2FCC_Struct2 *u0; struct func_801E2FCC_Struct2 *u4; };
struct func_801E2FCC_V { s32 a[4]; };
extern u8 D_8038D840[];
extern s32 D_8038D850;
extern struct func_801E2FCC_Struct1 *D_8038D854;
extern struct func_801E2FCC_V D_801E615C;
extern u8 D_8017AE98[];
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);

s32 func_801E2FCC(s32 arg0, s32 arg1) {
    struct func_801E2FCC_V sp18;
    sp18 = D_801E615C;
    func_80005E44(D_8038D850, D_8038D840);
    func_80005E44(D_8038D850, &sp18);
    func_80006214(D_8038D850);
    func_8012C89C(D_8038D850, 0, 0x2DB, 0);
    func_8012C89C(D_8038D850, 1, 0x2DB, 1);
    D_8038D854->u0->u2C->f4 = 0.0f;
    D_8038D854->u0->u2C->f8 = 0.0f;
    D_8038D854->u0->u2C->fC = 0.0f;
    D_8038D854->u0->u2C->f18 = 1.0f;
    D_8038D854->u0->u2C->f1C = 1.0f;
    D_8038D854->u0->u2C->f20 = 1.0f;
    D_8038D854->u0->u2C->s12 = 0;
    D_8038D854->u0->u2C->p30 = D_8017AE98;
    D_8038D854->u4->u2C->f4 = 0.0f;
    D_8038D854->u4->u2C->f8 = 0.0f;
    D_8038D854->u4->u2C->fC = 0.0f;
    D_8038D854->u4->u2C->f18 = 1.0f;
    D_8038D854->u4->u2C->f1C = 1.0f;
    D_8038D854->u4->u2C->f20 = 1.0f;
    D_8038D854->u4->u2C->s12 = 0;
    D_8038D854->u4->u2C->p30 = D_8017AE98;
    return 2;
}


s32 func_801E3198(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E31A8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E31B8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E31C8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E31D8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E31E8(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E31F8(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3208(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3218(s32 arg0, s32 arg1) {
    return 10;
}


extern s32 func_801C2570(s32 arg0, void *arg1);
extern void func_8038BA8C(void);
extern s32 D_8038DF70[];

s32 func_801E3228(s32 arg0, s32 arg1) {
    D_8038DF70[1] = 0x800;
    if (func_801C2570(0x462, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}


extern s32 func_801C4DD4(s32 arg0, void *arg1, void *arg2, void *arg3, void *arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8);
extern void func_801D5288(void);
extern void func_801D5294(void);
extern void func_801D52A0(void);
extern u8 D_801D52AC[];

s32 func_801E3274(s32 arg0, s32 arg1) {
    func_801C4DD4(0, func_801D5288, func_801D5294, func_801D52A0, D_801D52AC, 0.0f, 1.0f, 0.0f, 0.0f);
    return 2;
}


s32 func_801E32E0(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E32F0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3300(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3310(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E3348(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3358(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3368(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3378(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E3388(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E3398(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E33A8(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E33B8(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E33C8(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E33D8(s32 arg0, s32 arg1) {
    return 15;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E33E8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E342C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E343C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E344C(s32 arg0, s32 arg1) {
    return 4;
}


extern u8 func_801CE330[];

s32 func_801E345C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB40DC1) != 0) {
        func_801C4DD4(1, func_801CE330 + 0x64, func_801CE330 + 0x70, func_801CE330 + 0x7C, func_801CE330 + 0x88, 0.0f, 1.0f, 0.0f, 0.0f);
        return 5;
    }
    return 4;
}


s32 func_801E34E4(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E34F4(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3504(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3514(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3524(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E3534(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E3544(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E3554(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E3564(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E3574(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E3584(s32 arg0, s32 arg1) {
    return 15;
}



s32 func_801E3594(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E35D8(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E35E8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E35F8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3608(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3618(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3628(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3638(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3648(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3658(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E3668(s32 arg0, s32 arg1) {
    return 10;
}


extern u8 D_801E0A48[];
extern u8 D_801DB660[];
extern u8 D_801DB664[];
extern u8 D_801DB314[];
extern u8 D_801DB318[];
extern u8 func_801DAC30[];
extern void func_801CC318();
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);

s32 func_801E3678(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x11B, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DB660);
    func_801CC4C0(1, D_801DB664);
    func_801C2420(0x2F, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB314);
    func_801CC4C0(2, D_801DB318);
    return 1;
}


extern void func_80005670(void *a0, void *a1);
extern void func_801CC530(void);
extern void func_801D517C(s32 a0);
extern void func_801D5188(s32 a0);
extern u8 D_801DB300[];
extern u8 D_801DB64C[];
extern u8 func_801DAAF0[];

s32 func_801E3744(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801D517C(0);
    func_801D5188(0);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DB64C);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB300);
    func_801CC530();
    return 2;
}

extern void *D_801DAB14;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

struct func_801E37C8_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E37C8_Struct {
    u8 pad0[8];
    struct func_801E37C8_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E37C8_Struct *unk24;
    u8 pad2[4];
    struct func_801E37C8_Struct2 *unk2C;
};

extern f32 D_801E6AE8;

s32 func_801E37C8(s32 arg0, s32 arg1) {
    struct func_801E37C8_Struct *temp_v0;

    temp_v0 = ((struct func_801E37C8_Struct *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = (-55.599998474121094f);
        ((struct func_801E37C8_Struct *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 54.0f;
        ((struct func_801E37C8_Struct *) D_801DAB14)->unk8->unk24->unk2C->unkC = 0.0f;
        ((struct func_801E37C8_Struct *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(0, 0x0348007A, 0, 0, 1.0f);
        return 3;
    }
    return 2;
}


s32 func_801E3890(s32 arg0, s32 arg1) {
    return 4;
}


extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

s32 func_801E38A0(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x01680003, 0, 0, 15.0f);
    return 5;
}


extern s32 func_801CE274();
extern void func_801C0D04(s32 a0, s32 a1);

s32 func_801E38E8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01680003, 0, 0x1100, 1.0f);
        func_801C0D04(4, 0);
        return 6;
    }
    return 5;
}

void func_801C0EB0(s32, s32);
void func_8038D33C(f32, f32, s32, s32, f32, f32);
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24();
extern f64 D_801E6AF0;
extern f32 D_801E6AF8;
extern f32 D_801E6AFC;
struct func_801E394C_StructC { u8 pad[4]; f32 unk4; f32 unk8; s32 unkC; };
struct func_801E394C_StructB { u8 pad[0x2C]; struct func_801E394C_StructC *unk2C; };
struct func_801E394C_StructA { u8 pad[0x24]; struct func_801E394C_StructB *unk24; };
struct func_801E394C_Struct { u8 pad[8]; struct func_801E394C_StructA *unk8; };

s32 func_801E394C(s32 arg0, s32 arg1) {
    u64 t;
    f32 k;
    struct func_801E394C_StructC *p;
    if (func_801C0DE4(4, 0, 0x3F800000) != 0) {
        func_801C0EB0(4, 0);
        func_801CC4D8(0, 0x0348007A, 0, 0, 15.0f);
        return 7;
    }
    t = func_801C0F18(4, 0);
    k = 1.0f;
    ((struct func_801E394C_Struct *)D_801DAB14)->unk8->unk24->unk2C->unk4 = (f32)(func_80034C24(t) / (1000000.0)) * k * 13.0f + (-55.599998474121094f);
    if (func_801CE2D0(0x01680003, 0x14) != 0 || func_801CE2D0(0x01680003, 0x28) != 0) {
        p = ((struct func_801E394C_Struct *)D_801DAB14)->unk8->unk24->unk2C;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x676, (1.2000000476837158f), 1.0f);
    }
    return 6;
}



s32 func_801E3A8C(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480019, 0, 0, 1.0f);
        return 8;
    }
    return 7;
}


s32 func_801CE284(void);

s32 func_801E3AE4(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x9;
    }
    return 0x8;
}



s32 func_801E3B14(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA7D8C0) != 0) {
        func_801CC470(0, 0x0348001A, 0, 0, 3.0f);
        return 0xA;
    }
    return 9;
}



s32 func_801E3B78(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0xB;
    }
    return 0xA;
}


s32 func_801E3BA8(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E3BB8(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E3BC8(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E3BD8(s32 arg0, s32 arg1) {
    return 15;
}


extern f32 D_801E6B00;

struct func_801E3BE8_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E3BE8_StructC {
    u8 pad[0x2C];
    struct func_801E3BE8_Struct2C *unk2C;
};

struct func_801E3BE8_Struct24 {
    u8 pad[0x24];
    struct func_801E3BE8_StructC *unk24;
};

struct func_801E3BE8_Struct8 {
    u8 pad[0x8];
    struct func_801E3BE8_Struct24 *unk8;
};

s32 func_801E3BE8(s32 arg0, s32 arg1)
{
  struct func_801E3BE8_Struct8 **pp;
  u8 *base;
  if (func_801C0B8C(0x39FBBF))
  {
    func_801CC470(0, 0x0168001F, 0, 1, 1.0f);
    base = func_801DAAF0;
 do { pp = (struct func_801E3BE8_Struct8 **) (base + 0x24); } while (0);
    (*pp)->unk8->unk24->unk2C->unk4 = (-54.599998474121094f);
    (*pp)->unk8->unk24->unk2C->unk8 = 23.0f;
    (*pp)->unk8->unk24->unk2C->unkC = -41.0f;
    (*pp)->unk8->unk24->unk2C->unk12 = 0x1800;
    return 0x10;
  }
  return 0xF;
}


s32 func_801E3CC0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7704C0) != 0) {
        func_801CC470(0, 0x0168001F, 0, 0x102, 2.0f);
        func_801C0D04(4, 0);
        return 0x11;
    }
    return 0x10;
}


struct func_801E3D30_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801E3D30_Struct {
    u8 pad0[8];
    struct func_801E3D30_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E3D30_Struct *unk24;
    u8 pad2[4];
    struct func_801E3D30_Vec *unk2C;
};

extern f32 D_801E6B04;

s32 func_801C0DE4(s32, s32, s32);
s32 func_801CE2D0(s32, s32);

s32 func_801E3D30(s32 arg0, s32 arg1) {
    struct func_801E3D30_Vec *v0;

    if (func_801C0DE4(4, 0, 0x40800002) != 0) {
        func_801C0EB0(4, 0);
        return 0x12;
    }
    if ((func_801CE2D0(0x0168001F, 0) != 0) || (func_801CE2D0(0x0168001F, 0x10) != 0)) {
        v0 = (*(struct func_801E3D30_Struct **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(v0->unk4, v0->unk8, v0->unkC, 0x6A7, (1.2000000476837158f), 1.0f);
    }
    return 0x11;
}

extern s32 func_801C0B8C(u64);

struct func_801E3DE8_Struct4 {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};

struct func_801E3DE8_Struct3 {
    u8 pad[0x2C];
    struct func_801E3DE8_Struct4 *unk2C;
};

struct func_801E3DE8_Struct2 {
    u8 pad[0x24];
    struct func_801E3DE8_Struct3 *unk24;
};

struct func_801E3DE8_Struct1 {
    u8 pad[8];
    struct func_801E3DE8_Struct2 *unk8;
};

extern f32 D_801E6B08;

s32 func_801E3DE8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB40DC1) != 0) {
        ((struct func_801E3DE8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk4 = -3.0f;
        ((struct func_801E3DE8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E3DE8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unkC = (5.699999809265137f);
        ((struct func_801E3DE8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348001E, 0, 0x100, 5.0f);
        return 0x13;
    }
    return 0x12;
}



s32 func_801E3EB8(s32 arg0, s32 arg1) {
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
    return 0x14;
}



s32 func_801E3EE4(s32 arg0, s32 arg1) {
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
    return 0x15;
}



s32 func_801E3F10(s32 arg0, s32 arg1) {
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
    return 0x16;
}


extern s32 D_801E625C;

s32 func_801E3F3C(s32 arg0, s32 arg1) {
    f32 zero = 0.0f;
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x0 + 0x8) + 0x24) + 0x2C) + 0x8) = zero;
    if (func_801C0B8C(0x4C4B40) != 0) {
        D_801E625C = 0;
        return 0x17;
    }
    return 0x16;
}

/* hh-block asm/nonmatchings/file029/801E1BE0/_mrg_keep_tail_bdea9f40e0941676.s {"functions":["func_801E3FA0"],"rodata":[],"rodata_bytes":[2149477132,7521276,28]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file029/801E1BE0/_mrg_keep_tail_bdea9f40e0941676.s")


s32 func_801E41A4(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801E41B4(s32 arg0, s32 arg1) {
    return 25;
}


s32 func_801E41C4(s32 arg0, s32 arg1) {
    return 26;
}


s32 func_801E41D4(s32 arg0, s32 arg1) {
    return 27;
}


s32 func_801E41E4(s32 arg0, s32 arg1) {
    return 28;
}


s32 func_801E41F4(s32 arg0, s32 arg1) {
    return 29;
}


s32 func_801E4204(s32 arg0, s32 arg1) {
    return 30;
}



s32 func_801E4214(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_801E6B28;

struct func_801E4258_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E4258_Struct {
    u8 pad0[8];
    struct func_801E4258_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E4258_Struct *unk24;
    u8 pad2[4];
    struct func_801E4258_Vec *unk2C;
};

s32 func_801E4258(s32 arg0, s32 arg1) {
    struct func_801E4258_Struct *temp_v0;

    temp_v0 = ((struct func_801E4258_Struct *) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -4.0f;
        ((struct func_801E4258_Struct *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E4258_Struct *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = (-0.20000000298023224f);
        ((struct func_801E4258_Struct *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x0348001C, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}



s32 func_801E432C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        func_801CC470(1, 0x0348001C, 0, 0, 3.0f);
        return 3;
    }
    return 2;
}


s32 func_801D51A4(void);

s32 func_801E4390(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        return 0x4;
    }
    return 0x3;
}


s32 func_801E43C0(s32 arg0, s32 arg1) {
    return 5;
}


extern void func_801D51F0(s32 a0);

s32 func_801E43D0(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x0348001D, 0, 0, 4.0f);
    func_801D51F0(1);
    return 6;
}



s32 func_801E4420(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 7;
    }
    return 6;
}


s32 func_801E4460(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 4) || (func_801C1B1C() == 0)) {
        return 7;
    }
    return 8;
}


s32 func_801E44B4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 7) || (func_801C1B1C() == 0)) {
        return 8;
    }
    return 0x9;
}


s32 func_801E4508(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E4518(s32 arg0, s32 arg1) {
    return 11;
}


typedef struct func_801E4528_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4528_Struct;


s32 func_801E4528(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xC) || (func_801C1B1C() == 0)) {
        return 0xB;
    }
    return 0xC;
}


s32 func_801E457C(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x03480052, 0, 1, 1.0f);
    return 0xD;
}


s32 func_801E45C4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC470(1, 0x03480052, 0, 0x100, 2.0f);
        func_801C0D04(4, 1);
        return 0xE;
    }
    return 0xD;
}

extern f32 D_801E6B2C;
extern f32 D_801E6B30;
extern s32 func_801D5250(s32, s32);

typedef struct func_801E4630_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E4630_Struct;

#define CH ((func_801E4630_Struct *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)((s32)D_801DAB14 + 8) + 8) + 0x24) + 0x2C)))

s32 func_801E4630(s32 arg0, s32 arg1) {
    func_801E4630_Struct *p;
    if (func_801C0DE4(4, 1, 0x40F9999A) != 0) {
        func_801C0EB0(4, 1);
        p = CH;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x214, (1.2000000476837158f), 1.0f);
        CH->unk4 = 5120.0f;
        return 0xF;
    }
    if (func_801D5250(0x03480052, 0x14) != 0 || func_801D5250(0x03480052, 0x38) != 0) {
        p = CH;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x676, (1.2000000476837158f), 1.0f);
    }
    return 0xE;
}


s32 func_801E4754(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E4764(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E4774(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801E4784(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E4794(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E47A4(s32 arg0, s32 arg1) {
    return 20;
}



s32 func_801E47B4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_801E6B34;

struct func_801E47F8_Node {
    u8 pad0[8];
    struct func_801E47F8_Node *unk8;
    u8 pad1[0x18];
    struct func_801E47F8_Mid *unk24;
};

struct func_801E47F8_Mid {
    u8 pad0[0x2C];
    struct func_801E47F8_Target *unk2C;
};

struct func_801E47F8_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

s32 func_801E47F8(s32 arg0, s32 arg1) {
    struct func_801E47F8_Mid *temp_v0;

    temp_v0 = ((struct func_801E47F8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 4.0f;
        ((struct func_801E47F8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E47F8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = (0.10000000149011612f);
        ((struct func_801E47F8_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(2, 0x0320002D, 0, 0x100, 6.0f);
        return 2;
    }
    return 1;
}


s32 func_801E48DC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E48EC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E48FC(s32 arg0, s32 arg1) {
    return 5;
}


extern f32 D_801E6B38;

s32 func_801E490C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB40DC1) != 0) {
        *((f32 *) (((s32 *) (((s32 *) (((s32 *) (((s32 *) (((s32 *) D_801DAB14)[2]))[2]))[2]))[9]))[11]) + 1) = 3.0f;
        *((f32 *) (((s32 *) (((s32 *) (((s32 *) (((s32 *) (((s32 *) D_801DAB14)[2]))[2]))[2]))[9]))[11]) + 2) = 0.0f;
        *((f32 *) (((s32 *) (((s32 *) (((s32 *) (((s32 *) (((s32 *) D_801DAB14)[2]))[2]))[2]))[9]))[11]) + 3) = (10.699999809265137f);

        func_801CC470(2, 0x0320002E, 0, 0x100, 6.0f);
        return 6;
    }
    return 5;
}


s32 func_801E49E0(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E49F0(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4A00(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E4A10(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E4A20(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x0320002F, 0, 0, 5.0f);
    return 0xB;
}


extern s32 func_801D2C10();

s32 func_801E4A68(s32 arg0, s32 arg1) {
    func_801D2C10();
    if (func_801D2C10() != 0) {
        return 0xC;
    }
    return 0xB;
}


extern f32 D_801E6B3C;

s32 func_801E4AA0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        *(f32 *)((u8 *)((void **)((void **)((void **)((void **)((void **)D_801DAB14)[2])[2])[2])[9])[11] + 0x4) = 4.0f;
        *(f32 *)((u8 *)((void **)((void **)((void **)((void **)((void **)D_801DAB14)[2])[2])[2])[9])[11] + 0x8) = 0.0f;
        *(f32 *)((u8 *)((void **)((void **)((void **)((void **)((void **)D_801DAB14)[2])[2])[2])[9])[11] + 0xC) = (0.10000000149011612f);
        func_801CC470(2, 0x03200030, 0, 0, 1.0f);
        return 0xD;
    }
    return 0xC;
}



s32 func_801E4B74(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0xE;
    }
    return 0xD;
}


s32 func_801E4BA4(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E4BB4(s32 arg0, s32 arg1) {
    return 15;
}


extern s32 D_8038C97C();
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E4BC4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
    return 1;
}



s32 func_801E4C30(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E4C60(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4C70(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4C80(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801E4C90(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xAAE600) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E4CCC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0x6;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x12, 0, 1);
    func_8038D28C(8);
    return 0x7;
}



s32 func_801E4D40(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 7;
    }
    return 8;
}


s32 func_801E4D68(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC35001) != 0) {
        func_8038D28C(0x73);
        return 9;
    }
    return 8;
}


s32 func_801E4DB4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 9;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x12, 0, 2);
    return 10;
}



s32 func_801E4E20(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 10;
    }
    D_80089354 = 0;
    return 11;
}


s32 func_801E4E50(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E4E60(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E4E70(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E4E80(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x3D0900) != 0) {
        return 0xF;
    }
    return 0xE;
}


s32 func_801E4EBC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0xF;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
    func_8038D28C(8);
    return 0x10;
}



s32 func_801E4F30(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 16;
    }
    return 17;
}



s32 func_801E4F58(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5572FF) != 0) {
        func_8038D28C(0x5D);
        return 0x12;
    }
    return 0x11;
}


s32 func_801E4FA4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 18;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x18, 0, 2);
    return 19;
}



s32 func_801E5010(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 19;
    }
    D_80089354 = 0;
    return 20;
}


s32 func_801E5040(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x01312D00) != 0) {
        return 21;
    }
    return 20;
}


s32 func_801E507C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 21;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x12, 0, 1);
    return 22;
}



s32 func_801E50E8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 22;
    }
    return 23;
}


s32 func_801E5110(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E5120(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801E5130(s32 arg0, s32 arg1) {
    return 25;
}


s32 func_801E5140(s32 arg0, s32 arg1) {
    return 1;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801E59D0[];

s32 func_801E5150(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E59D0);
    return 2;
}


s32 func_8038CBF0(void);

s32 func_801E5184(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3;
    }
    return 0x2;
}

extern s32 func_801C18CC(s32 arg0, void *arg1);

typedef struct func_801E51B4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E51B4_Struct;

extern func_801E51B4_Struct D_801E63F0;

s32 func_801E51B4(s32 arg0, s32 arg1) {
    func_801E51B4_Struct sp1C;

    sp1C = D_801E63F0;
    func_801C18CC(1, &sp1C);
    return 0x4;
}



s32 func_801E5204(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4;
    }
    return 0x5;
}

extern s32 func_801C1974();

s32 func_801E5234(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6;
}



typedef struct func_801E525C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E525C_Struct;

extern func_801E525C_Struct D_801E63FC;

s32 func_801E525C(s32 arg0, s32 arg1) {
    func_801E525C_Struct sp18;

    sp18 = D_801E63FC;
    func_801C18CC(2, &sp18);
    return 7;
}



s32 func_801E52C4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7;
    }
    return 0x8;
}


extern u8 D_801E5A84[];

s32 func_801E52F4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E5A84);
    return 9;
}



s32 func_801E5328(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xA;
    }
    return 0x9;
}


s32 func_801E5358(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xB;
}



typedef struct func_801E5380_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E5380_Struct;

extern func_801E5380_Struct D_801E6414;

s32 func_801E5380(s32 arg0, s32 arg1) {
    func_801E5380_Struct sp18;

    sp18 = D_801E6414;
    func_801C18CC(2, &sp18);
    return 0xC;
}



s32 func_801E53E8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801E5418(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xE;
}


s32 func_801E5440(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E5450(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E5460(s32 arg0, s32 arg1) {
    return 17;
}


extern u8 D_801E5B04[];

s32 func_801E5470(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E5B04);
    return 18;
}



s32 func_801E54A4(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x13;
    }
    return 0x12;
}


typedef struct func_801E54D4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E54D4_Struct;

extern func_801E54D4_Struct D_801E642C;

s32 func_801E54D4(s32 arg0, s32 arg1) {
    func_801E54D4_Struct sp1C;

    sp1C = D_801E642C;
    func_801C18CC(1, &sp1C);
    return 0x14;
}



s32 func_801E5524(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x14;
    }
    return 0x15;
}


extern u8 D_801E5B80[];

s32 func_801E5554(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E5B80);
    return 22;
}



s32 func_801E5588(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x17;
    }
    return 0x16;
}


s32 func_801E55B8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x18;
}


typedef struct func_801E55E0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E55E0_Struct;

extern func_801E55E0_Struct D_801E6438;

s32 func_801E55E0(s32 arg0, s32 arg1) {
    func_801E55E0_Struct sp1C;

    sp1C = D_801E6438;
    func_801C18CC(1, &sp1C);
    return 0x19;
}



s32 func_801E5630(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x19;
    }
    return 0x1A;
}


extern u8 D_801E5DAC[];

s32 func_801E5660(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E5DAC);
    return 27;
}



s32 func_801E5694(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x1C;
    }
    return 0x1B;
}


s32 func_801E56C4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1D;
}


typedef struct func_801E56EC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E56EC_Struct;

extern func_801E56EC_Struct D_801E6444;

s32 func_801E56EC(s32 arg0, s32 arg1) {
    func_801E56EC_Struct sp1C;

    sp1C = D_801E6444;
    func_801C18CC(1, &sp1C);
    return 0x1E;
}



s32 func_801E573C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1E;
    }
    return 0x1F;
}


extern u8 D_801E5FA4[];

s32 func_801E576C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E5FA4);
    return 32;
}



s32 func_801E57A0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x21;
    }
    return 0x20;
}


s32 func_801E57D0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x22;
}


typedef struct func_801E57F8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E57F8_Struct;

extern func_801E57F8_Struct D_801E6450;

s32 func_801E57F8(s32 arg0, s32 arg1) {
    func_801E57F8_Struct sp1C;

    sp1C = D_801E6450;
    func_801C18CC(1, &sp1C);
    return 0x23;
}



s32 func_801E5848(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x23;
    }
    return 0x24;
}


s32 func_801E5878(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x25;
}


s32 func_801E58A0(s32 arg0, s32 arg1) {
    return 38;
}


s32 func_801E58B0(s32 arg0, s32 arg1) {
    return 38;
}


s32 func_801E58C0(s32 arg0, s32 arg1) {
    return 39;
}


s32 func_801E58D0(s32 arg0, s32 arg1) {
    return 40;
}


s32 func_801E58E0(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E58F0(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E5900(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5910(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E5920(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E5930(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5940(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5950(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5960(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E5970(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0158D940ULL) != 0) {
        func_8038D28C(0x214);
        return 0xA;
    }
    return 9;
}


s32 func_801E59BC(s32 arg0, s32 arg1) {
    return 10;
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_801E1BE0[] = {
    0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x09, 0x33, 0x33, 0x42, 0x84, 0x66, 0x66,
    0xBF, 0xE6, 0x66, 0x66, 0xC2, 0x80, 0x99, 0x9A, 0x41, 0xA1, 0x99, 0x9A, 0x42, 0x3C, 0xCC, 0xCD,
    0xC2, 0x1C, 0xCC, 0xCD, 0xC2, 0x4D, 0x99, 0x9A, 0x42, 0xB4, 0x33, 0x33, 0x41, 0x14, 0xCC, 0xCD,
    0xC2, 0x25, 0x99, 0x9A, 0x42, 0x88, 0xCC, 0xCD, 0x3F, 0xA6, 0x66, 0x66, 0x42, 0x89, 0x66, 0x66,
    0x40, 0x79, 0x99, 0x9A, 0x40, 0x2C, 0xCC, 0xCD, 0x41, 0x29, 0x99, 0x9A, 0x40, 0x46, 0x66, 0x66,
    0x40, 0x33, 0x33, 0x33, 0xC0, 0xFC, 0xCC, 0xCD, 0xBF, 0x4C, 0xCC, 0xCD, 0xC0, 0xD6, 0x66, 0x66,
    0x41, 0x3E, 0x66, 0x66, 0xBE, 0x99, 0x99, 0x9A, 0x41, 0x06, 0x66, 0x66, 0xBF, 0xCC, 0xCC, 0xCD,
    0x42, 0x68, 0xCC, 0xCD, 0x41, 0x26, 0x66, 0x66, 0x42, 0x79, 0x33, 0x33, 0xBF, 0x19, 0x99, 0x9A,
    0x42, 0x82, 0x66, 0x66, 0xBD, 0xCC, 0xCC, 0xCD, 0x40, 0x39, 0x99, 0x9A, 0x41, 0x16, 0x66, 0x66,
    0x40, 0xE9, 0x99, 0x9A, 0x40, 0x53, 0x33, 0x33, 0xC0, 0xCC, 0xCC, 0xCD, 0x41, 0x44, 0xCC, 0xCD,
    0xBE, 0x99, 0x99, 0x9A, 0xC0, 0x53, 0x33, 0x33, 0x41, 0x87, 0x33, 0x33, 0x3F, 0x66, 0x66, 0x66,
    0xC1, 0x43, 0x33, 0x33, 0xC2, 0x2B, 0x33, 0x33, 0x40, 0x73, 0x33, 0x33, 0xC1, 0x44, 0xCC, 0xCD,
    0xC2, 0xAC, 0x66, 0x66, 0xC0, 0xC9, 0x99, 0x9A, 0x41, 0x14, 0xCC, 0xCD, 0x3F, 0x4C, 0xCC, 0xCD,
    0x41, 0x0C, 0xCC, 0xCD, 0x41, 0x03, 0x33, 0x33, 0x41, 0x83, 0x33, 0x33, 0x42, 0x08, 0xCC, 0xCD,
    0x41, 0x23, 0x33, 0x33, 0x40, 0x0C, 0xCC, 0xCD, 0xC0, 0x66, 0x66, 0x66, 0xBD, 0xCC, 0xCC, 0xCD,
    0x3F, 0xD9, 0x99, 0x9A, 0xC0, 0x6C, 0xCC, 0xCD, 0x40, 0x59, 0x99, 0x9A,
};
/* hh-owned-pool func_801E2314 801E698C 801E69A8 */
/* hh-owned-pool func_801E23C0 801E69A8 801E69AC */
/* hh-owned-pool func_801E2418 801E69AC 801E69D0 */
/* hh-owned-pool func_801E253C 801E69D0 801E69E0 */
/* hh-owned-pool func_801E25F8 801E69E0 801E69E8 */
/* hh-owned-pool func_801E26A4 801E69E8 801E69FC */
/* hh-owned-pool func_801E27B4 801E69FC 801E6A20 */
/* hh-owned-pool func_801E28DC 801E6A20 801E6A40 */
/* hh-owned-pool func_801E29A0 801E6A40 801E6A5C */
/* hh-owned-pool func_801E2A58 801E6A5C 801E6A84 */
/* hh-owned-pool func_801E2B1C 801E6A84 801E6A9C */
/* hh-owned-pool func_801E2BD8 801E6A9C 801E6AB4 */
/* hh-owned-pool func_801E2CA4 801E6AB4 801E6ACC */
/* hh-owned-pool func_801E2D60 801E6ACC 801E6AE8 */
/* hh-owned-pool func_801E37C8 801E6AE8 801E6AEC */
/* hh-owned-pool func_801E394C 801E6AF0 801E6B00 */
/* hh-owned-pool func_801E3BE8 801E6B00 801E6B04 */
/* hh-owned-pool func_801E3D30 801E6B04 801E6B08 */
/* hh-owned-pool func_801E3DE8 801E6B08 801E6B0C */
/* hh-owned-pool func_801E4258 801E6B28 801E6B2C */
/* hh-owned-pool func_801E4630 801E6B2C 801E6B34 */
/* hh-owned-pool func_801E47F8 801E6B34 801E6B38 */
/* hh-owned-pool func_801E490C 801E6B38 801E6B3C */
/* hh-owned-pool func_801E4AA0 801E6B3C 801E6B40 */
