#include "ooyw/display.hpp"
#include "ooyw/error.hpp"

namespace ooyw {
Display::Display() : size(Vector2<int>()), clearColor(SafeColor()) {
  try {
    this->init();
  } catch (InitError &err) {
    throw err;
  }
}
Display::Display(Vector2<int> inSize, SafeColor inColor)
    : size(inSize), clearColor(inColor) {
  try {
    this->init();
  } catch (InitError &err) {
    throw err;
  }
}
Display::~Display() { al_destroy_display(this->disp); }
void Display::init() {
  if (!al_is_system_installed()) {
    throw InitError("al_is_system_installed");
  }
  this->disp = al_create_display(this->size.x, this->size.y);
  if (!this->disp) {
    throw InitError("al_create_display", this->size.toString());
  }
  al_clear_to_color(this->clearColor.al_c());
  al_flip_display();
}
}
