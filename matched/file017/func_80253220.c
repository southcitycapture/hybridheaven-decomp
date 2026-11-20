#include "context.h"
#undef func_80253220

typedef struct func_80253220_StructObject {
    u8 pad0[0x2C];
    s32 flags;
    u8 pad30[0xC];
    u16 timer;
    u8 pad3E[0x5B];
    u8 kind;
} func_80253220_StructObject;

typedef struct func_80253220_StructPosition {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
} func_80253220_StructPosition;

typedef struct func_80253220_StructCamera {
    u8 pad0[0x2C];
    func_80253220_StructPosition *position;
} func_80253220_StructCamera;

typedef struct func_80253220_StructGlobal {
    u8 pad0[0xE0];
    func_80253220_StructCamera *camera;
    u8 padE4[0x104];
    f32 x, y, z, tx, ty, tz;
    u8 pad200[0xA4];
    f32 unk2A4, unk2A8;
    u8 pad2AC[0xC8A];
    u8 unkF36, unkF37, unkF38, unkF39;
    u8 unkF3A, unkF3B;
    s8 unkF3C, unkF3D, unkF3E;
    u8 unkF3F, unkF40, unkF41;
    s8 unkF42, unkF43, unkF44;
    u8 unkF45, unkF46, unkF47, unkF48;
} func_80253220_StructGlobal;

typedef struct func_80253220_StructEvent {
    s16 type;
    s32 sound;
    f32 volume;
    s16 duration;
    u8 padE[0x12];
} func_80253220_StructEvent;

typedef struct func_80253220_StructEntity {
    u8 pad0[0x24];
    func_80252FC0_StructNode *node;
    u8 pad28[0x4C];
    s32 state;
} func_80253220_StructEntity;

extern s32 func_801C3044(void);
extern void func_80126880(s32);
extern func_80253220_StructEntity *func_801505AC(s32);
extern f32 D_8025D838;

#define GLOBAL ((func_80253220_StructGlobal *)D_801BBBF0)

void func_80253220(func_80253220_StructObject *arg0, func_80252FC0_StructArgs *arg1) {
    u32 alpha;
    func_80253220_StructEntity *entity;
    f32 angle;
    func_80253220_StructEvent event;
    s32 timer;

    timer = arg0->timer;
    arg0->timer++;
    func_80253A80();
    if (func_801C3044() == 0) {
        switch (arg0->kind) {
        case 1:
            event.type = 0x1100;
            event.sound = 0x01B80026;
            event.duration = 10;
            event.volume = 3.0f;
            func_801C2F0C(5, &event);
            break;
        case 2:
            event.type = 0x1100;
            event.sound = 0x01B80026;
            event.duration = 10;
            event.volume = 3.0f;
            func_801C2F0C(5, &event);
            break;
        }
    }
    angle = (f32)((s16)((arg0->timer * 0x2D) + GLOBAL->camera->position->angle) & 0x1FFF);
    GLOBAL->x = GLOBAL->camera->position->x - (func_8001EAD0(angle) * 15.0);
    GLOBAL->y = GLOBAL->camera->position->y;
    GLOBAL->z = GLOBAL->camera->position->z - (func_8001EB64(angle) * 15.0);
    GLOBAL->tx = GLOBAL->camera->position->x;
    GLOBAL->ty = GLOBAL->camera->position->y + 20.0f;
    GLOBAL->tz = GLOBAL->camera->position->z;
    func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/a05_s10transdemo.c", 0x455, arg0, 0, 1,
                  0.0f, GLOBAL->x, GLOBAL->y, GLOBAL->z, 0.0f, GLOBAL->tx, GLOBAL->ty, GLOBAL->tz, 0.0f, 35.0f, -1, -1);
    func_801C42DC(GLOBAL->unkF36, GLOBAL->unkF37, GLOBAL->unkF38, GLOBAL->unkF39,
                  GLOBAL->unkF3A, GLOBAL->unkF3B, GLOBAL->unkF3C, GLOBAL->unkF3D,
                  GLOBAL->unkF3E, GLOBAL->unkF3F, GLOBAL->unkF40, GLOBAL->unkF41,
                  GLOBAL->unkF42, GLOBAL->unkF43, GLOBAL->unkF44, GLOBAL->unkF45,
                  GLOBAL->unkF46, GLOBAL->unkF47, GLOBAL->unkF48,
                  GLOBAL->unk2A4, GLOBAL->unk2A8, 2, 6.0f);
    if (timer < 90) {
        alpha = (u32)(255.0f - (timer * D_8025D838));
        arg1->unk0->unk30->unk4B = alpha;
        arg1->unk14->unk30->unk4B = alpha;
    }
    if (timer >= 150) {
        arg1->unk0->unk22 = 0;
        arg1->unk8->unk22 = 0;
        arg1->unk14->unk22 = 0;
        arg1->unk4->unk22 = 1;
        entity = func_801505AC(3);
        entity->node->unk22 = 0;
        entity->state = 0;
        entity = func_801505AC(4);
        entity->node->unk22 = 0;
        entity->state = 0;
        func_80126880(0x10);
        arg0->flags &= ~0x800;
        func_800058DC(arg0, func_80253680);
    }
}
