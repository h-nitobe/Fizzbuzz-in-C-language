#include <Adafruit_GFX.h>    // グラフィックコアライブラリ
#include <Adafruit_ST7789.h> // ST7789用ライブラリ
#include <SPI.h>

// TRYGEAR-DASH-RP2350A のTFTコネクタピン定義
#define TFT_DC    16  // Data/Command 制御ピン
#define TFT_CS    17  // Chip Select ピン
#define TFT_RST   -1  // リセットピン（使用しない場合は-1、ボードのRESETと連動）

// ハードウェアSPI1（または対応するSPIポート）を使用してインスタンスを作成
// RP2350のArduinoコア（Earle Philhower版）の標準SPIピンを使用
Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup()
{
  int   i = 0;

  Serial.begin(115200);
  tft.init(240, 240); 
  tft.setRotation(0);                 // 画面の向きを設定 (0〜3)
  tft.fillScreen(ST77XX_BLACK);       // 画面を黒でクリア
  tft.setCursor(0, 0);                // 文字の開始位置 (X, Y)
  tft.setTextColor(ST77XX_GREEN);     // 文字色を緑に設定

  while (266 - i++) {
    tft.print(i%3? "": "Fizz")|
    tft.print(i%5? "": "Buzz")||
    tft.print(i);
    tft.print(" ");
  }
}

void loop() {
  delay(1000);
}
