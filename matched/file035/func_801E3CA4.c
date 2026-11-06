#include "common.h"

typedef struct { s32 words[4]; } func_801E3CA4_Config;
typedef struct {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
    u8 pad14[4];
    f32 scaleX, scaleY, scaleZ;
    u8 pad24[0xC];
    void *resource;
} func_801E3CA4_Transform;
typedef struct { u8 pad0[0x2C]; func_801E3CA4_Transform *transform; } func_801E3CA4_Model;
extern func_801E3CA4_Config D_801E8460;
extern u8 D_8017AE98[];
extern s32 D_8038D850;
extern func_801E3CA4_Model **D_8038D854;
extern void func_80005E44(s32, func_801E3CA4_Config *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);

s32 func_801E3CA4(s32 arg0, s32 arg1) {
    func_801E3CA4_Config config = D_801E8460;

    func_80005E44(D_8038D850, &config);
    func_80006214(D_8038D850);
    func_8012C89C(D_8038D850, 0, 0x43E, 0);
    (*D_8038D854)->transform->x = 0.0f;
    (*D_8038D854)->transform->y = 0.0f;
    (*D_8038D854)->transform->z = 0.0f;
    (*D_8038D854)->transform->scaleX = 0.05f;
    (*D_8038D854)->transform->scaleY = 0.05f;
    (*D_8038D854)->transform->scaleZ = 0.05f;
    (*D_8038D854)->transform->angle = 0;
    (*D_8038D854)->transform->resource = D_8017AE98;
    return 2;
}
