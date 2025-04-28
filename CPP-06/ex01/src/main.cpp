#include "../headers/Serializer.hpp"

int main()
{
    Data data;

    data.set_x(5);

    std::cout << "original pointer: " << &data << std::endl;
    std::cout << "deserialize return: " << Serializer::deserialize(Serializer::serialize(&data)) << std::endl;
}