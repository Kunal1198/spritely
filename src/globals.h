#ifndef _GLOBALS
#define _GLOBALS

struct mouse
{
    int x;
    int y;
} mouse;

#include "defs.h"
#include "colors.h"
#include "context.h"

SDL_Window *window;
SDL_Renderer *renderer;

//TODO: move these into spritely
char pen_color;
int current_sprite_index;
int copy_index;
int lctrl;
color_t clipboard_pixel_buffer[SPRITE_CANVAS_SIZE];
Context_t sprite_canvas_ctx;
Context_t color_picker_ctx;
Context_t sprite_selector_ctx;
Context_t sprite_sheet_current_cell_ctx;
Context_t sprite_selector_cells[SPRITESHEET_SIZE];
Context_t sprite_selection_indicator;
uint sprite_sheet[SPRITESHEET_SIZE][SPRITE_CANVAS_SIZE];

unsigned int current_time;
unsigned int last_time;

#endif
