#include "handler.h"

Handler::Handler(std::istream &input)
    : m_data(nullptr)
    , m_input(input)
{}

void Handler::loop() {}

void Handler::readCommand() {}

bool Handler::isEof()
{
    return false;
}
