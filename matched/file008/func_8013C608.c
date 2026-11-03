#include "common.h"
typedef struct T_D_8017D474_elem { /* size 0x20 */
    /* 0x000 */ u16 *unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x1C];
} T_D_8017D474_elem;
typedef struct T_func_8012CE9C_a1 { /* size >= 0xE0; compacted: the 2 of 64 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0xE];
    /* 0x00E */ u16 unkE; /* 25 uses */
    /* 0x010 */ u8 pad10[0x8D];
    /* 0x09D */ u8 unk9D; /* 2 uses */
    /* 0x09E */ u8 pad9E[0x42];
} T_func_8012CE9C_a1;
typedef struct T_func_80107830_a0 { /* size >= 0xB4; compacted: the 1 of 53 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0x5C];
    /* 0x05C */ struct T_func_8012CE9C_a1 *anim; /* 532 uses */
    /* 0x060 */ u8 pad60[0x54];
} T_func_80107830_a0;
s32 func_8013B19C(u16 arg0);
struct func_8013BFB8_Struct2 { u8 pad0[0xE]; u16 unkE; u8 pad1[0x8E]; u16 unk9E; u16 unkA0; };
struct func_8013BFB8_Struct { u8 pad0[0x5C]; struct func_8013BFB8_Struct2 *unk5C; };
void func_8013C184(struct func_8013BFB8_Struct *arg0, u16 *arg1);

extern u16 D_801BCAE0;
extern T_D_8017D474_elem D_8017D474[];
extern s32 func_8013C3CC(void *arg0, u16 *arg1);
extern void D_8013C52C(void *, u16 *, u16);
extern void D_8013BFB8(void *, u16 *, u16);
extern void D_8013C184(void *, u16 *, u16);

void func_8013C608(T_func_80107830_a0 *arg0) {
    T_func_8012CE9C_a1 *v;
    s32 i;
    u16 *a;
    u16 t;

    v = arg0->anim;
    t = v->unkE;
    if (!(D_801BCAE0 & 0x10)) {
        if ((u32)t != 0) {
            i = func_8013B19C(t);
            if (i != 0xFF) {
                a = D_8017D474[i].unk0;
                if (a != NULL) {
                    if (t == 0x11D) {
                        D_8013C52C(arg0, a, t);
                        return;
                    }
                    if (v->unk9D == 2) {
                        D_8013BFB8(arg0, a, t);
                        return;
                    }
                    if (v->unk9D == 1) {
                        D_8013C184(arg0, a, t);
                        return;
                    }
                    if (func_8013C3CC(arg0, a) == 2) {
                        func_8013C184((void *)arg0, a);
                    }
                }
            }
        }
    }
}
