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

typedef struct func_80146894_StructRequest {
    func_80146894_StructHeader header;
    func_80146894_StructData data;
} func_80146894_StructRequest;

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
    u16 *p;
    func_80146894_StructRequest request;
    s32 red, green, blue;
    u8 *image;
    f32 imageScale;
    u8 result;
    s32 textureAddress;
    u32 id2;
    u32 id;

    p = *D_80172510;
    id = p[0];
    id2 = p[1];
    request.data.x = arg3;
    request.data.y = arg4;
    request.data.z = 0.0f;
    request.data.sx = request.data.sy = D_8018F990[0];
    request.data.sz = 1.0f;
    request.data.a = 0x1000;
    request.data.b = 0;
    request.data.c = 0;
    request.data.flags = 0x30F;
    request.data.id = id;
    switch (arg5) {
    case 11:
        image = D_80181720;
        request.data.ptr = image;
        imageScale = D_8018F994;
        request.data.sx = request.data.sy = imageScale;
        break;
    case 24:
        image = D_80181880;
        request.data.ptr = image;
        imageScale = D_8018F998;
        request.data.sx = request.data.sy = imageScale;
        break;
    }
    request.data.id2 = id2;
    request.header.a = 0;
    request.header.b = 0x80000900;
    request.header.c = 0x400;
    request.header.d = 0xC;
    request.header.data = &request.data;
    result = D_80146088((s32)arg0, &request.header, (s32)arg2);
    func_80006214(arg0);
    if (result == 0) {
        red = 0;
        green = 0x60;
        blue = 0xFF;
        textureAddress = (s32)D_801816C0 | 0x40000000;
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->ptr = textureAddress;
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->r = red;
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->g = green;
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->b = blue;
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->r2 = red / 2;
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->g2 = green / 2;
        ((func_80146894_StructObj *)D_8008DA88[*arg2 - 1]->unk30)->b2 = blue / 2;
    }
    return result;
}
