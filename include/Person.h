#pragma once

#include <string>

namespace helloworld {

class Person
{
public:
    Person(const std::string& name)
        : m_name(name)
    {}

    const std::string& getName() const;

private:
    const std::string m_name;
};

}
