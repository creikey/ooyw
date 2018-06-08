#ifndef HPP_EVENTS
#define HPP_EVENTS

#include <map>
#include <memory>
#include <string>
#include <vector>

namespace ooyw {
class Event;
class EventListener;
class EventServer {
private:
  // map of possible events and their listeners
  std::map<std::string, std::vector<std::shared_ptr<EventListener>>> listeners;
  // vector of current events in queue
  std::vector<std::shared_ptr<Event>> events;

public:
  void registerEvent(std::string inName,
                     std::shared_ptr<EventListener> toRegister);
};
class Event {
public:
  virtual std::string getEventType() = 0;
};
class EventListener {
public:
  virtual void onEvent(std::shared_ptr<Event>) = 0;
};
}

#endif // HPP_EVENTS
