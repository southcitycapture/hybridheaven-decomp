#include "context.h"

extern s32 func_80126944(void);
extern void func_8012D844(void *, u16, u16);
extern f64 D_8018E288;
extern f64 D_8018E290;
extern void *D_801BBCCC;
struct func_8013C52C_Struct {
    s16 unk0;
    s16 unk2;
};
extern struct func_8013C52C_Struct D_801BC03C;
extern struct func_8013C52C_Struct D_801BC3D8;

void func_8013C52C(void *arg0, u16 *arg1) {
    struct func_8013C52C_Struct *ptr;
    s32 index;

    if (func_80126944() != 1) {
        index = 2;
    } else {
        ptr = (arg0 == D_801BBCCC) ? &D_801BC03C : &D_801BC3D8;
        if ((f64)ptr->unk0 * D_8018E288 < (f64)ptr->unk2) {
            index = 2;
        } else if ((f64)ptr->unk0 * D_8018E290 < (f64)ptr->unk2) {
            index = 4;
        } else {
            index = 5;
        }
    }
    func_8012D844(arg0, *arg1, arg1[index]);
}
