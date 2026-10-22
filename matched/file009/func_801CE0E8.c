#include "context.h"
extern s32 D_801CDCE4(void *, s32);
extern s32 D_801CDE00(void *, s32);
extern s32 D_801CDF5C(void *, s32);
extern void func_800058DC(void *arg0, s32 arg1);
extern void func_801CE898();
typedef struct func_801CE0E8_Struct { u8 pad[0x97]; u8 unk97; } func_801CE0E8_Struct;
s32 func_801CE0E8(void *arg0, s8 *a1) {
    u8 t;
    s32 r;
    if (((func_801CE0E8_Struct *)arg0)->unk97 < 6) {
        t = r = D_801CDCE4(arg0, (s32)a1);
    } else if (((func_801CE0E8_Struct *)arg0)->unk97 < 0xD) {
        t = r = D_801CDE00(arg0, (s32)a1);
    } else {
        t = r = D_801CDF5C(arg0, (s32)a1);
    }
    if (r != 0) {
        func_800058DC(arg0, (s32)func_801CE898);
    }
    return t;
}
