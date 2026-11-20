#include "common.h"
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
struct func_8013C6FC_StructInner {
    u8 pad[0xC];
    u16 unkC;
};
struct func_8013C6FC_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x24];
    struct func_8013C6FC_StructInner *unk5C;
};


extern struct func_8013BD84_Struct D_8017DC20;
extern void func_8013A1B4();
extern s32 func_8013B19C(u16 arg0);

void func_8013C6FC(struct func_8013C6FC_Struct *arg0, s32 arg1, u8 arg2) {
    struct func_8013C6FC_StructInner *inner;
    u32 objectId;
    struct func_8013BD84_Struct sp2C;
    s32 index;
    u8 useDefault;

    inner = arg0->unk5C;
    useDefault = arg2;
    if (inner->unkC >= 0x18) {
        if (useDefault != 0) {
            sp2C = D_8017DC20;
            objectId = arg0->unk36;
            if (objectId == 0xF9 || objectId == 0xFA || objectId == 0xFB || objectId == 0xF0) {
                sp2C.unk0 = 0x019100B3;
            }
        } else {
            index = func_8013B19C(arg0->unk36);
            sp2C = *D_8017D478[index].unk0;
        }
        func_8013A1B4(arg1, sp2C, 0xE00000);
    }
}
