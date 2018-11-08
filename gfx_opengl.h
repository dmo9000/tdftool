#include <stdint.h>
#include <stdbool.h>
#include "rawfont.h"

int gfx_opengdl_main(uint16_t, uint16_t, char *WindowTitle);
int gfx_opengdl_drawglyph(BitmapFont *bmf, uint16_t px, uint16_t py, uint8_t glyph, uint8_t fg, uint8_t bg, uint8_t attr);
int gfx_opengdl_expose();
int gfx_opengdl_canvas_render(ANSICanvas *canvas, BitmapFont *myfont);
int gfx_opengdl_canvas_render_xy(ANSICanvas *canvas, BitmapFont *myfont, uint16_t x, uint16_t y);
int gfx_opengdl_render_cursor(ANSICanvas *canvas, BitmapFont *myfont, uint16_t x,  uint16_t y, bool state);
void gfx_opengdl_clear();
