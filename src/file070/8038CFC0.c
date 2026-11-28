#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#define D_801BBBF0 D_801BBBF0__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define D_801BC03C D_801BC03C__func_8038CFF4
#define D_801BC3D8 D_801BC3D8__func_8038CFF4
#define func_8001EAD0 func_8001EAD0__func_8038CFF4
#define func_8001EB64 func_8001EB64__func_8038CFF4
#define func_8001EF38 func_8001EF38__func_8038CFF4
#define func_8022559C func_8022559C__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8022B640 func_8022B640__func_8038CFF4
extern u8 D_801BBBF0[];
extern u8 D_801BC03C;
extern u8 D_801BC3D8[];
extern s32 func_8022B640();


struct func_8038CFF4_StructR { u8 pad0[0x1C]; s32 unk1C; };
struct func_8038CFF4_StructQ {
 u8 pad0[0xC]; struct func_8038CFF4_StructQ *unkC;
 u8 pad1[0x5C-0x10]; struct func_8038CFF4_StructR *unk5C;
};
struct func_8038CFF4_StructG {
 u8 pad0[0xDC]; struct func_8038CFF4_StructQ *unkDC;
 u8 pad1[0xEC-0xE0]; struct func_8038CFF4_StructQ *unkEC;
 u8 pad2[0x232-0xF0]; s16 unk232;
 u8 pad3[0x44C-0x234]; u8 unk44C;
 u8 pad3b[0xB90-0x44D]; f32 unkB90;
 u8 pad4[0x1031-0xB94]; u8 unk1031;
};
struct func_8038CFF4_StructA {
 u8 pad0[0xC]; struct func_8038CFF4_StructQ *unkC;
 u8 pad1[0x90-0x10]; u8 unk90,unk91,unk92,pad2[2],unk95;
 s16 unk96,unk98;
};
struct func_8038CFF4_StructE {
 u8 pad0[6]; s16 unk6; u8 pad1[2]; s16 unkA; u8 pad2[0x30-0xC];
 union { u32 w; u16 h; struct {u16 pad:13;u16 d:3;} hb; struct {u8 b0,b1,unk32,b3;} b;} u30;
 u8 pad3[4]; u32 unk38; u8 pad5[0xA6-0x3C]; u8 unkA6; u8 pad6[0x2FC-0xA7]; u8 unk2FC;
 u8 pad7[0x312-0x2FD]; s16 unk312; u8 pad8[0x328-0x314]; u8 unk328,unk329; s16 unk32A;
};
struct func_8038CFF4_StructO {u8 pad0[2]; s16 unk2; u16 unk4; s16 unk6,unk8;};
#define G (*(struct func_8038CFF4_StructG *)D_801BBBF0)
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32,f32);
extern s32 func_8022559C();
extern s16 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_80229260();
extern void func_802292D0();

void func_8038CFF4(struct func_8038CFF4_StructA *arg0,s32 arg1) {
 f32 sp4C; u8 pad[8]; s16 pad42,base;
 struct func_8038CFF4_StructO *o;
 struct func_8038CFF4_StructE *e,*t1;
 s32 a0v; u32 w,m; s16 sp26,v1,ang; s32 d;
 struct func_8038CFF4_StructQ *q;
 base=(s16)(0x2800-G.unk232)&0x1FFF;
 q=G.unkDC;
 if(q==arg0->unkC->unkC) o=(void *)D_801BBC8C; else o=(void *)D_801BBCAC;
 if(q==arg0->unkC->unkC) e=(void *)&D_801BC03C; else e=(void *)D_801BC3D8;
 if(q==arg0->unkC->unkC) t1=(void *)D_801BC3D8; else t1=(void *)&D_801BC03C;
 if(t1==(void *)&G.unk44C) a0v=q->unk5C->unk1C; else a0v=G.unkEC->unk5C->unk1C;
 func_8022559C(a0v,e);
 if(arg0->unk91==1 && G.unk1031==7) arg0->unk91=2;
 w=e->u30.w;
 if(((w<<9)>>30)==0) return;
 if(((w<<3)>>28)==1) return;
 if(G.unk1031>=7 && G.unk1031!=0xF) arg0->unk92=arg0->unk95=0;
 if(G.unk1031!=5) return;
 if(e->u30.hb.d) return;
 if(func_80229260(arg0,e,o,0xC)!=0) return;
 if(G.unkB90<20.0 || arg0->unk95==1) {
  v1=e->unk6;
  if(v1>=0x64) {
   if(arg0->unk95==0) {arg0->unk95=1; arg0->unk92=1; return;}
   if(G.unkB90>25.0) {arg0->unk95=0; arg0->unk92=0; return;}
   w=t1->u30.w;
   if(((((w<<11)>>30)!=0 && (t1->unk312>=0xB || ((w<<3)>>28)==1)) || ((w<<3)>>28)==2) && v1>=0x21){o->unk4=0x8000;return;}
   if(arg0->unk91==2) arg0->unk92=4;
   if(arg0->unk92==1) {
    w=e->unk38>>31;
    if(w!=0){
     arg0->unk90=0;
     arg0->unk92=3;
     return;
    }
    if(e->unk2FC%3!=0 && w==0){
     o->unk4=0x10;
     arg0->unk90=0;
     arg0->unk92=3;
     return;
    }
    if(e->unk6>=0x47){
     func_802292D0(o,e);
     arg0->unk91=1;
     arg0->unk92=2;
     return;
    }
    func_80228FD0(arg0,o,4);
   } else if(arg0->unk92==2){
    if((e->unk38>>31)!=0){arg0->unk90=0;arg0->unk92=3;}
    m=e->u30.b.unk32&3;
    if((m<<0)==2){arg0->unk92=4;m=e->u30.b.unk32&3;}
    if(m==0)arg0->unk92=1;
   } else if(arg0->unk92==3){
    if((e->unk38>>31)!=0){a0v=arg0->unk90++>=0x1F;if(a0v){arg0->unk90=0;arg0->unk92=4;return;}}
    w=e->unk38;
    if(((w<<1)>>30)==0 && (w>>31)==0)arg0->unk92=1;
   } else if(arg0->unk92==4){
    if(e->unk6>=0x64 && func_80228D90(arg0,e)!=0){e->u30.b.unk32=e->u30.b.unk32&0xFFFC;o->unk4=0x8000;arg0->unk91=0;return;}
    func_80228FD0(arg0,o,4);
   }
   return;
  }
 }
 if(arg0->unk91==1)arg0->unk91=2;
 if((e->u30.b.unk32&3)==2U)e->u30.b.unk32=e->u30.b.unk32&0xFFFC;
 if(e->unkA<0xA){
  d=(s16)(base+func_80228C20(arg0))&0x1FFF;
  ang=d;
  o->unk6=-func_8001EB64(d)*40.0f;
  o->unk8=func_8001EAD0(ang)*40.0f;
  return;
 }
 v1=e->unk6;
 if(G.unkB90>30.0f && !(e->unkA6&0x10) && v1>=0x64){o->unk4=0x8000;return;}
 if(v1<0x32 || arg0->unk98!=0){
  if(arg0->unk92==0xA && arg0->unk98!=0){
   o->unk2=0x2000;
   o->unk6=-func_8001EB64(arg0->unk96)*40.0f;
   o->unk8=func_8001EAD0(arg0->unk96)*40.0f;
   if(arg0->unk98==0x1E)arg0->unk92=0xB;else arg0->unk98--;
  } else if(arg0->unk92==0xB){
   if(arg0->unk98==0)arg0->unk92=0;else arg0->unk98--;
  } else if(G.unkB90<20.0 && arg0->unk98==0){
   arg0->unk92=0xA;
   sp26=func_80228C20(arg0);
   if(func_8022B640(2)==0) a0v=0x800; else a0v=-0x800;
   arg0->unk96=(s16)((s32)((u32)a0v+sp26)+base)&0x1FFF;
   arg0->unk98=0x32;
  } else if(arg0->unk98==0){
   e->unk328=3;
   e->unk329=0;
   sp4C=(func_8001EB64(func_80228C20(arg0)+0x1000)*80.0f)/20.0;
   e->unk32A=(s16)(func_8001EF38(sp4C,(func_8001EAD0(func_80228C20(arg0)+0x1000)*80.0f)/20.0)-base)&0x1FFF;
   arg0->unk98=0x14;
  } else arg0->unk98--;
 } else if(arg0->unk98==0){
  e->unk328=3;
  e->unk329=0;
  sp4C=(func_8001EB64(func_80228C20(arg0))*80.0f)/20.0;
  e->unk32A=(s16)(func_8001EF38(sp4C,(func_8001EAD0(func_80228C20(arg0))*80.0f)/20.0)-base)&0x1FFF;
  arg0->unk98=0x28;
 } else arg0->unk98--;
}
#undef G
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8001EF38
#undef func_8022559C
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0
#undef func_8022B640

extern u8 D_801BC3D8[];

struct func_8038D7E8_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D7E8_StructB {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_8038D7E8_StructC {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0xA6 - 0x3C];
    u8 unkA6;
    u8 pad2[0x2D8 - 0xA7];
    u8 unk2D8;
    u8 unk2D9;
};

extern void func_80229404();
extern void func_80229CE0();
extern s32 func_8022B640();

s32 func_8038D7E8(struct func_8038D7E8_StructA *arg0, struct func_8038D7E8_StructC *arg1, struct func_8038D7E8_StructB *arg2) {
    if (((u32) (arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = arg0->unk9A | 8;
    } else if (((u32) arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = arg0->unk9A | 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if ((*(f32 *) ((u8 *) &D_801BC3D8 + 0x3A8) > 30.0f) && !(arg1->unkA6 & 0x10)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 0x20;
        arg0->unk9A = arg0->unk9A | 0x100;
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0;
        } else {
            arg1->unk2D8 = 1;
        }
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D918_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern void func_8038D990();

void func_8038D918(struct func_8038D918_Struct *arg0, s32 arg1) {
    u8 *var_a1;
    u8 *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = &D_801BC03C;
    } else {
        var_a1 = &D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = &D_801BC3D8;
    } else {
        var_a2 = &D_801BC03C;
    }
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    func_8038D7E8(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038D990);
}

extern u8 D_801BBBF0[];
extern s32 func_8022AB58();
extern void func_8022B3E0();
struct func_8038D990_Struct {
    u8 pad0[0x91];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad1[0x9A - 0x94];
    s16 unk9A;
    u8 pad2[0xA8 - 0x9C];
    u8 unkA8;
    u8 pad3[0xB0 - 0xA9];
    void *unkB0;
};

#define func_8038D7E8 func_8038D7E8__func_8038D990
#define func_8038D7E8_StructA func_8038D7E8_StructA__func_8038D990
#define func_8038D7E8_StructB func_8038D7E8_StructB__func_8038D990
#define func_8038D7E8_StructC func_8038D7E8_StructC__func_8038D990
#define func_8038D990_Struct func_8038D990_Struct__func_8038D990
struct func_8038D7E8_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};
struct func_8038D7E8_StructB {
    u8 pad0[0x30];
    s32 unk30;
};
struct func_8038D7E8_StructC {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0xA6 - 0x3C];
    u8 unkA6;
    u8 pad2[0x2D8 - 0xA7];
    u8 unk2D8;
    u8 unk2D9;
};
s32 func_8038D7E8(struct func_8038D7E8_StructA *arg0, struct func_8038D7E8_StructC *arg1, struct func_8038D7E8_StructB *arg2);

struct func_8038D990_Struct {
    u8 pad0[0x91];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad1[0x9A - 0x94];
    s16 unk9A;
    u8 pad2[0xA8 - 0x9C];
    u8 unkA8;
    u8 pad3[0xB0 - 0xA9];
    void *unkB0;
};

void func_8038D990(struct func_8038D990_Struct *arg0, s32 arg1) {
    struct func_8038D7E8_StructC *a3;
    struct func_8038D7E8_StructB *a2;
    s32 v0;
    u32 v1;

    a3 = (*(s32 *)(D_801BBBF0 + 0xDC) == *(s32 *)((u8 *)arg0 + 0xC)) ? (struct func_8038D7E8_StructC *)&D_801BC03C : (struct func_8038D7E8_StructC *)D_801BC3D8;
    a2 = (*(s32 *)(D_801BBBF0 + 0xDC) == *(s32 *)((u8 *)arg0 + 0xC)) ? (struct func_8038D7E8_StructB *)D_801BC3D8 : (struct func_8038D7E8_StructB *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D7E8((void *)arg0, a3, a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)((u8 *)a3 + 0x30) & 7) || (D_801BBBF0[0x1031] == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0[0x1031] == 7) {
        arg0->unkB0 = (void *)func_8038D990;
        func_800058DC((s32)arg0, (void *)func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) > 30.0f && !(arg0->unk9A & 0x100) && !(a3->unkA6 & 0x10)) {
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) < 30.0f && (arg0->unk9A & 0x100)) {
        arg0->unk9A = 0;
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    v0 = a2->unk30;
    v1 = ((u32)v0 << 11) >> 30;
    if (v1 != 0 || 2 == (((u32)v0 << 3) >> 28)) {
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    if (v1 == 0 && 2 != (((u32)v0 << 3) >> 28) && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    v0 = a3->unk38;
    v1 = (u32)v0 >> 31;
    if (v1 != 0 && !(((u32)v0 << 3) >> 31) && !(arg0->unk9A & 2)) {
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    if (v1 != 0 && (((u32)v0 << 3) >> 31) && !(arg0->unk9A & 4)) {
        func_8038D7E8((void *)arg0, a3, a2);
        return;
    }
    if (v1 == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D7E8((void *)arg0, a3, a2);
    }
}
#undef func_8038D7E8
#undef func_8038D7E8_StructA
#undef func_8038D7E8_StructB
#undef func_8038D7E8_StructC
#undef func_8038D990_Struct


extern void func_8022A824();
extern void func_8022A834();

void func_8038DC2C(s32 arg0, s16 *arg1) {
    if (arg1[3] >= 0x64) {
        func_8022A824(arg0);
        return;
    }
    func_8022A834(arg0);
}

