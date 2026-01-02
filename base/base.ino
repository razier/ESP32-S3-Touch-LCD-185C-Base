#include "Display_ST77916.h"
#include "LVGL_Driver.h"
#include "ui.h"

void Driver_Init(){
  I2C_Init();
  TCA9554PWR_Init(0x00);   
  Backlight_Init();
}

void setup() {
  // put your setup code here, to run once:
  Driver_Init();
  LCD_Init();
  Lvgl_Init();
  ui_init();
}

int Time_Loop=0;
void loop() {
  // put your main code here, to run repeatedly:
  Lvgl_Loop();
  vTaskDelay(pdMS_TO_TICKS(5));
}
