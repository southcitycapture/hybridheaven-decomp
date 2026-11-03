#include "common.h"
extern u8 D_801BBBF0[];
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern func_801EFD14_Table D_80216BA8;
s32 func_800058DC(void *arg0, void *arg1);
extern s32 func_80010550(s32, void *);
extern void func_800113D0(s32, void *);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
extern void func_801E5010(void);
void func_801EFE0C(f32 arg0);


typedef struct func_801EFF78_StructInput { u16 unk0, unk2, unk4; s16 unk6, unk8; } func_801EFF78_StructInput;
typedef struct func_801EFF78_StructDC { u8 pad[0x68]; func_801EFF78_StructInput *unk68; } func_801EFF78_StructDC;
typedef struct func_801EFF78_StructPos { f32 unk0, x, y, z; } func_801EFF78_StructPos;
typedef struct func_801EFF78_StructE0 { u8 pad[0x2C]; func_801EFF78_StructPos *unk2C; } func_801EFF78_StructE0;
typedef struct func_801EFF78_StructGlobal {
 u8 pad0[0x19]; s8 unk19; u8 pad1[0xDC-0x1A];
 func_801EFF78_StructDC *unkDC; func_801EFF78_StructE0 *unkE0;
 u8 pad2[0x18E-0xE4]; u16 unk18E; u8 pad3[0xEF0-0x190];
 u16 unkEF0; u8 pad4[0xEFC-0xEF2]; s32 unkEFC;
} func_801EFF78_StructGlobal;
typedef struct func_801EFF78_StructAnim { s32 id; u16 frame, flags; f32 last; } func_801EFF78_StructAnim;
typedef struct func_801EFF78_StructData { u8 pad[0x1C]; func_801EFF78_StructAnim anim; } func_801EFF78_StructData;
typedef struct func_801EFF78_StructObj {
 u8 pad[0x2C]; s32 unk2C, unk30; u8 pad2[0x40-0x34]; f32 unk40, unk44, unk48;
 u8 pad3[0x5C-0x4C]; func_801EFF78_StructData *unk5C;
} func_801EFF78_StructObj;
typedef struct func_801EFF78_StructVec { f32 x,y,z; } func_801EFF78_StructVec;
extern s16 D_80216BF8;
extern u8 D_8021AFC9;
extern func_801EFD14_Table D_80216C14;
extern func_801EFD14_Table D_80216C20;
extern func_801EFD14_Table D_80216C2C;
extern func_801EFD14_Table D_80216C38;
extern func_801EFD14_Table D_80216C44;
extern f32 D_802187A0;
extern f32 D_802187A4;
extern void func_80379970();
extern void func_8013AE20(void *, s32, s32);
extern void func_80020718(s32);
extern s32 B_80011140(s32, void *, func_801EFD14_Table, s32);
extern s32 D_80011198(s32, void *);
extern s32 func_801F152C();
extern void func_801DC9C4(func_801EFF78_StructVec, s32, f32);
#define G (*(func_801EFF78_StructGlobal *)&D_801BBBF0)
void func_801EFF78(func_801EFF78_StructObj *arg0, s32 arg1) {
    func_801EFF78_StructData *data;
    func_801EFF78_StructAnim *anim;
    s32 pad;
    func_801EFF78_StructInput *input;
    f32 x, y;
    func_801EFF78_StructVec pos;
    func_801EFF78_StructPos *p;
    data=arg0->unk5C;
    anim=&data->anim;
    input=G.unkDC->unk68;
    y=G.unk19*(x=input->unk6/20.0, input->unk8/20.0);
    if (G.unkEF0 & 0x1000) {
        func_8013AE20(arg0,arg1,0);
        D_80011198(arg1,data);
        func_800058DC(arg0,func_80379970);
        return;
    }
    if (G.unk18E) {
        func_8013AE20(arg0,arg1,0);
        D_80011198(arg1,data);
        func_800058DC(arg0,func_801E5010);
        return;
    }
    if (G.unkEF0 & 0x2000) {
        D_80216BF8--;
        if (D_80216BF8 <= 0) {
            G.unkEF0 &= 0xDFFF;
            D_80216BF8=0;
        }
    } else {
        D_80216BF8=0;
    }
    p=G.unkE0->unk2C;
    if (!func_801C5A1C(p->x,p->y,p->z,p->x,p->y-5.0,p->z) && !(arg0->unk30 & 4)) {
        arg0->unk2C |= 0x60;
        anim->id=0x1680053;
        anim->frame=0;
        anim->flags=1;
        func_8013A28C(arg1, *(func_801E74DC_Sub *)anim);
        arg0->unk40=0.0f;
        arg0->unk48=0.0f;
        func_801E4F60((G.unkEFC | 4 | 8)&0xFFFF);
        G.unkEF0 |= 0x208;
        func_8013AE20(arg0,arg1,0);
        func_800058DC(arg0,func_801E5010);
        return;
    }
    G.unkEF0 |= 0x80;
    switch (anim->id) {
        case 0x1680048:
            if (!(input->unk2 & 0x10)) {
            anim->flags |= 2;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)anim);
        }
        if (anim->frame==3) {
            if (anim->flags & 2) {
                func_8013AE20(arg0,arg1,0);
                func_80020718(0x6C1);
            } else {
                func_8013AE20(arg0,arg1,2);
            }
        }
        if (func_80010550(arg1,data)) {
            if (anim->flags & 2) {
                func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216B90);
                func_80010550(arg1,data);
                func_80010550(arg1,data);
                func_800058DC(arg0,func_801E5010);
                return;
            }
            D_8021AFC9=0;
            if (y>3.0) {
                B_80011140(arg1, data, D_80216C38, 4);
                return;
            }
            if (y< -3.0) {
                B_80011140(arg1, data, D_80216C44, 4);
                return;
            }
            B_80011140(arg1, data, D_80216C2C, 4);
            return;
        }
        return;
        case 0x1680049:
            pad = D_8021AFC9;
            if (!pad) {
            if (anim->flags & 1) {
                if (!(input->unk2 & 0x10)) {
                    if (x*x+y*y > 10.0) {
                        func_8013AE20(arg0,arg1,0);
                        func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216BA8);
                        func_80010550(arg1,data);
                        func_80010550(arg1,data);
                        func_800058DC(arg0,func_801E5010);
                        return;
                    }
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=4;
                    B_80011140(arg1, data, D_80216C20, 3);
                    return;
                }
                func_801EFE0C(x);
                if (y>3.0) {
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=2;
                    B_80011140(arg1, data, D_80216C38, 4);
                    return;
                }
                if (y< -3.0) {
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=3;
                    B_80011140(arg1, data, D_80216C44, 4);
                    return;
                }
            }
            if (input->unk4 & 0xA000) {
                func_800113D0(arg1,&anim->flags);
            }
            if (func_80010550(arg1,data)) {
                func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216C2C);
                return;
            }
            if (anim->frame == 2) {
                func_801F152C(0);
                return;
            }
        } else {
            switch (pad) {
                case 2:
                    if (B_80011140(arg1, data, D_80216C38, 4)) {
                        D_8021AFC9=0;
                    }
                break;
                case 3:
                    if (B_80011140(arg1, data, D_80216C44, 4)) {
                        D_8021AFC9=0;
                    }
                break;
                case 4:
                    if (B_80011140(arg1, data, D_80216C20, 3)) {
                        D_8021AFC9=0;
                    }
                break;
            }
        }
        break;
        case 0x168004A:
            pad = D_8021AFC9;
            if (!pad) {
            if (anim->flags & 1) {
                if (!(input->unk2 & 0x10)) {
                    if (x*x+y*y > 10.0) {
                        func_8013AE20(arg0,arg1,0);
                        func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216BA8);
                        func_80010550(arg1,data);
                        func_80010550(arg1,data);
                        func_800058DC(arg0,func_801E5010);
                        return;
                    }
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=4;
                    B_80011140(arg1, data, D_80216C20, 3);
                    return;
                }
                func_801EFE0C(x);
                if (!(y>3.0)) {
                    if (y< -3.0) {
                        func_800113D0(arg1,&anim->flags);
                        D_8021AFC9=3;
                        B_80011140(arg1, data, D_80216C44, 4);
                        return;
                    }
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=1;
                    B_80011140(arg1, data, D_80216C2C, 4);
                    return;
                }
            }
            if (input->unk4 & 0xA000) {
                func_800113D0(arg1,&anim->flags);
            }
            if (func_80010550(arg1,data)) {
                func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216C38);
                return;
            }
            if (anim->frame == 2) {
                func_801F152C(1);
                return;
            }
        } else {
            switch (pad) {
                case 1:
                    if (B_80011140(arg1, data, D_80216C2C, 4)) {
                        D_8021AFC9=0;
                    }
                break;
                case 3:
                    if (B_80011140(arg1, data, D_80216C44, 4)) {
                        D_8021AFC9=0;
                    }
                break;
                case 4:
                    if (B_80011140(arg1, data, D_80216C20, 3)) {
                        D_8021AFC9=0;
                    }
                break;
            }
        }
        break;
        case 0x168004B:
            pad = D_8021AFC9;
            if (!pad) {
            if (anim->flags & 1) {
                if (!(input->unk2 & 0x10)) {
                    if (x*x+y*y > 10.0) {
                        func_8013AE20(arg0,arg1,0);
                        func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216BA8);
                        func_80010550(arg1,data);
                        func_80010550(arg1,data);
                        func_800058DC(arg0,func_801E5010);
                        return;
                    }
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=4;
                    B_80011140(arg1, data, D_80216C20, 3);
                    return;
                }
                func_801EFE0C(x);
                if (y>3.0) {
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=2;
                    B_80011140(arg1, data, D_80216C38, 4);
                    return;
                }
                if (!(y< -3.0)) {
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=1;
                    B_80011140(arg1, data, D_80216C2C, 4);
                    return;
                }
            }
            if (input->unk4 & 0xA000) {
                func_800113D0(arg1,&anim->flags);
            }
            if (func_80010550(arg1,data)) {
                func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216C44);
                return;
            }
            if (anim->frame == 2) {
                func_801F152C(2);
                return;
            }
        } else {
            switch (pad) {
                case 1:
                    if (B_80011140(arg1, data, D_80216C2C, 4)) {
                        D_8021AFC9=0;
                    }
                break;
                case 2:
                    if (B_80011140(arg1, data, D_80216C38, 4)) {
                        D_8021AFC9=0;
                    }
                break;
                case 4:
                    if (B_80011140(arg1, data, D_80216C20, 3)) {
                        D_8021AFC9=0;
                    }
                break;
            }
        }
        break;
        default: arg0->unk2C |= 0x60;
        arg0->unk2C &= ~0x80;
        arg0->unk48=0.0f;
        arg0->unk44=0.0f;
        arg0->unk40=0.0f;
        pos.x=G.unkE0->unk2C->x;
        pos.y=G.unkE0->unk2C->y;
        pos.z=G.unkE0->unk2C->z;
        if (anim->id==0x1680041) {
            func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216C14);
            func_801DC9C4(pos,0x505,D_802187A0);
            return;
        }
        if (B_80011140(arg1, data, D_80216C14, 5)) {
            func_801DC9C4(pos,0x505,D_802187A4);
        }
        break;
    }
}
