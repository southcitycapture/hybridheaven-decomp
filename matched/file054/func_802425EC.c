#include "context.h"

extern u8 D_80247988[];
extern u8 D_802479C4[];
extern f32 D_802482D0;
extern f32 D_802482D4;
extern f32 D_802482D8;
extern f32 D_802482DC;
extern f32 D_802482E0;
extern f32 D_802482E4;
extern f32 D_802482E8;
extern f32 D_802482EC;
extern f32 D_802482F0;
extern f32 D_802482F4;
extern f32 D_802482F8;
extern f32 D_802482FC;
extern void func_80242758();
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_802425EC(void *arg0, s32 arg1) {
    if (D_8011AAF4(D_80247988, 0x459, arg0, 0, 2, D_802482D0, D_802482D4, 15.5f, D_802482D8, 4294967296.0f, D_802482DC, D_802482E0, D_802482E4, 0.0f, D_802482E8, -1, -1) == 0) {
        func_8011AAF4(D_802479C4, 0x45E, arg0, 0, 1, 0.0f, -10.5f, D_802482EC, D_802482F0, 0.0f, D_802482F4, D_802482F8, D_802482FC, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_80242758);
    }
}
