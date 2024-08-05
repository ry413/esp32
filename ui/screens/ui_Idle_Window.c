// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Idle_Window_screen_init(void)
{
    ui_Idle_Window = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Idle_Window, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Idle_Window, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Idle_Window, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Idle_Window_Time = lv_label_create(ui_Idle_Window);
    lv_obj_set_width(ui_Idle_Window_Time, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Idle_Window_Time, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Idle_Window_Time, 0);
    lv_obj_set_y(ui_Idle_Window_Time, -57);
    lv_obj_set_align(ui_Idle_Window_Time, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Idle_Window_Time, "11:42");
    lv_obj_set_style_text_color(ui_Idle_Window_Time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Idle_Window_Time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Idle_Window_Time, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Idle_Window_Time, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Idle_Window_Time, &ui_font_Font100, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Idle_Window_Date = lv_label_create(ui_Idle_Window);
    lv_obj_set_width(ui_Idle_Window_Date, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Idle_Window_Date, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Idle_Window_Date, 0);
    lv_obj_set_y(ui_Idle_Window_Date, 33);
    lv_obj_set_align(ui_Idle_Window_Date, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Idle_Window_Date, "星期三/04月13日");
    lv_obj_set_style_text_color(ui_Idle_Window_Date, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Idle_Window_Date, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Idle_Window_Date, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Idle_Window_Date, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Idle_Window_Date, &ui_font_Font30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Back_To_Main_Window_Range = lv_obj_create(ui_Idle_Window);
    lv_obj_remove_style_all(ui_Back_To_Main_Window_Range);
    lv_obj_set_width(ui_Back_To_Main_Window_Range, 480);
    lv_obj_set_height(ui_Back_To_Main_Window_Range, 480);
    lv_obj_set_align(ui_Back_To_Main_Window_Range, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Back_To_Main_Window_Range, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Off_Screen_Btn = lv_obj_create(ui_Idle_Window);
    lv_obj_set_width(ui_Off_Screen_Btn, 120);
    lv_obj_set_height(ui_Off_Screen_Btn, 50);
    lv_obj_set_x(ui_Off_Screen_Btn, 0);
    lv_obj_set_y(ui_Off_Screen_Btn, 130);
    lv_obj_set_align(ui_Off_Screen_Btn, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Off_Screen_Btn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Off_Screen_Btn, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Off_Screen_Btn, lv_color_hex(0x8CA7FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Off_Screen_Btn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Off_Screen_Btn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Off_Screen_Btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Off_Screen_Text = lv_label_create(ui_Off_Screen_Btn);
    lv_obj_set_width(ui_Off_Screen_Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Off_Screen_Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Off_Screen_Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Off_Screen_Text, "熄屏");
    lv_obj_set_style_text_color(ui_Off_Screen_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Off_Screen_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Off_Screen_Text, &ui_font_Font30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Back_To_Main_Window_Range, ui_event_Back_To_Main_Window_Range, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Off_Screen_Btn, ui_event_Off_Screen_Btn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Idle_Window, ui_event_Idle_Window, LV_EVENT_ALL, NULL);

}
