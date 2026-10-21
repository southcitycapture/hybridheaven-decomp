#include "context.h"

typedef struct func_8023BBDC_StructData {
    u8 pad[0xB];
    u8 value;
} func_8023BBDC_StructData;

typedef struct func_8023BBDC_StructNode {
    u8 pad[0x10];
    struct func_8023BBDC_StructNode *next;
    u8 pad14[0x1C];
    func_8023BBDC_StructData *data;
} func_8023BBDC_StructNode;

typedef struct func_8023BBDC_StructState {
    u8 pad[0x44];
    s16 timer;
} func_8023BBDC_StructState;

typedef struct func_8023BBDC_Struct {
    u8 pad[0x24];
    func_8023BBDC_StructNode *node;
    u8 pad28[0x70];
    func_8023BBDC_StructState *state;
} func_8023BBDC_Struct;

extern void func_8023A154(void);

void func_8023BBDC(func_8023BBDC_Struct *arg0, s32 arg1) {
    func_8023BBDC_StructState *state;
    s16 value;
    func_8023BBDC_StructNode *node;
    extern void func_8023B148();

    node = arg0->node;
    state = arg0->state;
    if (node != NULL) {
        value = node->data->value;
    }
    value -= 25;
    if (value > 0) {
        func_8023B148(arg0, (u8)value, value);
        while (node != NULL) {
            node->data->value = (u8)value;
            node = node->next;
        }
    } else {
        func_80147D60(4);
        state->timer = 20;
        func_800058DC(arg0, func_8023A154);
    }
}
