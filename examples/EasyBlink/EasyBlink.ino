#include <TridentTD_LEDBlink.h>

TridentTD_LEDBlink myled(2);   // กำหนด pin

void setup() {
}

void loop() {
  myled.blink(1000);  				// เวลาที่ต้องการ blink
}

