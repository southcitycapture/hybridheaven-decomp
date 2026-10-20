#include "common.h"

extern f32 D_8018DB68;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 D_801BBD82;
extern s16 D_801BBD84;
extern s32 func_800178E8();
extern s32 func_80126CC0(s32, void *);
extern s32 func_80135E60(void *, f32, s32, s32);
extern s32 func_8013D4A0(s32, s32);
extern s32 func_80150584();
extern s8 D_801BBC06;
extern u16 D_801BBD86;
extern u8 D_80217F5C[];
extern u8 D_80217FB0[];
extern u8 func_80126EAC[];
extern u8 func_801359C0[];
extern void func_80005700(s32 arg0);
extern void func_800058DC();
extern void func_800179B0();
extern void func_80020744();
extern void func_801268F4(s32);
extern void func_80133980(u32 arg0);
extern void func_80135E54();
extern void func_80136000();
extern void func_801362DC();
extern void func_80136354();
extern void func_801363C8();
extern void func_8013643C();
extern void func_801364B4();
extern void func_801364F4();
extern void func_801367C8(u8 *arg0, void *arg1);
extern void func_80136840();
extern void func_80136898();
extern void func_80136900();
extern void func_80136978(s32 arg0, s32 arg1);
extern void func_801369B8();
extern void func_80136D7C(s32 arg0, s32 arg1);



void func_80135980(s32 arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        func_800058DC(arg0, func_801359C0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_801359C0.s")


void func_80135DD8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_80135DE4_StructInner {
    u8 pad0[0x14];
    u32 unk14;
} func_80135DE4_StructInner;

typedef struct func_80135DE4_Struct {
    u8 pad0[0x38];
    func_80135DE4_StructInner *unk38;
    u8 pad1[0x54];
    u16 unk90;
} func_80135DE4_Struct;

s32 func_8012A630(func_80135DE4_Struct *arg0, f32 arg1);

void func_80135DE4(func_80135DE4_Struct *arg0, s32 arg1) {
    if (func_8012A630(arg0, (f32) (arg0->unk90 * 0xA)) != 0) {
        func_80133980(arg0->unk38->unk14 >> 0x10);
        func_800058DC(arg0, func_80135E54);
    }
}


void func_80135E54(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80135E60.s")

typedef struct func_801361C8_StructInner {
    u8 pad0[0x10];
    u32 unk10;
} func_801361C8_StructInner;
typedef struct func_801361C8_Struct {
    u8 pad0[0x38];
    func_801361C8_StructInner *unk38;
} func_801361C8_Struct;
void func_801361C8(func_801361C8_Struct *arg0, s32 arg1);
typedef struct func_801362DC_StructBBBF0 {
    u8 pad0[0xF00];
    s16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801362DC_StructBBBF0;
extern func_801362DC_StructBBBF0 D_801BBBF0;


typedef struct func_80136000_StructPos {
    u8 pad[4];
    f32 x;
    u8 pad8[4];
    f32 z;
    u8 pad10[2];
    s16 angle;
} func_80136000_StructPos;
typedef struct func_80136000_StructLink {
    u8 pad[0x30];
    func_80136000_StructPos *pos;
} func_80136000_StructLink;
typedef struct func_80136000_Struct {
    u8 pad[0x24];
    func_80136000_StructLink *link;
    u8 pad28[0x10];
    func_801361C8_StructInner *data;
} func_80136000_Struct;
typedef struct func_80136000_StructGlobal {
    u8 pad[0x192];
    s16 state;
    u8 pad194[4];
    f32 x;
    u8 pad19C[4];
    f32 z;
    u8 pad1A4[0xD5C];
    s16 mode;
    u8 padF02[2];
    f32 value;
    f32 scale;
    s16 zero;
    u8 padF0E[2];
    s32 flags;
    f32 x2;
    f32 z2;
} func_80136000_StructGlobal;

void func_80136000(func_80136000_Struct *arg0, s32 arg1)
{
  if (func_80135E60(arg0, (f32) ((arg0->data->unk10 >> 16) & 0xFF), 0, 0x40A00000))
  {
    func_801268F4(0);
    ((func_80136000_StructGlobal *) (&D_801BBBF0))->state = 5;
    ((func_80136000_StructGlobal *) (&D_801BBBF0))->x = (func_8001EAD0(arg0->link->pos->angle) * 7.0) + arg0->link->pos->x;
    ((func_80136000_StructGlobal *) (&D_801BBBF0))->z = (func_8001EB64(arg0->link->pos->angle) * 7.0) + arg0->link->pos->z;
    ((func_80136000_StructGlobal *) (&D_801BBBF0))->x2 = (func_8001EAD0(arg0->link->pos->angle) * (-5.0)) + arg0->link->pos->x;
    ((func_80136000_StructGlobal *) (&D_801BBBF0))->z2 = (func_8001EB64(arg0->link->pos->angle) * (-5.0)) + arg0->link->pos->z;
    ((func_80136000_StructGlobal *) (&D_801BBBF0))->value = D_8018DB68;
    ((func_80136000_StructGlobal *) (&D_801BBBF0))->flags = 0x0168003E;
    ((func_80136000_StructGlobal *) (&D_801BBBF0))->zero = 0;
    ((func_80136000_StructGlobal *) (&D_801BBBF0))->mode = 0x1100;
    ((func_80136000_StructGlobal *) (&D_801BBBF0))->scale = 1.0f;
    func_800058DC(arg0, func_801361C8);
  }
}





void func_801361C8(func_801361C8_Struct *arg0, s32 arg1) {
    if (func_80135E60(arg0, (f32) ((arg0->unk38->unk10 >> 16) & 0xFF), 1, 0x41000000) == 0) {
        func_800058DC(arg0, &func_801364B4);
        return;
    }
    if (D_801BBD86 == 1) {
        if (func_8013D4A0(0x27, 0) == 0) {
            D_801BBD82 = 1;
            func_800179B0(&D_80217F5C);
            func_80020744(0x3DB);
            func_800058DC(arg0, &func_801363C8);
            return;
        }
        func_800179B0(&D_80217F5C);
        func_80020744(0x3DB);
        D_801BBC06 = (arg0->unk38->unk10 >> 8) & 0xFF;
        func_800058DC(arg0, &func_801362DC);
    }
}




void func_801362DC(u8 *arg0, void *arg1) {
    if (func_800178E8() != 0) {
        *(s16 *)((u8 *)&D_801BBBF0 + 0x194) = 1;
        *(s16 *)((u8 *)&D_801BBBF0 + 0x192) = 4;
        D_801BBBF0.unkF10 = 0x02A80003;
        D_801BBBF0.unkF00 = 0x1000;
        D_801BBBF0.unkF08 = 3.0f;
        *(s16 *)(arg0 + 0x90) = 0x40;
        func_800058DC(arg0, func_80136354);
    }
}


struct func_80136354_Struct {
    u8 pad[0x90];
    s16 unk90;
};


void func_80136354(struct func_80136354_Struct *arg0, s32 arg1) {
    s16 var_v0;

    var_v0 = arg0->unk90;
    if (var_v0 == 0x20) {
        func_80020744(0x3DE);
        var_v0 = arg0->unk90;
    }
    arg0->unk90 = var_v0 - 1;
    if (var_v0 == 0) {
        func_800179B0(D_80217FB0);
        func_80020744(0x3DC);
        func_800058DC(arg0, func_801363C8);
    }
}



void func_801363C8(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_80020744(0x3DE);
        *(s16 *)((u8 *)&D_801BBBF0 + 0x194) = 1;
        D_801BBBF0.unkF10 = 0x02A80003;
        D_801BBBF0.unkF00 = 0x1000;
        D_801BBBF0.unkF08 = 3.0f;
        func_800058DC((void *)arg0, (void *)func_8013643C);
    }
}


typedef struct func_8013643C_StructInner {
    u8 pad0[0x10];
    u32 unk10;
} func_8013643C_StructInner;

typedef struct func_8013643C_Struct {
    u8 pad0[0x38];
    func_8013643C_StructInner *unk38;
} func_8013643C_Struct;


void func_8013643C(func_8013643C_Struct *arg0, s32 arg1)
{
  f32 var_ft0;
  u32 temp_t1;
  D_801BBD84 = 2;
  ;
  var_ft0 = (f32) temp_t1;
  if (func_8012A630(arg0, (f32) (((((u32) arg0->unk38->unk10) >> 0x10) & 0xFF) + 0x1E)) == 0)
  {
    func_800058DC(arg0, &func_80136000);
  }
}



void func_801364B4(s32 arg0, s32 arg1) {
    *(u16 *)((u8 *)&D_801BBBF0 + 0x194) = 2;
    if (*(u16 *)((u8 *)&D_801BBBF0 + 0x18E) == 0) {
        func_800058DC((void *)arg0, (void *)func_80136000);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_801364F4.s")


typedef struct func_801366BC_StructInner {
    u8 pad0[0x10];
    u32 unk10;
} func_801366BC_StructInner;

typedef struct func_801366BC_Struct {
    u8 pad0[0x38];
    func_801366BC_StructInner *unk38;
} func_801366BC_Struct;

void func_801366BC(func_801366BC_Struct *arg0, s32 arg1) {
    if (func_80135E60(arg0, (f32) ((arg0->unk38->unk10 >> 16) & 0xFF), 1, 0x41000000) == 0) {
        func_800058DC(arg0, &func_80136978);
        return;
    }
    if (D_801BBD86 == 1) {
        if (func_8013D4A0(0x27, 0) == 0) {
            D_801BBD82 = 1;
            func_800179B0(&D_80217F5C);
            func_80020744(0x3DB);
            func_800058DC(arg0, &func_80136898);
            return;
        }
        func_800179B0(&D_80217F5C);
        D_801BBC06 = (arg0->unk38->unk10 >> 8) & 0xFF;
        func_800058DC(arg0, &func_801367C8);
    }
}


typedef struct func_801367C8_StructBBBF0 {
    u8 pad0[0xF00];
    s16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801367C8_StructBBBF0;


void func_801367C8(u8 *arg0, void *arg1) {
    if (func_800178E8() != 0) {
        *(s16 *)((u8 *)&D_801BBBF0 + 0x194) = 1;
        *(s16 *)((u8 *)&D_801BBBF0 + 0x192) = 4;
        D_801BBBF0.unkF10 = 0x02A80003;
        D_801BBBF0.unkF00 = 0x1000;
        D_801BBBF0.unkF08 = 3.0f;
        *(s16 *)(arg0 + 0x90) = 0x40;
        func_800058DC(arg0, func_80136840);
    }
}


typedef struct func_80136840_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_80136840_Struct;


void func_80136840(func_80136840_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_800179B0(D_80217FB0);
        func_80020744(0x3DC);
        func_800058DC(arg0, func_80136898);
    }
}



void func_80136898(s32 arg0, void *arg1) {
    if (func_800178E8() != 0) {
        *(s16 *)&D_801BBBF0.pad0[0x194] = 1;
        D_801BBBF0.unkF10 = 0x02A80003;
        D_801BBBF0.unkF00 = 0x1000;
        D_801BBBF0.unkF08 = 3.0f;
        func_800058DC((void *)arg0, (void *)&func_80136900);
    }
}


typedef struct func_80136900_StructInner {
    u8 pad0[0x10];
    u32 unk10;
} func_80136900_StructInner;

typedef struct func_80136900_Struct {
    u8 pad0[0x38];
    func_80136900_StructInner *unk38;
} func_80136900_Struct;


void func_80136900(func_80136900_Struct *arg0, s32 arg1)
{
  f32 var_ft0;
  u32 temp_t1;
  D_801BBD84 = 2;
  ;
  var_ft0 = (f32) temp_t1;
  if (func_8012A630(arg0, (f32) (((((u32) arg0->unk38->unk10) >> 0x10) & 0xFF) + 0x1E)) == 0)
  {
    func_800058DC(arg0, &func_801364F4);
  }
}



void func_80136978(s32 arg0, s32 arg1) {
    *(u16 *)((u8 *)&D_801BBBF0 + 0x194) = 2;
    if (*(u16 *)((u8 *)&D_801BBBF0 + 0x18E) == 0) {
        func_800058DC((void *)arg0, (void *)func_801364F4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_801369B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80135980/func_80136B0C.s")

void func_80136BE0(func_801361C8_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        D_801BBD84 = 2;
        if (func_8012A630((void *)arg0, (f32)(((arg0->unk38->unk10 >> 0x10) & 0xFF) + 0x14)) == 0) {
            func_800058DC(arg0, (void *)func_801369B8);
        }
    }
}



void func_80136C68(s32 arg0, s32 arg1) {
    *(u16 *)((u8 *)&D_801BBBF0 + 0x194) = 2;
    if (*(u16 *)((u8 *)&D_801BBBF0 + 0x18E) == 0) {
        func_800058DC((void *)arg0, (void *)func_801369B8);
    }
}


typedef struct func_80136CA8_StructInner {
    u8 pad[0x10];
    s32 unk10;
    u32 unk14;
    u32 unk18;
} func_80136CA8_StructInner;

typedef struct func_80136CA8_Struct {
    u8 pad[0x38];
    func_80136CA8_StructInner *unk38;
} func_80136CA8_Struct;

typedef struct func_80136CA8_StructGlobal {
    u8 pad0[0x110];
    u16 unk110;
    u8 pad1[0x18A];
    f32 unk29C;
    f32 unk2A0;
    f32 unk2A4;
    f32 unk2A8;
    u8 pad2[0xC89];
    u8 unkF35;
    u8 pad3[0x12];
    u8 unkF48;
} func_80136CA8_StructGlobal;

void func_80136CA8(func_80136CA8_Struct *arg0, s32 arg1) {
    if (func_80150584() != 0) {
        ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk29C = ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk2A4;
        ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk2A0 = ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk2A8;
        ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unkF35 = ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unkF48;
        return;
    }
    ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unkF35 = ((u32)arg0->unk38->unk10 >> 16) & 0xFF;
    ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk29C = (f32)arg0->unk38->unk14;
    ((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk2A0 = (f32)arg0->unk38->unk18;
    if (((func_80136CA8_StructGlobal *)&D_801BBBF0)->unk110 == 1) {
        func_800058DC(arg0, func_80136D7C);
    }
}



void func_80136D7C(s32 arg0, s32 arg1) {
    u8 *base;

    if (func_80150584() != 0) {
        base = (u8 *) &D_801BBBF0;
        *(f32 *) (base + 0x29C) = *(f32 *) (base + 0x2A4);
        *(f32 *) (base + 0x2A0) = *(f32 *) (base + 0x2A8);
        *(u8 *) (base + 0xF35) = *(u8 *) (base + 0xF48);
    }
}


typedef struct func_80136DC4_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    f32 unk2A4;
    f32 unk2A8;
    u8 pad1[0xC89];
    u8 unkF35;
    u8 pad2[0x12];
    u8 unkF48;
} func_80136DC4_Struct;


void func_80136DC4(s32 arg0, s32 arg1) {
    func_80136DC4_Struct *ptr = (func_80136DC4_Struct *)&D_801BBBF0;

    ptr->unk29C = ptr->unk2A4;
    ptr->unk2A0 = ptr->unk2A8;
    ptr->unkF35 = ptr->unkF48;
    func_80005700(arg0);
}

