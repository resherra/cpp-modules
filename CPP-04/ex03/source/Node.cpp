#include "../headers/Node.hpp"

Node::Node(): materia(nullptr), next(nullptr)
{
    print("Node default constructor!");
}

Node&   Node::operator=(const Node& other)
{
    (void)other;
    print("Node copy assignment operator");
    return *this;
}

Node::Node(const Node& other)
{
    (void)other;
    print("Node copy constructor!");
}

Node::Node(AMateria* materia)
{
    print("Node materia constructor");
    this->materia = materia;
    next = nullptr;
}

Node::~Node()
{
    print("Node destructor!");
    delete materia;
}