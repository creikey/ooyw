#include "ooyw/error.hpp"

namespace ooyw {
InitError::InitError(std::string methodName) {
  this->whatStr = "Failed to initialize in method " + methodName;
}
InitError::InitError(std::string methodName, std::string input) {
  this->whatStr = "Failed to intialize in method " + methodName +
                  " with input (" + input + ")";
}
const char *InitError::what() { return this->whatStr.c_str(); }
}
