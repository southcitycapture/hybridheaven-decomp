#include "context.h"

typedef struct func_8000C4A8_StructCmd { u32 w0, w1; } func_8000C4A8_StructCmd;
struct func_8000C4A8_StructSub { u8 pad[0x1C]; u32 unk1C; };
struct func_8000C4A8_StructObj {
    u8 pad0[0xC];
    struct func_8000C4A8_StructSub *unkC;
    u8 pad1[0x1C];
    struct func_8000B960_D *unk2C;
};
extern func_8000C4A8_StructCmd *D_8008D5BC;
extern void func_8000B5AC(f32 *, s32);
extern void D_8000B1E8(f32 *, void *);
extern void D_8000B578(f32 *, void *);
#define func_8000B1E8(a, b) D_8000B1E8(a, b)
#define func_8000B578(a, b) D_8000B578(a, b)

#define EMIT(cmd, addr) { func_8000C4A8_StructCmd *_g = D_8008D5BC++; _g->w0 = (cmd); _g->w1 = (s32)(addr) + (s32)0x80000000; }

void func_8000C4A8(struct func_8000C4A8_StructObj *arg0, s32 arg1, s32 arg2) {
    f32 mtx[16];
    u8 pad[0x40];

    switch ((u32)arg1 & 0xFF0000) {
    case 0:
        EMIT(0xDA380003, arg2);
    case 0x10000:
        func_8000B1E8(mtx, (struct func_8000B1E8_Outer *)arg0);
        func_8000B5AC(mtx, arg2);
        break;
    case 0x20000:
        EMIT(0xDA380003, arg2);
    case 0x30000:
        func_8000B1E8(mtx, (struct func_8000B1E8_Outer *)arg0);
        func_8000B578(mtx, (s32 *)arg0->unkC);
        func_8000B5AC(mtx, arg2);
        break;
    case 0x40000:
        EMIT(0xDA380003, arg2);
    case 0x50000:
        EMIT(0xDB060018, arg2);
        { func_8000C4A8_StructCmd *_g = D_8008D5BC++;
          _g->w0 = 0xDB06001C;
          _g->w1 = (s32)arg0->unkC->unk1C + (s32)0x80000000;
        }
        func_8000B1E8(mtx, (struct func_8000B1E8_Outer *)arg0);
        func_8000B578(mtx, (s32 *)arg0->unkC);
        if (arg0->unk2C != NULL) {
            arg0->unk2C->unk98 = mtx[12];
            arg0->unk2C->unk9C = mtx[13];
            arg0->unk2C->unkA0 = mtx[14];
        }
        func_8000B5AC(mtx, arg2);
        break;
    case 0x60000:
        EMIT(0xDA380003, arg2);
    case 0x70000:
        func_8000B83C((struct func_8000B83C_StructB *)arg0);
        func_8000B1E8(mtx, (struct func_8000B1E8_Outer *)arg0);
        func_8000B5AC(mtx, arg2);
        break;
    case 0x80000:
        EMIT(0xDA380003, arg2);
    case 0x90000:
        func_8000B8F0((func_8000B8F0_Struct *)arg0);
        func_8000B1E8(mtx, (struct func_8000B1E8_Outer *)arg0);
        func_8000B5AC(mtx, arg2);
        break;
    }
}
