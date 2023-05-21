#include "Observer.h"
Observer::~Observer()
{
}
void Observer::update(const std::string& message) 
{
    cout << "Received notification: " << message << std::endl;
}
