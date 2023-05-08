#include <model/bulkmodel.h>

#include <loggers/consolelogger.h>
#include <loggers/filelogger.h>

#include <handler/commandsfactory.h>
#include <handler/handler.h>

int main(int argc, char *argv[])
{
    BulkModel bModel;

    std::shared_ptr<IObserver> fileLogger    = std::make_shared<FileLogger>();
    std::shared_ptr<IObserver> consoleLogger = std::make_shared<ConsoleLogger>();

    bModel.subscribe(fileLogger);
    bModel.subscribe(consoleLogger);

    std::unique_ptr<CommandsFactory> cmdFactory = std::make_unique<CommandsFactory>();

    cmdFactory->addCommand(COMMAND::BEGIN, std::unique_ptr<BeginBlockCommand>());
    cmdFactory->addCommand(COMMAND::END, std::unique_ptr<EndBlockCommand>());
    cmdFactory->addCommand(COMMAND::ADD, std::unique_ptr<StoreDataCommand>());
    cmdFactory->addCommand(COMMAND::EF, std::unique_ptr<EofCommand>());

    Handler handler(std::move(cmdFactory), std::cin);

    return 0;
}
