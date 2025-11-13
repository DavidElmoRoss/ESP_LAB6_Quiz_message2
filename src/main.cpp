/*
    This program should have the word    StAn  on the 4 digit display
    One of the HEX values in character array  SEG_DONE is incorrect.
    Change the incorrect HEX value to one in the list of values in
    the question.
*/

//INCLUDE SECTION
#include <Arduino.h>
#include <TM1637Display.h>

//DEFINE SECTION
#define CLK  33                // The ESP32 pin GPIO33 connected to CLK
#define DIO  32                // The ESP32 pin GPIO32 connected to DIO

//HARDWARE DEFINITION SECTION
TM1637Display segment = TM1637Display(CLK, DIO);

unsigned char SEG_DONE[] =    // This is a message array
{
  0x73,0x78,0x77,0x54         // replace the 4 nulls with hex values that display   StAn  
};

void setup()
{
 Serial.begin(9600);
 segment.setBrightness(4);    // set the brightness to 4 in range (0:dimmest, 7:brightest)
 segment.clear();             // clear the 4 digit display
 segment.setSegments(SEG_DONE);
}

void loop() 
{
}
