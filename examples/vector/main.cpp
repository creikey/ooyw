#include <iostream>
#include <ooyw/vector.hpp>

int main(int argc, char **argv) {
  int left, right;
  right = 3;
  left = 5;
  Vector2<int> myVec(left, right);
  std::cout << "myVec with input (" << left << ") and (" << right
            << "): " << myVec.toString() << std::endl;
  std::cout << "myVec distance: " << myVec.length() << std::endl;
  std::cout << "myVec normalized: " << myVec.normalize().toString()
            << std::endl;
  return 0;
}
