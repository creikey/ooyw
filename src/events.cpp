#include "ooyw/events.hpp"
#include "ooyw/error.hpp"

#include <memory>

namespace ooyw {
void EventServer::registerEvent(std::string inEventName,
                                std::shared_ptr<EventListener> toRegister) {
  if(this->listeners.find(inEventName) == this->listeners.end()) {
    // Event not registered
    this->listeners.insert(std::pair<std::string, std::vector<std::shared_ptr<EventListener>>>(inEventName, std::vector<std::shared_ptr<EventListener>>>()));
  } else {
    this->listeners.at(inEventName).push_back(toRegister);
  }
}
void EventServer::broadcastEvent(std::string toBroadcast) {
  if(this->listeners.find(toBroadcast) == this->listeners.end()) {
    throw EVENTBROADCASTERROR(toBroadcast);
  }
  auto curListeners = this->listeners.at(toBroadcast);
  for(auto i = curListeners.begin(); i != curListeners.end(); i++) {
    i.get()->onEvent(i);
  }
}
}
