#ifndef MAIN_h
#define MAIN_h

bool is_button_activated();
void passthrough_mode();
void translation_mode();
void translate_key_press(uint8_t adb_code, bool is_pressed);

#endif