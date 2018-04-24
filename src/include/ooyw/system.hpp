#ifndef HPP_SYSTEM
#define HPP_SYSTEM

#include <memory>
#include "ooyw/display.hpp"
#include "ooyw/settings.hpp"

namespace ooyw {
class System {
public:
  System(Settings &);
  ~System();

private:
  Settings &conf;
  std::shared_ptr<Display> disp;
};
}

#endif // HPP_SYSTEM
