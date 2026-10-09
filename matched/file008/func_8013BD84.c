#include "context.h"

s32 func_8013B19C(u16);

struct func_8013BD84_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct func_8013BD84_Entry {
    struct func_8013BD84_Struct *unk0;
    u8 pad[0x1C];
};

extern struct func_8013BD84_Entry D_8017D478[];

struct func_8013BD84_Struct *func_8013BD84(struct func_8013BD84_Struct *arg0, void *arg1) {
    struct func_8013BD84_Struct *temp_v1;

    temp_v1 = arg0;
    *temp_v1 = *D_8017D478[func_8013B19C(((u16 *)arg1)[0x36 / 2])].unk0;
    return temp_v1;
}
