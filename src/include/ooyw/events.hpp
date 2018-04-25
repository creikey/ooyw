#ifndef HPP_EVENTS
#define HPP_EVENTS

#include <string>

class Event {
public:
  virtual std::string getEventType() = 0;
};

#endif // HPP_EVENTS
