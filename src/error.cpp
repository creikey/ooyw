#include "ooyw/error.hpp"

namespace ooyw {
InitError::InitError(std::string file, int line, std::string methodName) {
  this->whatStr = "Failed to initialize in method " + methodName + ", line " +
                  std::to_string(line) + " file " + file;
}
InitError::InitError(std::string file, int line, std::string methodName,
                     std::string input) {
  this->whatStr = "Failed to intialize in method " + methodName +
                  " with input (" + input + ")" + ", line " +
                  std::to_string(line) + " file " + file;
}
const char *InitError::what() { return this->whatStr.c_str(); }
}
