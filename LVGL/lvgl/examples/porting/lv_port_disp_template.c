/**
 * @file lv_port_fs_templ.c
 *
 */
/*Copy this file as "lv_port_fs.c" and set this value to "1" to enable content*/
#if 1
/*********************
 *      INCLUDES
 *********************/
#include "lvgl.h"
#include "lv_port_disp_template.h"
//#include "oled.h"      // add the lcd driver header

/*********************
 *      DEFINES
 *********************/
#define USE_SRAM  0    // if use external SRAM 
#ifdef USE_SRAM
    // #include "malloc.h"
#endif
/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void disp_init(void);
/* GPU Update function*/
static void disp_flush(lv_display_t *disp, const lv_area_t* area, uint16_t* px_map);

/**********************
 *  STATIC VARIABLES
 **********************/
static void disp_init(void)
{
   // delay_init();
    //NVIC_Configuration();
   // LCD_Init();
//    LCD_Clear(WHITE);
}

/* Render the screen's content */
/* @caution: lv_color_t  is a 16 bit-pixel map */ 
static void disp_flush(lv_display_t *disp, const lv_area_t* area, uint16_t* px_map){
    int32_t w = area->x2 - area->x1 + 1;
    int32_t h = area->y2 - area->y1 + 1;

//    Address_set(area->x1, area->y1, area->x2, area->y2);
//    int32_t x, y;

//    OLED_DC_Set();
//    for (y = 1; y <= h ; y++){
//        for (x = 1; x <= w; x++){
//            LCD_Write_Bus(*px_map >> 8);
//            LCD_Write_Bus(*px_map);
//            px_map ++;
//        }
//    }
//    LCD_WaitBSY();

    lv_display_flush_ready(disp);  /* Indicate you are ready with the flushing*/
}
/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_display_t* lv_port_disp_init(){
    disp_init();
    lv_display_t* display = lv_display_create( (int32_t)TFTLCD_DISP_HOR_RES,  (int32_t)TFTLCD_DISP_VER_RES);
    /* make a draw buffer */
    #if USE_SRAM
    static lv_color_t  buf_1 = mymalloc[TFTLCD_DISP_HOR_RES * TFTLCD_DISP_VER_RES/10];
    lv_display_set_buffers(display, buf1, NULL, sizeof(buf1));
    #else
        static lv_color_t  buf1[TFTLCD_DISP_HOR_RES * TFTLCD_DISP_VER_RES/10];
        /*must be  at least */
        /*Initialize the display buffer -> caution when select the render mode!*/
        lv_display_set_buffers(display, buf1, NULL, sizeof(buf1),  LV_DISPLAY_RENDER_MODE_PARTIAL);  
    #endif
    
    /* Register display device -> set flush function to this function */
    
    lv_display_set_flush_cb(display, disp_flush);
    return display;
}

#else /*Enable this file at the top*/

/*This dummy typedef exists purely to silence -Wpedantic.*/
typedef int keep_pedantic_happy;
#endif
