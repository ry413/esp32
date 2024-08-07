// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Guide_Window_screen_init(void)
{
    ui_Guide_Window = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Guide_Window, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Guide_Window, &ui_img_861711258, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Header_Guide = lv_obj_create(ui_Guide_Window);
    lv_obj_remove_style_all(ui_Header_Guide);
    lv_obj_set_height(ui_Header_Guide, 30);
    lv_obj_set_width(ui_Header_Guide, lv_pct(100));
    lv_obj_set_x(ui_Header_Guide, 0);
    lv_obj_set_y(ui_Header_Guide, -225);
    lv_obj_set_align(ui_Header_Guide, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Header_Guide, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Header_Guide_Text = lv_label_create(ui_Header_Guide);
    lv_obj_set_width(ui_Header_Guide_Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Header_Guide_Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Header_Guide_Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Header_Guide_Text, "指南");
    lv_obj_set_style_text_color(ui_Header_Guide_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Header_Guide_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Header_Guide_Text, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Header_Guide_Time = lv_label_create(ui_Header_Guide);
    lv_obj_set_width(ui_Header_Guide_Time, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Header_Guide_Time, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Header_Guide_Time, 300);
    lv_obj_set_y(ui_Header_Guide_Time, 0);
    lv_obj_set_align(ui_Header_Guide_Time, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Header_Guide_Time, "");
    lv_obj_set_style_text_color(ui_Header_Guide_Time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Header_Guide_Time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Header_Guide_Time, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Guide_Title = lv_label_create(ui_Guide_Window);
    lv_obj_set_width(ui_Guide_Title, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Guide_Title, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Guide_Title, -134);
    lv_obj_set_y(ui_Guide_Title, -171);
    lv_obj_set_align(ui_Guide_Title, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Guide_Title, "旅途中的 自然自在");
    lv_obj_set_style_text_color(ui_Guide_Title, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Guide_Title, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Guide_Title, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Guide_Content = lv_label_create(ui_Guide_Window);
    lv_obj_set_width(ui_Guide_Content, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Guide_Content, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Guide_Content, 0);
    lv_obj_set_y(ui_Guide_Content, -60);
    lv_obj_set_align(ui_Guide_Content, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Guide_Content,
                      "丽枫酒店是薰衣草元素, 香氛文化与酒店的结合，在\n丽能量的赋能下，淬炼出品牌特有的价值主张--自然\n自在。秉承：自然随心的生活态度，让一切张弛有度\n，自然自在。在人与自然的美妙平衡下，在自然元素\n的磁场里愉悦自己，切换生活里从繁至简的慵懒模式\n。通过自然元素，芳香之境的自在体验的深度打造，\n为每一位向往自在人生的旅人提供一个随心随意的\n居住空间。");
    lv_obj_set_style_text_color(ui_Guide_Content, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Guide_Content, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Guide_Content, &ui_font_LanTing18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Popup_WIndow = lv_obj_create(ui_Guide_Window);
    lv_obj_remove_style_all(ui_Popup_WIndow);
    lv_obj_set_width(ui_Popup_WIndow, 480);
    lv_obj_set_height(ui_Popup_WIndow, 320);
    lv_obj_set_x(ui_Popup_WIndow, 0);
    lv_obj_set_y(ui_Popup_WIndow, 80);
    lv_obj_set_align(ui_Popup_WIndow, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Popup_WIndow, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Popup_WIndow, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Popup_WIndow, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_More_Info_Close_Btn = lv_imgbtn_create(ui_Popup_WIndow);
    lv_imgbtn_set_src(ui_More_Info_Close_Btn, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1526512104, NULL);
    lv_imgbtn_set_src(ui_More_Info_Close_Btn, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_1526512104, NULL);
    lv_obj_set_height(ui_More_Info_Close_Btn, 48);
    lv_obj_set_width(ui_More_Info_Close_Btn, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_More_Info_Close_Btn, 214);
    lv_obj_set_y(ui_More_Info_Close_Btn, -134);
    lv_obj_set_align(ui_More_Info_Close_Btn, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_More_Info_Close_Btn, LV_OBJ_FLAG_PRESS_LOCK);      /// Flags

    ui_More_Info_Text = lv_label_create(ui_Popup_WIndow);
    lv_obj_set_width(ui_More_Info_Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_More_Info_Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_More_Info_Text, -74);
    lv_obj_set_y(ui_More_Info_Text, -133);
    lv_obj_set_align(ui_More_Info_Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_More_Info_Text, "更多信息敬请关注：");
    lv_obj_set_style_text_font(ui_More_Info_Text, &ui_font_LanTingFine24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_QR_Code = lv_img_create(ui_Popup_WIndow);
    lv_obj_set_width(ui_QR_Code, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_QR_Code, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_QR_Code, 2);
    lv_obj_set_y(ui_QR_Code, 15);
    lv_obj_set_align(ui_QR_Code, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_QR_Code, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_QR_Code, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_QR_Code, 2);

    ui_BackToMainWindowBtn6 = lv_imgbtn_create(ui_Guide_Window);
    lv_imgbtn_set_src(ui_BackToMainWindowBtn6, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_348826415, NULL);
    lv_imgbtn_set_src(ui_BackToMainWindowBtn6, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_348826415, NULL);
    lv_obj_set_height(ui_BackToMainWindowBtn6, 50);
    lv_obj_set_width(ui_BackToMainWindowBtn6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_BackToMainWindowBtn6, -212);
    lv_obj_set_y(ui_BackToMainWindowBtn6, -212);
    lv_obj_set_align(ui_BackToMainWindowBtn6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BackToMainWindowBtn6, LV_OBJ_FLAG_PRESS_LOCK);      /// Flags
    lv_obj_set_style_img_recolor(ui_BackToMainWindowBtn6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_BackToMainWindowBtn6, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Guide_Header_Volume = ui_Header_Volume_create(ui_Guide_Window);
    lv_obj_set_x(ui_Guide_Header_Volume, 187);
    lv_obj_set_y(ui_Guide_Header_Volume, -216);

    ui_Guide_Window_Volume_adjust = ui_VolumeAdjustDisabledRange_create(ui_Guide_Window);
    lv_obj_set_x(ui_Guide_Window_Volume_adjust, 0);
    lv_obj_set_y(ui_Guide_Window_Volume_adjust, 0);
    lv_obj_add_flag(ui_Guide_Window_Volume_adjust, LV_OBJ_FLAG_HIDDEN);

    lv_obj_add_event_cb(ui_More_Info_Close_Btn, ui_event_More_Info_Close_Btn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BackToMainWindowBtn6, ui_event_BackToMainWindowBtn6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Guide_Window, ui_event_Guide_Window, LV_EVENT_ALL, NULL);

}
