#include "context.h"

extern s32 func_8002BF90(void);
extern s32 func_80032D40(void *, s32);
extern s32 func_80033E10(s32, s32, u16, void *, s32);
extern s32 func_80034060(s32, s32, s32, void *);

typedef struct func_8002B580_Struct {
    s32 unk0;
    s32 unk4;
    u64 unk8;
    u64 unk10;
    u16 unk18;
    u8 unk1A;
    u8 unk1B;
    u16 unk1C;
    u16 unk1E;
} func_8002B580_Struct;

typedef struct func_8002B580_Struct2 {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    u8 pad1[0x65 - 0xC];
    u8 unk65;
} func_8002B580_Struct2;

s32 func_8002B580(func_8002B580_Struct2 *arg0, func_8002B580_Struct *arg1, func_8002B580_Struct *arg2) {
    s32 ret;
    u8 buf[32];
    u8 readbuf[32];
    s32 i;
    s32 j;
    s32 flag;
    u16 ids[4];

    i = 0;
    arg2->unk0 = -1;
    arg2->unk4 = func_8002BF90();
    arg2->unk8 = arg1->unk8;
    arg2->unk10 = arg1->unk10;
    if (arg0->unk65 != 0) {
        ret = func_80032D40(arg0, 0);
        if (ret != 0) return ret;
    }
    do {
        ret = func_80032D40(arg0, i & 0xFF);
        if (ret != 0) return ret;
        ret = func_80034060(arg0->unk4, arg0->unk8, 0, buf);
        if (ret != 0) return ret;
        buf[0] = i | 0x80;
        for (j = 1; j < 32; j++) {
            buf[j] = ~buf[j];
        }
        ret = func_80033E10(arg0->unk4, arg0->unk8, 0, buf, 0);
        if (ret != 0) return ret;
        ret = func_80034060(arg0->unk4, arg0->unk8, 0, readbuf);
        if (ret != 0) return ret;
        for (j = 0; j < 32; j++) {
            if (readbuf[j] != buf[j]) break;
        }
        if (j != 32) break;
        if (i > 0) {
            ret = func_80032D40(arg0, 0);
            if (ret != 0) return ret;
            ret = func_80034060(arg0->unk4, arg0->unk8, 0, buf);
            if (ret != 0) return ret;
            if (buf[0] != 0x80) break;
        }
        i++;
    } while (i < 0x3E);
    if (arg0->unk65 != 0) {
        ret = func_80032D40(arg0, 0);
        if (ret != 0) return ret;
    }
    flag = (i > 0) ? 1 : 0;
    arg2->unk18 = (arg1->unk18 & 0xFFFE) | flag;
    arg2->unk1A = i;
    arg2->unk1B = arg1->unk1B;
    func_8002B484((u16 *)arg2, &arg2->unk1C, &arg2->unk1E);
    ids[0] = 1;
    ids[1] = 3;
    ids[2] = 4;
    ids[3] = 6;
    for (j = 0; j < 4; j++) {
        ret = func_80033E10(arg0->unk4, arg0->unk8, ids[j], arg2, 1);
        if (ret != 0) return ret;
    }
    ret = func_80034060(arg0->unk4, arg0->unk8, 1, buf);
    if (ret != 0) return ret;
    for (j = 0; j < 32; j++) {
        if (buf[j] != ((u8 *)arg2)[j]) return 11;
    }
    return 0;
}
