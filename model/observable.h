#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include "observer.h"
#include <list>
#include <memory>

class Observable
{
public:
    Observable();

    virtual ~Observable() = default;

    void notify();

    void subscribe(std::shared_ptr<IObserver> observer);

private:
    std::list<std::shared_ptr<IObserver>> m_observers;
};

#endif // OBSERVABLE_H
