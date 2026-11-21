#include "common.h"
unsigned short func_80017014(int arg0);
int func_80017384(int arg0, unsigned short arg1);
#define ZQ(a, b) a##_##b
#define ZP(a, b) ZQ(a, b)
extern s32 D_8008DFAC;
extern s32 D_8008DFB4;
#define ZQ(p, l) p##_##l
#define ZP(p, l) ZQ(p, l)
typedef struct func_80016058_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x1C];
    void (*unk24)(struct func_80016058_Struct *, s32, s32, s32);
} func_80016058_Struct;
void func_80016058(struct func_80016058_Struct *arg0);
s32 func_80016B6C(s32 arg0, s32 arg1);
s32 *func_80016BA0(u32 arg0, s32 *arg1);
extern s32 func_8001F540();


typedef struct func_80015680_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x14];
    s32 unk1C;
} func_80015680_Struct;

typedef struct func_80015680_Arg {
    s32 p;
} func_80015680_Arg;

/* GGA: picDecode16 */
s32 func_80015680(s32 arg0, func_80015680_Arg arg1, func_80015680_Struct *arg2) {
    s32 allocated;
    s32 src;
    s32 bytes;
    s32 buf;
    s32 pixels;
    s32 half;
    s32 i;
    s32 prev;

    allocated = 0;
    src = arg1.p;
    arg2->unk1C = D_8008DFAC = src;
    pixels = arg2->unk0 * arg2->unk4;
    half = pixels / 8;
    bytes = (half + 7) & ~7;
    buf = (s32)func_80016BA0(bytes, &allocated);
    D_8008DFB4 = buf;
    func_80016058((void *)arg2);
    for (i = 0; i < pixels; i++) {
        if (func_80016B6C(D_8008DFB4, i) != 0) {
            prev = ((u16 *)D_8008DFAC)[i];
        }
        ((u16 *)D_8008DFAC)[i] = prev;
    }
    if (allocated != 0) {
        func_8001F540(D_8008DFB4);
    }
    return arg1.p;
}
