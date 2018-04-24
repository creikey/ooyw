#ifndef HPP_DISPLAY
#define HPP_DISPLAY

#include "ooyw/safecolor.hpp"
#include "ooyw/vector.hpp"
#include <allegro5/allegro.h>

namespace ooyw {
class Display {
public:
  Display();
  Display(Vector2<int> inSize, SafeColor inColor);
  ~Display();
  Vector2<int> size;
  SafeColor clearColor;

private:
  void init();
  ALLEGRO_DISPLAY *disp = NULL;
};
}

#endif // HPP_DISPLAY
