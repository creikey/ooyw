#include "ooyw/display.hpp"
#include "ooyw/error.hpp"
#include "ooyw/system.hpp"

#include <memory>

namespace ooyw {
System::System(Settings &inSettings) : conf(inSettings) {
  if (!al_init()) {
    throw INITERROR("al_init");
  }
  try {
    this->disp = std::shared_ptr<Display>(new Display(inSettings.displaySize, inSettings.clearColor));
  } catch (InitError &err) {
    throw err;
  }
};
System::~System() { al_uninstall_system(); }
}
