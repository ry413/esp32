// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Wake_up_Window_screen_init(void)
{
    ui_Wake_up_Window = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Wake_up_Window, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Wake_up_Window, &ui_img_861711258, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Header_Wake_up = lv_obj_create(ui_Wake_up_Window);
    lv_obj_remove_style_all(ui_Header_Wake_up);
    lv_obj_set_height(ui_Header_Wake_up, 30);
    lv_obj_set_width(ui_Header_Wake_up, lv_pct(100));
    lv_obj_set_x(ui_Header_Wake_up, 0);
    lv_obj_set_y(ui_Header_Wake_up, -225);
    lv_obj_set_align(ui_Header_Wake_up, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Header_Wake_up, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Header_Wake_up_Text = lv_label_create(ui_Header_Wake_up);
    lv_obj_set_width(ui_Header_Wake_up_Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Header_Wake_up_Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Header_Wake_up_Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Header_Wake_up_Text, "设置");
    lv_obj_set_style_text_color(ui_Header_Wake_up_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Header_Wake_up_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Header_Wake_up_Text, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Header_Wake_up_Time = lv_label_create(ui_Header_Wake_up);
    lv_obj_set_width(ui_Header_Wake_up_Time, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Header_Wake_up_Time, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Header_Wake_up_Time, 300);
    lv_obj_set_y(ui_Header_Wake_up_Time, 0);
    lv_obj_set_align(ui_Header_Wake_up_Time, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Header_Wake_up_Time, "");
    lv_obj_set_style_text_color(ui_Header_Wake_up_Time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Header_Wake_up_Time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Header_Wake_up_Time, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Custom_Ringtone = lv_obj_create(ui_Wake_up_Window);
    lv_obj_remove_style_all(ui_Custom_Ringtone);
    lv_obj_set_width(ui_Custom_Ringtone, 480);
    lv_obj_set_height(ui_Custom_Ringtone, 70);
    lv_obj_set_x(ui_Custom_Ringtone, 0);
    lv_obj_set_y(ui_Custom_Ringtone, -140);
    lv_obj_set_align(ui_Custom_Ringtone, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Custom_Ringtone, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Custom_Ringtone_Text = lv_label_create(ui_Custom_Ringtone);
    lv_obj_set_width(ui_Custom_Ringtone_Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Custom_Ringtone_Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Custom_Ringtone_Text, 76);
    lv_obj_set_y(ui_Custom_Ringtone_Text, 0);
    lv_obj_set_align(ui_Custom_Ringtone_Text, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Custom_Ringtone_Text, "自定铃声");
    lv_obj_set_style_text_color(ui_Custom_Ringtone_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Custom_Ringtone_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Custom_Ringtone_Text, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Custom_Ringtone_Line = lv_obj_create(ui_Custom_Ringtone);
    lv_obj_set_width(ui_Custom_Ringtone_Line, 450);
    lv_obj_set_height(ui_Custom_Ringtone_Line, 3);
    lv_obj_set_x(ui_Custom_Ringtone_Line, -1);
    lv_obj_set_y(ui_Custom_Ringtone_Line, 30);
    lv_obj_set_align(ui_Custom_Ringtone_Line, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Custom_Ringtone_Line, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Custom_Ringtone_Btn = lv_btn_create(ui_Custom_Ringtone);
    lv_obj_set_width(ui_Custom_Ringtone_Btn, 480);
    lv_obj_set_height(ui_Custom_Ringtone_Btn, 70);
    lv_obj_set_align(ui_Custom_Ringtone_Btn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Custom_Ringtone_Btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Custom_Ringtone_Btn, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Custom_Ringtone_Btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Custom_Ringtone_Btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Custom_Ringtone_Btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Custom_Ringtone_Btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Custom_Ringtone_Btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Custom_Ringtone_Btn, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Custom_Ringtone_Decora_Icon = lv_img_create(ui_Custom_Ringtone);
    lv_img_set_src(ui_Custom_Ringtone_Decora_Icon, &ui_img_1830113796);
    lv_obj_set_width(ui_Custom_Ringtone_Decora_Icon, LV_SIZE_CONTENT);   /// 32
    lv_obj_set_height(ui_Custom_Ringtone_Decora_Icon, LV_SIZE_CONTENT);    /// 32
    lv_obj_set_x(ui_Custom_Ringtone_Decora_Icon, 200);
    lv_obj_set_y(ui_Custom_Ringtone_Decora_Icon, -1);
    lv_obj_set_align(ui_Custom_Ringtone_Decora_Icon, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Custom_Ringtone_Decora_Icon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Custom_Ringtone_Decora_Icon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_angle(ui_Custom_Ringtone_Decora_Icon, 1800);

    ui_Wakeup_Time = lv_obj_create(ui_Wake_up_Window);
    lv_obj_remove_style_all(ui_Wakeup_Time);
    lv_obj_set_width(ui_Wakeup_Time, 480);
    lv_obj_set_height(ui_Wakeup_Time, 70);
    lv_obj_set_x(ui_Wakeup_Time, 0);
    lv_obj_set_y(ui_Wakeup_Time, -68);
    lv_obj_set_align(ui_Wakeup_Time, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Wakeup_Time, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Wakeup_Time_Text = lv_label_create(ui_Wakeup_Time);
    lv_obj_set_width(ui_Wakeup_Time_Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Wakeup_Time_Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Wakeup_Time_Text, 76);
    lv_obj_set_y(ui_Wakeup_Time_Text, 0);
    lv_obj_set_align(ui_Wakeup_Time_Text, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Wakeup_Time_Text, "叫醒时间");
    lv_obj_set_style_text_color(ui_Wakeup_Time_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Wakeup_Time_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Wakeup_Time_Text, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Wakeup_Time_Line = lv_obj_create(ui_Wakeup_Time);
    lv_obj_set_width(ui_Wakeup_Time_Line, 450);
    lv_obj_set_height(ui_Wakeup_Time_Line, 3);
    lv_obj_set_x(ui_Wakeup_Time_Line, -1);
    lv_obj_set_y(ui_Wakeup_Time_Line, 30);
    lv_obj_set_align(ui_Wakeup_Time_Line, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Wakeup_Time_Line, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Wakeup_Time_Btn = lv_btn_create(ui_Wakeup_Time);
    lv_obj_set_width(ui_Wakeup_Time_Btn, 480);
    lv_obj_set_height(ui_Wakeup_Time_Btn, 70);
    lv_obj_set_align(ui_Wakeup_Time_Btn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Wakeup_Time_Btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Wakeup_Time_Btn, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Wakeup_Time_Btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Wakeup_Time_Btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Wakeup_Time_Btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Wakeup_Time_Btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Wakeup_Time_Btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Wakeup_Time_Btn, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Wakeup_Time_Decora_Icon = lv_img_create(ui_Wakeup_Time);
    lv_img_set_src(ui_Wakeup_Time_Decora_Icon, &ui_img_1830113796);
    lv_obj_set_width(ui_Wakeup_Time_Decora_Icon, LV_SIZE_CONTENT);   /// 32
    lv_obj_set_height(ui_Wakeup_Time_Decora_Icon, LV_SIZE_CONTENT);    /// 32
    lv_obj_set_x(ui_Wakeup_Time_Decora_Icon, 200);
    lv_obj_set_y(ui_Wakeup_Time_Decora_Icon, -1);
    lv_obj_set_align(ui_Wakeup_Time_Decora_Icon, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Wakeup_Time_Decora_Icon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Wakeup_Time_Decora_Icon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_angle(ui_Wakeup_Time_Decora_Icon, 1800);

    ui_BackToMainWindowBtn5 = lv_imgbtn_create(ui_Wake_up_Window);
    lv_imgbtn_set_src(ui_BackToMainWindowBtn5, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_348826415, NULL);
    lv_imgbtn_set_src(ui_BackToMainWindowBtn5, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_348826415, NULL);
    lv_obj_set_height(ui_BackToMainWindowBtn5, 50);
    lv_obj_set_width(ui_BackToMainWindowBtn5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_BackToMainWindowBtn5, -212);
    lv_obj_set_y(ui_BackToMainWindowBtn5, -212);
    lv_obj_set_align(ui_BackToMainWindowBtn5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BackToMainWindowBtn5, LV_OBJ_FLAG_PRESS_LOCK);      /// Flags
    lv_obj_set_style_img_recolor(ui_BackToMainWindowBtn5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_BackToMainWindowBtn5, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Wakeup_Header_Volume = ui_Header_Volume_create(ui_Wake_up_Window);
    lv_obj_set_x(ui_Wakeup_Header_Volume, 187);
    lv_obj_set_y(ui_Wakeup_Header_Volume, -216);

    ui_Wakeup_Window_Volume_adjust = ui_Volume_Adjust_create(ui_Wake_up_Window);
    lv_obj_set_x(ui_Wakeup_Window_Volume_adjust, 0);
    lv_obj_set_y(ui_Wakeup_Window_Volume_adjust, 0);
    lv_obj_add_flag(ui_Wakeup_Window_Volume_adjust, LV_OBJ_FLAG_HIDDEN);

    // lv_obj_add_event_cb(ui_Custom_Ringtone_Btn, ui_event_Custom_Ringtone_Btn, LV_EVENT_ALL, NULL);
    // lv_obj_add_event_cb(ui_Wakeup_Time_Btn, ui_event_Wakeup_Time_Btn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BackToMainWindowBtn5, ui_event_BackToMainWindowBtn5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Wake_up_Window, ui_event_Wake_up_Window, LV_EVENT_ALL, NULL);

}
