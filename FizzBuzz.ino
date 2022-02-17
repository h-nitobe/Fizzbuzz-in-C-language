/**
* @file     FizzBuzz.ino
* @brief    WIO Terminal で FizzBuzz
* @author   新渡戸広明
* @date     2022/02/17
* @details  C言語じゃなくArduinoのスケッチだけどね
*/
#include <TFT_eSPI.h> // Graphics and font library for ILI9341 driver chip

TFT_eSPI tft = TFT_eSPI();  // Invoke library

void setup(void) {
    tft.init();
    tft.setRotation(3);
    tft.fillScreen(TFT_BLACK);
    tft.setTextFont(4);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
}

void loop() {
    for (int i = 1; i <= 64; i++) {
      switch (i % 15) {
        case 0:
          tft.print("FizzBuzz ");
          break;
        case 3: case 6: case 9: case 12:
          tft.print("Fizz ");
          break;
        case 5: case 10:
          tft.print("Buzz ");
          break;
        default:
          tft.print(i);
          tft.print(" ");
          break;
      }
    }
    while(1);
}
