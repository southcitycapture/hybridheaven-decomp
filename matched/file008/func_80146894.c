#include "common.h"
typedef struct func_801451C0_StructA {
    u8 pad0[0x2A];
    u16 unk2A;
    u8 pad1[4];
    void *unk30;
} func_801451C0_StructA;
extern func_801451C0_StructA *D_8008DA88[];
extern s32 D_80146088(s32, void *, s32);
extern void func_80006214(void *a0);


typedef struct func_80146894_StructData {
    f32 x, y, z;
    s16 a, b, c;
    u8 pad[2];
    s32 flags;
    u16 id;
    u8 pad2[2];
    void *ptr;
    u16 id2;
    u8 pad3[14];
    f32 sx, sy, sz;
} func_80146894_StructData;
typedef struct func_80146894_StructHeader {
    s32 a, b;
    s16 c, d;
    func_80146894_StructData *data;
} func_80146894_StructHeader;
typedef struct func_80146894_StructObj {
    u8 pad[0x30];
    s32 ptr;
    u8 pad2[0x14];
    u8 r, g, b, a, r2, g2, b2;
} func_80146894_StructObj;
extern void **D_80172510;
extern u8 D_801816C0[];
extern u8 D_80181720[];
extern u8 D_80181880[];
extern f32 D_8018F990[];
extern f32 D_8018F994;
extern f32 D_8018F998;

u8 func_80146894(void *arg0, s32 arg1, u8 *arg2, f32 arg3, f32 arg4, s8 arg5) {
    s32 topPad;
    func_80146894_StructData data;
    func_80146894_StructHeader header;
    u8 pad[0x14];
    u8 result;
    u16 id2;
    u16 id;
    u16 *p;
    f32 s;

    p = *D_80172510;
    id = p[0];
    id2 = p[1];
    data.x = arg3;
    data.y = arg4;
    data.z = 0.0f;
    data.sx = data.sy = D_8018F990[0];
    data.sz = 1.0f;
    data.a = 0x1000;
    data.b = 0;
    data.c = 0;
    data.flags = 0x30F;
    data.id = id;
    if (arg5 == 11) goto case11;
    if (arg5 != 24) goto end;
    goto case24;
case11:
    data.ptr = D_80181720;
    data.sy = data.sx = D_8018F994;
    if (1) goto end;
case24:
    data.ptr = D_80181880;
    data.sy = data.sx = D_8018F998;
    if (1) goto end;
end:
    data.id2 = id2;
    header.a = 0;
    header.b = 0x80000900;
    header.c = 0x400;
    header.d = 0xC;
    header.data = &data;
    result = D_80146088((s32)arg0, &header, (s32)arg2);
    func_80006214(arg0);
    if (result == 0) {
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->ptr = (s32)D_801816C0 | 0x40000000;
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->r = 0;
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->g = 0x60;
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->b = 0xFF;
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->r2 = 0;
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->g2 = 0x30;
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->b2 = 0x7F;
    }
    return result;
}
