// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Bluetooth_WIndow_screen_init(void)
{
    ui_Bluetooth_WIndow = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Bluetooth_WIndow, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Bluetooth_WIndow, &ui_img_861711258, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Header_Bluetooth = lv_obj_create(ui_Bluetooth_WIndow);
    lv_obj_remove_style_all(ui_Header_Bluetooth);
    lv_obj_set_height(ui_Header_Bluetooth, 30);
    lv_obj_set_width(ui_Header_Bluetooth, lv_pct(100));
    lv_obj_set_x(ui_Header_Bluetooth, 0);
    lv_obj_set_y(ui_Header_Bluetooth, -225);
    lv_obj_set_align(ui_Header_Bluetooth, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Header_Bluetooth, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Header_Bluetooth_Text = lv_label_create(ui_Header_Bluetooth);
    lv_obj_set_width(ui_Header_Bluetooth_Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Header_Bluetooth_Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Header_Bluetooth_Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Header_Bluetooth_Text, "蓝牙");
    lv_obj_set_style_text_color(ui_Header_Bluetooth_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Header_Bluetooth_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Header_Bluetooth_Text, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Header_Bluetooth_Time = lv_label_create(ui_Header_Bluetooth);
    lv_obj_set_width(ui_Header_Bluetooth_Time, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Header_Bluetooth_Time, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Header_Bluetooth_Time, 300);
    lv_obj_set_y(ui_Header_Bluetooth_Time, 0);
    lv_obj_set_align(ui_Header_Bluetooth_Time, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Header_Bluetooth_Time, "");
    lv_obj_set_style_text_color(ui_Header_Bluetooth_Time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Header_Bluetooth_Time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Header_Bluetooth_Time, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bluetooth_Name = lv_obj_create(ui_Bluetooth_WIndow);
    lv_obj_remove_style_all(ui_Bluetooth_Name);
    lv_obj_set_width(ui_Bluetooth_Name, 480);
    lv_obj_set_height(ui_Bluetooth_Name, 50);
    lv_obj_set_x(ui_Bluetooth_Name, 0);
    lv_obj_set_y(ui_Bluetooth_Name, -100);
    lv_obj_set_align(ui_Bluetooth_Name, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Bluetooth_Name, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Bluetooth_Name_Text = lv_label_create(ui_Bluetooth_Name);
    lv_obj_set_width(ui_Bluetooth_Name_Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Bluetooth_Name_Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Bluetooth_Name_Text, 25);
    lv_obj_set_y(ui_Bluetooth_Name_Text, -5);
    lv_obj_set_align(ui_Bluetooth_Name_Text, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Bluetooth_Name_Text, "蓝牙名称/房间号:");
    lv_obj_set_style_text_color(ui_Bluetooth_Name_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Bluetooth_Name_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Bluetooth_Name_Text, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bluetooth_Name_Line = lv_obj_create(ui_Bluetooth_Name);
    lv_obj_set_width(ui_Bluetooth_Name_Line, 417);
    lv_obj_set_height(ui_Bluetooth_Name_Line, 3);
    lv_obj_set_x(ui_Bluetooth_Name_Line, 0);
    lv_obj_set_y(ui_Bluetooth_Name_Line, 8);
    lv_obj_set_align(ui_Bluetooth_Name_Line, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Bluetooth_Name_Line, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Bluetooth_Name_Value = lv_label_create(ui_Bluetooth_Name);
    lv_obj_set_width(ui_Bluetooth_Name_Value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Bluetooth_Name_Value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Bluetooth_Name_Value, 30);
    lv_obj_set_y(ui_Bluetooth_Name_Value, -5);
    lv_obj_set_align(ui_Bluetooth_Name_Value, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Bluetooth_Name_Value, "BT-35");
    lv_obj_set_style_text_color(ui_Bluetooth_Name_Value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Bluetooth_Name_Value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Bluetooth_Name_Value, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bluetooth_Password = lv_obj_create(ui_Bluetooth_WIndow);
    lv_obj_remove_style_all(ui_Bluetooth_Password);
    lv_obj_set_width(ui_Bluetooth_Password, 480);
    lv_obj_set_height(ui_Bluetooth_Password, 50);
    lv_obj_set_x(ui_Bluetooth_Password, 0);
    lv_obj_set_y(ui_Bluetooth_Password, -35);
    lv_obj_set_align(ui_Bluetooth_Password, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Bluetooth_Password, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Bluetooth_Password_Text = lv_label_create(ui_Bluetooth_Password);
    lv_obj_set_width(ui_Bluetooth_Password_Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Bluetooth_Password_Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Bluetooth_Password_Text, 25);
    lv_obj_set_y(ui_Bluetooth_Password_Text, -5);
    lv_obj_set_align(ui_Bluetooth_Password_Text, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Bluetooth_Password_Text, "蓝牙密码:");
    lv_obj_set_style_text_color(ui_Bluetooth_Password_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Bluetooth_Password_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Bluetooth_Password_Text, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bluetooth_Password_Line = lv_obj_create(ui_Bluetooth_Password);
    lv_obj_set_width(ui_Bluetooth_Password_Line, 417);
    lv_obj_set_height(ui_Bluetooth_Password_Line, 3);
    lv_obj_set_x(ui_Bluetooth_Password_Line, 0);
    lv_obj_set_y(ui_Bluetooth_Password_Line, 8);
    lv_obj_set_align(ui_Bluetooth_Password_Line, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Bluetooth_Password_Line, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Bluetooth_Password_Value = lv_label_create(ui_Bluetooth_Password);
    lv_obj_set_width(ui_Bluetooth_Password_Value, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Bluetooth_Password_Value, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Bluetooth_Password_Value, 30);
    lv_obj_set_y(ui_Bluetooth_Password_Value, -5);
    lv_obj_set_align(ui_Bluetooth_Password_Value, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Bluetooth_Password_Value, "123456");
    lv_obj_set_style_text_color(ui_Bluetooth_Password_Value, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Bluetooth_Password_Value, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Bluetooth_Password_Value, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bluetooth_Guide_Text = lv_label_create(ui_Bluetooth_WIndow);
    lv_obj_set_width(ui_Bluetooth_Guide_Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Bluetooth_Guide_Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Bluetooth_Guide_Text, 36);
    lv_obj_set_y(ui_Bluetooth_Guide_Text, -6);
    lv_obj_set_align(ui_Bluetooth_Guide_Text, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Bluetooth_Guide_Text, "请打开手机蓝牙后, 寻找此房号对应的设备后连接");
    lv_obj_set_style_text_color(ui_Bluetooth_Guide_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Bluetooth_Guide_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Bluetooth_Guide_Text, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Bluetooth_Guide_Text, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Bluetooth_Guide_Text, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BackToMainWindowBtn3 = lv_imgbtn_create(ui_Bluetooth_WIndow);
    lv_imgbtn_set_src(ui_BackToMainWindowBtn3, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_348826415, NULL);
    lv_imgbtn_set_src(ui_BackToMainWindowBtn3, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_348826415, NULL);
    lv_obj_set_height(ui_BackToMainWindowBtn3, 50);
    lv_obj_set_width(ui_BackToMainWindowBtn3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_BackToMainWindowBtn3, -212);
    lv_obj_set_y(ui_BackToMainWindowBtn3, -212);
    lv_obj_set_align(ui_BackToMainWindowBtn3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BackToMainWindowBtn3, LV_OBJ_FLAG_PRESS_LOCK);      /// Flags
    lv_obj_set_style_img_recolor(ui_BackToMainWindowBtn3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_BackToMainWindowBtn3, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Header_Volume3 = ui_Header_Volume_create(ui_Bluetooth_WIndow);
    lv_obj_set_x(ui_Header_Volume3, 187);
    lv_obj_set_y(ui_Header_Volume3, -216);



    lv_obj_add_event_cb(ui_BackToMainWindowBtn3, ui_event_BackToMainWindowBtn3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Bluetooth_WIndow, ui_event_Bluetooth_WIndow, LV_EVENT_ALL, NULL);

}
