#include "commands.h"

BaseCommand::BaseCommand(ICommandModel *model)
    : m_model(model)
{}

void BaseCommand::doCommand(std::string command) {}

void BaseCommand::doCommand() {}

BeginBlockCommand::BeginBlockCommand(ICommandModel *model)
    : BaseCommand(model)
{}

void BeginBlockCommand::doCommand() {}

EndBlockCommand::EndBlockCommand(ICommandModel *model)
    : BaseCommand(model)
{}

void EndBlockCommand::doCommand() {}

EofCommand::EofCommand(ICommandModel *model)
    : BaseCommand(model)
{}

void EofCommand::doCommand() {}

StoreDataCommand::StoreDataCommand(ICommandModel *model)
    : BaseCommand(model)
{}
