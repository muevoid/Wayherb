/*
static const char *background_color = "#3e3e3e";
static const char *border_color = "#ececec";
static const char *font_color = "#ececec";
static const char *font_pattern = "monospace:size=10";
static const unsigned line_spacing = 5;
static const unsigned int padding = 15;
*/
#include <stdbool.h>
#define LEFT ZWLR_LAYER_SURFACE_V1_ANCHOR_LEFT
#define RIGHT ZWLR_LAYER_SURFACE_V1_ANCHOR_RIGHT
#define TOP ZWLR_LAYER_SURFACE_V1_ANCHOR_TOP
#define BOTTOM ZWLR_LAYER_SURFACE_V1_ANCHOR_BOTTOM


//Style options
static int32_t margin_right = 0, margin_bottom = 0, margin_left = 0, margin_top = 0;
//Where it shows up on screen for example top left would be LEFT+TOP or right top would be RIGHT+TOP, etc
static uint32_t anchor = TOP + RIGHT;
static uint32_t width = 450;
static const unsigned int border_size = 2;
/* Backgound alpha */
static double alpha = 1.0;
/* Border alpha */
static double bralpha = 1.0;
/* Font alpha */
static double falpha = 1.0;
static float font_size = 16.0;

//Setting this to true makes it so windows will attempt to move out of the way for the notification
static const bool exclusive_zone_on = true;

//These all accept a value of 0.0 to 1.0 for red, green, and blue. The last character corresponds to the color
//Background color
static const float bgr = 0.156;
static const float bgb = 0.211;
static const float bgg = 0.164;

//Border color
static const float brr = 0.384;
static const float brb = 0.643;
static const float brg = 0.447;

//Font color
static const float fr = 0.972;
static const float fb = 0.949;
static const float fg = 0.972;

static const unsigned int duration = 5;
