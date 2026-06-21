#include "hid.h"
#include "conf.h"
#include "main.h"

void setup() {
	hid_init();

	// timer for adb timings
	TCCR1A = 0;
    TCCR1B = 0b00000010; // prescaler 8 (2 MHz)

	// button
	SWITCH_DDR_REGISTER  &= ~(1 << SWITCH_PIN_NUMBER); // in
	SWITCH_DDR_PORT |= (1 << SWITCH_PIN_NUMBER);  // pull-up
}

void loop() {
	translation_mode();
	passthrough_mode();
}
