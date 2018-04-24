#ifndef HPP_ERROR
#define HPP_ERROR

#include <exception>
#include <string>

namespace ooyw {
class InitError : std::exception {
public:
  const char *what();
  InitError(std::string);
  InitError(std::string, std::string);

private:
  std::string whatStr;
};
}

#endif // HPP_ERROR
