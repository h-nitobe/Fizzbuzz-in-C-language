/*
  Single Frame
  
  Displays single frames using matrix.loadFrame
  
  See the full documentation here:
  https://docs.arduino.cc/tutorials/uno-r4-wifi/led-matrix
*/

#include "Arduino_LED_Matrix.h"   // Include the LED_Matrix library

void setNumber(int num);
void setFrame(const int *src);

const int numFont[10][8] = {
  {0x6, 0x9, 0x9, 0x9, 0x9, 0x9, 0x6, 0x0},   // 0
  {0x2, 0x6, 0x2, 0x2, 0x2, 0x2, 0x2, 0x0},   // 1
  {0x6, 0x9, 0x1, 0x2, 0x4, 0x8, 0xF, 0x0},   // 2
  {0x6, 0x9, 0x1, 0x2, 0x1, 0x9, 0x6, 0x0},   // 3
  {0x2, 0x6, 0xA, 0xA, 0xF, 0x2, 0x2, 0x0},   // 4
  {0xF, 0x8, 0x8, 0xE, 0x1, 0x1, 0xE, 0x0},   // 5
  {0x6, 0x9, 0x8, 0xE, 0x9, 0x9, 0x6, 0x0},   // 6
  {0xF, 0x9, 0x1, 0x2, 0x2, 0x4, 0x4, 0x0},   // 7
  {0x6, 0x9, 0x9, 0x6, 0x9, 0x9, 0x6, 0x0},   // 8
  {0x6, 0x9, 0x9, 0x7, 0x1, 0x9, 0x6, 0x0},   // 9
};

const int fizzMsg[8] = {
  0xE00, 0x800, 0x8BF, 0xE09, 0x892, 0x8A4, 0x8BF, 0x000
};

const int buzzMsg[8] = {
  0xC00, 0xA00, 0xB7F, 0xD49, 0xB52, 0xB64, 0xDFF, 0x000
};

const int fibuMsg[8] = {
  0xE30, 0x828, 0x8AD, 0xE35, 0x8AD, 0x8AD, 0x8B7, 0x000
};

int number[8] = {
  0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,0x0
};

uint32_t frame[] = {
  0x0, 0x0, 0x0
};

ArduinoLEDMatrix matrix;          // Create an instance of the ArduinoLEDMatrix class

void setup() {
  Serial.begin(115200);           // Initialize serial communication at a baud rate of 115200
  matrix.begin();                 // Initialize the LED matrix
}

void loop() {
  static int i = 1;
 
  switch (i % 15) {
    case 0:
      setFrame(fibuMsg);
      break;
    case 3: case 6: case 9: case 12: 
      setFrame(fizzMsg);
      break;
    case 5: case 10:
      setFrame(buzzMsg);
      break;
    default:
      setNumber(i);
      setFrame(number);
      break;
  }
  if (i < 999) {
    i++;
  } else {
    i = 1;
  }
 
  matrix.loadFrame(frame);
  delay(1000);  // Pause for 500 milliseconds (half a second)

  // Print the current value of millis() to the serial monitor
  Serial.println(millis());
}

void setNumber(int num)
{
  int   i, j;

  for (j = 0; j < 8; j++) {
    number[j] = 0x0;
  }

  for (i = 0; i < 3; i++) {    // 1000 以上は無視
    for (j = 0; j < 8; j++) {
      number[j] |= numFont[num % 10][j] << (i * 4);
    }
    num /= 10;
  }
}

void setFrame(const int *src)
{
  frame[0] = src[0] << 20 | src[1] << 8 | (src[2] & 0xff0) >> 4;
  frame[1] = (src[2] & 0xf) << 28 | src[3] << 16 | src[4] << 4 | (src[5] & 0xf00) >> 8;
  frame[2] = (src[5] & 0xff) << 24 | src[6] << 12 | src[7];
}
