#ifndef HPP_ERROR
#define HPP_ERROR

#include <exception>
#include <string>
#define INITERROR(...) InitError(__FILE__, __LINE__, __VA_ARGS__)

namespace ooyw {
class InitError : std::exception {
public:
  const char *what();
  InitError(std::string file, int line, std::string);
  InitError(std::string file, int line, std::string, std::string);

private:
  std::string whatStr;
};
}

#endif // HPP_ERROR
