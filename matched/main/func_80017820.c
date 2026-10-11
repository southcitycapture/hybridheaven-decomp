#include "context.h"
extern s16 D_8008EBD4;
extern s16 D_8008EBD6;
extern s16 D_8008EBD8;
extern s16 D_8008EBDA;
extern s16 D_8008EBDC;
extern s16 D_8008EBDE;
extern s16 D_8008EBE0;
extern s16 D_8008EBE2;
extern s16 D_8008EBE6;

extern u8 D_8004413C[];

typedef struct func_80017820_Struct {
    u32 w[0x12];
} func_80017820_Struct;

void func_80017820(u16 arg0) {
    func_80017820_Struct buf;

    buf = *(func_80017820_Struct *)D_8004413C;
    D_8008EBD4 = ((u16 *)((u8 *)&buf + arg0 * 0x12))[0];
    D_8008EBD6 = ((u16 *)((u8 *)&buf + arg0 * 0x12))[1];
    D_8008EBD8 = ((u16 *)((u8 *)&buf + arg0 * 0x12))[2];
    D_8008EBDA = ((u16 *)((u8 *)&buf + arg0 * 0x12))[3];
    D_8008EBDE = ((u16 *)((u8 *)&buf + arg0 * 0x12))[4];
    D_8008EBE0 = ((u16 *)((u8 *)&buf + arg0 * 0x12))[5];
    D_8008EBDC = ((u16 *)((u8 *)&buf + arg0 * 0x12))[6];
    D_8008EBE2 = ((u16 *)((u8 *)&buf + arg0 * 0x12))[7];
    D_8008EBE6 = ((u16 *)((u8 *)&buf + arg0 * 0x12))[8];
}
