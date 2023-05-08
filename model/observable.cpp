#include "observable.h"

Observable::Observable()
    : m_observers({})
{}

void Observable::notify()
{
    for (auto observer : m_observers)
    {
        observer->process();
    }
}

void Observable::subscribe(std::shared_ptr<IObserver> observer)
{
    m_observers.push_back(observer);
}
