#include "context.h"

struct func_8011723C_StructC;
s32 func_80117204(u16 arg0);
extern struct func_8011723C_StructC *func_80005E44();
extern s32 D_8011723C(s32, void *);
extern u8 D_80163CA4[], D_80163CF4[], D_80163D44[], D_80163D8C[];
extern u8 D_80163DA0[], D_80163DB4[], D_80163DC8[], D_80163DDC[];
extern u8 D_80163E2C[], D_80163E40[], D_80163E88[], D_80163ED0[];
extern s32 D_801BBE40;
extern s32 D_801BBE48[];

s32 func_80116E80(u16 arg0) {
    s32 base;
    s32 result;
    u8 index;
    s32 temp;
    s32 v;

    base = D_801BBE40;
    temp = func_80117204(arg0);
    index = temp;
    if (D_801BBE48[temp] != 0) {
        if (arg0 == 4) {
        } else if (arg0 == 0x10) {
        } else if (arg0 == 0x20) {
        } else if (arg0 == 0x40) {
        } else if (arg0 == 8) {
        } else if (arg0 == 0x80) {
        } else if (arg0 == 0x100) {
        } else if (arg0 == 0x200) {
        } else if (arg0 == 0x400) {
        } else if (arg0 == 0x800) {
        } else if (arg0 == 0x2000) {
        } else if (arg0 == 0x4000) {
        }
        return 1;
    }
    v = arg0;
    if (v > 0x80) {
        if (v == 0x100) goto case100;
        if (v == 0x200) goto case200;
        if (v == 0x400) goto case400;
        if (v == 0x800) goto case800;
        if (v == 0x2000) goto case2000;
        if (v != 0x4000) goto done;
        if (1) goto case4000;
    }
    if (v == 4) goto case4;
    if (v == 8) goto case8;
    if (v == 0x10) goto case10;
    if (v == 0x20) goto case20;
    if (v == 0x40) goto case40;
    if (v != 0x80) goto done;
    if (1) goto case80;
case4:
    result = (s32)func_80005E44(base, D_80163CA4); if (1) goto done;
case10:
    result = (s32)func_80005E44(base, D_80163CF4); if (1) goto done;
case20:
    result = (s32)func_80005E44(base, D_80163D44); if (1) goto done;
case40:
    result = D_8011723C(base, D_80163D8C); if (1) goto done;
case8:
    result = (s32)func_80005E44(base, D_80163DA0); if (1) goto done;
case80:
    result = (s32)func_80005E44(base, D_80163DB4); if (1) goto done;
case100:
    result = (s32)func_80005E44(base, D_80163DC8); if (1) goto done;
case200:
    result = (s32)func_80005E44(base, D_80163DDC); if (1) goto done;
case400:
    result = (s32)func_80005E44(base, D_80163E2C); if (1) goto done;
case800:
    result = (s32)func_80005E44(base, D_80163E40); if (1) goto done;
case2000:
    result = (s32)func_80005E44(base, D_80163E88); if (1) goto done;
case4000:
    result = (s32)func_80005E44(base, D_80163ED0);
done:
    D_801BBE48[index] = result;
    return 0;
}
