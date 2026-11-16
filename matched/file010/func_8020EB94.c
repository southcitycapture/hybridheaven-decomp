#include "common.h"
extern f32 D_801BBF74;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern s32 func_80108590(f32, f32, f32, f32, f32, f32);
extern s32 func_8012C6B4();
extern s32 func_80150584();
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801FC830(f32, f32, f32, f32, s32);
typedef struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x3C - 0x30];
    u16 unk3C;
    u8 pad3E[0x44 - 0x3E];
    f32 unk44;
    u8 pad48[0x74 - 0x48];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x90 - 0x8A];
    u8 unk90;
    u8 unk91;
    u8 pad92[0x94 - 0x92];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    u8 padA6[0xAC - 0xA6];
    u8 unkAC;
    u8 padAD[0xB0 - 0xAD];
    u8 unkB0;
} func_8020FB98_Struct;
extern void func_801FCF98(func_8020FB98_Struct *);
extern s32 func_801FD168(f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
extern void func_801FD260(s32, void *);
extern s16 func_801FD3EC(s16, s16, s16);
extern s32 func_801FD4F4(s16, s16, s32);
extern s32 func_801FD68C(func_8020FB98_Struct *);
extern void func_801FDB3C(s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

extern s16 func_801FD284(s16, s16, f32);
extern s32 D_80217CBC[];
extern u8 D_801BBF44[];
struct func_8020EB94_StructInner { u8 pad0[4]; f32 unk4,unk8,unkC; u16 unk10,unk12,unk14; };
struct func_8020EB94_StructOuter { u8 pad0[0x22]; u8 unk22; u8 pad23[13]; struct func_8020EB94_StructInner *unk30; };
struct func_8020EB94_Vec { u8 pad0[4]; f32 x, y, z; };
struct func_8020EB94_Player { u8 pad0[0x2C]; struct func_8020EB94_Vec *inner; };
extern struct func_8020EB94_Player *D_801BBCD0__func_8020EB94;
struct func_8020EB94_StructArg1 { struct func_8020EB94_StructOuter *unk0,*unk4; };
s32 func_8020EB94(func_8020FB98_Struct *arg0, struct func_8020EB94_StructArg1 *arg1) {
 s16 sp40; s32 sp60; u16 sp5E; s32 sp58; s32 r;
 f32 sp50,sp4C,sp48;
 sp58=arg0->unk3C; arg0->unk3C++;
 switch(arg0->unk90) {
 case 2:
  if(func_80150584()!=0) { goto reload; } else if(func_801C3D20(arg0->unk94,arg0->unk9C,250.0f)!=0) {
   if(arg0->unk98-20.0f<=D_801BBCD0__func_8020EB94->inner->y && D_801BBCD0__func_8020EB94->inner->y<arg0->unk98+25.0f) { arg0->unk90=4; arg0->unk3C=0; }
  }
  goto reload;
 case 4:
  sp5E=func_8001EF38(D_801BBCD0__func_8020EB94->inner->x-arg0->unk94,D_801BBCD0__func_8020EB94->inner->z-arg0->unk9C);
  if(!(arg0->unkAC&1)) {
   arg0->unkA2=func_801FD3EC(arg0->unkA2,sp5E,45);
   if(func_801FD4F4(arg0->unkA2,sp5E,45)!=0) { arg0->unk90=9; arg0->unk3C=0; }
  } else {
   arg0->unkA2=func_801FD284(arg0->unkA2,sp5E,0.2f);
   if(func_801FD4F4(arg0->unkA2,sp5E,45)!=0) {
    sp50=func_8001EAD0(arg0->unkA2);
    if(func_80108590((f32)((f64)sp50+arg0->unk94),(f32)((f64)arg0->unk98+5.0),(f32)((f64)func_8001EB64(arg0->unkA2)+arg0->unk9C),D_801BBCD0__func_8020EB94->inner->x,(f32)((f64)D_801BBCD0__func_8020EB94->inner->y+0.5),D_801BBCD0__func_8020EB94->inner->z)==0) { arg0->unk90=15; arg0->unk3C=0; }
    else { arg0->unk90=2; arg0->unk3C=0; }
   }
  }
  if(func_801C3D20(arg0->unk94,arg0->unk9C,270.0f)==0) { arg0->unk90=2; arg0->unk3C=0; }
  goto reload;
 case 9:
  if(!(sp58%4)) {
   sp5E=(s16)(D_80217CBC[sp58/4]+*(u16*)&arg0->unkA2)&0x1FFF;
   sp48=func_8001EAD0((s16)arg0->unkA2); sp4C=func_8001EB64(arg0->unkA2);
   sp40=(s16)sp5E; sp50=func_8001EAD0(sp40);
   r=func_801FD168((f32)((f64)arg0->unk94-(f64)sp48*6.5),arg0->unk98+12.0f,(f32)((f64)arg0->unk9C-(f64)sp4C*6.5),(f32)((f64)sp50*0.5),3.5f,(f32)((f64)func_8001EB64(sp40)*0.5),0,0,0,0x17,0,0);
   if(r!=0) func_801FD260(r,arg0);
  }
  if(sp58>=8) { arg0->unk90=11; arg0->unk3C=0; }
  goto reload;
 case 15:
  if(!(sp58%4)) {
   r=func_8012C6B4(0x555); sp5E=(arg0->unkA2+r)-0x2AA;
   sp48=func_8001EAD0((s16)arg0->unkA2); sp4C=func_8001EB64(arg0->unkA2);
   sp40=(s16)sp5E; sp50=func_8001EAD0(sp40);
   r=func_801FD168((f32)((f64)sp48*7.8+arg0->unk94),arg0->unk98+12.0f,(f32)((f64)sp4C*7.8+arg0->unk9C),(f32)(f64)sp50,0.0f,(f32)(f64)func_8001EB64(sp40),0,0,0,0x17,1,0);
   if(r!=0) func_801FD260(r,arg0);
  }
  if(sp58>=8) { arg0->unk90=11; arg0->unk3C=0; }
  goto reload;
 case 11:
  if(sp58>=90) { arg0->unk90 = 2; arg0->unk3C=0; }
  goto common;
 case 7:
  if(sp58==0) {
   func_801FC830(arg0->unk94,arg0->unk98,arg0->unk9C,400.0f,0x116);
   func_80380F94(arg0->unk94,(f32)((f64)arg0->unk98+7.5),arg0->unk9C,0,0.0f,0.0f,0x13);
  }
  if(sp58>=8) {
   arg1->unk4->unk22=0; arg1->unk0->unk22=0; arg0->unk90=0; arg0->unk2C&=~0x800; func_801FCF98(arg0); return 0;
  }
reload:
 default:
common:
  if(arg0->unk90!=7 && arg0->unk90!=0 && !(arg0->unkAC&2)) {
   if(func_80108590(arg0->unk94,arg0->unk98-arg0->unk44,arg0->unk9C,arg0->unk94,(f32)((f64)arg0->unk98-0.6),arg0->unk9C)!=0 && D_801BBF44[6]!=0x16) {
    if((f64)arg0->unk44<=-3.8) {
     func_801FC830(arg0->unk94,arg0->unk98,arg0->unk9C,400.0f,0x1FE);
     func_80380F94(arg0->unk94,arg0->unk98,arg0->unk9C,0.0f,0.0f,0.0f,0x1F);
    }
    arg0->unk98=D_801BBF74; arg0->unk44=0.0f;
   } else { if((f64)arg0->unk44>-4.0) arg0->unk44=(f32)((f64)arg0->unk44-0.15); }
   if(arg0->unk98<-1000.0f) {
    arg1->unk4->unk22=0; arg1->unk0->unk22=0; arg0->unk90=0; arg0->unk2C&=~0x800; return 0;
   }
  }
  if(arg0->unk90!=7 && arg0->unk90!=0) {
   sp60=func_801FD68C(arg0);
   if(sp60!=0) {
    arg0->unkB0--;
    if(arg0->unkB0==0) { arg0->unk90=7; arg0->unk3C=0; }
    else {
     func_801FC830(arg0->unk94,arg0->unk98,arg0->unk9C,400.0f,0x3A9);
     func_80380F94(arg0->unk94,(f32)((f64)arg0->unk98+7.5),arg0->unk9C,0,0.0f,0.0f,0x11);
    }
    func_801FDB3C(sp60);
   }
  }
  if(sp60!=0) {}
  arg1->unk4->unk30->unk4=arg0->unk94;
  arg1->unk4->unk30->unk8=arg0->unk98+6.0f;
  arg1->unk4->unk30->unkC=arg0->unk9C;
  arg1->unk4->unk30->unk10=0;
  arg1->unk4->unk30->unk12=arg0->unkA2;
  arg1->unk4->unk30->unk14=0;
  arg1->unk0->unk30->unk4=arg0->unk94;
  arg1->unk0->unk30->unk8=arg0->unk98;
  arg1->unk0->unk30->unkC=arg0->unk9C;
  arg0->unk78=arg0->unk94;
  arg0->unk7C=arg0->unk98;
  arg0->unk80=arg0->unk9C;
  return 1;
 }
}
