// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"


// COMPONENT BackToMainWindowBtn7

lv_obj_t *ui_BackToMainWindowBtn7_create(lv_obj_t *comp_parent) {

lv_obj_t *cui_BackToMainWindowBtn7;
cui_BackToMainWindowBtn7 = lv_imgbtn_create(comp_parent);
lv_imgbtn_set_src(cui_BackToMainWindowBtn7, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_348826415, NULL);
lv_imgbtn_set_src(cui_BackToMainWindowBtn7, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_348826415, NULL);
lv_obj_set_height( cui_BackToMainWindowBtn7, 50);
lv_obj_set_width( cui_BackToMainWindowBtn7, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( cui_BackToMainWindowBtn7, -212 );
lv_obj_set_y( cui_BackToMainWindowBtn7, -212 );
lv_obj_set_align( cui_BackToMainWindowBtn7, LV_ALIGN_CENTER );
lv_obj_set_style_img_recolor(cui_BackToMainWindowBtn7, lv_color_hex(0x000000), LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_img_recolor_opa(cui_BackToMainWindowBtn7, 100, LV_PART_MAIN| LV_STATE_PRESSED);

lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_BACKTOMAINWINDOWBTN7_NUM);
children[UI_COMP_BACKTOMAINWINDOWBTN7_BACKTOMAINWINDOWBTN7] = cui_BackToMainWindowBtn7;
lv_obj_add_event_cb(cui_BackToMainWindowBtn7, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
lv_obj_add_event_cb(cui_BackToMainWindowBtn7, del_component_child_event_cb, LV_EVENT_DELETE, children);
ui_comp_BackToMainWindowBtn7_create_hook(cui_BackToMainWindowBtn7);
return cui_BackToMainWindowBtn7; 
}
