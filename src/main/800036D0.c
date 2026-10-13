#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/800036D0/func_800036D0.s")


extern u8 *func_80003D3C(u8 *);
extern void func_80003DB4(void);
extern u32 D_8005D010;
extern u32 D_8005D014;
extern s32 D_8005D018;
extern s32 D_8005D01C;
extern u16 D_8005D024;
extern u16 D_8005D026;
extern u8 D_80089518[];

u8 *func_80003824(u32 arg0, u8 *arg1, s32 arg2) {
    u8 *src;
    s32 pad[4];
    u8 *base;
    u32 size;
    u32 end;
    u32 bands;
    u16 nb;
    u8 cmd;
    u16 n;
    u16 off;
    u8 val;
    u8 *from;

    D_8005D010 = D_8005D014 = arg0;
    D_8005D018 = D_8005D01C = arg2;
    D_8005D01C--;
    src = D_80089518;
    func_80003DB4();
    while (D_8005D01C > 0) {
        size = *src << 24;
        src = func_80003D3C(src);
        size += *src << 16;
        src = func_80003D3C(src);
        size += *src << 8;
        src = func_80003D3C(src);
        size += *src;
        src = func_80003D3C(src);
        end = D_8005D014 + size - 4;
        if (!(size & 0xF0000000)) {
            while (D_8005D014 < end) {
                cmd = *src;
                src = func_80003D3C(src);
                if (cmd < 0x80) {
                    off = (*src + (cmd << 8)) & 0x3FF;
                    n = (cmd >> 2) + 2;
                    src = func_80003D3C(src);
                    from = arg1 - off;
                    while (n--) {
                        *arg1++ = *from++;
                    }
                } else if (cmd < 0xA0) {
                    n = cmd & 0x1F;
                    while (n--) {
                        *arg1++ = *src;
                        src = func_80003D3C(src);
                    }
                } else {
                    if (cmd < 0xE0) {
                        n = (cmd & 0x1F) + 2;
                        val = *src;
                        src = func_80003D3C(src);
                    } else {
                        val = 0;
                        if (cmd < 0xFF) {
                            n = (cmd & 0x1F) + 2;
                        } else {
                            n = *src + 2;
                            src = func_80003D3C(src);
                        }
                    }
                    while (n--) {
                        *arg1++ = val;
                    }
                }
            }
        } else {
            D_8005D024 = 0;
            D_8005D026 = (u16)((u16)((size & 0xF0000000) >> 28) + 1);
            base = arg1;
            while (D_8005D024 < D_8005D026) {
                if (D_8005D024 != 0) {
                    size = *src << 24;
                    src = func_80003D3C(src);
                    size += *src << 16;
                    src = func_80003D3C(src);
                    size += *src << 8;
                    src = func_80003D3C(src);
                    size += *src;
                    src = func_80003D3C(src);
                    end = D_8005D014 + size - 4;
                    arg1 = base;
                }
                size &= 0x0FFFFFFF;
                while (D_8005D014 < end) {
                    cmd = *src;
                    src = func_80003D3C(src);
                    if (cmd < 0x80) {
                        off = (*src + (cmd << 8)) & 0x3FF;
                        n = (cmd >> 2) + 2;
                        src = func_80003D3C(src);
                        from = arg1 - off * D_8005D026;
                        while (n--) {
                            *arg1 = *from;
                            arg1 += D_8005D026;
                            from += D_8005D026;
                        }
                    } else if (cmd < 0xA0) {
                        n = cmd & 0x1F;
                        while (n--) {
                            *arg1 = *src;
                            arg1 += D_8005D026;
                            src = func_80003D3C(src);
                        }
                    } else {
                        if (cmd < 0xE0) {
                            n = (cmd & 0x1F) + 2;
                            val = *src;
                            src = func_80003D3C(src);
                        } else {
                            val = 0;
                            if (cmd < 0xFF) {
                                n = (cmd & 0x1F) + 2;
                            } else {
                                n = *src + 2;
                                src = func_80003D3C(src);
                            }
                        }
                        while (n--) {
                            *arg1 = val;
                            arg1 += D_8005D026;
                        }
                    }
                }
                base++;
                D_8005D024++;
            }
        }
        while (end++ & 0xF) {
            src = func_80003D3C(src);
        }
    }
    return arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800036D0/func_80003D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800036D0/func_80003DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800036D0/func_80003E40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800036D0/func_80003EB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800036D0/func_80003F44.s")

