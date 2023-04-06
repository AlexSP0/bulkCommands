#ifndef HANDLER_H
#define HANDLER_H

#include <memory>

class Handler
{
public:
    Handler();

    ~Handler() = default;

public:
    void loop();

    void readCommand();

    bool isEof();

private:
    bool eof = false;

    std::unique_ptr<std::string> data;

    std::istream &input;
};

#endif
