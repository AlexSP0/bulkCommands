#ifndef BULKMODEL_H
#define BULKMODEL_H

#include <../core/ifaces.h>

class BulkModel : public ICommandModel {


    // ICommandModel interface
public:
    void doOut();
    void addCommand(std::string inCommand);
    void nextLevel();
    void previousLevel();
};

#endif
