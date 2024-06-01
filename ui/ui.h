// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

#include "ui_helpers.h"
#include "components/ui_comp.h"
#include "components/ui_comp_hook.h"
#include "ui_events.h"

void anima_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_Main_Window
void ui_Main_Window_screen_init(void);
void ui_event_Main_Window(lv_event_t * e);
extern lv_obj_t * ui_Main_Window;
extern lv_obj_t * ui_Header_Main;
extern lv_obj_t * ui_Header_Main_Time;
extern lv_obj_t * ui_Header_Main_Text;
extern lv_obj_t * ui_Menu_Items;
extern lv_obj_t * ui_Music;
void ui_event_Music_Btn(lv_event_t * e);
extern lv_obj_t * ui_Music_Btn;
extern lv_obj_t * ui_Music_Icon;
extern lv_obj_t * ui_Music_Text;
extern lv_obj_t * ui_Nature_Sound;
void ui_event_Nature_Sound_Btn(lv_event_t * e);
extern lv_obj_t * ui_Nature_Sound_Btn;
extern lv_obj_t * ui_Nature_Sound_Icon;
extern lv_obj_t * ui_Nature_Sound_Text;
extern lv_obj_t * ui_Bluetooth;
void ui_event_Bluetooth_Btn(lv_event_t * e);
extern lv_obj_t * ui_Bluetooth_Btn;
extern lv_obj_t * ui_Bluetooth_Icon;
extern lv_obj_t * ui_Bluetoth_Text;
extern lv_obj_t * ui_Mode;
void ui_event_Mode_Btn(lv_event_t * e);
extern lv_obj_t * ui_Mode_Btn;
extern lv_obj_t * ui_Mode_Icon;
extern lv_obj_t * ui_Mode_Text;
extern lv_obj_t * ui_Wake_up;
void ui_event_Wake_up_Btn(lv_event_t * e);
extern lv_obj_t * ui_Wake_up_Btn;
extern lv_obj_t * ui_Weke_up_Icon;
extern lv_obj_t * ui_Weke_up_Text;
extern lv_obj_t * ui_Guide;
void ui_event_Guide_Btn(lv_event_t * e);
extern lv_obj_t * ui_Guide_Btn;
extern lv_obj_t * ui_Guide_Icon;
extern lv_obj_t * ui_Guide_Text;
extern lv_obj_t * ui_Wifi_States_Icon;
extern lv_obj_t * ui_Wifi_Img_Placeholder;
extern lv_obj_t * ui_Music_Note_Img_Placeholder1;
extern lv_obj_t * ui_Paused_Img_Placeholder;
void ui_event_Disconnect_Wifi(lv_event_t * e);
extern lv_obj_t * ui_Disconnect_Wifi;
extern lv_obj_t * ui_Label1;
void ui_event_Button5(lv_event_t * e);
extern lv_obj_t * ui_Button5;
extern lv_obj_t * ui_Header_Volume;
void ui_event_On_Screen_Range(lv_event_t * e);
extern lv_obj_t * ui_On_Screen_Range;
void ui_event_placeadeasdasd(lv_event_t * e);
extern lv_obj_t * ui_placeadeasdasd;
// SCREEN: ui_Music_Window
void ui_Music_Window_screen_init(void);
void ui_event_Music_Window(lv_event_t * e);
extern lv_obj_t * ui_Music_Window;
extern lv_obj_t * ui_Header_Music;
extern lv_obj_t * ui_Header_Music_Text;
extern lv_obj_t * ui_Header_Music_Time;
void ui_event_BackToMainWindowBtn1(lv_event_t * e);
extern lv_obj_t * ui_BackToMainWindowBtn1;
extern lv_obj_t * ui_Music_List_Container;
void ui_event_Prev_Music_List_Btn(lv_event_t * e);
extern lv_obj_t * ui_Prev_Music_List_Btn;
extern lv_obj_t * ui_Prev_Music_List_Btn_Text;
void ui_event_Next_Music_List_Btn(lv_event_t * e);
extern lv_obj_t * ui_Next_Music_List_Btn;
extern lv_obj_t * ui_Next_Music_List_Btn_Text;
extern lv_obj_t * ui_Header_Volume1;
// SCREEN: ui_Nature_Sound_Window
void ui_Nature_Sound_Window_screen_init(void);
void ui_event_Nature_Sound_Window(lv_event_t * e);
extern lv_obj_t * ui_Nature_Sound_Window;
extern lv_obj_t * ui_Header_Nature_Sound;
extern lv_obj_t * ui_Header_Nature_Sound_Text;
extern lv_obj_t * ui_Header_Nature_Sound_Time;
extern lv_obj_t * ui_Nature_Sound_Menu;
extern lv_obj_t * ui_Bird_Sound;
extern lv_obj_t * ui_Bird_Sound_Btn;
extern lv_obj_t * ui_Bird_Sound_Icon;
extern lv_obj_t * ui_Bird_Sound_Text;
extern lv_obj_t * ui_Bug_Sound;
extern lv_obj_t * ui_Bug_Sound_Btn;
extern lv_obj_t * ui_Bug_Sound_Icon;
extern lv_obj_t * ui_Bug_Sound_Text;
extern lv_obj_t * ui_Forest_Sound;
extern lv_obj_t * ui_Forest_Sound_Btn;
extern lv_obj_t * ui_Forest_Sound_Icon;
extern lv_obj_t * ui_Forest_Sound_Text;
extern lv_obj_t * ui_Sea_Sound;
extern lv_obj_t * ui_Sea_Sound_Btn;
extern lv_obj_t * ui_Sea_Sound_Icon;
extern lv_obj_t * ui_Sea_Sound_Text;
void ui_event_BackToMainWindowBtn7(lv_event_t * e);
extern lv_obj_t * ui_BackToMainWindowBtn7;
extern lv_obj_t * ui_Header_Volume2;
// SCREEN: ui_Bluetooth_WIndow
void ui_Bluetooth_WIndow_screen_init(void);
void ui_event_Bluetooth_WIndow(lv_event_t * e);
extern lv_obj_t * ui_Bluetooth_WIndow;
extern lv_obj_t * ui_Header_Bluetooth;
extern lv_obj_t * ui_Header_Bluetooth_Text;
extern lv_obj_t * ui_Header_Bluetooth_Time;
extern lv_obj_t * ui_Bluetooth_Name;
extern lv_obj_t * ui_Bluetooth_Name_Text;
extern lv_obj_t * ui_Bluetooth_Name_Line;
extern lv_obj_t * ui_Bluetooth_Name_Value;
extern lv_obj_t * ui_Bluetooth_Password;
extern lv_obj_t * ui_Bluetooth_Password_Text;
extern lv_obj_t * ui_Bluetooth_Password_Line;
extern lv_obj_t * ui_Bluetooth_Password_Value;
extern lv_obj_t * ui_Bluetooth_Guide_Text;
void ui_event_BackToMainWindowBtn3(lv_event_t * e);
extern lv_obj_t * ui_BackToMainWindowBtn3;
extern lv_obj_t * ui_Header_Volume3;
// SCREEN: ui_Mode_WIndow
void ui_Mode_WIndow_screen_init(void);
void ui_event_Mode_WIndow(lv_event_t * e);
extern lv_obj_t * ui_Mode_WIndow;
extern lv_obj_t * ui_Header_Mode;
extern lv_obj_t * ui_Header_Mode_Text;
extern lv_obj_t * ui_Header_Mode_Time;
extern lv_obj_t * ui_Mode_Items;
extern lv_obj_t * ui_Mode_Nature;
extern lv_obj_t * ui_Mode_Nature_Icon;
void ui_event_Mode_Nature_Btn(lv_event_t * e);
extern lv_obj_t * ui_Mode_Nature_Btn;
extern lv_obj_t * ui_Mode_Nature_text;
extern lv_obj_t * ui_Mode_Jazz;
extern lv_obj_t * ui_Mode_Jazz_Icon;
void ui_event_Mode_Jazz_Btn(lv_event_t * e);
extern lv_obj_t * ui_Mode_Jazz_Btn;
extern lv_obj_t * ui_Mode_Jazz_Text;
extern lv_obj_t * ui_Mode_Rock;
extern lv_obj_t * ui_Mode_Rock_Icon;
void ui_event_Mode_Rock_Btn(lv_event_t * e);
extern lv_obj_t * ui_Mode_Rock_Btn;
extern lv_obj_t * ui_Mode_Rock_Text;
extern lv_obj_t * ui_Mode_Pop;
extern lv_obj_t * ui_Mode_Pop_Icon;
void ui_event_Mode_Pop_Btn(lv_event_t * e);
extern lv_obj_t * ui_Mode_Pop_Btn;
extern lv_obj_t * ui_Mode_Pop_Text;
extern lv_obj_t * ui_Mode_Classical;
extern lv_obj_t * ui_Mode_Classical_Icon;
void ui_event_Mode_Classical_Btn(lv_event_t * e);
extern lv_obj_t * ui_Mode_Classical_Btn;
extern lv_obj_t * ui_Mode_Classical_Text;
extern lv_obj_t * ui_Mode_Opera;
extern lv_obj_t * ui_Mode_Opera_Icon;
void ui_event_Mode_Opera_Btn(lv_event_t * e);
extern lv_obj_t * ui_Mode_Opera_Btn;
extern lv_obj_t * ui_Mode_Opera_Text;
void ui_event_BackToMainWindowBtn4(lv_event_t * e);
extern lv_obj_t * ui_BackToMainWindowBtn4;
extern lv_obj_t * ui_Header_Volume4;
// SCREEN: ui_Wake_up_Window
void ui_Wake_up_Window_screen_init(void);
void ui_event_Wake_up_Window(lv_event_t * e);
extern lv_obj_t * ui_Wake_up_Window;
extern lv_obj_t * ui_Header_Wake_up;
extern lv_obj_t * ui_Header_Wake_up_Text;
extern lv_obj_t * ui_Header_Wake_up_Time;
extern lv_obj_t * ui_Custom_Ringtone;
extern lv_obj_t * ui_Custom_Ringtone_Text;
extern lv_obj_t * ui_Custom_Ringtone_Line;
extern lv_obj_t * ui_Custom_Ringtone_Decora_Icon;
extern lv_obj_t * ui_Wake_up_Time;
extern lv_obj_t * ui_Wake_up_Time_Text;
extern lv_obj_t * ui_Wake_up_Time_Line;
extern lv_obj_t * ui_Wake_up_Time_Decora_Icon;
void ui_event_BackToMainWindowBtn5(lv_event_t * e);
extern lv_obj_t * ui_BackToMainWindowBtn5;
extern lv_obj_t * ui_Header_Volume6;
// SCREEN: ui_Guide_Window
void ui_Guide_Window_screen_init(void);
void ui_event_Guide_Window(lv_event_t * e);
extern lv_obj_t * ui_Guide_Window;
extern lv_obj_t * ui_Header_Guide;
extern lv_obj_t * ui_Header_Guide_Text;
extern lv_obj_t * ui_Header_Guide_Time;
extern lv_obj_t * ui_Guide_Title;
extern lv_obj_t * ui_Guide_Content;
extern lv_obj_t * ui_Popup_WIndow;
void ui_event_More_Info_Close_Btn(lv_event_t * e);
extern lv_obj_t * ui_More_Info_Close_Btn;
extern lv_obj_t * ui_More_Info_Text;
extern lv_obj_t * ui_QR_Code;
void ui_event_BackToMainWindowBtn6(lv_event_t * e);
extern lv_obj_t * ui_BackToMainWindowBtn6;
extern lv_obj_t * ui_Header_Volume7;
// SCREEN: ui_Settings_Window
void ui_Settings_Window_screen_init(void);
extern lv_obj_t * ui_Settings_Window;
extern lv_obj_t * ui_Header_Main2;
extern lv_obj_t * ui_Header_Main_Text2;
extern lv_obj_t * ui_Settings_List2;
extern lv_obj_t * ui_Settings_Backlight2;
extern lv_obj_t * ui_Settings_Backlight_Text2;
extern lv_obj_t * ui_Settings_Backlight_Line2;
extern lv_obj_t * ui_Settings_Backlight_Icon2;
extern lv_obj_t * ui_Settings_Backlight_Decora_Icon2;
void ui_event_Settings_Backlight_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Settings_Backlight_Btn2;
extern lv_obj_t * ui_Settings_Bluetooth2;
extern lv_obj_t * ui_Settings_Bluetooth_Text2;
extern lv_obj_t * ui_Settings_Bluetooth_Line2;
extern lv_obj_t * ui_Settings_Bluetooth_Icon2;
extern lv_obj_t * ui_Settings_Bluetooth_Decora_Icon2;
void ui_event_Settings_Bluetooth_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Settings_Bluetooth_Btn2;
extern lv_obj_t * ui_Settings_Time2;
extern lv_obj_t * ui_Settings_Time_Text2;
extern lv_obj_t * ui_Settings_Time_Line2;
extern lv_obj_t * ui_Settings_Time_Icon2;
extern lv_obj_t * ui_Settings_Time_Decora_Icon2;
void ui_event_Settings_Time_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Settings_Time_Btn2;
extern lv_obj_t * ui_Settings_ID2;
extern lv_obj_t * ui_Settings_ID_Text2;
extern lv_obj_t * ui_Settings_ID_Line2;
extern lv_obj_t * ui_Settings_ID_Icon2;
extern lv_obj_t * ui_Settings_ID_Decora_Icon2;
void ui_event_Settings_ID_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Settings_ID_Btn2;
extern lv_obj_t * ui_Settings_Volume;
extern lv_obj_t * ui_Settings_Volume_Text;
extern lv_obj_t * ui_Settings_Volume_Line;
extern lv_obj_t * ui_Settings_Volume_Icon;
extern lv_obj_t * ui_Settings_Volume_Decora_Icon;
void ui_event_Settings_Volume_Btn(lv_event_t * e);
extern lv_obj_t * ui_Settings_Volume_Btn;
extern lv_obj_t * ui_Settings_Wifi;
extern lv_obj_t * ui_Settings_Wifi_Text;
extern lv_obj_t * ui_Settings_Wifi_Line;
extern lv_obj_t * ui_Settings_Wifi_Icon;
extern lv_obj_t * ui_Settings_Wifi_Decora_Icon;
void ui_event_Settings_Wifi_Btn(lv_event_t * e);
extern lv_obj_t * ui_Settings_Wifi_Btn;
extern lv_obj_t * ui_Volume_Settings_Panel;
extern lv_obj_t * ui_Max_Volume_Settings;
extern lv_obj_t * ui_Max_Volume_Text;
extern lv_obj_t * ui_Max_Volume_Value_Panel;
extern lv_obj_t * ui_Max_Volume_Value;
void ui_event_Max_Volume_Dec_Btn(lv_event_t * e);
extern lv_obj_t * ui_Max_Volume_Dec_Btn;
extern lv_obj_t * ui_Max_Volume_Dec_Icon;
void ui_event_Max_Volume_Add_Btn(lv_event_t * e);
extern lv_obj_t * ui_Max_Volume_Add_Btn;
extern lv_obj_t * ui_Max_Volume_Add_Icon;
extern lv_obj_t * ui_Default_Volume_Settings;
extern lv_obj_t * ui_Default_Volume_Text;
extern lv_obj_t * ui_Default_Volume_Value_Panel;
extern lv_obj_t * ui_Default_Volume_Value;
void ui_event_Default_Volume_Dec_Btn(lv_event_t * e);
extern lv_obj_t * ui_Default_Volume_Dec_Btn;
extern lv_obj_t * ui_Default_Volume_Dec_Icon;
void ui_event_Default_Volume_Add_Btn(lv_event_t * e);
extern lv_obj_t * ui_Default_Volume_Add_Btn;
extern lv_obj_t * ui_Default_Volume_Add_Icon;
void ui_event_Volume_Settings_Verify_Btn(lv_event_t * e);
extern lv_obj_t * ui_Volume_Settings_Verify_Btn;
extern lv_obj_t * ui_Max_Volume_Verify_Btn_Text;
void ui_event_Volume_Settings_Cancel_Btn(lv_event_t * e);
extern lv_obj_t * ui_Volume_Settings_Cancel_Btn;
extern lv_obj_t * ui_Max_Volume_Cancel_Text;
void ui_event_BackToMainWindowBtn8(lv_event_t * e);
extern lv_obj_t * ui_BackToMainWindowBtn8;
extern lv_obj_t * ui_Header_Volume13;
// SCREEN: ui_Settings_Backlight_Window
void ui_Settings_Backlight_Window_screen_init(void);
extern lv_obj_t * ui_Settings_Backlight_Window;
extern lv_obj_t * ui_Header_Main3;
extern lv_obj_t * ui_Header_Main_Text3;
void ui_event_BackToSettingsWindow(lv_event_t * e);
extern lv_obj_t * ui_BackToSettingsWindow;
extern lv_obj_t * ui_Backlight_Settings_items2;
extern lv_obj_t * ui_Backlight_Brightness2;
extern lv_obj_t * ui_Backlight_Brightness_Text2;
extern lv_obj_t * ui_Backlight_Brightness_Line2;
void ui_event_Backlight_Brightness_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Backlight_Brightness_Btn2;
extern lv_obj_t * ui_Backlight_Time2;
extern lv_obj_t * ui_Backlight_Time_Text2;
extern lv_obj_t * ui_Backlight_Time_Line2;
void ui_event_Backlight_Time_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Backlight_Time_Btn2;
extern lv_obj_t * ui_Backlight_Brightness_Panel2;
extern lv_obj_t * ui_Backlight_Brightness_Panel_Text2;
void ui_event_Backlight_Brightness_Verify_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Backlight_Brightness_Verify_Btn2;
extern lv_obj_t * ui_Backlight_Brightness_Verify_Btn_Text2;
void ui_event_Backlight_Brightness_Cancel_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Backlight_Brightness_Cancel_Btn2;
extern lv_obj_t * ui_Backlight_Brightness_Cancel_Text2;
extern lv_obj_t * ui_Backlight_Brightness_Value_Panel2;
extern lv_obj_t * ui_Backlight_Brightness_Value2;
void ui_event_Backlight_Brightness_Dec_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Backlight_Brightness_Dec_Btn2;
extern lv_obj_t * ui_Backlight_Brightness_Dec_Icon2;
void ui_event_Backlight_Brightness_Add_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Backlight_Brightness_Add_Btn2;
extern lv_obj_t * ui_Backlight_Brightness_Add_Icon2;
extern lv_obj_t * ui_Backlight_Time_Panel2;
extern lv_obj_t * ui_Backlight_Time_Panel_Text2;
void ui_event_Backlight_Time_Verify_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Backlight_Time_Verify_Btn2;
extern lv_obj_t * ui_Backlight_Time_Verify_Btn_Text2;
void ui_event_Backlight_Time_Cancel_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Backlight_Time_Cancel_Btn2;
extern lv_obj_t * ui_Backlight_Time_Cancel_Text2;
extern lv_obj_t * ui_Backlight_Time_Value_Panel2;
extern lv_obj_t * ui_Backlight_Time_Value2;
void ui_event_Backlight_Time_Dec_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Backlight_Time_Dec_Btn2;
extern lv_obj_t * ui_Backlight_Time_Dec_Icon2;
void ui_event_Backlight_Time_Add_Btn2(lv_event_t * e);
extern lv_obj_t * ui_Backlight_Time_Add_Btn2;
extern lv_obj_t * ui_Backlight_Time_Add_Icon2;
extern lv_obj_t * ui_Header_Volume12;
// SCREEN: ui_Settings_Bluetooth_Window
void ui_Settings_Bluetooth_Window_screen_init(void);
extern lv_obj_t * ui_Settings_Bluetooth_Window;
extern lv_obj_t * ui_Header_Main4;
extern lv_obj_t * ui_Header_Main_Text4;
extern lv_obj_t * ui_Bluetooth_Name2;
extern lv_obj_t * ui_Bluetooth_Name_Text2;
extern lv_obj_t * ui_Bluetooth_Name_Line2;
void ui_event_Bluetooth_Name_Input2(lv_event_t * e);
extern lv_obj_t * ui_Bluetooth_Name_Input2;
extern lv_obj_t * ui_Bluetooth_Password2;
extern lv_obj_t * ui_Bluetooth_Password_Text2;
extern lv_obj_t * ui_Bluetooth_Password_Line2;
void ui_event_Bluetooth_Password_Input2(lv_event_t * e);
extern lv_obj_t * ui_Bluetooth_Password_Input2;
void ui_event_Bluetooth_Settings_Enter_Btn(lv_event_t * e);
extern lv_obj_t * ui_Bluetooth_Settings_Enter_Btn;
extern lv_obj_t * ui_Bluetooth_Settings_Enter_Text;
extern lv_obj_t * ui_Bluetooth_Keyboard2;
void ui_event_BackToSettingsWindow1(lv_event_t * e);
extern lv_obj_t * ui_BackToSettingsWindow1;
extern lv_obj_t * ui_Header_Volume11;
// SCREEN: ui_Settings_Time_Window
void ui_Settings_Time_Window_screen_init(void);
extern lv_obj_t * ui_Settings_Time_Window;
extern lv_obj_t * ui_Header_Main5;
extern lv_obj_t * ui_Header_Main_Text5;
extern lv_obj_t * ui_Time_Setting_Panel2;
extern lv_obj_t * ui_Time_Setting_Text2;
extern lv_obj_t * ui_Time_Setting_Line2;
void ui_event_Time_Setting_Hour2(lv_event_t * e);
extern lv_obj_t * ui_Time_Setting_Hour2;
void ui_event_Time_Setting_Min2(lv_event_t * e);
extern lv_obj_t * ui_Time_Setting_Min2;
extern lv_obj_t * ui_Date_Setting_Panel2;
extern lv_obj_t * ui_Date_Settings_Text2;
extern lv_obj_t * ui_Date_Setting_Line2;
void ui_event_Date_Setting_Year2(lv_event_t * e);
extern lv_obj_t * ui_Date_Setting_Year2;
void ui_event_Date_Setting_Month2(lv_event_t * e);
extern lv_obj_t * ui_Date_Setting_Month2;
void ui_event_Date_Setting_Day2(lv_event_t * e);
extern lv_obj_t * ui_Date_Setting_Day2;
extern lv_obj_t * ui_Date_Time_Keyboard2;
void ui_event_BackToMainWindow10(lv_event_t * e);
extern lv_obj_t * ui_BackToMainWindow10;
void ui_event_Time_Enter_Btn(lv_event_t * e);
extern lv_obj_t * ui_Time_Enter_Btn;
extern lv_obj_t * ui_Time_Enter_Text;
extern lv_obj_t * ui_Header_Volume10;
// SCREEN: ui_Settings_ID_Window
void ui_Settings_ID_Window_screen_init(void);
extern lv_obj_t * ui_Settings_ID_Window;
extern lv_obj_t * ui_Header_Main6;
extern lv_obj_t * ui_Header_Main_Text6;
extern lv_obj_t * ui_ID_Keyboard2;
void ui_event_ID_Setting_Input2(lv_event_t * e);
extern lv_obj_t * ui_ID_Setting_Input2;
void ui_event_ID_Enter_Btn(lv_event_t * e);
extern lv_obj_t * ui_ID_Enter_Btn;
extern lv_obj_t * ui_ID_Enter_Text;
void ui_event_BackToMainWindow11(lv_event_t * e);
extern lv_obj_t * ui_BackToMainWindow11;
extern lv_obj_t * ui_Header_Volume9;
// SCREEN: ui_Settings_Wifi_Window
void ui_Settings_Wifi_Window_screen_init(void);
extern lv_obj_t * ui_Settings_Wifi_Window;
extern lv_obj_t * ui_Header_Main1;
extern lv_obj_t * ui_Header_Main_Text1;
extern lv_obj_t * ui_Wifi_Name;
extern lv_obj_t * ui_Wifi_Name_Text;
extern lv_obj_t * ui_Wifi_Name_Line;
void ui_event_Wifi_Name_Input(lv_event_t * e);
extern lv_obj_t * ui_Wifi_Name_Input;
extern lv_obj_t * ui_Wifi_Password;
extern lv_obj_t * ui_Wifi_Password_Text;
extern lv_obj_t * ui_Wifi_Password_Line;
void ui_event_Wifi_Password_Input(lv_event_t * e);
extern lv_obj_t * ui_Wifi_Password_Input;
extern lv_obj_t * ui_Wifi_Keyboard;
void ui_event_BackToSettingsWindow2(lv_event_t * e);
extern lv_obj_t * ui_BackToSettingsWindow2;
void ui_event_Wifi_Switch2(lv_event_t * e);
extern lv_obj_t * ui_Wifi_Switch2;
extern lv_obj_t * ui_Wifi_Switch_Text2;
extern lv_obj_t * ui_Wifi_Switch_Switch2;
extern lv_obj_t * ui_Header_Volume8;
void ui_event_Wifi_Enter_Btn(lv_event_t * e);
extern lv_obj_t * ui_Wifi_Enter_Btn;
extern lv_obj_t * ui_Wifi_Enter_Text;
// SCREEN: ui_Music_Play_Window
void ui_Music_Play_Window_screen_init(void);
extern lv_obj_t * ui_Music_Play_Window;
extern lv_obj_t * ui_Header_Music2;
extern lv_obj_t * ui_Header_Music_Text2;
extern lv_obj_t * ui_Header_Music_Time2;
extern lv_obj_t * ui_Player_Image;
extern lv_obj_t * ui_Player_Icon;
void ui_event_BackToMainWindowBtn9(lv_event_t * e);
extern lv_obj_t * ui_BackToMainWindowBtn9;
extern lv_obj_t * ui_Track_Title;
extern lv_obj_t * ui_Track_Artist;
extern lv_obj_t * ui_Play_Mode_Btn;
extern lv_obj_t * ui_Play_Style_Text;
extern lv_obj_t * ui_Current_Time;
extern lv_obj_t * ui_Total_Time;
void ui_event_Prev_Track_Btn(lv_event_t * e);
extern lv_obj_t * ui_Prev_Track_Btn;
void ui_event_Prev_Track_Icon(lv_event_t * e);
extern lv_obj_t * ui_Prev_Track_Icon;
void ui_event_Play_Pause_Btn(lv_event_t * e);
extern lv_obj_t * ui_Play_Pause_Btn;
extern lv_obj_t * ui_Play_Pause_Icon;
void ui_event_Next_Track_Btn(lv_event_t * e);
extern lv_obj_t * ui_Next_Track_Btn;
void ui_event_Next_Track_Icon(lv_event_t * e);
extern lv_obj_t * ui_Next_Track_Icon;
void ui_event_Progress_Slider(lv_event_t * e);
extern lv_obj_t * ui_Progress_Slider;
extern lv_obj_t * ui_Header_Volume5;
// SCREEN: ui_Idle_Window
void ui_Idle_Window_screen_init(void);
void ui_event_Idle_Window(lv_event_t * e);
extern lv_obj_t * ui_Idle_Window;
extern lv_obj_t * ui_Idle_Window_Time;
extern lv_obj_t * ui_Idle_Window_Date;
void ui_event_Back_To_Main_Window_Range(lv_event_t * e);
extern lv_obj_t * ui_Back_To_Main_Window_Range;
void ui_event_Off_Screen_Btn(lv_event_t * e);
extern lv_obj_t * ui_Off_Screen_Btn;
extern lv_obj_t * ui_Off_Screen_Text;
void ui_event____initial_actions0(lv_event_t * e);
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_1621519077);    // assets/丽枫UI/backgroundMain.png
LV_IMG_DECLARE(ui_img_2087007852);    // assets/丽枫UI/音乐库.png
LV_IMG_DECLARE(ui_img_227802216);    // assets/丽枫UI/自然之音.png
LV_IMG_DECLARE(ui_img_907415264);    // assets/丽枫UI/蓝牙.png
LV_IMG_DECLARE(ui_img_501316714);    // assets/丽枫UI/模式.png
LV_IMG_DECLARE(ui_img_967182345);    // assets/丽枫UI/叫醒服务.png
LV_IMG_DECLARE(ui_img_72497716);    // assets/丽枫UI/指南.png
LV_IMG_DECLARE(ui_img_236134236);    // assets/丽枫UI/wifi_disconnect.png
LV_IMG_DECLARE(ui_img_1742736079);    // assets/丽枫UI/wifi.png
LV_IMG_DECLARE(ui_img_35201459);    // assets/丽枫UI/musicNote.png
LV_IMG_DECLARE(ui_img_2101671624);    // assets/丽枫UI/暂停.png
LV_IMG_DECLARE(ui_img_490182776);    // assets/丽枫UI/音量.png
LV_IMG_DECLARE(ui_img_861711258);    // assets/丽枫UI/background.png
LV_IMG_DECLARE(ui_img_348826415);    // assets/丽枫UI/back.png
LV_IMG_DECLARE(ui_img_12669592);    // assets/丽枫UI/鸟叫.png
LV_IMG_DECLARE(ui_img_2034599484);    // assets/丽枫UI/虫鸣.png
LV_IMG_DECLARE(ui_img_304460963);    // assets/丽枫UI/森林.png
LV_IMG_DECLARE(ui_img_1893023884);    // assets/丽枫UI/大海.png
LV_IMG_DECLARE(ui_img_720053126);    // assets/丽枫UI/N.png
LV_IMG_DECLARE(ui_img_720048778);    // assets/丽枫UI/J.png
LV_IMG_DECLARE(ui_img_720023698);    // assets/丽枫UI/R.png
LV_IMG_DECLARE(ui_img_720017300);    // assets/丽枫UI/P.png
LV_IMG_DECLARE(ui_img_720032643);    // assets/丽枫UI/C.png
LV_IMG_DECLARE(ui_img_720045703);    // assets/丽枫UI/O.png
LV_IMG_DECLARE(ui_img_1830113796);    // assets/丽枫UI/back32.png
LV_IMG_DECLARE(ui_img_1526512104);    // assets/丽枫UI/close.png
LV_IMG_DECLARE(ui_img_149594991);    // assets/丽枫UI/背光设置.png
LV_IMG_DECLARE(ui_img_1711952528);    // assets/丽枫UI/蓝牙设置.png
LV_IMG_DECLARE(ui_img_1422805608);    // assets/丽枫UI/时间设置.png
LV_IMG_DECLARE(ui_img_728059867);    // assets/丽枫UI/ID设置.png
LV_IMG_DECLARE(ui_img_404002205);    // assets/丽枫UI/Left triangle40.png
LV_IMG_DECLARE(ui_img_239308628);    // assets/丽枫UI/Right triangle40.png
LV_IMG_DECLARE(ui_img_469799613);    // assets/丽枫UI/音乐.png
LV_IMG_DECLARE(ui_img_1311962515);    // assets/丽枫UI/随机.png
LV_IMG_DECLARE(ui_img_542920328);    // assets/丽枫UI/上一首.png
LV_IMG_DECLARE(ui_img_899744137);    // assets/丽枫UI/播放.png
LV_IMG_DECLARE(ui_img_542960551);    // assets/丽枫UI/下一首.png



LV_FONT_DECLARE(ui_font_Font100);
LV_FONT_DECLARE(ui_font_Font30);
LV_FONT_DECLARE(ui_font_LanTing18);
LV_FONT_DECLARE(ui_font_LanTIng20);
LV_FONT_DECLARE(ui_font_LanTing40);
LV_FONT_DECLARE(ui_font_LanTingFine18);
LV_FONT_DECLARE(ui_font_LanTingFine22);
LV_FONT_DECLARE(ui_font_LanTingFine24);



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
