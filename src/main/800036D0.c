#include "common.h"


u8 *func_800036D0(u8 *arg0, u8 *arg1) {
    u8 *end;
    u8 *src;
    u8 code;
    u16 offset;
    u16 count;
    u8 value;

    end = arg0 + *(s32 *)arg0;
    arg0 += 4;
    while (arg0 < end) {
        code = *arg0++;
        if (code < 0x80) {
            count = (code >> 2) + 2;
            offset = (*arg0++ + (code << 8)) & 0x3FF;
            src = arg1 - offset;
            while (count--) {
                *arg1++ = *src++;
            }
        } else if (code < 0xA0) {
            count = code & 0x1F;
            while (count--) {
                *arg1++ = *arg0++;
            }
        } else {
            if (code < 0xE0) {
                count = (code & 0x1F) + 2;
                value = *arg0++;
            } else {
                value = 0;
                if (code < 0xFF) {
                    count = (code & 0x1F) + 2;
                } else {
                    count = *arg0++ + 2;
                }
            }
            while (count--) {
                *arg1++ = value;
            }
        }
    }
    return arg1;
}


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

extern s32 D_8005D020;

u8 *func_80003D3C(u8 *arg0) {
    D_8005D014 += 1;
    D_8005D020 -= 1;
    D_8005D01C -= 1;
    if (D_8005D020 != 0) {
        arg0 = arg0 + 1;
    } else {
        arg0 = D_80089518;
        func_80003DB4();
    }
    return arg0;
}

extern void func_80001FE8(s32, u8 *, s32);


void func_80003DB4(void) {
    D_8005D020 = 0x2000;
    D_8005D018 -= D_8005D020;
    if (D_8005D018 < 0) {
        D_8005D020 += (D_8005D018 + 1) & ~1;
        D_8005D018 = 0;
    }
    if (D_8005D020 > 0) {
        func_80001FE8(D_8005D010, D_80089518, D_8005D020);
    }
    D_8005D010 += D_8005D020;
}

extern void func_80003EB8(void);
extern u32 D_8005D034;
extern s32 D_8005D03C;
extern u8 D_8008B518[];
extern s32 D_8005D040;

u8 *func_80003E40(u8 *arg0) {
    D_8005D034 += 1;
    D_8005D040 -= 1;
    D_8005D03C -= 1;
    if (D_8005D040 != 0) {
        arg0 = arg0 + 1;
    } else {
        arg0 = D_8008B518;
        func_80003EB8();
    }
    return arg0;
}


extern s32 D_8005D030;
extern s32 D_8005D038;

void func_80003EB8(void) {
    D_8005D040 = 0x2000;
    D_8005D038 -= D_8005D040;
    if (D_8005D038 < 0) {
        D_8005D040 += (D_8005D038 + 1) & ~1;
        D_8005D038 = 0;
    }
    if (D_8005D040 > 0) {
        func_80001FE8(D_8005D030, D_8008B518, D_8005D040);
    }
    D_8005D030 += D_8005D040;
}


typedef struct func_80003F44_Struct {
    u8 pad[0x42BC];
    u8 *unk42BC;
    u8 pad42C0[0xC];
    u32 unk42CC;
    u8 pad42D0[4];
    u8 *unk42D4;
    u8 *unk42D8;
    u32 unk42DC;
    u8 unk42E0;
    u8 unk42E1;
    u16 unk42E2;
    u16 unk42E4;
    u8 pad42E6[2];
    u32 unk42E8;
    u8 unk42EC;
    u8 pad42ED[3];
    u32 unk42F0;
    u8 pad42F4[4];
    u8 *unk42F8;
} func_80003F44_Struct;

extern func_80003F44_Struct D_800892B0;
extern s8 D_8008D59C;
extern u8 *D_8008D5A8;

u8 *func_80003F44(u32 arg0, u8 *arg1, s32 arg2) {
    u8 *result;
    if (D_800892B0.unk42EC == 0) {
        D_800892B0.unk42D8 = NULL;
        D_800892B0.unk42DC = 0;
        D_800892B0.unk42E0 = 0;
        D_800892B0.unk42E1 = 0;
        D_800892B0.unk42E2 = 0;
        D_800892B0.unk42E4 = 0;
        D_800892B0.unk42E8 = 0;
        D_800892B0.unk42F8 = arg1;
        D_800892B0.unk42F0 = D_8005D034 = D_8005D030 = arg0;
        D_8005D038 = D_8005D03C = arg2;
        D_8005D03C--;
        D_800892B0.unk42D4 = D_8008B518;
        func_80003EB8();
    }
    result = D_800892B0.unk42F8;
    D_800892B0.unk42BC = result;
    if (D_8005D03C > 0 || D_800892B0.unk42EC != 0) {
      do {
        if (D_800892B0.unk42EC == 0) {
            D_800892B0.unk42E8 = *D_800892B0.unk42D4 << 24;
            D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
            D_800892B0.unk42E8 += *D_800892B0.unk42D4 << 16;
            D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
            D_800892B0.unk42E8 += *D_800892B0.unk42D4 << 8;
            D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
            D_800892B0.unk42E8 += *D_800892B0.unk42D4;
            D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
            D_800892B0.unk42DC = D_8005D034 + D_800892B0.unk42E8 - 4;
        }
        D_800892B0.unk42EC = 0;
        while (D_8005D034 < D_800892B0.unk42DC) {
            if (D_800892B0.unk42CC < D_8005D034 - D_800892B0.unk42F0) {
                D_800892B0.unk42F0 = D_8005D034;
                D_800892B0.unk42EC = 1;
                return NULL;
            }
            D_800892B0.unk42E0 = *D_800892B0.unk42D4;
            D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
            if (D_800892B0.unk42E0 < 0x80) {
                D_800892B0.unk42E2 = (D_800892B0.unk42E0 >> 2) + 2;
                D_800892B0.unk42E4 = (*D_800892B0.unk42D4 + (D_800892B0.unk42E0 << 8)) & 0x3FF;
                D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
                D_800892B0.unk42D8 = D_800892B0.unk42F8 - D_800892B0.unk42E4;
                for (; D_800892B0.unk42E2--; D_800892B0.unk42F8++, D_800892B0.unk42D8++) {
                    *D_800892B0.unk42F8 = *D_800892B0.unk42D8;
                }
            } else if (D_800892B0.unk42E0 < 0xA0) {
                D_800892B0.unk42E2 = D_800892B0.unk42E0 & 0x1F;
                while (D_800892B0.unk42E2--) {
                    *D_800892B0.unk42F8 = *D_800892B0.unk42D4;
                    D_800892B0.unk42F8++;
                    D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
                }
            } else {
                if (D_800892B0.unk42E0 < 0xE0) {
                    D_800892B0.unk42E2 = (D_800892B0.unk42E0 & 0x1F) + 2;
                    D_800892B0.unk42E1 = *D_800892B0.unk42D4;
                    D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
                } else if (D_800892B0.unk42E0 < 0xFF) {
                    D_800892B0.unk42E2 = (D_800892B0.unk42E0 & 0x1F) + 2;
                    D_800892B0.unk42E1 = 0;
                } else {
                    D_800892B0.unk42E2 = *D_800892B0.unk42D4 + 2;
                    D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
                    D_800892B0.unk42E1 = 0;
                }
                for (; D_800892B0.unk42E2--; D_800892B0.unk42F8++) {
                    *D_800892B0.unk42F8 = D_800892B0.unk42E1;
                }
            }
        }
        while (D_800892B0.unk42DC++ & 0xF) {
            D_800892B0.unk42D4 = func_80003E40(D_800892B0.unk42D4);
        }
      } while (D_8005D03C > 0 || D_800892B0.unk42EC != 0);
      result = D_8008D5A8;
    }
    D_8008D59C = 0;
    return result;
}

