#ifndef CONSOLELOGGER_H
#define CONSOLELOGGER_H

#include <../model/observer.h>

class ConsoleLogger : public IObserver
{
public:
    void process();
};

#endif
