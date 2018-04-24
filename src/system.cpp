#include "ooyw/display.hpp"
#include "ooyw/error.hpp"
#include "ooyw/system.hpp"

namespace ooyw {
System::System(Settings &inSettings) : conf(inSettings) {
  if (!al_init()) {
    throw InitError("al_init");
  }
  try {
    disp = Display(inSettings.displaySize, inSettings.clearColor);
  } catch (InitError &err) {
    throw err;
  }
};
System::~System() { al_uninstall_system(); }
}
