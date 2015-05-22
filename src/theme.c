#include <pebble.h>

typedef enum { WHITE, BLACK } theme;

// default theme option
static theme _theme = BLACK;

// theme functions

GColor getBackColor() {
  return (_theme == WHITE) ? GColorWhite : GColorBlack;
}

GColor
  getForeColor() {
  return (_theme == WHITE) ? GColorBlack : GColorWhite;
}

uint32_t
  getLogo() {
  return (_theme == WHITE) ? 
    RESOURCE_ID_IMAGE_LOGO_WHITE :
    RESOURCE_ID_IMAGE_LOGO_BLACK;
}