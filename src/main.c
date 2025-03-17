/* Processor SAMD21G18A_U
Board: Arduino MKR NB 1500
Compiler Arm GNU toolchain 14.2 Rel1
Author: Huldar
Date: 2025-03-17

Description:
Connects processor to the cell tower network and gets the current time from the network
and displays it on the serial monitor. The processor will also blink the onboard LED
to show the time every minute.
*/

#include "../lib/samd21g18a/samd21g18a_blinker.h"

int main() {
  // Setup
  // Initialize LED
  init_led();

  // Show heartbeat to display device on
  blink_heartbeat();



  // Main loop
  while(1) {
    blink_heartbeat();
  }
  return 0;
}