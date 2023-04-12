#ifndef COMMANDS_H
#define COMMANDS_H

#include "../core/ifaces.h"
#include <string>

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

class BeginBlockCommand : public BaseCommand
{
public:
    BeginBlockCommand();
    virtual ~BeginBlockCommand() = default;

    void doCommand() override;
};

class EndBlockCommand : public BaseCommand
{
public:
    EndBlockCommand();
    virtual ~EndBlockCommand() = default;

    void doCommand() override;
};

class EofCommand : public BaseCommand
{
public:
    EofCommand();
    virtual ~EofCommand() = default;

    void doCommand() override;
};

class StoreDataCommand : public BaseCommand
{
public:
    StoreDataCommand();
    virtual ~StoreDataCommand = defult;

    void doCommand();
};

#endif
