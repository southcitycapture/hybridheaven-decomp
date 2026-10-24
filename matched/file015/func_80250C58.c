#define MYCAT2(a, b) a##b
#define MYCAT(a, b) MYCAT2(a, b)
#define func_8024F188 MYCAT(func_8024F188_, __LINE__)
#define func_8024F24C MYCAT(func_8024F24C_, __LINE__)
#define func_8024F818 MYCAT(func_8024F818_, __LINE__)
#define func_8024FECC MYCAT(func_8024FECC_, __LINE__)
#define func_80250334 MYCAT(func_80250334_, __LINE__)
#define func_8011AAF4 func_8011AAF4_ctx
#include "context.h"
#undef func_8011AAF4
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_80250C58_Struct {
    u8 pad[0x90];
    u16 unk90;
    f32 unk94;
} func_80250C58_Struct;

extern u8 D_80259F5C[];
extern u8 D_80259F9C[];
extern f32 D_8025A1A0;
extern f32 D_8025A1A4;
extern f32 D_8025A1A8;
extern f32 D_8025A1AC;
extern f32 D_8025A1B0;
extern f32 D_8025A1B4;
extern f32 D_8025A1B8;
extern f32 D_8025A1BC;
extern f32 D_8025A1C0;
extern f32 D_8025A1C4;
extern f32 D_8025A1C8;
extern u8 func_80250DDC[];

void func_80250C58(func_80250C58_Struct *arg0, s32 arg1) {
    arg0->unk90 = arg0->unk90 + 1;
    if (func_8011AAF4(D_80259F5C, 0x62F, arg0, 0, 2, D_8025A1A0, D_8025A1A4, D_8025A1A8, D_8025A1AC, 4294967296.0f, D_8025A1B0, D_8025A1B4, D_8025A1B8, 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_80259F9C, 0x633, arg0, 0, 1, 0.0f, D_8025A1BC, D_8025A1C0, 450.0f, 0.0f, D_8025A1C4, -116.0f, 450.0f, 0.0f, 35.0f, -1, -1);
        arg0->unk90 = 0;
        arg0->unk94 = D_8025A1C8;
        func_800058DC(arg0, func_80250DDC);
    }
}
