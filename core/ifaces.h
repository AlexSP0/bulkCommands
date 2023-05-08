#ifndef IFACES_H
#define IFACES_H

#include <string>

class ICommand
{
public:
    virtual ~ICommand() = default;

    virtual void doCommand() = 0;

    virtual void doCommand(std::string command) = 0;
};

class ICommandModel
{
public:
    virtual ~ICommandModel() = default;

    virtual void doOut() = 0;

    virtual void addCommand(std::string inCommand) = 0;

    virtual void nextLevel() = 0;

    virtual void previousLevel() = 0;
};

#endif
