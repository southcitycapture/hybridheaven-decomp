#include "common.h"
extern u16 func_80011590();
typedef struct func_8036153C_Obj {
    u8 pad0[0x5C];
    u8 *unk5C;
} func_8036153C_Obj;
f32 func_8036153C(func_8036153C_Obj *arg0);


/* context.h leaves the `b` macro from func_8036153C.c in force, which breaks
   later struct members named b. Undefine it for this translation unit. */
#ifdef b
#undef b
#endif

typedef struct func_80361910_Copy {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_80361910_Copy;

typedef struct func_80361910_Inner {
    u8 pad0[0x1C];
    func_80361910_Copy unk1C;
    u8 pad28[0x7C - 0x28];
    s32 unk7C;
    u16 unk80;
} func_80361910_Inner;

typedef struct func_80361910_Arg0 {
    u8 pad0[0x5C];
    func_80361910_Inner *unk5C;
} func_80361910_Arg0;

typedef struct func_80361910_Arg2 {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x10 - 6];
    s32 unk10;
} func_80361910_Arg2;

typedef struct func_80361910_Arg3 {
    u8 pad0[8];
    s16 unk8;
    u8 padA[0x2D8 - 0xA];
    u8 unk2D8;
    u8 pad2D9[0x2DE - 0x2D9];
    u8 unk2DE;
    u8 pad2DF[0x2E8 - 0x2DF];
    u8 unk2E8;
    u8 pad2E9[0x2F4 - 0x2E9];
    f32 unk2F4;
    u8 pad2F8[0x300 - 0x2F8];
    u16 unk300;
    u16 unk302;
    u8 pad304[0x32C - 0x304];
    u8 unk32C;
    u8 pad32D[0x375 - 0x32D];
    u8 unk375;
    u8 unk376;
    u8 pad377[0x394 - 0x377];
    u8 unk394;
} func_80361910_Arg3;

typedef struct func_80361910_Arg4 {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    u32 unk30;
    u8 pad34[0x2F8 - 0x34];
    u8 unk2F8;
} func_80361910_Arg4;
extern void func_8013AE20();
extern void func_8013B808(void *, s32, u16);

void func_80361910(void *arg0, s32 arg1, void *arg2, void *arg3, void *arg4) {
    func_80361910_Arg2 *a2;
    func_80361910_Arg3 *a3;
    s16 cur;
    u16 max;
    func_80361910_Copy *copy;    u16 var_s0;

    a2 = (func_80361910_Arg2 *) arg2;
    a3 = (func_80361910_Arg3 *) arg3;
    var_s0 = 0;
    if ((((func_80361910_Arg0 *) arg0)->unk5C->unk80 == 0) && (((func_80361910_Arg0 *) arg0)->unk5C->unk7C == a2->unk10)) {
        copy = &((func_80361910_Arg0 *) arg0)->unk5C->unk1C;
        if (copy->unk4 == func_80011590((u16) ((f32) (u32) a2->unk4 * copy->unk8))) {
            a3->unk2DE = 1;
            a3->unk2E8 = 0;
            a3->unk32C = 0;
            a3->unk394 = 0;
            a3->unk2F4 = 0.0f;
            if (((((func_80361910_Arg4 *) arg4)->unk30 * 2 >> 30) == 0) && (((func_80361910_Arg4 *) arg4)->unk2 > 0)) {
                ((func_80361910_Arg4 *) arg4)->unk2F8 = 0;
            }
            func_8013AE20(arg0, arg1, 1);
            if ((a3->unk2D8 == 9) || (a3->unk2D8 == 0xA)) {
                if (a3->unk375 >= a3->unk376) {
                    var_s0 = 4;
                } else {
                    var_s0 = 1;
                }
            } else if (a3->unk300 >= 0x64) {
                cur = a3->unk8;
                max = a3->unk302;
                if (cur == max) {
                    var_s0 = 4;
                } else {
                    if ((f64) cur * 0.8 <= (f64) (u32) max) {
                        var_s0 = 1;
                    }
                }
            }
            if (var_s0 != 0) {
                func_8013B808(arg0, arg1, var_s0);
            }
        }
    }
}
