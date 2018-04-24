#ifndef HPP_SAFECOLOR
#define HPP_SAFECOLOR

#include <allegro5/allegro.h>

namespace ooyw {
class SafeColor {
public:
  SafeColor() : r(0), g(0), b(0){};
  SafeColor(double inr, double ing, double inb) : r(inr), g(ing), b(inb){};
  ALLEGRO_COLOR al_c() { return al_map_rgb(this->r, this->g, this->b); };

private:
  double r;
  double g;
  double b;
};
}

#endif // HPP_SAFECOLOR
