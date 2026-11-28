#include "common.h"
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
