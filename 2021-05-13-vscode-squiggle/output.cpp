#include "play.h"

#include <iostream>
#include <memory>
#include <string>

auto foobar(std::unique_ptr<std::string> pstr)
{
    return *pstr;
}

int main()
{
    auto pstr = std::make_unique<std::string>("Hello, world: ");
    auto str = foobar(std::move(pstr));
    std::cout << str << playground::playFunc() << "\n";
}
