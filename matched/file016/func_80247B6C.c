#include "common.h"
struct func_802488E8_StructBBBF0 {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad1[0x4];
    f32 unk1A0;
    u8 pad2[0x39C - 0x1A4];
    u8 unk39C;
    u8 pad3[0xF0C - 0x39D];
    u16 unkF0C;
};
extern struct func_802488E8_StructBBBF0 D_801BBBF0;
extern s32 D_8024F510;
extern s32 D_8024F518;
struct func_80248C04_StrData {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80248C04_StrNode {
    u8 pad0[0x2C];
    struct func_80248C04_StrData *unk2C;
};
struct func_80248C04_StrGlob {
    u8 pad0[0xE0];
    struct func_80248C04_StrNode *unkE0;
    u8 pad1[0x198 - 0xE4];
    s32 unk198;
    u8 pad2[4];
    s32 unk1A0;
    u8 pad3[0xEF0 - 0x1A4];
    u16 unkEF0;
    u8 pad4[0xF0C - 0xEF2];
    u16 unkF0C;
};
#define G ((struct func_80248C04_StrGlob *) &D_801BBBF0)
extern void func_80005700(void *arg0);
extern void func_80020718(s32);
extern void func_801518D4(s32, s32, s32);


typedef struct func_80247B6C_StructData {
    u8 pad[4];
    f32 unk4, unk8, unkC;
    u8 pad10[0x20];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_80247B6C_StructData;
typedef struct func_80247B6C_StructNode {
    u8 pad[0x30];
    func_80247B6C_StructData *unk30;
} func_80247B6C_StructNode;
typedef struct func_80247B6C_StructEnt {
    u8 pad[0x2C];
    func_80247B6C_StructData *unk2C;
} func_80247B6C_StructEnt;
typedef struct func_80247B6C_StructAnim {
    u8 pad[0x1C];
    s32 unk1C;
} func_80247B6C_StructAnim;
typedef struct func_80247B6C_StructGfx {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad30[0x24];
    s32 unk54;
    u8 pad58[4];
    func_80247B6C_StructAnim *unk5C;
} func_80247B6C_StructGfx;
typedef struct func_80247B6C_StructGlobal {
    u8 pad[0xDC];
    func_80247B6C_StructGfx *unkDC;
    func_80247B6C_StructEnt *unkE0;
    u8 padE4[4];
    func_80247B6C_StructEnt *unkE8;
    u8 padEC[0xA2];
    u16 unk18E;
    s16 unk190;
} func_80247B6C_StructGlobal;
typedef struct func_80247B6C_StructObj {
    u8 pad[0xA0];
    f32 unkA0;
} func_80247B6C_StructObj;
typedef struct func_80247B6C_StructOwner {
    u8 pad[0x24];
    func_80247B6C_StructEnt *unk24;
} func_80247B6C_StructOwner;
#undef G
#define G (*(func_80247B6C_StructGlobal *)&D_801BBBF0)
#define OWNER ((func_80247B6C_StructOwner *)D_8024F510)
#define NODES ((func_80247B6C_StructNode **)arg1)
#define FILEPATH "/hdisk1/u/nu64/rz011_usa/main/game/source/a04_s04elevatordemo.c"
extern f32 func_8002FC20(f32);
extern void func_8011AAF4(char *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801FA2E0(void);
extern void func_801FBB20(void);
extern void func_801FBB30(void);
extern void func_80249284(void);
extern s16 D_8024F51C;

void func_80247B6C(func_80247B6C_StructObj *arg0, void *arg1) {
    func_80247B6C_StructAnim *anim;
    s32 i;
    f32 camera0, camera1, camera2, camera3, camera4, camera5;
    s32 j;
    f32 vec[3];
    f32 dx, dy, dz;

    anim = G.unkDC->unk5C;
    switch (D_8024F518) {
    case 0: {
        if ((f64)G.unkE0->unk2C->unk8 < -400.0) {
            NODES[0]->unk30->unk8 = -520.0f;
            NODES[0]->unk30->unkC = 490.0f;
            func_80005700((void *)D_8024F510);
            D_8024F518 = 14;
            return;
        }
        vec[0] = 10.0f;
        vec[2] = 10.0f;
        vec[1] = -40.0f;
        dz = G.unkE0->unk2C->unkC - vec[2];
        dx = G.unkE0->unk2C->unk4 - vec[0];
        dy = G.unkE0->unk2C->unk8 - vec[1];
        if ((f64)func_8002FC20(dz * dz + (dx * dx + dy * dy)) < 35.0 && (f64)G.unkE0->unk2C->unk4 <= 40.0) {
            G.unk18E = 1;
            G.unk190 = 0;
            D_8024F518 = 1;
            func_801FBB30();
            D_8024F51C = 0;
        }
        return;
    }
    case 1:
        func_8011AAF4(FILEPATH, 0x1C1, arg0, 0, 1, 10.0f, -100.0f, 10.0f, -55.0f, 10.0f, -33.0f, -12.2f, -18.6f, 0.0f, 35.0f, -1, -1);
        return;
    case 2:
        func_80249284();
        if (anim->unk1C == 0x03480042) {
            func_80020718(0x1FA);
            D_8024F518 = 3;
        }
        break;
    case 3: {
        func_80249284();
        NODES[1]->unk30->unkC -= 0.5;
        if ((f64)NODES[1]->unk30->unkC <= 10.0) {
            func_80020718(0x1FC);
            arg0->unkA0 = 0.0f;
            D_8024F518 = 4;
        }
        break;
    }
    case 4:
    case 5:
        func_80249284();
        return;
    case 6: {
        func_80249284();
        G.unkDC->unk2C &= ~0xE0;
        G.unkDC->unk54 = 0;
        if ((f64)NODES[0]->unk30->unk8 <= -239.0) {
            camera0 = (f64)G.unkE8->unk2C->unk30 + 1020.0;
            camera1 = (f64)(G.unkE8->unk2C->unk34 - NODES[0]->unk30->unk8) - 180.0;
            camera2 = (f64)(G.unkE8->unk2C->unk38 - NODES[0]->unk30->unkC) + 120.0;
            camera3 = (f64)G.unkE8->unk2C->unk3C + 1020.0;
            camera4 = (f64)(G.unkE8->unk2C->unk40 - NODES[0]->unk30->unk8) - 180.0;
            camera5 = (f64)(G.unkE8->unk2C->unk44 - NODES[0]->unk30->unkC) + 120.0;
            func_8011AAF4(FILEPATH, 0x1E8, arg0, 0, 1, 10.0f, camera0, camera1, camera2, 10.0f, camera3, camera4, camera5, 0.0f, 35.0f, -1, -1);
            func_801FA2E0();
            D_8024F518 = 7;
        }
        if ((f64)arg0->unkA0 < 1.0) arg0->unkA0 = (f64)arg0->unkA0 + 0.01;
        else arg0->unkA0 = 1.0f;
        i = 0;
loop6:
        NODES[i]->unk30->unk8 -= arg0->unkA0;
        NODES[i]->unk30->unkC += arg0->unkA0;
        i = (i + 1) & 0xFF;
        if (i < 2) goto loop6;
        G.unkE0->unk2C->unk8 -= arg0->unkA0;
        G.unkE0->unk2C->unkC += arg0->unkA0;
        OWNER->unk24->unk2C->unk8 -= arg0->unkA0;
        OWNER->unk24->unk2C->unkC += arg0->unkA0;
        return;
    }
    case 7: {
        G.unkE0->unk2C->unk4 = (f64)G.unkE0->unk2C->unk4 + 1020.0;
        G.unkE0->unk2C->unk8 = -180.0f;
        G.unkE0->unk2C->unkC = (f64)(G.unkE0->unk2C->unkC - NODES[0]->unk30->unkC) + 120.0;
        OWNER->unk24->unk2C->unk4 = (f64)OWNER->unk24->unk2C->unk4 + 1020.0;
        OWNER->unk24->unk2C->unk8 = -180.0f;
        OWNER->unk24->unk2C->unkC = (f64)(OWNER->unk24->unk2C->unkC - NODES[0]->unk30->unkC) + 120.0;
        D_8024F518 = 8;
        return;
    }
    case 9: {
        func_80020718(0x176);
        for (i = 0; i < 2; i = (i + 1) & 0xFF) {
        NODES[i]->unk30->unk8 = -340.5f;
        NODES[i]->unk30->unkC = 310.5f;
        }
        camera0 = (f64)G.unkE8->unk2C->unk30 - 1020.0;
        camera1 = ((f64)G.unkE8->unk2C->unk34 - -180.0) - 340.5;
        camera2 = ((f64)G.unkE8->unk2C->unk38 - 120.0) + 310.5;
        camera3 = (f64)G.unkE8->unk2C->unk3C - 1020.0;
        camera4 = ((f64)G.unkE8->unk2C->unk40 - -180.0) - 340.5;
        camera5 = ((f64)G.unkE8->unk2C->unk44 - 120.0) + 310.5;
        func_8011AAF4(FILEPATH "\0EVSPEED %f \n", 0x21B, arg0, 0, 1, 10.0f, camera0, camera1, camera2, 10.0f, camera3, camera4, camera5, 0.0f, 35.0f, -1, -1);
        func_801FBB30();
        D_8024F518 = 10;
        return;
    }
    case 10: {
        G.unkE0->unk2C->unk4 = (f64)G.unkE0->unk2C->unk4 - 1020.0;
        G.unkE0->unk2C->unk8 = -340.3f;
        G.unkE0->unk2C->unkC = ((f64)G.unkE0->unk2C->unkC - 120.0) + 310.5;
        D_8024F518 = 11;
        arg0->unkA0 = 1.0f;
        return;
    }
    case 11: {
        if ((f64)arg0->unkA0 < 0.01) {
            func_80020718(0x175);
            func_80020718(0x1FA);
            func_801518D4(0, 7, 6);
            i = 0;
loop11a:
            NODES[i]->unk30->unk8 = -520.0f;
            NODES[i]->unk30->unkC = 490.0f;
            i = (i + 1) & 0xFF;
            if (i < 2) goto loop11a;
            D_8024F518 = 12;
        } else {
            if ((f64)NODES[0]->unk30->unk8 <= -470.0) arg0->unkA0 = (f64)arg0->unkA0 - 0.01;
            i = 0;
            while (i < 2) {
                NODES[i]->unk30->unk8 -= arg0->unkA0;
                NODES[i]->unk30->unkC += arg0->unkA0;
                i = (i + 1) & 0xFF;
            }
            G.unkE0->unk2C->unk8 -= arg0->unkA0;
            G.unkE0->unk2C->unkC += arg0->unkA0;
        }
        if ((f64)NODES[0]->unk30->unk8 <= -400.0) {
            func_8011AAF4(FILEPATH, 0x244, arg0, 0, 1, 10.0f, 54.7f, -498.7f, 663.7f, 10.0f, 22.4f, -490.2f, 595.8f, 0.0f, 35.0f, -1, -1);
        } else {
            func_8011AAF4(FILEPATH, 0x249, arg0, 0, 1, 10.0f, G.unkE8->unk2C->unk30, G.unkE8->unk2C->unk34 -= arg0->unkA0, G.unkE8->unk2C->unk38 += arg0->unkA0, 10.0f, G.unkE8->unk2C->unk3C, G.unkE8->unk2C->unk40 -= arg0->unkA0, G.unkE8->unk2C->unk44 += arg0->unkA0, 0.0f, 35.0f, -1, -1);
        }
        return;
    }
    case 12: {
        if ((f64)(NODES[1]->unk30->unkC += 0.5) >= (f64)NODES[0]->unk30->unkC + 30.0) {
            func_80020718(0x1FC);
            func_801FBB20();
            D_8024F518 = 13;
            func_8011AAF4(FILEPATH, 0x254, arg0, 2, 1, 10.0f, 84.7f, -499.7f, 522.5f, 10.0f, 39.5f, -505.9f, 499.7f, 0.0f, 35.0f, -1, -1);
            return;
        }
        func_8011AAF4(FILEPATH "\0ok!\n", 0x259, arg0, 0, 1, 10.0f, 84.7f, -499.7f, 522.5f, 10.0f, 39.5f, -505.9f, 499.7f, 0.0f, 35.0f, -1, -1);
        break;
    }
    }
}
