#ifndef HPP_SETTINGS
#define HPP_SETTINGS

#include "ooyw/safecolor.hpp"
#include "ooyw/vector.hpp"

namespace ooyw {
class Settings {
public:
  double fps;
  Vector2<int> displaySize;
  SafeColor clearColor;
};
}

#endif // HPP_SETTINGS
