#ifndef HPP_SYSTEM
#define HPP_SYSTEM

#include "ooyw/settings.hpp"

class System {
public:
  System(Settings &);

private:
  Settings &conf;
};

#endif // HPP_SYSTEM
