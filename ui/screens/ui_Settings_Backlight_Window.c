// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Settings_Backlight_Window_screen_init(void)
{
    ui_Settings_Backlight_Window = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Settings_Backlight_Window, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Settings_Backlight_Window, &ui_img_861711258, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Header_Main3 = lv_obj_create(ui_Settings_Backlight_Window);
    lv_obj_remove_style_all(ui_Header_Main3);
    lv_obj_set_height(ui_Header_Main3, 30);
    lv_obj_set_width(ui_Header_Main3, lv_pct(100));
    lv_obj_set_x(ui_Header_Main3, 0);
    lv_obj_set_y(ui_Header_Main3, -225);
    lv_obj_set_align(ui_Header_Main3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Header_Main3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Header_Main_Text3 = lv_label_create(ui_Header_Main3);
    lv_obj_set_width(ui_Header_Main_Text3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Header_Main_Text3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Header_Main_Text3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Header_Main_Text3, "背光设置");
    lv_obj_set_style_text_color(ui_Header_Main_Text3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Header_Main_Text3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Header_Main_Text3, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BackToSettingsWindow = lv_imgbtn_create(ui_Settings_Backlight_Window);
    lv_imgbtn_set_src(ui_BackToSettingsWindow, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_348826415, NULL);
    lv_imgbtn_set_src(ui_BackToSettingsWindow, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_348826415, NULL);
    lv_obj_set_height(ui_BackToSettingsWindow, 50);
    lv_obj_set_width(ui_BackToSettingsWindow, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_BackToSettingsWindow, -212);
    lv_obj_set_y(ui_BackToSettingsWindow, -212);
    lv_obj_set_align(ui_BackToSettingsWindow, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BackToSettingsWindow, LV_OBJ_FLAG_PRESS_LOCK);      /// Flags
    lv_obj_set_style_img_recolor(ui_BackToSettingsWindow, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_BackToSettingsWindow, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Backlight_Settings_items2 = lv_obj_create(ui_Settings_Backlight_Window);
    lv_obj_remove_style_all(ui_Backlight_Settings_items2);
    lv_obj_set_width(ui_Backlight_Settings_items2, 480);
    lv_obj_set_height(ui_Backlight_Settings_items2, 423);
    lv_obj_set_x(ui_Backlight_Settings_items2, 0);
    lv_obj_set_y(ui_Backlight_Settings_items2, 26);
    lv_obj_set_align(ui_Backlight_Settings_items2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Backlight_Settings_items2, LV_OBJ_FLAG_CLICKABLE);      /// Flags

    ui_Backlight_Brightness2 = lv_obj_create(ui_Backlight_Settings_items2);
    lv_obj_remove_style_all(ui_Backlight_Brightness2);
    lv_obj_set_width(ui_Backlight_Brightness2, 480);
    lv_obj_set_height(ui_Backlight_Brightness2, 70);
    lv_obj_set_x(ui_Backlight_Brightness2, 0);
    lv_obj_set_y(ui_Backlight_Brightness2, -180);
    lv_obj_set_align(ui_Backlight_Brightness2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Backlight_Brightness2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Backlight_Brightness_Text2 = lv_label_create(ui_Backlight_Brightness2);
    lv_obj_set_width(ui_Backlight_Brightness_Text2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Brightness_Text2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Backlight_Brightness_Text2, 55);
    lv_obj_set_y(ui_Backlight_Brightness_Text2, 0);
    lv_obj_set_align(ui_Backlight_Brightness_Text2, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Backlight_Brightness_Text2, "背光亮度");
    lv_obj_set_style_text_color(ui_Backlight_Brightness_Text2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Backlight_Brightness_Text2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Backlight_Brightness_Text2, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Brightness_Line2 = lv_obj_create(ui_Backlight_Brightness2);
    lv_obj_set_width(ui_Backlight_Brightness_Line2, 450);
    lv_obj_set_height(ui_Backlight_Brightness_Line2, 3);
    lv_obj_set_x(ui_Backlight_Brightness_Line2, -1);
    lv_obj_set_y(ui_Backlight_Brightness_Line2, 30);
    lv_obj_set_align(ui_Backlight_Brightness_Line2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Backlight_Brightness_Line2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Backlight_Brightness_Btn2 = lv_btn_create(ui_Backlight_Brightness2);
    lv_obj_set_width(ui_Backlight_Brightness_Btn2, 480);
    lv_obj_set_height(ui_Backlight_Brightness_Btn2, 70);
    lv_obj_set_align(ui_Backlight_Brightness_Btn2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Backlight_Brightness_Btn2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Backlight_Brightness_Btn2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Backlight_Brightness_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Backlight_Brightness_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Backlight_Brightness_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Backlight_Brightness_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Brightness_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Backlight_Brightness_Btn2, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Backlight_Time2 = lv_obj_create(ui_Backlight_Settings_items2);
    lv_obj_remove_style_all(ui_Backlight_Time2);
    lv_obj_set_width(ui_Backlight_Time2, 480);
    lv_obj_set_height(ui_Backlight_Time2, 70);
    lv_obj_set_x(ui_Backlight_Time2, 0);
    lv_obj_set_y(ui_Backlight_Time2, -110);
    lv_obj_set_align(ui_Backlight_Time2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Backlight_Time2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Backlight_Time_Text2 = lv_label_create(ui_Backlight_Time2);
    lv_obj_set_width(ui_Backlight_Time_Text2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Time_Text2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Backlight_Time_Text2, 55);
    lv_obj_set_y(ui_Backlight_Time_Text2, 0);
    lv_obj_set_align(ui_Backlight_Time_Text2, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Backlight_Time_Text2, "背光时间");
    lv_obj_set_style_text_color(ui_Backlight_Time_Text2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Backlight_Time_Text2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Backlight_Time_Text2, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Time_Line2 = lv_obj_create(ui_Backlight_Time2);
    lv_obj_set_width(ui_Backlight_Time_Line2, 450);
    lv_obj_set_height(ui_Backlight_Time_Line2, 3);
    lv_obj_set_x(ui_Backlight_Time_Line2, -1);
    lv_obj_set_y(ui_Backlight_Time_Line2, 30);
    lv_obj_set_align(ui_Backlight_Time_Line2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Backlight_Time_Line2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Backlight_Time_Btn2 = lv_btn_create(ui_Backlight_Time2);
    lv_obj_set_width(ui_Backlight_Time_Btn2, 480);
    lv_obj_set_height(ui_Backlight_Time_Btn2, 70);
    lv_obj_set_align(ui_Backlight_Time_Btn2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Backlight_Time_Btn2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Backlight_Time_Btn2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Backlight_Time_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Backlight_Time_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Backlight_Time_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Backlight_Time_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Time_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Backlight_Time_Btn2, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Backlight_Brightness_Panel2 = lv_obj_create(ui_Settings_Backlight_Window);
    lv_obj_set_width(ui_Backlight_Brightness_Panel2, 300);
    lv_obj_set_height(ui_Backlight_Brightness_Panel2, 180);
    lv_obj_set_align(ui_Backlight_Brightness_Panel2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Backlight_Brightness_Panel2, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Backlight_Brightness_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_Backlight_Brightness_Panel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Backlight_Brightness_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Brightness_Panel_Text2 = lv_label_create(ui_Backlight_Brightness_Panel2);
    lv_obj_set_width(ui_Backlight_Brightness_Panel_Text2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Brightness_Panel_Text2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Backlight_Brightness_Panel_Text2, 0);
    lv_obj_set_y(ui_Backlight_Brightness_Panel_Text2, -54);
    lv_obj_set_align(ui_Backlight_Brightness_Panel_Text2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Backlight_Brightness_Panel_Text2, "背光亮度");
    lv_obj_set_style_text_color(ui_Backlight_Brightness_Panel_Text2, lv_color_hex(0x000000),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Backlight_Brightness_Panel_Text2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Backlight_Brightness_Panel_Text2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Backlight_Brightness_Panel_Text2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Backlight_Brightness_Panel_Text2, &ui_font_LanTingFine22,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Brightness_Verify_Btn2 = lv_obj_create(ui_Backlight_Brightness_Panel2);
    lv_obj_set_width(ui_Backlight_Brightness_Verify_Btn2, 155);
    lv_obj_set_height(ui_Backlight_Brightness_Verify_Btn2, 60);
    lv_obj_set_x(ui_Backlight_Brightness_Verify_Btn2, -77);
    lv_obj_set_y(ui_Backlight_Brightness_Verify_Btn2, 68);
    lv_obj_set_align(ui_Backlight_Brightness_Verify_Btn2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Backlight_Brightness_Verify_Btn2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Backlight_Brightness_Verify_Btn2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER,
                          LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Backlight_Brightness_Verify_Btn2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Backlight_Brightness_Verify_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Brightness_Verify_Btn2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Backlight_Brightness_Verify_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Backlight_Brightness_Verify_Btn2, lv_color_hex(0x000000),
                                  LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Backlight_Brightness_Verify_Btn2, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Backlight_Brightness_Verify_Btn2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Brightness_Verify_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Backlight_Brightness_Verify_Btn2, 30, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Backlight_Brightness_Verify_Btn_Text2 = lv_label_create(ui_Backlight_Brightness_Verify_Btn2);
    lv_obj_set_width(ui_Backlight_Brightness_Verify_Btn_Text2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Brightness_Verify_Btn_Text2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Backlight_Brightness_Verify_Btn_Text2, 4);
    lv_obj_set_y(ui_Backlight_Brightness_Verify_Btn_Text2, -2);
    lv_obj_set_align(ui_Backlight_Brightness_Verify_Btn_Text2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Backlight_Brightness_Verify_Btn_Text2, "确认");
    lv_obj_set_style_text_font(ui_Backlight_Brightness_Verify_Btn_Text2, &ui_font_LanTingFine22,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Brightness_Cancel_Btn2 = lv_obj_create(ui_Backlight_Brightness_Panel2);
    lv_obj_set_width(ui_Backlight_Brightness_Cancel_Btn2, 155);
    lv_obj_set_height(ui_Backlight_Brightness_Cancel_Btn2, 60);
    lv_obj_set_x(ui_Backlight_Brightness_Cancel_Btn2, 77);
    lv_obj_set_y(ui_Backlight_Brightness_Cancel_Btn2, 68);
    lv_obj_set_align(ui_Backlight_Brightness_Cancel_Btn2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Backlight_Brightness_Cancel_Btn2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Backlight_Brightness_Cancel_Btn2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER,
                          LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Backlight_Brightness_Cancel_Btn2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Backlight_Brightness_Cancel_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Brightness_Cancel_Btn2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Backlight_Brightness_Cancel_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Backlight_Brightness_Cancel_Btn2, lv_color_hex(0x000000),
                                  LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Backlight_Brightness_Cancel_Btn2, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Backlight_Brightness_Cancel_Btn2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Brightness_Cancel_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Backlight_Brightness_Cancel_Btn2, 30, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Backlight_Brightness_Cancel_Text2 = lv_label_create(ui_Backlight_Brightness_Cancel_Btn2);
    lv_obj_set_width(ui_Backlight_Brightness_Cancel_Text2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Brightness_Cancel_Text2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Backlight_Brightness_Cancel_Text2, 4);
    lv_obj_set_y(ui_Backlight_Brightness_Cancel_Text2, -2);
    lv_obj_set_align(ui_Backlight_Brightness_Cancel_Text2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Backlight_Brightness_Cancel_Text2, "取消");
    lv_obj_set_style_text_font(ui_Backlight_Brightness_Cancel_Text2, &ui_font_LanTingFine22,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Brightness_Value_Panel2 = lv_obj_create(ui_Backlight_Brightness_Panel2);
    lv_obj_set_width(ui_Backlight_Brightness_Value_Panel2, 140);
    lv_obj_set_height(ui_Backlight_Brightness_Value_Panel2, 39);
    lv_obj_set_x(ui_Backlight_Brightness_Value_Panel2, 0);
    lv_obj_set_y(ui_Backlight_Brightness_Value_Panel2, -13);
    lv_obj_set_align(ui_Backlight_Brightness_Value_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Backlight_Brightness_Value_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Backlight_Brightness_Value_Panel2, lv_color_hex(0x959CFA),
                              LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Backlight_Brightness_Value_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Backlight_Brightness_Value_Panel2, lv_color_hex(0x000000),
                                  LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Backlight_Brightness_Value_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Brightness_Value2 = lv_label_create(ui_Backlight_Brightness_Value_Panel2);
    lv_obj_set_width(ui_Backlight_Brightness_Value2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Brightness_Value2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Backlight_Brightness_Value2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Backlight_Brightness_Value2, "5");
    lv_obj_set_style_text_font(ui_Backlight_Brightness_Value2, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Brightness_Dec_Btn2 = lv_btn_create(ui_Backlight_Brightness_Panel2);
    lv_obj_set_width(ui_Backlight_Brightness_Dec_Btn2, 60);
    lv_obj_set_height(ui_Backlight_Brightness_Dec_Btn2, 60);
    lv_obj_set_x(ui_Backlight_Brightness_Dec_Btn2, -107);
    lv_obj_set_y(ui_Backlight_Brightness_Dec_Btn2, -13);
    lv_obj_set_align(ui_Backlight_Brightness_Dec_Btn2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Backlight_Brightness_Dec_Btn2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Backlight_Brightness_Dec_Btn2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER,
                          LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Backlight_Brightness_Dec_Btn2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Backlight_Brightness_Dec_Btn2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Backlight_Brightness_Dec_Btn2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Backlight_Brightness_Dec_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Backlight_Brightness_Dec_Btn2, lv_color_hex(0x000000),
                                  LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Backlight_Brightness_Dec_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Brightness_Dec_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Backlight_Brightness_Dec_Btn2, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Backlight_Brightness_Dec_Icon2 = lv_img_create(ui_Backlight_Brightness_Dec_Btn2);
    lv_img_set_src(ui_Backlight_Brightness_Dec_Icon2, &ui_img_404002205);
    lv_obj_set_width(ui_Backlight_Brightness_Dec_Icon2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Brightness_Dec_Icon2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Backlight_Brightness_Dec_Icon2, 1);
    lv_obj_set_y(ui_Backlight_Brightness_Dec_Icon2, -1);
    lv_obj_set_align(ui_Backlight_Brightness_Dec_Icon2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Backlight_Brightness_Dec_Icon2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Backlight_Brightness_Dec_Icon2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Backlight_Brightness_Dec_Icon2, 300);

    ui_Backlight_Brightness_Add_Btn2 = lv_btn_create(ui_Backlight_Brightness_Panel2);
    lv_obj_set_width(ui_Backlight_Brightness_Add_Btn2, 60);
    lv_obj_set_height(ui_Backlight_Brightness_Add_Btn2, 60);
    lv_obj_set_x(ui_Backlight_Brightness_Add_Btn2, 107);
    lv_obj_set_y(ui_Backlight_Brightness_Add_Btn2, -13);
    lv_obj_set_align(ui_Backlight_Brightness_Add_Btn2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Backlight_Brightness_Add_Btn2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Backlight_Brightness_Add_Btn2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER,
                          LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Backlight_Brightness_Add_Btn2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Backlight_Brightness_Add_Btn2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Backlight_Brightness_Add_Btn2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Backlight_Brightness_Add_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Backlight_Brightness_Add_Btn2, lv_color_hex(0x000000),
                                  LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Backlight_Brightness_Add_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Brightness_Add_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Backlight_Brightness_Add_Btn2, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Backlight_Brightness_Add_Icon2 = lv_img_create(ui_Backlight_Brightness_Add_Btn2);
    lv_img_set_src(ui_Backlight_Brightness_Add_Icon2, &ui_img_239308628);
    lv_obj_set_width(ui_Backlight_Brightness_Add_Icon2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Brightness_Add_Icon2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Backlight_Brightness_Add_Icon2, 1);
    lv_obj_set_y(ui_Backlight_Brightness_Add_Icon2, -1);
    lv_obj_set_align(ui_Backlight_Brightness_Add_Icon2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Backlight_Brightness_Add_Icon2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Backlight_Brightness_Add_Icon2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Backlight_Brightness_Add_Icon2, 300);

    ui_Backlight_Time_Panel2 = lv_obj_create(ui_Settings_Backlight_Window);
    lv_obj_set_width(ui_Backlight_Time_Panel2, 300);
    lv_obj_set_height(ui_Backlight_Time_Panel2, 180);
    lv_obj_set_align(ui_Backlight_Time_Panel2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Backlight_Time_Panel2, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Backlight_Time_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_Backlight_Time_Panel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Backlight_Time_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Time_Panel_Text2 = lv_label_create(ui_Backlight_Time_Panel2);
    lv_obj_set_width(ui_Backlight_Time_Panel_Text2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Time_Panel_Text2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Backlight_Time_Panel_Text2, 0);
    lv_obj_set_y(ui_Backlight_Time_Panel_Text2, -54);
    lv_obj_set_align(ui_Backlight_Time_Panel_Text2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Backlight_Time_Panel_Text2, "背光时间");
    lv_obj_set_style_text_color(ui_Backlight_Time_Panel_Text2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Backlight_Time_Panel_Text2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Backlight_Time_Panel_Text2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Backlight_Time_Panel_Text2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Backlight_Time_Panel_Text2, &ui_font_LanTingFine22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Time_Verify_Btn2 = lv_obj_create(ui_Backlight_Time_Panel2);
    lv_obj_set_width(ui_Backlight_Time_Verify_Btn2, 155);
    lv_obj_set_height(ui_Backlight_Time_Verify_Btn2, 60);
    lv_obj_set_x(ui_Backlight_Time_Verify_Btn2, -77);
    lv_obj_set_y(ui_Backlight_Time_Verify_Btn2, 68);
    lv_obj_set_align(ui_Backlight_Time_Verify_Btn2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Backlight_Time_Verify_Btn2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Backlight_Time_Verify_Btn2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Backlight_Time_Verify_Btn2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Backlight_Time_Verify_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Time_Verify_Btn2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Backlight_Time_Verify_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Backlight_Time_Verify_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Backlight_Time_Verify_Btn2, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Backlight_Time_Verify_Btn2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Time_Verify_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Backlight_Time_Verify_Btn2, 30, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Backlight_Time_Verify_Btn_Text2 = lv_label_create(ui_Backlight_Time_Verify_Btn2);
    lv_obj_set_width(ui_Backlight_Time_Verify_Btn_Text2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Time_Verify_Btn_Text2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Backlight_Time_Verify_Btn_Text2, 4);
    lv_obj_set_y(ui_Backlight_Time_Verify_Btn_Text2, -2);
    lv_obj_set_align(ui_Backlight_Time_Verify_Btn_Text2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Backlight_Time_Verify_Btn_Text2, "确认");
    lv_obj_set_style_text_font(ui_Backlight_Time_Verify_Btn_Text2, &ui_font_LanTingFine22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Time_Cancel_Btn2 = lv_obj_create(ui_Backlight_Time_Panel2);
    lv_obj_set_width(ui_Backlight_Time_Cancel_Btn2, 155);
    lv_obj_set_height(ui_Backlight_Time_Cancel_Btn2, 60);
    lv_obj_set_x(ui_Backlight_Time_Cancel_Btn2, 77);
    lv_obj_set_y(ui_Backlight_Time_Cancel_Btn2, 68);
    lv_obj_set_align(ui_Backlight_Time_Cancel_Btn2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Backlight_Time_Cancel_Btn2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Backlight_Time_Cancel_Btn2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Backlight_Time_Cancel_Btn2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Backlight_Time_Cancel_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Time_Cancel_Btn2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Backlight_Time_Cancel_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Backlight_Time_Cancel_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Backlight_Time_Cancel_Btn2, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Backlight_Time_Cancel_Btn2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Time_Cancel_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Backlight_Time_Cancel_Btn2, 30, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Backlight_Time_Cancel_Text2 = lv_label_create(ui_Backlight_Time_Cancel_Btn2);
    lv_obj_set_width(ui_Backlight_Time_Cancel_Text2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Time_Cancel_Text2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Backlight_Time_Cancel_Text2, 4);
    lv_obj_set_y(ui_Backlight_Time_Cancel_Text2, -2);
    lv_obj_set_align(ui_Backlight_Time_Cancel_Text2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Backlight_Time_Cancel_Text2, "取消");
    lv_obj_set_style_text_font(ui_Backlight_Time_Cancel_Text2, &ui_font_LanTingFine22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Time_Value_Panel2 = lv_obj_create(ui_Backlight_Time_Panel2);
    lv_obj_set_width(ui_Backlight_Time_Value_Panel2, 140);
    lv_obj_set_height(ui_Backlight_Time_Value_Panel2, 39);
    lv_obj_set_x(ui_Backlight_Time_Value_Panel2, 0);
    lv_obj_set_y(ui_Backlight_Time_Value_Panel2, -13);
    lv_obj_set_align(ui_Backlight_Time_Value_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Backlight_Time_Value_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Backlight_Time_Value_Panel2, lv_color_hex(0x959CFA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Backlight_Time_Value_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Backlight_Time_Value_Panel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Backlight_Time_Value_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Time_Value2 = lv_label_create(ui_Backlight_Time_Value_Panel2);
    lv_obj_set_width(ui_Backlight_Time_Value2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Time_Value2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Backlight_Time_Value2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Backlight_Time_Value2, "5");
    lv_obj_set_style_text_font(ui_Backlight_Time_Value2, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Backlight_Time_Dec_Btn2 = lv_btn_create(ui_Backlight_Time_Panel2);
    lv_obj_set_width(ui_Backlight_Time_Dec_Btn2, 60);
    lv_obj_set_height(ui_Backlight_Time_Dec_Btn2, 60);
    lv_obj_set_x(ui_Backlight_Time_Dec_Btn2, -107);
    lv_obj_set_y(ui_Backlight_Time_Dec_Btn2, -13);
    lv_obj_set_align(ui_Backlight_Time_Dec_Btn2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Backlight_Time_Dec_Btn2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Backlight_Time_Dec_Btn2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Backlight_Time_Dec_Btn2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Backlight_Time_Dec_Btn2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Backlight_Time_Dec_Btn2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Backlight_Time_Dec_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Backlight_Time_Dec_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Backlight_Time_Dec_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Time_Dec_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Backlight_Time_Dec_Btn2, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Backlight_Time_Dec_Icon2 = lv_img_create(ui_Backlight_Time_Dec_Btn2);
    lv_img_set_src(ui_Backlight_Time_Dec_Icon2, &ui_img_404002205);
    lv_obj_set_width(ui_Backlight_Time_Dec_Icon2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Time_Dec_Icon2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Backlight_Time_Dec_Icon2, 1);
    lv_obj_set_y(ui_Backlight_Time_Dec_Icon2, -1);
    lv_obj_set_align(ui_Backlight_Time_Dec_Icon2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Backlight_Time_Dec_Icon2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Backlight_Time_Dec_Icon2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Backlight_Time_Dec_Icon2, 300);

    ui_Backlight_Time_Add_Btn2 = lv_btn_create(ui_Backlight_Time_Panel2);
    lv_obj_set_width(ui_Backlight_Time_Add_Btn2, 60);
    lv_obj_set_height(ui_Backlight_Time_Add_Btn2, 60);
    lv_obj_set_x(ui_Backlight_Time_Add_Btn2, 107);
    lv_obj_set_y(ui_Backlight_Time_Add_Btn2, -13);
    lv_obj_set_align(ui_Backlight_Time_Add_Btn2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Backlight_Time_Add_Btn2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Backlight_Time_Add_Btn2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Backlight_Time_Add_Btn2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Backlight_Time_Add_Btn2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Backlight_Time_Add_Btn2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Backlight_Time_Add_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Backlight_Time_Add_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Backlight_Time_Add_Btn2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Backlight_Time_Add_Btn2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Backlight_Time_Add_Btn2, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Backlight_Time_Add_Icon2 = lv_img_create(ui_Backlight_Time_Add_Btn2);
    lv_img_set_src(ui_Backlight_Time_Add_Icon2, &ui_img_239308628);
    lv_obj_set_width(ui_Backlight_Time_Add_Icon2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Backlight_Time_Add_Icon2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Backlight_Time_Add_Icon2, 1);
    lv_obj_set_y(ui_Backlight_Time_Add_Icon2, -1);
    lv_obj_set_align(ui_Backlight_Time_Add_Icon2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Backlight_Time_Add_Icon2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Backlight_Time_Add_Icon2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Backlight_Time_Add_Icon2, 300);

    ui_Header_Volume12 = ui_Header_Volume_create(ui_Settings_Backlight_Window);
    lv_obj_set_x(ui_Header_Volume12, 187);
    lv_obj_set_y(ui_Header_Volume12, -216);



    lv_obj_add_event_cb(ui_BackToSettingsWindow, ui_event_BackToSettingsWindow, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Backlight_Brightness_Btn2, ui_event_Backlight_Brightness_Btn2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Backlight_Time_Btn2, ui_event_Backlight_Time_Btn2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Backlight_Brightness_Verify_Btn2, ui_event_Backlight_Brightness_Verify_Btn2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Backlight_Brightness_Cancel_Btn2, ui_event_Backlight_Brightness_Cancel_Btn2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Backlight_Brightness_Dec_Btn2, ui_event_Backlight_Brightness_Dec_Btn2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Backlight_Brightness_Add_Btn2, ui_event_Backlight_Brightness_Add_Btn2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Backlight_Time_Verify_Btn2, ui_event_Backlight_Time_Verify_Btn2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Backlight_Time_Cancel_Btn2, ui_event_Backlight_Time_Cancel_Btn2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Backlight_Time_Dec_Btn2, ui_event_Backlight_Time_Dec_Btn2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Backlight_Time_Add_Btn2, ui_event_Backlight_Time_Add_Btn2, LV_EVENT_ALL, NULL);

}
