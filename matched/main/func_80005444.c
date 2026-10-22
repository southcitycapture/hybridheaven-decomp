#include "context.h"
extern void func_800279F0(void *, s32);
extern s32 D_80043394;
extern u16 D_80043398;

extern void *func_8001F290();
extern void *D_800792F0;
extern void *D_80089338;

typedef struct func_80005444_StructNode {
    struct func_80005444_StructNode *next;
    u8 pad[0xB0];
} func_80005444_StructNode;
typedef struct func_80005444_StructSmall {
    struct func_80005444_StructSmall *next;
    u8 pad[0x30];
} func_80005444_StructSmall;

void func_80005444(u16 arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4) {
    u16 i;
    s32 count;
    s32 size;
    func_80005444_StructNode *p;
    func_80005444_StructSmall *q;

    G8[0x1BC] = 1;
    p = func_8001F290(arg0 * 0xB4);
    *(void **)(G8 + 0xAC) = p;
    D_80043398 = arg0;
    D_80043394 = 0x43781902;
    for (i = 0; i < arg0 - 1; i++) {
        p->next = p + 1;
        p++;
    }
    p->next = NULL;
    *(s32 *)(G8 + 0xC8) = 0;
    i = 0;
    p = func_8001F290(arg1 * 0x34, p, arg1);
    *(void **)(G8 + 0xB0) = p;
    q = (func_80005444_StructSmall *)p;
    for (; i < arg1 - 1; i++) {
        q->next = q + 1;
        q++;
    }
    q->next = NULL;
    *(s32 *)(G8 + 0x17C) = 0;
    *(u16 *)(G8 + 0xB4) = arg3;
    count = arg3;
    *(void **)(G8 + 0xB8) = func_8001F290(count * 0xB8);
    size = count * 1;
    *(void **)(G8 + 0xC0) = func_8001F290(size * 1, size);
    func_800279F0(*(void **)(G8 + 0xC0), size);
    D_800892B0.unkB6 = arg4;
    count = arg4;
    D_800892B0.unkBC = (s32)func_8001F290(count * 0x50);
    size = count * 1;
    D_800892B0.unkC4 = func_8001F290(size * 1, size);
    func_800279F0(D_800892B0.unkC4, size);
    count = arg2 << 6;
    D_800792F0 = func_8001F290(count);
    D_80089338 = func_8001F290(count);
    *(u16 *)(G8 + 0x90) = arg2;
}
