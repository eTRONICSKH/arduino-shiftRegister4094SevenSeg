#include <shiftRegister4094SevenSeg.h>

#define clk_pin 2
#define data_pin 4
#define str_pin 3
#define seg_num 4

int num = 1234;

shiftRegister4094SevenSeg disp(CATHODE, seg_num); // CATHODE or ANODE, Number of segment.

void setup() {
  Serial.begin(9600);
  disp.begin(data_pin, clk_pin, str_pin); // DATA_PIN, CLOCK_PIN, STROBE_PIN
  
  Serial.println("Started..");

}

void loop() {
  Serial.println("printed: "+(String)num);
  disp.print(num);
  delay(1000);
}

