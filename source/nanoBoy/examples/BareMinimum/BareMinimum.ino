/**
 * BareMinimum — verifies the nanoBoy library is installed and compiles.
 */

#include <nanoBoy.h>

NanoBoy boy;

void setup() {
    boy.begin();
}

void loop() {
    boy.update();
}
