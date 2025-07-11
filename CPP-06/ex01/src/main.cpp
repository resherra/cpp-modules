#include "../headers/Serializer.hpp"

static void    foo(uintptr_t ptr_address)
{
    std::cout << "deserialized poitner: ";
    std::cout << Serializer::deserialize(ptr_address) << std::endl;
    std::cout << "value: " << Serializer::deserialize(ptr_address)->get_x() << std::endl;
}

int main()
{
    Data data;

    data.set_x(5);
    std::cout << "original pointer: " << &data << std::endl;
    foo(Serializer::serialize(&data));
}