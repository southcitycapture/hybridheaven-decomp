#include "context.h"

typedef struct func_801F56A8_Sub {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[0xC];
    u32 unk10;
    u32 unk14;
} func_801F56A8_Sub;
typedef struct func_801F56A8_Struct {
    u8 pad0[4];
    struct { u8 pad[0x10]; s32 unk10; } *unk4;
    u8 pad8[0x30];
    func_801F56A8_Sub *unk38;
    u8 pad3C[0x6C];
    void *unkA8;
} func_801F56A8_Struct;
extern s32 func_80126CC0(void *, void *);
extern void func_80133980(u32);
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_801FA0B0(u16, u8);
extern void func_801FA220(void *);
extern s32 D_8021AFE0;
void func_80005700(void *);
struct func_801F57EC_Struct;
void func_801F57EC(struct func_801F57EC_Struct *arg0, s32 arg1);
void func_801FA074(s32 arg0, s32 arg1);

void func_801F56A8(func_801F56A8_Struct *arg0, s32 arg1) {
    u32 v;
    s32 t;
    u8 lo;
    u16 hi;
    D_8021AFE0 = (s32)arg0;
    t = arg0->unk38->unk14 & 0xFFFF;
    if (t != 0 && func_80133A24(t * 1) != 0) {
        func_80005700(arg0);
        return;
    }
    func_801FA220(arg0);
    if (func_801F5490(arg0) != 0) {
        if (arg0->unk4 != NULL && arg0->unk4->unk10 == 2) {
            arg0->unkA8 = arg0->unk4;
        }
        if (func_801F54B8((void *)arg0) != 0) {
            if (func_801F54EC((void *)arg0) != 0) {
                func_80005700(arg0);
                return;
            }
        } else {
            v = arg0->unk38->unk10;
            func_801FA0B0((arg0->unk38->unk10 >> 16) & 0xFFFF, arg0->unk38->unk10 & 0xFF);
            func_80133980(arg0->unk38->unk10 >> 16);
        }
    }
    func_801F3B5C(1);
    if (func_80126CC0(arg0, func_801FA074) != 0) {
        {
            extern void func_8001F74C();
            func_8001F74C(arg0);
        }
        func_8013B570(arg0, arg0->unk38->unk2, 2, 3, func_801F57EC);
    }
}
