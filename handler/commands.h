#ifndef COMMANDS_H
#define COMMANDS_H

#include <string>
#include "../core/ifaces.h"

enum COMMAND
{
    BEGIN,
    END,
    EF,
    ADD
};

class BaseCommand : public ICommand
{
public:
    BaseCommand();

    virtual ~BaseCommand();

public:
    void doCommand(std::string command) override;

    void doCommand() override;
};

#endif
