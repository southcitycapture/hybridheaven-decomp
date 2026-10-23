#define func_80146208 func_80146208_decl
#include "context.h"
#undef func_80146208

typedef struct func_80146208_StructData {
    s16 x, y, w, h;
    u8 r, g, b, a;
    u8 pad0[4];
    s16 flags, zero;
    u8 pad1[4];
    u16 format;
    u8 pad2[2];
    void *image;
    u8 pad3[8];
    s16 width, height;
    u16 v, u;
    s16 w2, h2;
} func_80146208_StructData;
typedef struct func_80146208_StructEntry {
    u16 *format;
    void **images;
} func_80146208_StructEntry;
extern func_80146208_StructEntry *D_80171CEC[];

u8 func_80146208(s32 arg0, s8 *arg1, u16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, u16 arg7, u16 arg8, u8 arg9, u16 arg10, volatile u16 arg11) {
    u8 unused[8];
    func_80146208_StructData data;
    u8 result;
    func_80146208_StructEntry *entry;
    s32 v;
    s32 w;

    w = arg10;
    data.x = arg3;
    data.y = arg4;
    data.w = arg5;
    data.h = arg6;
    data.r = data.g = data.b = 255;
    data.a = arg9;
    data.flags = arg2 | 4;
    data.zero = 0;
    data.w2 = arg5;
    data.h2 = arg6;
    entry = D_80171CEC[w];
    data.format = *entry->format;
    data.image = entry->images[arg11];
    data.width = arg5;
    data.height = arg6;
    if (w == 0x209) {
        v = arg11;
        if (v == 0) goto a_0;
        if (v == 2) goto a_2;
        if (v != 3) goto end;
        if (1) goto a_3;
    a_2:
        data.height = data.width = 0x20;
        if (1) goto end;
    a_0:
        data.width = 0x20;
        data.height = 0x20;
        if (1) goto end;
    a_3:
        data.height = (data.width = 0x58) - 0x50;
        if (1) goto end;
    } else if (w ==0x21C) {
        v = arg11;
        if (v == 0) goto b_0;
        if (v != 6) goto end;
        if (1) goto b_6;
    b_0:
        data.width = 0x20;
        data.height = 0x20;
        if (1) goto end;
    b_6:
        data.height = (data.width = 0x38) - 0x31;
        if (1) goto end;
    } else if (w ==0x21D) {
        v = arg11;
        if (v == 8) goto c_8;
        if (v == 9) goto c_9;
        if (v != 26) goto end;
        if (1) goto c_26;
    c_8:
        data.width = 0x50;
        data.height = 8;
        if (1) goto end;
    c_9:
        data.height = (data.width = 0x58) - 0x4C;
        if (1) goto end;
    c_26:
        data.height = (data.width = 0x20) + 0x20;
        if (1) goto end;
    } else if (w ==0x21E) {
        if (*(u16 *)&arg11 == 7) {
            data.height = (data.width = 0x100) - 0xF8;
        }
    } else if (w ==0x220) {
        if (*(u16 *)&arg11 == 2) {
            data.height = (data.width = 0x80) - 0x70;
        }
    }
end:
    data.u = arg7;
    data.v = arg8;
    D_80181A84.unkC = (func_80146178_Struct *)&data;
    result = D_80146088(arg0, &D_80181A84, (s32)arg1);
    func_80006214((void *)arg0);
    return result;
}
