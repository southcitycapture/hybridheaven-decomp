#include "common.h"
extern u8 D_801BBBF0[];
void func_80115C3C(s32 arg0, s32 arg1);
extern void func_80119F9C(s16 *, s16 *);
extern void func_8011A0F0(s16 *);
extern void func_8011A148(s16, s16, s16, f32 *, f32 *, f32 *);
extern void func_8011A724(s32 arg0);
extern void func_8011A7FC(void);
extern void func_8011A878(f32, f32);
extern void func_8011AA0C(s32 arg0, void *arg1, void *arg2);


typedef struct func_80115C64_StructB {
    u8 pad0[4];
    f32 f4, f8, fC;
    u8 pad10[0x14];
    f32 f24;
    f32 f28;
    u8 pad2C[0x4];
    f32 f30, f34, f38, f3c, f40, f44, f48, f4c, f50;
} func_80115C64_StructB;
typedef struct func_80115C64_StructA {
    u8 pad0[0x2C];
    func_80115C64_StructB *p2C;
} func_80115C64_StructA;
typedef struct func_80115C64_Struct {
    u8 pad0[4];
    u16 h4;
    u8 pad6[0xE0 - 6];
    func_80115C64_StructA *pE0;
    u8 padE4[4];
    func_80115C64_StructA *pE8;
    u8 padEC[0x29C - 0xEC];
    f32 f29C, f2A0;
    u8 pad2A4[0x2AD - 0x2A4];
    u8 b2AD;
    u8 pad2AE[0x2B5 - 0x2AE];
    u8 b2B5;
    u8 pad2B6[0x2C4 - 0x2B6];
    f32 f2C4;
    u8 pad2C8[0x2D0 - 0x2C8];
    f32 f2D0;
    u8 pad2D4[0x2DC - 0x2D4];
    f32 f2DC;
    u8 pad2E0[0x2EC - 0x2E0];
    f32 f2EC;
    u8 pad2F0[0x2F8 - 0x2F0];
    f32 f2F8;
    u8 pad2FC[0x304 - 0x2FC];
    f32 f304;
} func_80115C64_Struct;

#define G ((func_80115C64_Struct *)D_801BBBF0)
#define H ((func_80115C64_Struct *)(u32)D_801BBBF0)
extern f32 D_80163C0C;
extern f32 D_80163C10;
extern f32 D_80163C14;
/* own address; the standalone link puts the defined name at the .text base */
extern u8 D_80115C64[];

void func_80115C64(s32 a0, s32 a1) {
    s16 sp46;
    s16 sp44;
    s16 sp42;
    func_80115C64_StructB *p;

    G->pE8->p2C->f24 = G->f29C;
    G->pE8->p2C->f28 = G->f2A0;
    if (G->b2AD == 0) goto next;
    if ((u32)G->b2B5 == 1) {
        func_8011A724(1);
        func_8011A7FC();
        goto next;
    }
    if ((u32)G->b2B5 == 2) {
        func_8011AA0C(a0, func_80115C3C, D_80115C64);
        return;
    }
    G->b2AD = 0;
    G->b2B5 = 0;
next:
    func_8011A0F0(&sp42);
    if (G->h4 == 0x25) {
        p = G->pE0->p2C;
        if (0.1 < ((p->f4 < 40.0) ? -(p->f4 - 40.0) : (p->f4 - 40.0))) {
            a0 = (p->f4 < 40.0) ? -1 : 1;
            p->f4 = p->f4 - 0.1 * a0;
        } else {
            p->f4 = 40.0f;
        }
    }
    G->pE8->p2C->f30 = H->f2C4 + G->pE0->p2C->f4;
    G->pE8->p2C->f34 = H->f2D0 + G->pE0->p2C->f8;
    G->pE8->p2C->f38 = H->f2DC + G->pE0->p2C->fC;
    G->pE8->p2C->f3c = H->f2EC + G->pE0->p2C->f4;
    G->pE8->p2C->f40 = H->f2F8 + G->pE0->p2C->f8;
    G->pE8->p2C->f44 = H->f304 + G->pE0->p2C->fC;
    func_8011A878(D_80163C0C, D_80163C14);
    p = G->pE0->p2C;
    D_80163C0C = p->f4;
    D_80163C10 = p->f8;
    D_80163C14 = p->fC;
    /* empty if: extra blocks lower the &D_801BBBF0 web priority so uopt splits it instead of using $s0 */
    if (p) {
    }
    func_80119F9C(&sp46, &sp44);
    p = G->pE8->p2C;
    func_8011A148(sp46, sp44, sp42, &p->f48, &p->f4c, &p->f50);
}
