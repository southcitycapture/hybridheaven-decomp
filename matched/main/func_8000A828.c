#include "common.h"
struct func_8000A780_Dst2 {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u16 unkC;
    u16 unkE;
    u16 unk10;
};
struct func_8000A780_Dst {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x9];
    struct func_8000A780_Dst2 *unk2C;
};


typedef struct func_8000A828_StructCmd { u32 unk0, unk4; } func_8000A828_StructCmd;
extern func_8000A828_StructCmd *D_8008D5BC;
extern s32 func_80001060(struct func_8000A780_Dst *arg0);

#define BEGIN { func_8000A828_StructCmd *p = D_8008D5BC++;
#define END }
#define SYNC() BEGIN p->unk4 = 0; p->unk0 = 0xE7000000; END
#define COLOR(a,b,c,d) BEGIN p->unk0 = 0xFA000000;  p->unk4 = ((arg0->unk2C->a & 0xFF) << 24) | ((arg0->unk2C->b & 0xFF) << 16) | ((arg0->unk2C->c & 0xFF) << 8) | (arg0->unk2C->d & 0xFF); END
#define RECT(x,y,l,t) BEGIN  p->unk0 = (((x) & 0x3FF) << 14) | 0xF6000000 | (((y) & 0x3FF) * 4);  p->unk4 = (((l) & 0x3FF) << 14) | (((t) & 0x3FF) * 4); END

void func_8000A828(struct func_8000A780_Dst *arg0) {
    void *tp;
#define t ((u16)(u32)tp)
    struct func_8000A780_Dst2 *v;

    BEGIN p->unk0 = 0xE7000000; p->unk4 = 0; END
    BEGIN p->unk0 = 0xE3000A01; p->unk4 = 0; END
    BEGIN p->unk0 = 0xD9D0F9FA; p->unk4 = 0; END
    BEGIN p->unk0 = 0xFCFFFFFF; p->unk4 = 0xFFFDF6FB; END
    BEGIN p->unk0 = 0xE200001C; p->unk4 = 0x504240; END
    if (func_80001060(arg0) == 0) {

        if (arg0->unk2C->unk7 != 0) {
            SYNC();
            COLOR(unk4,unk5,unk6,unk7);
            RECT(arg0->unk2C->unk0 + arg0->unk2C->unkC, arg0->unk2C->unk2 + arg0->unk2C->unkE, arg0->unk2C->unk0, arg0->unk2C->unk2);
        }

        if (arg0->unk2C->unk10 != 0 && arg0->unk2C->unkB != 0) {
            SYNC();
            COLOR(unk8,unk9,unkA,unkB);
            BEGIN
            p->unk0 = ((arg0->unk2C->unk0 & 0x3FF) << 14) | 0xF6000000 | (((arg0->unk2C->unk2 + arg0->unk2C->unkE + arg0->unk2C->unk10) & 0x3FF) * 4);

            p->unk4 = (((arg0->unk2C->unk0 - arg0->unk2C->unk10) & 0x3FF) << 14) | (((arg0->unk2C->unk2 - arg0->unk2C->unk10) & 0x3FF) * 4); END
            BEGIN
            p->unk0 = (((arg0->unk2C->unk0 + arg0->unk2C->unkC + arg0->unk2C->unk10) & 0x3FF) << 14) | 0xF6000000 | (((arg0->unk2C->unk2 + arg0->unk2C->unkE + arg0->unk2C->unk10) & 0x3FF) * 4);

            p->unk4 = (((arg0->unk2C->unk0 + arg0->unk2C->unkC) & 0x3FF) << 14) | (((arg0->unk2C->unk2 - arg0->unk2C->unk10) & 0x3FF) * 4); END
            RECT(arg0->unk2C->unk0 + arg0->unk2C->unkC, arg0->unk2C->unk2, arg0->unk2C->unk0, arg0->unk2C->unk2 - arg0->unk2C->unk10);
            RECT(arg0->unk2C->unk0 + arg0->unk2C->unkC, arg0->unk2C->unk2 + arg0->unk2C->unkE + arg0->unk2C->unk10, arg0->unk2C->unk0, arg0->unk2C->unk2 + arg0->unk2C->unkE);
        }
    } else {

        if (arg0->unk2C->unk7 != 0) {
            SYNC();
            COLOR(unk4,unk5,unk6,unk7);
            RECT(arg0->unk2C->unk0 * 2 + arg0->unk2C->unkC * 2, arg0->unk2C->unk2 * 2 + arg0->unk2C->unkE * 2, arg0->unk2C->unk0 * 2, arg0->unk2C->unk2 * 2);
        }

        if (arg0->unk2C->unk10 != 0 && arg0->unk2C->unkB != 0) {
            SYNC();
            COLOR(unk8,unk9,unkA,unkB);
            BEGIN
            p->unk0 = (((arg0->unk2C->unk0 * 2) & 0x3FF) << 14) | 0xF6000000 | (((arg0->unk2C->unk2 * 2 + arg0->unk2C->unkE * 2 + arg0->unk2C->unk10 * 2) & 0x3FF) * 4);
             tp = (void *)(u32)arg0->unk2C->unk10; tp = (void *)((u32)tp << 1);
            p->unk4 = (((arg0->unk2C->unk0 * 2 - (s32)tp) & 0x3FF) << 14) | (((arg0->unk2C->unk2 * 2 - (s32)tp) & 0x3FF) * 4); END
            BEGIN  tp = (void *)(u32)arg0->unk2C->unk10; tp = (void *)((u32)tp << 1);
            p->unk0 = (((arg0->unk2C->unk0 * 2 + arg0->unk2C->unkC * 2 + (s32)tp) & 0x3FF) << 14) | 0xF6000000 | (((arg0->unk2C->unk2 * 2 + arg0->unk2C->unkE * 2 + (s32)tp) & 0x3FF) * 4);

            p->unk4 = (((arg0->unk2C->unk0 * 2 + arg0->unk2C->unkC * 2) & 0x3FF) << 14) | (((arg0->unk2C->unk2 * 2 - arg0->unk2C->unk10 * 2) & 0x3FF) * 4); END
            RECT(arg0->unk2C->unk0 * 2 + arg0->unk2C->unkC * 2, arg0->unk2C->unk2 * 2, arg0->unk2C->unk0 * 2, arg0->unk2C->unk2 * 2 - arg0->unk2C->unk10 * 2);
            RECT(arg0->unk2C->unk0 * 2 + arg0->unk2C->unkC * 2, arg0->unk2C->unk2 * 2 + arg0->unk2C->unkE * 2 + arg0->unk2C->unk10 * 2, arg0->unk2C->unk0 * 2, arg0->unk2C->unk2 * 2 + arg0->unk2C->unkE * 2);
        }
    }
}
