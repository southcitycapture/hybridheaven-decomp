#include "common.h"

extern void func_80006088(s32);
extern void func_800058DC(void *, void *);
extern void func_80149708(void);
extern s32 D_80181D5C;
extern s32 D_80181D60;
extern s16 D_801BBD58;

struct func_80149684_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};
extern struct func_80149684_Struct *D_801BED2C;

void func_80149684(void) {
    func_80006088(D_80181D60);
    D_801BBD58 = 0;
    D_80181D60 = 0;
    D_80181D5C = 0;
    D_801BED2C->unk3C = 5;
    func_800058DC(D_801BED2C, func_80149708);
}
