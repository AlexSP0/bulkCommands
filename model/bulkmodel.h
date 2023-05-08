#ifndef BULKMODEL_H
#define BULKMODEL_H

#include "../core/ifaces.h"
#include "observable.h"
#include <string>

class BulkModel : public ICommandModel, public Observable
{
    // ICommandModel interface
public:
    void doOut();
    void addCommand(std::string inCommand);
    void nextLevel();
    void previousLevel();
};

#endif
