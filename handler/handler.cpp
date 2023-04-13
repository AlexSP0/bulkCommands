#include "handler.h"

Handler::Handler(std::istream &input)
    : m_input(input)
{}

void Handler::loop()
{
    std::string data = *std::istream_iterator<std::string>(m_input);
    m_eof            = m_input.eof();

    if (m_eof)
    {
        //eof command
    }
    else if (data == "{")
    {
        //beginblock command
    }
    else if (data == "}")
    {
        //end block command
    }
    else
    {
        //store command
    }
}

void Handler::readCommand() {}

bool Handler::isEof()
{
    return false;
}
