#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <observer.h>

class Observable
{
public:
    Observable();

    virtual ~Observable() = default;

    void notify();

    void subscribe(IObserver *);
};

#endif // OBSERVABLE_H
