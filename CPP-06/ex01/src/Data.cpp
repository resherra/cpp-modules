#include "../headers/Data.hpp"

Data::Data()
{
}

Data::~Data()
{
}

Data::Data(Data &other)
{
    *this = other;
}

Data &Data::operator=(Data &other)
{
    if (this != &other)
        this->x = other.x;
    return *this;
}

void Data::set_x(int x)
{
    this->x = x;
}

int Data::get_x()
{
    return x;
}


