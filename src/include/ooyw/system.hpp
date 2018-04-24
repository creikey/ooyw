#ifndef HPP_SYSTEM
#define HPP_SYSTEM

#include "ooyw/display.hpp"
#include "ooyw/settings.hpp"

namespace ooyw {
class System {
public:
  System(Settings &);
  ~System();

private:
  Settings &conf;
  Display disp;
};
}

#endif // HPP_SYSTEM
