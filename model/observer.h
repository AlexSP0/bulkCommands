#ifndef OBSERVER_H
#define OBSERVER_H

class IObserver
{
public:
    IObserver() = default;

    virtual ~IObserver() = default;

    virtual void process() = 0;
};

#endif // OBSERVER_H
