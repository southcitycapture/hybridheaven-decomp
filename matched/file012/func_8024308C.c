#include "common.h"
extern s32 func_800058DC(s32, void *);
struct func_80243454_S2C {
    u8 pad0[0x1C];
    void *unk1C;
};
struct func_80243454_S34 {
    u8 pad0[0xC];
    s16 unkC;
};
struct func_80243454_Struct {
    u8 pad0[0x2C];
    struct func_80243454_S2C *unk2C;
    u8 pad30[4];
    struct func_80243454_S34 *unk34;
    u8 pad38[0xA];
    u8 unk42;
};
void func_80243454(struct func_80243454_Struct *arg0, s32 arg1);
struct func_802438A4_S2C {
    u8 pad0[0x1C];
    void *unk1C;
};
struct func_802438A4_S34 {
    u8 pad0[0xC];
    s16 unkC;
};
struct func_802438A4_Struct {
    u8 pad0[0x2C];
    struct func_802438A4_S2C *unk2C;
    u8 pad30[4];
    struct func_802438A4_S34 *unk34;
    u8 pad38[0xA];
    u8 unk42;
};
void func_802438A4(struct func_802438A4_Struct *arg0, s32 arg1);
struct func_80243D8C_Struct {
    u8 pad0[0x34];
    u16 *unk34;
    u8 pad38[0xA];
    u8 unk42;
};
void func_80243D8C(struct func_80243D8C_Struct *arg0, s32 arg1);


struct func_8024308C_StructTable {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8024308C_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x28];
    struct func_8024308C_StructTable *unk38;
    u16 unk3C;
    s16 unk3E;
    u8 pad40[2];
    u8 unk42;
};
extern s32 func_802242D0(s32);
extern void func_80243174();

void func_8024308C(struct func_8024308C_Struct *arg0, s32 arg1) {
    struct func_8024308C_StructTable *table = arg0->unk38;
    u16 *value = &arg0->unk3C;

    arg0->unk42++;
    if (arg0->unk42 >= 11) {
        arg0->unk42 = 0;
        *value = table->unk2D8;
        arg0->unk3E = table->unk2D9;
        switch (*value) {
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            func_800058DC((s32)arg0, (void *)func_80243174);
            return;
        case 11:
        case 12:
            func_800058DC((s32)arg0, (void *)func_80243454);
            return;
        default:
            if (func_802242D0(arg0->unkC) != 0) {
                func_800058DC((s32)arg0, (void *)func_802438A4);
                return;
            }
            func_800058DC((s32)arg0, (void *)func_80243D8C);
            break;
        }
    }
}
