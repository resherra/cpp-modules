#include "../headers/Serializer.hpp"

int main()
{
    Data data;

    data.set_x(5);

    std::cout << "x --> " << data.get_x() << std::endl;

    std::cout << "original pointer: " << &data << std::endl;
    std::cout << "deserialize return: " << Serializer::deserialize(Serializer::serialize(&data)) << std::endl;


    std::cout << "x --> " << data.get_x() << std::endl;
}