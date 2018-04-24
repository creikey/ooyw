#include <allegro5/allegro.h>
#include <iostream>
#include <ooyw/error.hpp>
#include <ooyw/system.hpp>

int main(int argc, char **argv) {
  ooyw::Settings set = ooyw::Settings();
  set.fps = 60;
  set.displaySize = ooyw::Vector2<int>(500, 500);
  set.clearColor = ooyw::SafeColor(0, 0, 0);
  ooyw::System * sys;
  try {
    sys = new ooyw::System(set);
  } catch (ooyw::InitError &err) {
    std::cerr << err.what() << std::endl;
    return -1;
  }
  al_rest(5);
  return 0;
}
