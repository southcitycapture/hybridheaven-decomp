#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_80379230.s")


extern u8 D_8017E004[];

void func_80379410(u8 *arg0, u8 arg1) {
    s32 i;
    s32 j;
    u8 *p;

    i = 0;
    if (!arg1) {
        for (j = 0; j < 0x2D; j = (j + 1) & 0xFF) {
            p = arg0 + j;
            D_8017E004[j * 8 + 4] = p[0x338] & 0x7F;
        }
        return;
    }
    for (i = 0; i < 0x2D; i = (i + 1) & 0xFF) {
        p = arg0 + i;
        p[0x338] = D_8017E004[i * 8 + 4];
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_80379490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_803795D8.s")


void func_803796C8(void) {
}


void func_803796D0(u8 *arg0) {
    *(s16 *)(arg0 + 0xA0) = 0;
    arg0[0xA6] = arg0[0xA6] & 0xFFDF;
}


struct func_803796E4_Struct {
    u8 pad[0x9E];
    s16 unk9E;
};

void func_803796E4(struct func_803796E4_Struct *arg0) {
    arg0->unk9E = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_803796EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_803797F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_80379904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037A884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037AAC0.s")

extern s32 func_800058DC(void *, void *);
void func_8037ACCC(void *arg0, s32 arg1);

struct func_8037AC58_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[0xB0 - 0x91];
    s16 unkB0;
};

extern void func_8037AAC0(void *, s32, s32, u8, u8 *);

void func_8037AC58(struct func_8037AC58_Struct *arg0, s32 arg1) {
    u8 sp27;
    u8 temp_a3;

    temp_a3 = arg0->unk90;
    if (temp_a3 == 0) {
        func_8037AAC0(arg0, 0x7C, 0x6E, 0, &sp27);
    } else {
        func_8037AAC0(arg0, 0x88, 0x6E, temp_a3, &sp27);
    }
    arg0->unkB0 = 0;
    func_800058DC(arg0, &func_8037ACCC);
}


extern void func_80005700();

void func_8037ACCC(void *arg0, s32 arg1) {
    if (((s16 *)arg0)[0x58]++ >= 0x1F) {
        func_80005700();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037AD08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037ADF8.s")


extern s32 func_8022B640(s32, void *);
extern u8 *D_8008DA88;
extern u8 D_801BBBF0[];
extern u8 D_801BC3D8[];
extern u8 D_801BC03C[];

struct func_8037AED8_Ent {
    s16 unk0;
    s16 unk2;
    u8 pad4[7];
    u8 unkB;
};
struct func_8037AED8_Tab {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[0xD];
    struct func_8037AED8_Ent *unk30;
};
struct func_8037AED8_Obj {
    u8 pad[0xA4];
    s16 unkA4;
    s16 unkA6;
    u8 unkA8;
    u8 padA9[7];
    s16 unkB0;
};

void func_8037AED8(struct func_8037AED8_Obj *arg0, s32 arg1) {
    u8 *v1;
    extern s32 func_80236BA4();

    v1 = arg0->unkA8 == 0 ? D_801BC03C : D_801BC3D8;
    if (((u32)(*(s32 *)(v1 + 0x30) << 11) >> 30) != 0) {
        ((struct func_8037AED8_Tab *)D_8008DA88)->unk22 = 1;
        if (!(arg0->unkB0 % 16)) {
            ((struct func_8037AED8_Tab *)D_8008DA88)->unk30->unk0 = func_8022B640(8, arg0) + arg0->unkA4;
            ((struct func_8037AED8_Tab *)D_8008DA88)->unk30->unk2 = func_8022B640(4, arg0) + arg0->unkA6;
        }
    } else {
        ((struct func_8037AED8_Tab *)D_8008DA88)->unk22 = 0;
    }
    if ((v1[0x2D0] & 0x10) || (func_80236BA4() == 0)) {
        ((struct func_8037AED8_Tab *)D_8008DA88)->unk22 = 0;
    }
    ((struct func_8037AED8_Tab *)D_8008DA88)->unk30->unkB = ((15 - (arg0->unkB0 % 16)) * 255) / 15;
    arg0->unkB0 = arg0->unkB0 + 1;
    if ((D_801BBBF0[0x1031] >= 10 && D_801BBBF0[0x1031] != 15) ||
        (v1 == D_801BBBF0 + 0x7E8 && ((u32)(*(s32 *)(v1 + 0x30) << 1) >> 30) == 3)) {
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B0B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B188.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B23C.s")


extern void func_8037B23C();

void func_8037B530(struct func_8037EB58_Struct *arg0, s32 arg1) {
    if ((*(s16 *) ((u8 *) arg0 + 0xB0))-- == 0) {
        func_800058DC(arg0, func_8037B23C);
        return;
    }
    (*(u8 **) (D_8008DA88 + 0x30))[0xB] = (s8) ((s32) (*(s16 *) ((u8 *) arg0 + 0xB0) * 0xFF) / 20);
}


struct func_8037B5A0_Struct1 {
    u8 pad[0x44];
    s32 unk44;
};

struct func_8037B5A0_Struct0 {
    u16 *unk0;
    struct func_8037B5A0_Struct1 *unk4;
};

struct func_8037B5A0_Struct2 {
    u8 pad[0xC];
    void *unkC;
};

struct func_8037B5A0_Struct3 {
    u8 pad0[8];
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    s16 unk10;
    u8 pad12[6];
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u8 pad20[8];
    s16 unk28;
    s16 unk2A;
    s16 unk2C;
    s16 unk2E;
    s16 unk30;
    s16 unk32;
    u8 pad34[8];
};

void func_80146088(void *a0, void *a1, s32 a2);

extern struct func_8037B5A0_Struct0 *D_80172574;
extern struct func_8037B5A0_Struct2 D_80181A84;

void func_8037B5A0(void *arg0, s16 arg1, s16 arg2, s32 arg3)
{
  struct func_8037B5A0_Struct3 sp24;
  sp24.unk0 = arg1;
  sp24.unk2 = arg2;
  sp24.unk30 = sp24.unk4 = sp24.unk28 = 0x28;
  sp24.unk32 = sp24.unk6 = sp24.unk2A = 8;
  sp24.unk8 = 0xFF;
  sp24.unk9 = 0xFF;
  sp24.unkA = 0xFF;
  sp24.unkB = 0xFF;
  sp24.unkC = 0xFF;
  sp24.unkD = 0;
  sp24.unkE = 0;
  sp24.unkF = 0xFF;
  sp24.unk10 = 0x66;
  sp24.unk18 = *D_80172574->unk0;
  sp24.unk1C = D_80172574->unk4->unk44;
  sp24.unk2E = 0;
  sp24.unk2C = 0;
  D_80181A84.unkC = &sp24.unk0;
  func_80146088(arg0, &D_80181A84, arg3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037B680.s")

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_8037B72C(struct func_8037AC58_Struct *arg0, s32 arg1) {
    f32 v;
    if (arg0->unkB0++ >= 0x41) {
        func_80005700();
        return;
    }
    if (func_8001EAD0((s16)((arg0->unkB0 << 8) + 0x800)) < 0.0f) {
        v = -func_8001EAD0((s16)((arg0->unkB0 << 8) + 0x800));
    } else {
        v = func_8001EAD0((s16)((arg0->unkB0 << 8) + 0x800));
    }
    (*(u8 **)(D_8008DA88 + 0x30))[0xA] = (u32)(v * 255.0f);
    (*(u8 **)(D_8008DA88 + 0x30))[9] = (u32)(v * 255.0f);
    if (func_8001EB64((s16)((arg0->unkB0 << 8) + 0x1000)) < 0.0f) {
        v = -func_8001EB64((s16)((arg0->unkB0 << 8) + 0x1000));
    } else {
        v = func_8001EB64((s16)((arg0->unkB0 << 8) + 0x1000));
    }
    (*(u8 **)(D_8008DA88 + 0x30))[0xC] = (u32)(v * 255.0f);
}


void func_8037B9A4(void *arg0, u8 arg1, s16 arg2, s16 arg3, s32 arg4)
{
    struct func_8037B5A0_Struct3 data;

    data.unk0 = arg2;
    data.unk2 = arg3;
    data.unk30 = data.unk4 = data.unk28 = 0x20;
    data.unk32 = data.unk6 = data.unk2A = 0x10;
    data.unkB = 0x80;
    data.unk10 = 4;
    data.unk18 = *D_80172574->unk0;
    data.unk1C = ((s32 *)D_80172574->unk4)[(u16)(arg1 + 7)];
    data.unk2E = 0;
    data.unk2C = 0;
    D_80181A84.unkC = &data.unk0;
    func_80146088(arg0, &D_80181A84, arg4);
}


struct func_8037BA70_StructObj {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0xA4 - 0x91];
    void *unkA4;
};

extern void func_8037BB28(u8 *, u8 *);

void func_8037BA70(struct func_8037BA70_StructObj *arg0, s32 arg1) {
    s32 var_v0;
    s8 sp2B;
    s32 var_v1;

    sp2B = 0;
    if (D_801BBBF0[0x1030] == 0) {
        if ((*(u16 *)(D_801BBBF0 + 0x2C) == 0xA) ||
            (var_v1 = 0xB4, (*(u16 *)(D_801BBBF0 + 0x2C) == 0xB))) {
            var_v0 = 0x46;
            var_v1 = 0xA0;
        } else {
            var_v0 = 0x104;
        }
        arg0->unkA4 = D_801BC3D8;
    } else {
        var_v0 = 0xD6;
        var_v1 = 0x38;
        arg0->unkA4 = D_801BC03C;
    }
    func_8037B9A4(arg0, arg0->unk90, (s16)var_v0, (s16)var_v1, &sp2B);
    func_80006214(arg0);
    func_800058DC(arg0, func_8037BB28);
}


extern s32 func_80236BA4(s32, void *);
extern u8 D_801BCC21;

void func_8037BB28(u8 *arg0, u8 *arg1) {
    u8 *var_v0;
    u8 *temp_v0;
    s32 temp_v1;
    s32 temp_a0;

    arg1 = arg0;
    if (arg0[0x90] == 0) {
        var_v0 = *(u8 **)(arg0 + 0xA4) + 0x9E;
    } else {
        var_v0 = *(u8 **)(arg1 + 0xA4) + 0xA0;
    }
    if ((*(u16 *)var_v0 == 0) || (temp_v0 = *(u8 **)(D_8008DA88 + 0x30), temp_a0 = temp_v0[0xB]-- == 0, temp_a0 != 0) || (((s32) D_801BCC21 >= 0xA) && (D_801BCC21 != 0xF)) || (func_80236BA4(temp_a0, arg1) == 0)) {
        func_80005700(arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037BBCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037BD64.s")


typedef struct func_8037BEA4_Struct {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0xAD - 0x10];
    u8 unkAD;
    u8 padAE[0xB0 - 0xAE];
    s16 unkB0;
} func_8037BEA4_Struct;

typedef struct func_8037BEA4_Outer {
    u8 pad[0x30];
    u8 *unk30;
} func_8037BEA4_Outer;

typedef struct func_8037BEA4_Entry {
    func_8037BEA4_Outer *unk0;
    func_8037BEA4_Outer *unk4;
} func_8037BEA4_Entry;

void func_8037BEA4(void *arg0, void *arg1) {
    func_8037BEA4_Struct *self;
    func_8037BEA4_Entry *tbl;
    s32 count;
    s32 idx;
    s32 off;
    s32 val;
    s16 hp;

    void *t = arg1;
    void **pp = &arg1;
    self = arg0;
    hp = self->unkB0;
    self->unkB0 = hp - 1;
    if (hp <= 0 || func_80236BA4((s32) arg0, t) == 0) {
        self->unkC[0xAF] = 0;
        func_80005700(arg0);
        return;
    }
    if (self->unkB0 < 0x28) {
        count = 0;
        idx = 0;
        if (self->unkAD > 0) {
            do {
                off = idx << 1;
                off = off << 2;
                count = (count + 1) & 0xFF;
                val = ((s32) (self->unkB0 * 0xFF) / 40) & 0xFF;
                tbl = (func_8037BEA4_Entry *) ((u8 *) &D_8008DA88 + off);
                tbl->unk4->unk30[0xB] = val;
                tbl->unk0->unk30[0xB] = val;
                idx = count;
            } while (count < self->unkAD);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037BFB8.s")



void func_8037C50C(void) {
    u8 *p = D_801BBBF0;

    p[0x71C] |= 0x10;
    p[0xAB8] |= 0x10;
}



void func_8037C530(void) {
    D_801BBBF0[0x71C] = D_801BBBF0[0x71C] & 0xEF;
    D_801BBBF0[0xAB8] = D_801BBBF0[0xAB8] & 0xEF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037C554.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037C778.s")


struct func_8037D088_StructC {
    u8 pad[0xB];
    s8 unkB;
};
struct func_8037D088_StructB {
    u8 pad[0x30];
    struct func_8037D088_StructC *unk30;
};
struct func_8037D088_StructA {
    u8 pad[0xC];
    u8 *unkC;
    u8 pad10[0x94 - 0x10];
    u8 *unk94;
    u8 pad98[0xB0 - 0x98];
    s16 unkB0;
};
extern void func_80006088(s32);
extern void func_8037C554();

void func_8037D088(struct func_8037D088_StructA *arg0, s32 arg1) {
    u8 *temp_v1;
    u8 i;
    s32 v;
    struct func_8037D088_StructB **tbl;

    temp_v1 = arg0->unk94;
    i = 0;
    if (arg0->unkB0 < 0) {
        if ((D_801BBBF0[0x1031] >= 0xA && D_801BBBF0[0x1031] != 0xF) ||
            (temp_v1 == D_801BBBF0 + 0x7E8 && ((*(u32 *)(temp_v1 + 0x30) << 1) >> 30) == 3)) {
            v = (temp_v1 == D_801BBBF0 + 0x44C) ? 1 : 2;
            arg0->unkC[0x9B] ^= v;
            func_80005700(arg0, D_801BBBF0);
            return;
        }
        func_80006088(((s32 *)&D_8008DA88)[5]);
        func_80006088(((s32 *)&D_8008DA88)[4]);
        func_80006088(((s32 *)&D_8008DA88)[3]);
        func_80006088(((s32 *)&D_8008DA88)[2]);
        func_80006088(((s32 *)&D_8008DA88)[1]);
        func_80006088(((s32 *)&D_8008DA88)[0]);
        v = (temp_v1 == D_801BBBF0 + 0x44C) ? 1 : 2;
        arg0->unkC[0x9B] ^= v;
        func_800058DC(arg0, func_8037C554);
        return;
    }
    tbl = (struct func_8037D088_StructB **)&D_8008DA88;
    do {
        tbl[i]->unk30->unkB = (arg0->unkB0 * 0xFF) / 8;
        i++;
    } while (i < 6);
    arg0->unkB0 -= 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D218.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D320.s")


void func_8037D5B4(arg0, arg1)
    u8 *arg0;
    u8 arg1;
{
    u8 *a;
    u8 *b;
    u8 *c;
    u8 *d;
    u8 t;

    a = !arg1 ? arg0 + 0x98 : arg0 + 0x99;
    b = !arg1 ? arg0 + 0x9A : arg0 + 0x9B;
    c = arg1 ? arg0 + 0x98 : arg0 + 0x99;
    d = arg1 ? arg0 + 0x9A : arg0 + 0x9B;
    if (arg0[0x93] == 0x13) {
        *a = 4;
        *b = 0;
    } else {
        *a = 4;
        *b = 0;
    }
    if (arg0[0x95] != 0 || (t = arg0[0x91]) == 0 || t == 1 || t == 2 || t == 0xA || t == 9) {
        if (arg0[0x91] != 0x13) {
            *c = 4;
            *d = 0;
            return;
        }
    }
    *c = 4;
    *d = 0;
}


extern void func_8001B204();
extern u8 D_8038BC0C[];
extern u8 D_8038BC10[];

void func_8037D68C(s32 arg0, s32 arg1)
{
  if (((D_801BBBF0[0x1031] == 0xB) || (((s32) D_801BBBF0[0x1035]) > 0)) || (func_80236BA4(arg0, (void *) arg1) == 0))
  {
    *((u8 *) ((*((s32 *) (arg0 + 0xC))) + 0xAE)) = 1;
    func_8001B204(0xD, 0, 0x64, D_8038BC0C);
    if (arg1)
    {
    }
    func_8001B204(0xE, 0, 0x64, D_8038BC10);
    func_80005700((void *) arg0);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037D724.s")


struct func_8037D93C_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[0x93 - 0x91];
    u8 unk93;
    u8 pad94[0x98 - 0x94];
    u8 unk98;
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[0xA0 - 0x9C];
    u16 unkA0;
    u16 unkA2;
    u8 padA4[0xA9 - 0xA4];
    u8 unkA9;
    u8 unkAA;
    u8 padAB[0xB0 - 0xAB];
    s16 unkB0;
};

struct func_8037D93C_Entry {
    s16 unk0;
    s16 unk2;
};

struct func_8037D93C_Table {
    u8 pad[0x30];
    struct func_8037D93C_Entry *unk30;
};

extern s32 func_8037D320(void *, u8);
extern void func_8037DC64();
extern void func_8037DAE0();
extern u8 D_8038BC14[];
extern u8 D_8038BC1C[];

void func_8037D93C(void *arg0, s32 arg1) {
    struct func_8037D93C_Struct *obj = arg0;
    struct func_8037D93C_Entry *entry;
    s32 temp;

    func_8037D5B4(obj, obj->unk90);
    temp = func_8037D320(obj, obj->unk90);

    entry = ((struct func_8037D93C_Table *) *(u8 **) &D_8008DA88)->unk30;
    func_8001B204(obj->unkA9, (s16) (entry->unk0 + 0x468), (s16) (entry->unk2 - obj->unk9A + 3), D_8038BC14,
        (obj->unkB0 * 0xFF) / 4, obj->unk98, temp);

    temp = func_8037D320(obj, (obj->unk90 ^ 1) & 0xFF);

    entry = ((struct func_8037D93C_Table *) ((u8 **) &D_8008DA88)[1])->unk30;
    func_8001B204(obj->unkAA, (s16) (entry->unk0 + 0x468), (s16) (entry->unk2 - obj->unk9B + 3), D_8038BC1C,
        (obj->unkB0 * 0xFF) / 4, obj->unk99, temp);

    obj->unkB0 = obj->unkB0 + 1;
    if (obj->unkB0 >= 5) {
        obj->unkA0 = *(u16 *) &D_801BBBF0[0x4E6];
        obj->unkA2 = *(u16 *) &D_801BBBF0[0x882];
        if (obj->unk93 == 0xA) {
            obj->unkB0 = 0xA;
            func_800058DC(obj, func_8037DC64);
            return;
        }
        obj->unkB0 = 0x20;
        func_800058DC(obj, func_8037DAE0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037DAE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037DC64.s")


typedef struct func_8037DCEC_Inner {
    u8 pad[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
} func_8037DCEC_Inner;

typedef struct func_8037DCEC_Outer {
    u8 pad[0x30];
    func_8037DCEC_Inner *unk30;
} func_8037DCEC_Outer;

void func_8037DCEC(s32 arg0, func_8037DCEC_Outer *arg1, u8 arg2) {
    u8 temp_v1;
    func_8037DCEC_Inner *temp_v0;

    arg1->unk30->unkE = arg2;
    temp_v0 = arg1->unk30;
    temp_v1 = temp_v0->unkE;
    temp_v0->unkD = temp_v1;
    arg1->unk30->unkC = temp_v1;
    arg1->unk30->unk9 = temp_v1;
    arg1->unk30->unkA = temp_v1;
    arg1->unk30->unk8 = temp_v1;
}


struct func_8037DD2C_Struct1 { s16 unk0; s16 unk2; u8 pad[0x1E]; u8 unk22; u8 pad2[0xD]; func_8037DCEC_Inner *unk30; };
struct func_8037DD2C_Struct0 { struct func_8037DD2C_Struct1 *unk0; struct func_8037DD2C_Struct1 *unk4; };
struct func_8037DD2C_Arg { u8 pad[0x90]; u8 unk90; u8 pad91[5]; u8 unk96; u8 pad97[0xA4-0x97]; s16 unkA4; s16 unkA6; u8 padA8[8]; s16 unkB0; };
extern u8 D_8038BC34[];
extern void func_8037E1C4();
extern u8 func_8037DEE4[];
#define G ((struct func_8037DD2C_Struct0 *)&D_8008DA88)

void func_8037DD2C(struct func_8037DD2C_Arg *arg0, s32 arg1) {
    s32 v;
    func_8037DCEC((s32)arg0, (void *)G->unk0, 0xFF);
    if (arg0->unk96 == 0) {
        func_8037DCEC((s32)arg0, (void *)G->unk4, 0xFF);
    }
    if (arg0->unkB0++ > 0) {
        arg0->unkB0 = 0;
        if (arg0->unk96 == 0) {
            if (arg0->unk90 == 0) {
                func_8037DCEC((s32)arg0, (void *)G->unk0, 0);
                G->unk0->unk30->unk9 = 0xFF;
                G->unk0->unk30->unkD = 0xFF;
                func_8037DCEC((s32)arg0, (void *)G->unk4, 0);
                G->unk4->unk30->unk8 = 0xFF;
                G->unk4->unk30->unkC = 0xFF;
            } else {
                func_8037DCEC((s32)arg0, (void *)G->unk0, 0);
                G->unk0->unk30->unk8 = 0xFF;
                G->unk0->unk30->unkC = 0xFF;
                func_8037DCEC((s32)arg0, (void *)G->unk4, 0);
                G->unk4->unk30->unk9 = 0xFF;
                G->unk4->unk30->unkD = 0xFF;
            }
            arg0->unkB0 = *(u8 *)&arg0->unkA4 = 8;
            func_800058DC(arg0, (void *)func_8037E1C4);
            return;
        }
        func_8001B204(0xD, 0, 0x64, D_8038BC34);
        G->unk0->unk22 = 0;
        arg0->unkA4 = ((s16 *)G->unk4->unk30)[0];
        arg0->unkA6 = ((s16 *)G->unk4->unk30)[1];
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_8037DEE4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037DEE4.s")


struct func_8037E0A4_Obj {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 pad91[0x99 - 0x91];
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[0xB0 - 0x9C];
    s16 unkB0;
};

struct func_8037E0A4_Ent {
    s16 unk0;
    s16 unk2;
    u8 pad4[7];
    u8 unkB;
};

struct func_8037E0A4_Tab {
    u8 pad[0x30];
    struct func_8037E0A4_Ent *unk30;
};

struct func_8037E0A4_Glob {
    u8 pad[4];
    struct func_8037E0A4_Tab *unk4;
};

extern u8 D_8038BC40[];
extern u8 D_8038BC44[];

void func_8037E0A4(struct func_8037E0A4_Obj *arg0, s32 arg1) {
    arg0->unkB0 = arg0->unkB0 - 1;
    if (arg0->unkB0 < 0) {
        func_8001B204(0xE, 0, 0x64, D_8038BC40);
        arg0->unkC[0xAE] = 1;
        func_80005700(arg0);
        return;
    }
    func_8001B204(0xE, (s16) (((struct func_8037E0A4_Glob *) &D_8008DA88)->unk4->unk30->unk0 + 0x468), (s16) ((((struct func_8037E0A4_Glob *) &D_8008DA88)->unk4->unk30->unk2 - arg0->unk9B) + 3), D_8038BC44, (s32) (arg0->unkB0 * 0xFF) / 8, arg0->unk99, func_8037D320(arg0, (arg0->unk90 ^ 1) & 0xFF));
    ((struct func_8037E0A4_Glob *) &D_8008DA88)->unk4->unk30->unkB = (s8) ((s32) (arg0->unkB0 * 0xFF) / 8);
}


struct func_8037E1C4_Entry {
    s16 unk0;
    s16 unk2;
    u8 pad4[7];
    u8 unkB;
};

struct func_8037E1C4_Table {
    u8 pad[0x30];
    struct func_8037E1C4_Entry *unk30;
};

struct func_8037E1C4_Obj {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0x80];
    u8 unk90;
    u8 pad91[7];
    u8 unk98;
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[8];
    u8 unkA4;
    u8 padA5[4];
    u8 unkA9;
    u8 unkAA;
    u8 padAB[5];
    s16 unkB0;
};

extern u8 D_8038BC4C[];
extern u8 D_8038BC54[];
extern u8 D_8038BC5C[];
extern u8 D_8038BC60[];

void func_8037E1C4(struct func_8037E1C4_Obj *arg0, s32 arg1) {

    ((struct func_8037E1C4_Table **)&D_8008DA88)[0]->unk30->unkB = (s8)((s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4);
    ((struct func_8037E1C4_Table **)&D_8008DA88)[1]->unk30->unkB = (s8)((s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4);

    func_8001B204(arg0->unkA9, (s16)(((struct func_8037E1C4_Table **)&D_8008DA88)[0]->unk30->unk0 + 0x468),
        (s16)((((struct func_8037E1C4_Table **)&D_8008DA88)[0]->unk30->unk2 - arg0->unk9A) + 3), D_8038BC4C,
        (s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4, arg0->unk98, func_8037D320(arg0, arg0->unk90));

    func_8001B204(arg0->unkAA, (s16)(((struct func_8037E1C4_Table **)&D_8008DA88)[1]->unk30->unk0 + 0x468),
        (s16)((((struct func_8037E1C4_Table **)&D_8008DA88)[1]->unk30->unk2 - arg0->unk9B) + 3), D_8038BC54,
        (s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4, arg0->unk99, func_8037D320(arg0, (arg0->unk90 ^ 1) & 0xFF));

    arg0->unkB0 = (s16)(arg0->unkB0 - 1);
    if (arg0->unkB0 < 0) {
        func_8001B204(arg0->unkA9, 0, 0x64, D_8038BC5C);
        func_8001B204(arg0->unkAA, 0, 0x64, D_8038BC60);
        arg0->unkC[0xAE] = 1;
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E438.s")


extern s32 func_8037E438(void *, s32, s32, u8, s32, s8 *, s32);

extern void func_8037E7E4();

void func_8037E780(void *arg0, s32 arg1) {
    s8 sp2F;

    sp2F = 0;
    func_8037E438(arg0, 0x32, 0x50, ((u8 *)arg0)[0xA8], 8, &sp2F, 0);
    func_80006214(arg0);
    *(s16 *)((u8 *)arg0 + 0xB0) = 0;
    func_800058DC(arg0, func_8037E7E4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E7E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037E9B8.s")


struct func_8037EB58_Struct {
    u8 pad[0xA8];
    u8 unkA8;
    u8 padA9[7];
    s16 unkB0;
};

extern s32 func_80006214(void *);
extern s32 func_8037EBD0;

void func_8037EB58(struct func_8037EB58_Struct *arg0, s32 arg1) {
    s8 sp37;
    u8 temp_a3;

    sp37 = 0;
    if (arg0->unkB0++ >= 9) {
        temp_a3 = arg0->unkA8;
        func_8037E438(arg0, 0x32, 0x50, temp_a3, temp_a3, &sp37, 0);
        func_80006214(arg0);
        arg0->unkB0 = 0;
        func_800058DC(arg0, &func_8037EBD0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037EBD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037EEC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/func_8037F170.s")


void func_8037F3D4(s32 arg0, s32 arg1) {
    if (D_801BCC21 == 0xE) {
        func_80005700(arg0);
    }
}

