#ifndef IFACES_H
#define IFACES_H

#include <memory>
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

    virtual void addCommand(std::shared_ptr<std::string> inCommand) = 0;

    virtual void nextLevel() = 0;

    virtual void previousLevel() = 0;

    virtual bool isStaticMode() = 0;

    virtual bool isFull() = 0;

    virtual bool isEmpty() = 0;

    virtual void checkLevel() = 0;

    virtual void setTime() = 0;

    virtual void doNotify() = 0;

    virtual void clearKeeper() = 0;
};

#endif
