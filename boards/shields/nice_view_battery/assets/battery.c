#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BATTERY
#define LV_ATTRIBUTE_IMG_BATTERY
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERY uint8_t battery_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
    0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
    0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

  0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00,
  0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00,
  0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00,
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00,
  0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xc0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xe0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xf0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xf0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xf0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xf0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xf0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xf0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xf0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xf0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xf0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xf0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xf0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xe0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xc0,
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00,
  0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00,
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00,
  0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00,
  0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00,
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00,
  0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
};

const lv_img_dsc_t battery = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 68,
  .header.h = 31,
  .data_size = 287,
  .data = battery_map,
};