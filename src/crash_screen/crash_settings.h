#pragma once

#include <ultra64.h>

#include "types.h"


typedef s16 SettingsType;


enum CSPrintNumberFormats {
    PRINT_NUM_FMT_HEX, // 0xFFFFFFFF
    PRINT_NUM_FMT_DEC, // 0.0
    PRINT_NUM_FMT_SCI, // XeX
};

enum CSDisasmBranchArrowModes {
    DISASM_ARROW_MODE_OFF,
    DISASM_ARROW_MODE_SELECTION,
#ifdef INCLUDE_DEBUG_MAP
    DISASM_ARROW_MODE_FUNCTION,
#endif
    DISASM_ARROW_MODE_OVERSCAN,
};

enum CSSettings {
    CS_OPT_EXPAND_ALL,
    CS_OPT_COLLAPSE_ALL,
    CS_OPT_RESET_TO_DEFAULTS,
    // GLOBAL:
    CS_OPT_HEADER_GLOBAL,
    CS_OPT_DRAW_SCREENSHOT,
#ifdef INCLUDE_DEBUG_MAP
    CS_OPT_SYMBOL_NAMES,
#endif
    // CONTROLS:
    CS_OPT_HEADER_CONTROLS,
    CS_OPT_PRINT_SCROLL_SPEED,
    CS_OPT_CURSOR_WAIT_FRAMES,
    CS_OPT_ANALOG_DEADZONE,
    // CONTEXT:
    CS_OPT_HEADER_PAGE_CONTEXT,
#ifdef INCLUDE_DEBUG_MAP
    CS_OPT_CONTEXT_PARSE_REG,
#endif
    CS_OPT_CONTEXT_FLOATS_FMT,
    // LOG:
    CS_OPT_HEADER_PAGE_LOG,
    CS_OPT_LOG_INDEX_NUMBERS,
    // STACK TRACE:
    CS_OPT_HEADER_PAGE_STACK,
    CS_OPT_STACK_SHOW_ADDRESSES,
    CS_OPT_STACK_SHOW_OFFSETS,
#ifdef INCLUDE_DEBUG_MAP
    // MAP VIEW:
    CS_OPT_HEADER_PAGE_MAP,
    CS_OPT_MAP_SHOW_ADDRESSES,
    CS_OPT_MAP_SHOW_TYPES,
    CS_OPT_MAP_SHOW_SIZES,
#endif
    // RAM VIEW:
    CS_OPT_HEADER_PAGE_MEMORY,
#ifdef INCLUDE_DEBUG_MAP
    CS_OPT_MEMORY_SHOW_SYMBOL,
#endif
    CS_OPT_MEMORY_AS_ASCII,
    // DISASM:
    CS_OPT_HEADER_PAGE_DISASM,
#ifdef INCLUDE_DEBUG_MAP
    CS_OPT_DISASM_SHOW_SYMBOL,
#endif
    CS_OPT_DISASM_BINARY,
    CS_OPT_DISASM_PSEUDOINSNS,
    CS_OPT_DISASM_IMM_FMT,
    CS_OPT_DISASM_OFFSET_ADDR,
    CS_OPT_DISASM_ARROW_MODE, //! TODO: Implement this
    NUM_CS_OPTS,
};


//! TODO: shown flag + enabled flag + callback func(old, new) + draw func(x, y, text, opt)
typedef struct CSSettingsEntry {
    /*0x00*/ const char* name;
    /*0x20*/ const char* (*valNames)[];
    /*0x24*/ SettingsType val;
    /*0x28*/ SettingsType defaultVal;
    /*0x2C*/ SettingsType lowerBound;
    /*0x30*/ SettingsType upperBound;
} CSSettingsEntry; /*0x40*/


extern CSSettingsEntry gCSSettings[NUM_CS_OPTS];


_Bool crash_screen_setting_is_header(enum CSSettings settingID);
void crash_screen_inc_setting(enum CSSettings settingID, SettingsType inc);
void crash_screen_reset_setting(enum CSSettings settingID);
void crash_screen_reset_settings_section(enum CSSettings settingID);
void crash_screen_reset_all_settings(void);
_Bool crash_screen_check_for_changed_settings(void);
_Bool crash_screen_settings_check_for_header_state(_Bool expand);
void crash_screen_settings_set_all_headers(_Bool expand);