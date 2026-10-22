#include "context.h"

typedef struct func_801C5F04_StructNode {
    u8 pad[0x10];
    struct func_801C5F04_StructNode *next;
    u8 pad14[0xE];
    u8 active;
} func_801C5F04_StructNode;

extern func_801C5F04_StructNode *D_801CFD88[];
extern func_801C5F04_StructNode *D_801CFD98[];
extern u8 D_801CD03C[][3];
extern u8 D_801CD050[][3];

void func_801C5F04(void *arg0) {
    u8 i;
    u8 id;
    func_801C5F04_StructNode *node;

    node = D_801CFD88[((u8 *)arg0)[0x90]];
    func_80147250(node, 0x20, 0xA0, 0, 0x70);
    func_801472C0(node, 0x20, 0xA0, 0, 0xFF);
    node = node->next;
    func_80147250(node, 0x40, 0xA0, 0, 0xFF);
    func_801472C0(node, 0x40, 0xA0, 0, 0xFF);
    node = node->next;
    for (i = 1; i < 5; i++) {
        if (i == D_801CFDA6[((u8 *)arg0)[0x90]]) {
            node->active = 1;
            if (i == 3 && D_801CFDB8[((u8 *)arg0)[0x90]] != 0) {
                func_80147250(node, D_801CD03C[5][0], D_801CD03C[5][1], D_801CD03C[5][2], 0x70);
                func_801472C0(node, D_801CD03C[5][0], D_801CD03C[5][1], D_801CD03C[5][2], 0xFF);
            } else if (i == 3 && func_801C5AD4(((u8 *)arg0)[0x90])) {
                func_80147250(node, 0x38, 0x38, 0x38, 0xC0);
                func_801472C0(node, 0x38, 0x38, 0x38, 0xFF);
            } else {
                func_80147250(node, D_801CD03C[i][0], D_801CD03C[i][1], D_801CD03C[i][2], 0x70);
                func_801472C0(node, D_801CD03C[i][0], D_801CD03C[i][1], D_801CD03C[i][2], 0xFF);
            }
        } else {
            node->active = 0;
        }
        id = ((u8 *)arg0)[0x90];
        node = node->next;
        if (i == D_801CFDA6[id]) {
            if (i == 3 && D_801CFDB8[id] != 0) {
                func_80147250(node, D_801CD03C[5][0], D_801CD03C[5][1], D_801CD03C[5][2], 0xFF);
                func_801472C0(node, 0, 0, 0, 0xFF);
            } else if (i == 3 && func_801C5AD4(id)) {
                func_80147250(node, 0x50, 0x50, 0x50, 0xFF);
                func_801472C0(node, 0, 0, 0, 0xFF);
            } else {
                func_80147250(node, D_801CD03C[i][0], D_801CD03C[i][1], D_801CD03C[i][2], 0xFF);
                func_801472C0(node, D_801CD050[i][0], D_801CD050[i][1], D_801CD050[i][2], 0xFF);
            }
        } else {
            func_80147250(node, 0x50, 0x50, 0x50, 0xFF);
            func_801472C0(node, 0, 0, 0, 0xFF);
        }
        node = node->next;
    }
    if (func_801C5AD4(((u8 *)arg0)[0x90])) {
        id = ((u8 *)arg0)[0x90];
        if (D_801CFDA6[id] == 3) {
            func_80147250(D_801CFD98[id], 0, 0, 0, 0x80);
            func_801472C0(D_801CFD98[((u8 *)arg0)[0x90]], 0, 0, 0, 0xFF);
            return;
        }
        func_80147250(D_801CFD98[id], 0x50, 0x50, 0x50, 0xFF);
        func_801472C0(D_801CFD98[((u8 *)arg0)[0x90]], 0x40, 0x40, 0x40, 0xFF);
        return;
    }
    func_80147250(D_801CFD98[((u8 *)arg0)[0x90]], 0xFF, 0xFF, 0xFF, 0xFF);
    func_801472C0(D_801CFD98[((u8 *)arg0)[0x90]], 0xB0, 0xB0, 0xB0, 0xFF);
}
