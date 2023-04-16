#pragma once

#include <ultra64.h>

#include "types.h"


// Stack Trace constants
#define STACK_TRACE_NUM_ROWS 19

// The number of functions to save to the stack trace buffer.
#define STACK_TRACE_SIZE 64


struct FunctionInStack {
    /*0x00*/ uintptr_t addr;
    /*0x04*/ const char* name;
}; /*0x08*/


extern u32 gStackTraceIndex;

extern const enum ControlTypes stackTracePageControls[];


void stack_trace_init(void);
void stack_trace_draw(OSThread* thread);
void stack_trace_input(void);
