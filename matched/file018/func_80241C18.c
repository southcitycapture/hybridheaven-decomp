#include "common.h"
struct func_80242178_Struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0x1088 - 0x44];
    s32 unk1088;
    u8 pad2[0x10A0 - 0x108C];
    s32 unk10A0;
};
extern struct func_80242178_Struct D_801BBBF0;
typedef struct func_802409B4_Globals {
    u8 pad0[0x40];
    s32 unk40;
    s32 unk44;
    u8 pad1[0x104 - 0x48];
    u16 unk104;
    u8 pad2[0x1088 - 0x106];
    s32 unk1088;
    u8 pad3[0x10A0 - 0x108C];
    s32 unk10A0;
    u8 pad4[0x10B8 - 0x10A4];
    void *unk10B8;
    u8 pad5[0x10D0 - 0x10BC];
    s32 unk10D0;
    u8 pad6[0x1100 - 0x10D4];
    s32 unk1100;
    s32 unk1104;
} func_802409B4_Globals;
#define G ((func_802409B4_Globals *)&D_801BBBF0)
extern void func_8001F74C();
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_80203830(s32, void *);
void func_80241CA0(s32 arg0, s32 arg1);

typedef struct func_80241C18_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
    u8 pad2[0x14];
    struct { u8 pad[2]; u16 unk2; } *unk38;
} func_80241C18_Struct;
extern u8 D_802545D0[];

void func_80241C18(func_80241C18_Struct *arg0, s32 arg1) {
    func_8001F74C();
    func_80203830((s32)arg0, D_802545D0);
    arg0->unk18 = func_8012E5B0;
    arg0->unk20 = func_8012E6BC;
    func_8013B570(arg0, arg0->unk38->unk2, 2, 4, func_80241CA0);
    G->unk1088 = (s32)arg0;
    G->unk10A0 = G->unk40;
}
