#ifndef HANDLER_H
#define HANDLER_H

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

    std::unique_ptr<std::string> m_data;

    std::istream &m_input;
};

#endif
