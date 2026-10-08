#include "context.h"

extern void func_80119F9C(void *, void *, void *);
extern void func_8011AA54(void *, void *);
extern u8 D_801BBAE8[];
extern u8 D_801BBAEA[];
extern u8 D_801BBBF0[];
extern void func_8010FABC(void);

void func_8010FA10(void *arg0, s32 arg1) {
    func_8011AA54(arg0, func_8010FABC);
    *(f32 *)((u8 *)arg0 + 0x9C) = *(f32 *)((u8 *)*(void **)((u8 *)*(void **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x3C);
    *(f32 *)((u8 *)arg0 + 0xA0) = *(f32 *)((u8 *)*(void **)((u8 *)*(void **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x40);
    *(f32 *)((u8 *)arg0 + 0xA4) = *(f32 *)((u8 *)*(void **)((u8 *)*(void **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x44);
    *(f32 *)((u8 *)arg0 + 0x90) = *(f32 *)((u8 *)*(void **)((u8 *)*(void **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x30);
    *(f32 *)((u8 *)arg0 + 0x94) = *(f32 *)((u8 *)*(void **)((u8 *)*(void **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x34);
    *(f32 *)((u8 *)arg0 + 0x98) = *(f32 *)((u8 *)*(void **)((u8 *)*(void **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x38);
    func_80119F9C(D_801BBAE8, D_801BBAEA, arg0);
}
