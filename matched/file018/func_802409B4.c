#include "context.h"
/* line 3 only when compiled alone: context.h then already has func_80241DE0_Struct2 and the func_8012C4D0 prototype, which the real file declares later */
#if __LINE__ == 3
#define func_802409B4_Arg func_80241DE0_Struct2
#else
typedef struct func_802409B4_Arg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_802409B4_Arg;
extern s32 func_8012C4D0();
#endif

extern s32 func_80005670();
extern void func_8001F74C();
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_80203830(s32, void *);
void func_80240B80(s32 arg0, s32 arg1);
extern struct func_80242178_Struct D_801BBBF0;
extern func_802409B4_Arg D_8024F740;
extern func_802409B4_Arg D_8024F754;
extern u8 D_8024F718[];
extern u8 D_8024F72C[];
extern u8 D_8024FAC4[];

typedef struct func_802409B4_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
    u8 pad2[0x38 - 0x24];
    struct func_802409B4_Sub {
        u8 pad0[2];
        u16 unk2;
    } *unk38;
    u8 pad3[0x72 - 0x3C];
    u16 unk72;
} func_802409B4_Struct;

typedef struct func_802409B4_Obj {
    u8 pad0[0x35];
    u8 unk35;
    u8 pad1[0x90 - 0x36];
    u16 unk90;
} func_802409B4_Obj;

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
#define O(x) ((func_802409B4_Obj *)(x))
void func_802409B4(func_802409B4_Struct *arg0, s32 arg1) {
    func_8001F74C();
    func_80203830((s32)arg0, D_8024FAC4);
    arg0->unk18 = func_8012E5B0;
    arg0->unk20 = func_8012E6BC;
    func_8013B570(arg0, arg0->unk38->unk2, 2, 3, func_80240B80);
    G->unk10B8 = arg0;
    G->unk10A0 = G->unk40;
    G->unk1088 = func_8012C4D0((s32)arg0, D_8024F740, 3);
    O(G->unk1088)->unk35 = G->unk104;
    G->unk104++;
    O(G->unk1088)->unk90 = arg0->unk72;
    G->unk10D0 = func_8012C4D0((s32)arg0, D_8024F754, 3);
    O(G->unk10D0)->unk90 = arg0->unk72;
    O(G->unk10D0)->unk35 = G->unk104;
    G->unk104++;
    G->unk1100 = func_80005670(G->unk44, D_8024F718);
    O(G->unk1100)->unk90 = arg0->unk72;
    O(G->unk1100)->unk35 = G->unk104;
    G->unk104++;
    G->unk1104 = func_80005670(arg0, D_8024F72C);
    O(G->unk1104)->unk35 = G->unk104;
    G->unk104++;
}
