#include "context.h"

typedef struct func_80032BE0_Struct {
    struct func_80032BE0_Struct *unk0;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 padA[2];
    u32 unkC;
    u32 unk10;
} func_80032BE0_Struct;

extern void func_800279F0(void *, s32);
extern void func_8002AE20(void);
extern void func_8002AE64(void);
extern s32 func_80032660(void);
extern void func_800326D0(s32);
extern func_80032BE0_Struct *D_8004AB2C;
extern s32 D_8004AFD0;
extern s32 D_8004AFCC[];
extern func_80032BE0_Struct D_800CD6F0;
extern u8 D_800CD704[];

func_80032BE0_Struct *func_80032BE0(void) {
    u32 value;
    u8 pw;
    s32 saveMask;
    u32 stat;
    u32 latency;
    u32 pulse;
    u32 pageSize;
    u32 relDuration;

    func_8002AE20();
    if (!D_8004AFD0) {
        func_8002AE64();
        return &D_800CD6F0;
    }
    D_8004AFCC[1] = 0;
    D_800CD6F0.unk4 = 0;
    D_800CD6F0.unkC = 0xB0000000;
    D_800CD6F0.unk9 = 0;
    D_800CD6F0.unk10 = 0;
    func_800279F0(D_800CD704, 0x60);
    stat = *(volatile u32 *)0xA4600010;
    while (stat & 3) {
        stat = *(volatile u32 *)0xA4600010;
    }
    latency = *(volatile u32 *)0xA4600014;
    pageSize = *(volatile u32 *)0xA460001C;
    relDuration = *(volatile u32 *)0xA4600020;
    pulse = *(volatile u32 *)0xA4600018;
    *(volatile u32 *)0xA4600014 = 0xFF;
    *(volatile u32 *)0xA460001C = 0;
    *(volatile u32 *)0xA4600020 = 3;
    *(volatile u32 *)0xA4600018 = 0xFF;
    value = *(volatile u32 *)((u32)D_800CD6F0.unkC | 0xA0000000);
    D_800CD6F0.unk5 = value & 0xFF;
    D_800CD6F0.unk6 = (value >> 16) & 0xF;
    D_800CD6F0.unk7 = (value >> 20) & 0xF;
    D_800CD6F0.unk8 = (value >> 8) & 0xFF;
    *(volatile u32 *)0xA4600014 = latency;
    *(volatile u32 *)0xA460001C = pageSize;
    *(volatile u32 *)0xA4600020 = relDuration;
    *(volatile u32 *)0xA4600018 = pulse;
    saveMask = func_80032660();
    D_800CD6F0.unk0 = D_8004AB2C;
    D_8004AB2C = &D_800CD6F0;
    func_800326D0(saveMask);
    func_8002AE64();
    return &D_800CD6F0;
}
