#include "common.h"
extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);
extern void D_801CD924(u8 arg0, u8 arg1, u8 arg2, f32 arg3);
extern void func_800058DC(void *arg0, s32 arg1);
typedef struct func_801CE5B0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE5B0_Struct;
void func_801CE5B0(func_801CE5B0_Struct *arg0, s32 *arg1);
typedef struct func_801CE898_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CE898_StructInner;
typedef struct func_801CE898_StructOuter {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
} func_801CE898_StructOuter;
void func_801CE898(func_801CE898_StructOuter *arg0, s32 arg1);


typedef struct func_801CF894_StructCfg {
    u8 pad0[0x4C];
    u16 flags;
} func_801CF894_StructCfg;

typedef struct func_801CF894_StructObj {
    u8 pad0[0x8];
    f32 unk8;
} func_801CF894_StructObj;

typedef struct func_801CF894_StructArg {
    u8 pad0[0xC];
    func_801CF894_StructCfg *config;
    u8 pad10[0x70 - 0x10];
    f32 unk70;
    u8 pad74[0x78 - 0x74];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad7B[0x90 - 0x7B];
    u16 unk90;
    u16 timer;
    u8 count;
} func_801CF894_StructArg;

typedef struct func_801CF894_StructE {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_801CF894_StructObj *unk30;
} func_801CF894_StructE;

void func_801CF894(func_801CF894_StructArg *arg0, func_801CF894_StructE **arg1) {
    f32 scale;
    s16 rem;
    u8 i;
    s32 base;
    func_801CF894_StructE **p;
    func_801CF894_StructObj *obj;

    if (arg0->timer < 5) {
        scale = (f32)(u32)arg0->timer / 5.0;
    } else if (arg0->timer >= arg0->unk90 - 5) {
        scale = (f32)(arg0->unk90 - arg0->timer) / 5.0;
    } else {
        scale = 1.0f;
    }
    D_801CD924(arg0->unk78, arg0->unk79, arg0->unk7A, scale);
    for (i = 0; i < arg0->count; i++) {
        base = i * 3;
        if (arg0->timer < base) {
            continue;
        }
        {
            if (!((f64)(u32)arg0->unk90 - (f64)(u32)arg0->count * 3.0 < (f64)(u32)arg0->timer) || arg1[i]->unk22 != 0) {
                arg1[i]->unk22 = 1;
                rem = (arg0->timer - base) % (arg0->count * 3);
                scale = ((f32)rem + 1.0) / ((f32)(u32)arg0->count * 3.0 + 1.0);
                obj = arg1[i]->unk30;
                if (rem == 0) {
                    obj->unk8 = arg0->unk70;
                    if ((f64)(u32)arg0->unk90 - (f64)(u32)arg0->count * 3.0 < (f64)(u32)arg0->timer) {
                        arg1[i]->unk22 = 0;
                    }
                } else {
                    obj->unk8 = obj->unk8 + 20.0 / ((f64)(u32)arg0->count * 3.0);
                }
                D_801CD5E0(arg0, obj, scale);
                D_801CD728(arg0, obj, scale);
            }
        }
    }
    if (arg0->timer++ >= arg0->unk90 || (arg0->config->flags & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
