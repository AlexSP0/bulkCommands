#ifndef FILELOGGER_H
#define FILELOGGER_H

#include "../model/observer.h"

class FileLogger : public IObserver
{
public:
    void process();
};

#endif
