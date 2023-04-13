#ifndef HANDLER_H
#define HANDLER_H

#include <iostream>
#include <iterator>
#include <memory>
#include <string>

class Handler
{
public:
    Handler(std::istream &input);

    ~Handler() = default;

public:
    void loop();

    void readCommand();

    bool isEof();

private:
    bool m_eof = false;

    std::istream &m_input;
};

#endif
