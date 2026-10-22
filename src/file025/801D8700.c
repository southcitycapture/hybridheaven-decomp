#include "common.h"

extern s32 func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);

extern s32 D_801E1BB0;
extern s32 D_801DBB74;
extern s32 D_801DBB78;
extern s32 D_801DBB7C;
extern s32 D_801DBB80;
extern void func_801D8764();

void func_801D8700(s32 arg0, s32 arg1) {
    D_801E1BB0 = arg0;
    D_801DBB74 = 0;
    D_801DBB78 = 0;
    D_801DBB7C = 1;
    D_801DBB80 = 0;
    func_8013B570(arg0, 0x11E, 0, 4, func_801D8764);
}

struct func_801D8764_Struct { u8 pad[0x24]; s32 unk24; };
extern void func_801D87AC();
extern u8 D_801D8764[];

void func_801D8764(struct func_801D8764_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_800058DC(arg0, (void (*)(void))func_801D87AC);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801D8764);
}

extern u8 D_801E1BB8;
struct func_801D87AC_V { s32 a; s32 b; s32 c; };
struct func_801D87AC_F { s32 a; s32 b; f32 c; };
struct func_801D87AC_P { u8 pad[0x5C]; struct func_801D87AC_V v; };
struct func_801D87AC_R { u8 pad[0x2C]; struct func_801D87AC_P *p; };
struct func_801D87AC_B { u8 pad[0x76]; u8 f; };
struct func_801D87AC_A { u8 pad[0x5C]; struct func_801D87AC_B *p; };
struct func_801D87AC_Q { u8 pad[4]; struct func_801D87AC_R *p; };
extern s32 func_801CC540();
extern s32 func_800058DC();
void func_801D8BD0(s32 arg0);
extern void func_80006214();
struct func_801D8AA4_Struct;
extern struct func_801D8AA4_Struct D_801E1BC8;
extern void func_8013A28C(void *, struct func_801D87AC_V);
extern s32 func_80011140(void *, void *, struct func_801D87AC_F, u32);
extern s32 func_80010550(void *, void *);
extern u8 D_8008DA88[];
extern u8 D_801BC025[];
extern u8 D_801D87AC[];

void func_801D87AC(struct func_801D87AC_A *arg0, void *arg1) {
    void *v;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)())D_801D87AC);
        return;
    }
    if (D_801DBB74 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D87AC_V *)D_801DBB74);
        v = arg0->p;
        ((struct func_801D87AC_B *)v)->f = 1;
        D_801DBB74 = 0;
    }
    v = (void *)D_801DBB78;
    if (v != 0) {
        if (func_80011140(arg1, arg0->p, *(struct func_801D87AC_F *)v, (u32)((struct func_801D87AC_F *)v)->c) != 0) {
            D_801DBB78 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->p) != 0) {
            D_801DBB7C = 1;
        } else {
            D_801DBB7C = 0;
        }
        *(struct func_801D87AC_V *)&D_801E1BC8 = ((struct func_801D87AC_Q *)arg1)->p->p->v;
        *(struct func_801D87AC_V *)&D_801E1BB8 = *(struct func_801D87AC_V *)(D_801BC025 + 3);
    }
    if (D_801DBB80 != 0) {
        func_801D8BD0((s32)arg0);
    }
}



s32 func_801D89B8(void) {
    return D_801DBB78 != 0;
}



s32 func_801D89C8(void) {
    if (D_801DBB78 != 0) {
        return 0;
    }
    if (D_801DBB74 != 0) {
        return 0;
    }
    return D_801DBB7C;
}


u8 *func_801D8A08(void) {
    return &D_801E1BB8;
}


void func_801C3370(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void func_801D8A14(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6) {
    if (arg0 != 0) {
        func_80006214(D_801E1BB0);
        func_801C3370(D_801E1BB0, arg1, arg2, arg3, (s32) arg4, 0, arg5, arg6);
        D_801DBB80 = 1;
        return;
    }
    D_801DBB80 = 0;
}



s32 func_801D8A94(void) {
    return D_801DBB80 == 0;
}


struct func_801D8AA4_Struct {
    s32 unk0;
    u16 unk4;
};


s32 func_801D8AA4(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1BC8.unk0) {
        return 0;
    }
    return D_801E1BC8.unk4 == arg1;
}


struct func_801D8ADC_StructData {
    u8 pad[0x24];
    s32 flags;
    u8 pad28[8];
    s32 callback;
    u8 pad34[0x14];
    u8 r, g, b, a;
};
struct func_801D8ADC_StructObject {
    u8 pad[0x2C];
    struct func_801D8ADC_StructData *data;
};
struct func_801D8ADC_StructList {
    u8 pad[4];
    s32 *entries;
    u8 pad8[4];
    u16 count;
};
struct func_801D8ADC_StructRoot {
    u8 pad[0x5C];
    struct func_801D8ADC_StructList *list;
};
extern u8 D_801DA138[];

void func_801D8ADC(u8 arg0) {
    s32 offset;
    s32 *entry;
    struct func_801D8ADC_StructObject **object;
    struct func_801D8ADC_StructList *list;
    struct func_801D8ADC_StructData *data;

    func_80006214(D_801E1BB0);
    list = ((struct func_801D8ADC_StructRoot *)D_801E1BB0)->list;
    entry = list->entries;
    offset = 1;
    if (list->count >= 2) {
        do {
            object = (struct func_801D8ADC_StructObject **)(D_8008DA88 + offset * 4);
            if (entry[offset] < 0) {
            } else {
                data = (*object)->data;
                data->flags |= 0x100;
                (*object)->data->callback = (s32)D_801DA138 | 0x40000000;
                (*object)->data->r = 0xFF;
                (*object)->data->g = 0xFF;
                (*object)->data->b = 0xFF;
                (*object)->data->a = arg0;
            }
            offset++;
        } while (offset < list->count);
    }
}


extern s32 func_801C354C(s32);

void func_801D8BD0(s32 arg0) {
    func_80006214();
    D_801DBB80 = func_801C354C(arg0) == 0;
}

