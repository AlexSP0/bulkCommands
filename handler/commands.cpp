#include "commands.h"

BaseCommand::BaseCommand() {}

void BaseCommand::doCommand(std::string command) {}

void BaseCommand::doCommand() {}

BeginBlockCommand::BeginBlockCommand()
    : BaseCommand()
{}

void BeginBlockCommand::doCommand() {}

EndBlockCommand::EndBlockCommand()
    : BaseCommand()
{}

void EndBlockCommand::doCommand() {}

EofCommand::EofCommand()
    : BaseCommand()
{}

void EofCommand::doCommand() {}

StoreDataCommand::StoreDataCommand()
    : BaseCommand()
{}
