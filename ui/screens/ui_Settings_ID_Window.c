// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Settings_ID_Window_screen_init(void)
{
    ui_Settings_ID_Window = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Settings_ID_Window, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Settings_ID_Window, &ui_img_861711258, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Header_Main6 = lv_obj_create(ui_Settings_ID_Window);
    lv_obj_remove_style_all(ui_Header_Main6);
    lv_obj_set_height(ui_Header_Main6, 30);
    lv_obj_set_width(ui_Header_Main6, lv_pct(100));
    lv_obj_set_x(ui_Header_Main6, 0);
    lv_obj_set_y(ui_Header_Main6, -225);
    lv_obj_set_align(ui_Header_Main6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Header_Main6, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Header_Main_Text6 = lv_label_create(ui_Header_Main6);
    lv_obj_set_width(ui_Header_Main_Text6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Header_Main_Text6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Header_Main_Text6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Header_Main_Text6, "ID设置");
    lv_obj_set_style_text_color(ui_Header_Main_Text6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Header_Main_Text6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Header_Main_Text6, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ID_Keyboard2 = lv_keyboard_create(ui_Settings_ID_Window);
    lv_keyboard_set_mode(ui_ID_Keyboard2, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_width(ui_ID_Keyboard2, 480);
    lv_obj_set_height(ui_ID_Keyboard2, 270);
    lv_obj_set_x(ui_ID_Keyboard2, 0);
    lv_obj_set_y(ui_ID_Keyboard2, 100);
    lv_obj_set_align(ui_ID_Keyboard2, LV_ALIGN_CENTER);

    ui_ID_Setting_Input2 = lv_textarea_create(ui_Settings_ID_Window);
    lv_obj_set_width(ui_ID_Setting_Input2, 150);
    lv_obj_set_height(ui_ID_Setting_Input2, 89);
    lv_obj_set_x(ui_ID_Setting_Input2, 0);
    lv_obj_set_y(ui_ID_Setting_Input2, -130);
    lv_obj_set_align(ui_ID_Setting_Input2, LV_ALIGN_CENTER);
    lv_textarea_set_text(ui_ID_Setting_Input2, "1");
    lv_textarea_set_placeholder_text(ui_ID_Setting_Input2, "ID");
    lv_obj_set_style_text_align(ui_ID_Setting_Input2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ID_Setting_Input2, &ui_font_LanTing40, LV_PART_MAIN | LV_STATE_DEFAULT);



    ui_ID_Enter_Btn = lv_btn_create(ui_Settings_ID_Window);
    lv_obj_set_width(ui_ID_Enter_Btn, 100);
    lv_obj_set_height(ui_ID_Enter_Btn, 100);
    lv_obj_set_x(ui_ID_Enter_Btn, 171);
    lv_obj_set_y(ui_ID_Enter_Btn, -115);
    lv_obj_set_align(ui_ID_Enter_Btn, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ID_Enter_Btn, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_ID_Enter_Btn, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_ID_Enter_Btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ID_Enter_Btn, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_shadow_color(ui_ID_Enter_Btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_ID_Enter_Btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ID_Enter_Btn, lv_color_hex(0x4893EF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_ID_Enter_Btn, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_ID_Enter_Text = lv_label_create(ui_ID_Enter_Btn);
    lv_obj_set_width(ui_ID_Enter_Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ID_Enter_Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ID_Enter_Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ID_Enter_Text, "保存");
    lv_obj_set_style_text_font(ui_ID_Enter_Text, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BackToMainWindow11 = lv_imgbtn_create(ui_Settings_ID_Window);
    lv_imgbtn_set_src(ui_BackToMainWindow11, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_348826415, NULL);
    lv_imgbtn_set_src(ui_BackToMainWindow11, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_348826415, NULL);
    lv_obj_set_height(ui_BackToMainWindow11, 50);
    lv_obj_set_width(ui_BackToMainWindow11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_BackToMainWindow11, -212);
    lv_obj_set_y(ui_BackToMainWindow11, -212);
    lv_obj_set_align(ui_BackToMainWindow11, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BackToMainWindow11, LV_OBJ_FLAG_PRESS_LOCK);      /// Flags
    lv_obj_set_style_img_recolor(ui_BackToMainWindow11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_BackToMainWindow11, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Header_Volume9 = ui_Header_Volume_create(ui_Settings_ID_Window);
    lv_obj_set_x(ui_Header_Volume9, 187);
    lv_obj_set_y(ui_Header_Volume9, -216);



    lv_keyboard_set_textarea(ui_ID_Keyboard2, ui_ID_Setting_Input2);
    lv_obj_add_event_cb(ui_ID_Setting_Input2, ui_event_ID_Setting_Input2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ID_Enter_Btn, ui_event_ID_Enter_Btn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BackToMainWindow11, ui_event_BackToMainWindow11, LV_EVENT_ALL, NULL);

}
